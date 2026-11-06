# Pokémon Sword / Shield v1.3.2 — 全量解包与并行流水线实施方案

> 状态：**实施规划，非已运行的全量解码报告**。版本基线：`master`（2026-11-06 检查）。原始文件保持只读。

## 1. 实际基线与范围

- `sword_1.3.2_file_inventory_full.csv` / `shield_1.3.2_file_inventory_full.csv` 各 50,500 条，其中各有 50,494 条 RomFS 文件；清单不等于仓库内已存在的源字节。
- `v1.3.2/0/`：已收录剑/盾各自的 `main` 和 `main.npdm`，以及共享 ExeFS 模块。
- `v1.3.2/1/`：当前为剑版 RomFS；`docs/sword-v1.3.2-archive-report.md` 记录 50,492 文件直接保存，2 个大文件为合计 12 个 7z 分卷；其复制/归档校验 PASS，不代表二次解包已完成。要重新复核现有文件的可用性与哈希。
- 盾版 RomFS 目前是 inventory-only，不将 `SWORD_SHA==SHIELD_SHA` 误认为盾版原始文件已经复核或在仓库中存在。
- `Unpack/` 当前只有 README，没有可以声称执行完成的解包成果。
- 剑盾采用其独立 RomFS 资源体系，不使用 SV/ZA 的 Trinity `data.trpfs/virtual` 解码器做默认处理。

## 2. 统一目录契约

```text
Unpack/v1.3.2/
  _index/
    source_inventory.jsonl
    archive_recovery.jsonl
    family_statistics.json
    shard_plan.json
    tools.lock.json
  extracted/                 # 仅真正解开容器后得到的子文件
    <原始 RomFS 相对路径>/<容器条目路径>
  parsed/                    # 结构化、保留字段偏移/原始值/解析器版本
    <原始 RomFS 相对路径>/
  converted/                 # 人可直接使用的 PNG/JSON/CSV/文本/模型等
    <原始 RomFS 相对路径>/
  pkNX/                      # 由 SWSH-specific pkNX adapters 验证后输出
  reports/
    per-file.jsonl
    per-shard/
    format-coverage.csv
    failures.jsonl
    unknown-formats.jsonl
    final-summary.json
```

源文件始终保留 `v1.3.2/0` 与 `v1.3.2/1` 中，不在 `Unpack` 中无必要地复制一遍。出于分发授权与 Git 历史膨胀的原因，默认只提交代码、schema、索引和小型合法测试夹具；大批量游戏资产默认不自动 push。

## 3. 可实现的处理阶段

| 阶段 | 输入 | 操作 | 必须产物/门禁 |
| --- | --- | --- | --- |
| R0 源清点 | 剑/盾 15 列 inventory + Git 文件树 + archive manifest | 路径规范化、大小和 SHA-256、原始 NCA、分卷列表检查 | 每条 inventory 都有唯一 `source_id`；不因缺字节漏项 |
| R1 原文件恢复 | `v1.3.2/1` 的直接文件和 `.7z.001...` | 检查分卷连续性，7z 测试并恢复到临时路径，再对比原始长度/SHA-256 | `SOURCE_VERIFIED` 或 `MISSING_SOURCE/HASH_MISMATCH/FAILED` |
| R2 原生容器递归展开 | `.gfpak/.gfpck`、`.arc` 等经魔数确认的容器 | 只调用对应版本/格式的解析器；每个子条目保留父文件、offset、size、SHA-256，限制递归深度和膨胀比 | `EXTRACTED` + 子资源清单；格式不符为 `UNKNOWN_FORMAT`，不能仅改扩展名 |
| R3 结构化数据 | `bin/message` 的 `.dat/.tbl`；`bin/pml`、`bin/pokemon/table`、`bin/trainer` 等 | 使用 pkNX 的 **SWSH** TextConfig/PersonalTable8SWSH 等验证后导出 JSON/CSV/TSV/TXT，保留原索引与字段偏移 | 解析条目数、语言行数、结构长度/重新序列化可验证 |
| R4 图片/模型/音频 | 经识别的 `.bntx`、模型/骨骼/动画、音频容器 | 使用 Switch-Toolbox 或专用受测导出适配器；检查 PNG 尺寸/通道、模型节点/材质、音频流元数据 | `CONVERTED`；无可验证导出器就保持 `UNKNOWN_FORMAT` |
| R5 ExeFS | Sword/Shield 的 `main`、`main.npdm` | 读取 NSO/NPDM，独立版本输出；可选 nx2elf | 保留模块 ID、节区信息、入口/段偏移、原始哈希 |
| R6 汇总验收 | 所有分片 JSONL | 合并 source_id 与派生文件 DAG、输出哈希复核、缺项检测、失败重试 | 总源文件数、每格式覆盖率、未知/失败数与对应路径 |

**区分：** `SOURCE_VERIFIED` 只代表源文件字节可恢复；`EXTRACTED` 代表容器确实展开；`PARSED` 是获得结构化值；`CONVERTED` 是导出目标格式；`VERIFIED` 需要格式级校验。不能将识别到的二进制文件简单复制或改后缀算作解析成功。

### 格式适配器优先级

1. **第一优先：** `bin/message/{language}/{common,script}/` 的 `.dat/.tbl`，所有语言；`bin/pml/personal/personal_total.bin`、`evolution`、`waza`、`tamagowaza`、`grow_table`。
2. **第二优先：** `.gfpak/.gfpck` 原生展开与子文件识别；`.arc` 根据文件头区分实际容器；`.bntx` 纹理导出。
3. **第三优先：** 战斗、野外、训练家、宝可梦模型、动作、场景、特效、脚本、声音以及独立 ExeFS 研究数据。
4. `.prmb` 与未知 `.bin` 需先确认结构或 schema；禁止直接把二进制 dump 叫做完整解析。

`tools/pkNX/pkNX.VirtualDump` 当前按 SV virtual 路径和 SV 文本配置开发，**不得作为剑盾全部格式的统一入口**。可抽取其中经过验证的通用 GFPack 解包能力，但剑盾数据导出必须新增独立 headless `pkNX.SWSHDump` 并使用 SWSH 专属结构与样本测试。

## 4. 并发调度模型

**一键运行 = 一次 `workflow_dispatch`，内部多 job + 每 job 多进程/线程。**

```text
plan (1 job)
  ├─ 读取 inventory + 归档 manifest
  ├─ 检查重名/路径/哈希/归档期望文件
  ├─ 按文件体积和预计解析成本均衡分成 N 片
  └─ 生成 source_id -> shard 映射
        ↓
unpack (matrix: 8~16 shards, max-parallel: 4~8)
  ├─ 使用 blob:none + sparse checkout 只获取本片源文件/分卷
  ├─ I/O 线程池：列举、哈希、分卷恢复、校验
  ├─ CPU 进程池：容器解析、文本/表转换、纹理转换
  ├─ 对大文件做内存/临时磁盘预算约束
  ├─ 持续写 JSONL 与可恢复 checkpoint
  └─ 上传小型 report artifacts；大输出分批处理
        ↓
reconcile (always)
  ├─ 下载所有 shard 状态
  ├─ 全量 source_id set-equality + 去重 + 输出完整性
  ├─ FAILED / UNKNOWN_FORMAT / MISSING_SOURCE 清单
  └─ 标记 PASS / PARTIAL / FAILED，不得伪装全量完成
```

默认参数（初始建议，必须以 runner 实测吞吐再调节）：

| 参数 | GitHub Hosted Runner | Windows 本机（按硬件调整） |
| --- | --- | --- |
| `shards` | 16 | 1 |
| `max_parallel_jobs` | 6 | — |
| `cpu_processes_per_job` | 2 | `max(1, logical_cores - 2)` |
| `io_threads_per_job` | 4 | 8~16 |
| `large_archive_parallel` | 1 | 1~2 |
| `per_file_timeout` | 300s 起，针对大模型单独放宽 | 同左 |

**原因：** 已登记的剑版 RomFS 原始体积约 13 GB；同一 GitHub hosted runner 不适合复制整个源树、恢复大型分卷并保留所有导出。每个 shard 只 checkout 所需文件、将大文件单独调度、使用磁盘占用阈值和有限流式 I/O。GitHub runner CPU、磁盘配额及 Actions 最大并发应按实际仓库计划验证。

### 文件级指纹与断点续跑

`fingerprint = SHA256(source_sha256 + adapter_name + adapter_commit + schema_sha256 + options_canonical_json)`

- 路径为稳定 `source_id`，按原始 NCA 与相对路径记录；`source_sha256` 防止混淆同名不同内容。
- 只有指纹匹配、所有输出存在且逐一 hash 确认、状态为 `VERIFIED`，才允许 skip。
- 原先的 `UNKNOWN_FORMAT`、`PARTIAL`、`FAILED` 随新解析器版本自动重新入队。
- 每个输入先写 pending，再临时输出，验证完成后以原子 rename 提交；崩溃不会把半成品判为完成。
- 失败策略：确定性格式不支持 → UNKNOWN；瞬态 I/O → 重试 2 次；哈希不符 → 立即停止该文件；依赖缺失 → FAILED_WITH_DEPENDENCY；不能无限重试。
- 输出引用可基于内容哈希在 Sword/Shield 之间复用；但盾版没有原始源字节时，仍需标明 `SHIELD_INDEXED_ONLY`，不能虚构盾版通过了源文件验证。

## 5. 需要新增的实现文件

```text
scripts/swsh_unpack/
  inventory.py         # inventory、archive manifest 与路径验证
  shard_plan.py        # 带成本权重的分片与 sparse path 导出
  recover.py           # 7z 分卷连续性、恢复、原始 SHA-256 校验
  adapters/
    registry.py        # 魔数检测、适配器元数据与版本
    pk_nx_swsh.py      # 调用 SWSH 专属 headless 解码器
    containers.py      # 根据魔数分发 gfpak/arc
    textures.py        # Switch-Toolbox 命令行适配器，需经样本确认
  worker.py            # ProcessPoolExecutor + ThreadPoolExecutor，资源限额
  checkpoint.py        # SQLite 状态与持久化指纹
  reconcile.py         # 全局集合对账与 final-summary.json
  cli.py               # plan/run/resume/retry/verify/report 子命令
.github/workflows/swsh-full-unpack.yml
tools/pkNX/pkNX.SWSHDump/             # 新的 headless 项目
tests/test_swsh_unpack_*.py
docs/research/swsh-unpack-coverage.md
```

建议入口：

```powershell
# 本地针对合法持有的完整源文件执行
python -m scripts.swsh_unpack.cli plan --game sword --version 1.3.2 --shards 1
python -m scripts.swsh_unpack.cli run --game sword --version 1.3.2 --cpu-workers 12 --io-workers 12 --resume
python -m scripts.swsh_unpack.cli verify --game sword --version 1.3.2 --strict

# GitHub Actions: 一次启动全量矩阵，自动对账；失败/未知将报告 PARTIAL
gh workflow run swsh-full-unpack.yml -R 969981/SWSH_Resources -f game=sword -f shards=16
```

> 上述命令是 **待实现后的接口契约**，不是目前 master 已经存在的可执行命令。

## 6. 验收门槛

**A. 输入覆盖：** 剑版 50,494 个 RomFS inventory 源 ID 恰好各有一条最终状态，且两个大文件的全部 12 个分卷完整关联；ExeFS 另外核对。任何 `INDEXED_ONLY` / `MISSING_SOURCE` 都不能被统计为已解析。

**B. 解析覆盖：** 所有已经实现和签名符合的类型得到可打开、具有内容验证的派生结果；每个未支持格式必须单列真实路径、魔数、阻塞解析器与建议工作项。

**C. 状态真实：** `PASS` 的前提是目标范围内没有 `FAILED`、`MISSING_SOURCE` 和意外 `UNKNOWN_FORMAT`。如果文件只是登记或恢复，报告 `SOURCE_ONLY`；如果尚有格式不支持，报告 `PARTIAL`，不得称“全部解包完成”。

**D. CI 与性能：** 合成夹具验证分卷丢失、hash 不匹配、重名路径、半截输出、未知格式、断点续跑、重试、跨分片重复、适配器升级等。对比 1/2/4 进程与 2/4/8 I/O 线程的 wall time、峰值内存和每 GB I/O；保留最优实测配置。不得未经压测承诺倍数加速。

**E. 权限与发布：** 样本测试可进 CI；大型游戏资源/解包数据默认仅留在有权限的私有环境或合规发布通道，防止未经许可再分发。

## 7. 实施先后顺序

1. 先补 `inventory.py / recover.py / shard_plan.py / reconcile.py` 与全量源状态基线，检查 50,494 / 12 的真实复核结果。
2. 接 `pkNX.SWSHDump` 的所有语言文本和 `pml` 数据；优先建立格式级 round-trip / count 测试。
3. 完成经样本确认的 `gfpak / arc / bntx` 适配与递归输出。
4. 加入模型/动画/音频和 ExeFS 独立链路，输出完整 `coverage` 报告。
5. 最后上线 `swsh-full-unpack.yml` 全量矩阵、真实端到端回归，确认没有“跳过 PARTIAL”的假阳性。

本文件不宣称任何未执行的 parser、Actions job 或大规模真实解包已通过。
