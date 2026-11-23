---
title: 剑盾 v1.3.2 遭遇第四阶段 BCAT 原生对账与 Nest 证据闭环
aliases: [SWSH BCAT Dist rebuild, 剑盾 Nest 84 条差异, 固定剧情 GDB]
tags: [SWSH, 1.3.2, PKHeX, BCAT, FlatBuffers, Nest, Dist, GDB, Evidence]
date: 2026-11-23
status: PARTIAL_NATIVE_REBUILD__FULL_HISTORICAL_CI_PENDING
---

# 剑盾 v1.3.2：第四阶段——BCAT → Dist PKL / Nest 差异归因 / 固定遭遇实机采证

前置：[[31-剑盾巢穴配信与固定遭遇PKL补全]]、[[32-剑盾特殊遭遇第三阶段跨源对账]]、[[25-天气渗透268例运行时验证]]、[[26-原生遭遇函数GDB断点]]。

## 一、历史 BCAT → PKHeX Dist 原生记录转换

此前 `manifests/swsh_bcat_eventgallery_pinned.json` 固定 Project Pokémon EventsGallery 的 `f1f3095183ee54dca63216164adb1f278714ec55` 提交与 117 个正常索引、1 个 Null 目录。注意归档还有一个 **0 字节 `Index 029/missing.txt`**，它是合法的 Git Blob 空占位，已修复此前 CI 的错误校验。

现已新增：

- `scripts/rebuild_swsh_bcat_dist.py`：用 pkNX 的 `NestHoleDistributionEncounterArchive.fbs` 解出原始封装体及原生 FlatBuffers，读取 `Table[].GameVersion`、`Entries[].Species/Form/Level/DynamaxLevel/Ability/IsGigantamax/Moves/FlawlessIVs/ShinyLock`，生成 PKHeX `EncounterStatic8ND` 的十六字节候选记录。
- `scripts/audit_swsh_bcat_eventgallery.py`：原生 BCAT 文件头、归档字节 SHA-1、FlatBuffers 载荷边界、header distribution index 均单独校验；现在支持只下载遭遇相关三种文件，避免重复获取所有奖励表。CRC16 仍不宣称已验证。
- `tests/test_swsh_bcat_rebuild.py`：验证 16 字节逆向序列化、特性映射、G-Max 位、高半字节锁闪和低半字节保底 IV；不把候选导出视为完整合法性。
- `.github/workflows/swsh-bcat-dist-rebuild.yml`：支持在仓库中复跑历史源逐文件下载和对账，只发布源校验摘要和缺口总量，不发布原始 BCAT 二进制。

**真实来源样本：** EventsGallery `Index 001/normal_encount`（Git Blob `38a22f634051bd6960e3675b0e3e33381ef02c1d`，9172 字节）原版数据每版 30 条；其中剑版 **11 条**、盾版 **16 条** 可转换为 PKHeX 固定参考中 index=1 的逐记录完全一致二进制。源中有更多可出现或历史状态的条目，不能强行把剩余条目写进合法性 PKL。

### 结构与编码注意

| 原版 BCAT / pkNX | PKHeX Dist 定长记录 |
| --- | --- |
| `GameVersion=1/2` | 独立 SW / SH 16 字节数据库 |
| `Ability=0/1/2/3/4` | `1/2/4/0/255` |
| `DynamaxLevel` + `IsGigantamax` | 一个字节：低 7 位极巨化等级，高位超极巨 |
| `ShinyLock=0/1/2` + `FlawlessIVs` | 高半字节锁闪 / 低半字节保底 IV |
| `Move0..Move3` `uint` | 四个小端 `ushort`，超范围明确拒绝 |
| BCAT 封装首字节 | PKHeX Distribution Index；不等于归档目录编号的隐含承诺 |

仅转换非空权重的原生模板，并按当前 pkNX 源码跳过 `Field13==6 && Field14==6` 的不可捕获行。**这属于 pinned pkNX 投影规则**，不是对每项活动实际可捕获性的游戏运行时证明。

全量历史匹配会输出：
- `dist_reference_matches_1/2.json`：PKHeX 每条引用的精确来源，可重复出现；
- `dist_reference_missing_1/2.json`：参考模板没有源映射的待解释缺口；
- `dist_source_only_1/2.json`：历史源中存在而参考合法性库未收录的候选（并不自动意味着遗漏）；
- `bcat_source_file_proof.json`：每个原始来源 Git SHA-1、SHA-256、长度和 BCAT Index；
- `bcat_to_dist_summary.json`：聚合结果。

**状态：Index 001 已逐源采样，117 索引全量 CI 运行结果待验收；尚不声称两份 Dist PKL 全文件字节级重建。**

```powershell
# 本地下载并验证一个历史索引（只下载 normal_encount*）
python scripts/rebuild_swsh_bcat_dist.py --index 001 --download --require-complete

# 全部索引的历史归档二进制对账（自动保存到 gitignore 的 artifacts）
python scripts/rebuild_swsh_bcat_dist.py --all --download --require-complete

# 再次离线验证已下载来源
python scripts/rebuild_swsh_bcat_dist.py --all --require-complete --validate-only
```

## 二、普通巢穴 Nest：两版差异收敛

复现标准：原始 `000008_A5963232100F7DEE.bin`（SHA-256 `f7ba0222e11c268386b56c1d8c3936e8813a1a1aa08262cd137774cb58847be7`）394 张表、4,728 条源行，按 5 档权重转换 `min/max rank`、`Ability`、`Gender`，与当前固定 PKHeX 两份 10 字节 PKL 做多重集合比较。

| 指标 | Sword | Shield |
| --- | ---: | ---: |
| 原始源转换候选实例 | 2,365 | 2,365 |
| PKHeX 参考记录 | 2,156 | 2,151 |
| 精确相同实例 | **2,114** | **2,109** |
| ROM 源候选多出 | 251 | 256 |
| PKHeX 独有（尚未关联的）实例 | **42** | **42** |

新增 `scripts/diagnose_swsh_nest_discrepancies.py`：针对每条 reference-only 记录按 rank / nest index / species form / Ability Gender G-Max IV 有序放宽候选比对，并回溯原始 TableID、原生权重、奖励与等级表散列以便继续分析。`--validate-only` 不会修改资源，脚本本身不把候选重合当作原因证明。

```powershell
python scripts/audit_swsh_raw_nests.py --validate-only
python scripts/diagnose_swsh_nest_discrepancies.py --out-dir artifacts/swsh-nest-diagnosis
```

原生级最终归因仍需沿着巢穴表哈希、奖池关联、PKHeX 筛选顺序和存档/游戏运行时状态逐项证明。**上述 84 个 reference-only 实例不是已证实的 84 个原版错误。**

## 三、固定、赠送、NPC 交换：701 源行运行时调查清单

`scripts/swsh_fixed_runtime_casebook.py` 对 `event_encount_data.bin`、`add_poke.bin`、`field_trade.bin` 生成**源哈希绑定、行号稳定**的 701 项 JSONL。包括 647 固定剧情、31 赠送、23 NPC 交换和 PKHeX 参考候选信息，保持各源的脚本关联散列，不擅自把原始 `EncounterScenario` 当作抓获 Location。

`scripts/swsh_fixed_gdb_capture.py` 新增目标 GDB 的只读观察命令。只有在人工定位正确的剧情遭遇原生 RVA、连接真正匹配 Sword/Shield BuildID 的运行进程后才可布防。会记录 PC、寄存器、指令字节和源行，但总是将“游戏触发已证实／合法性已证实”设为 **false**。不能用明雷或天气函数 RVA 假装固定剧情函数。

```powershell
python scripts/swsh_fixed_runtime_casebook.py --out-dir artifacts/swsh-fixed-runtime
```

```gdb
target remote <GDB_HOST:PORT>
source scripts/swsh_fixed_gdb_capture.py
swsh-fixed-arm . static 23 shield <MAIN_BASE_HEX> <VERIFIED_SCRIPT_RVA_HEX> artifacts/swsh-fixed-runtime/raw_trace.jsonl
continue
```

**注意：上面的固定 row 23 只是可重复引用的原始行号示例，并非已知合法脚本断点。** 在拿到真实运行时数据前，固定遭遇的可达性与合法性状态仍是 UNVERIFIED。

## 四、268 条天气渗透争议：GDB 日志绑定而非自动放行

此前 `scripts/swsh_weather_gdb_capture.py` 记录独立的 PC、寄存器、指令 bytes 和原始天气 case_id。现新增 `scripts/swsh_weather_trace_evidence.py`，验证日志行与 268 案例中的 `scenario_id`、游戏、BuildID、原版 NSO SHA-256、NSO TEXT RVA 一一对应。

- 原始 GDB 断点命中只能标为 `RAW_GDB_REGISTER_SNAPSHOT` 或现有 `GDB_REGISTER_SNAPSHOT_ONLY`；
- 不允许断点日志自身声称真实天气“允许”/“拒绝”；
- 仍需实际天气与区域、控制组和 ARM64 分支语义、目标游戏进程 BuildID 的人工证据；
- **截至此轮 0/268 个实机分支语义已证案例**；不得靠静态模拟替换。

```powershell
python scripts/swsh_weather_trace_evidence.py --trace artifacts/swsh-weather/raw.jsonl
python scripts/swsh_weather_validate_runtime.py --observations Unpack/v1.3.2/catalog/weather_bleed_runtime_observations_TEMPLATE.csv --output artifacts/swsh-weather/review.json
```

## 五、测试与 CI

```powershell
python -m unittest discover -s tests -v
python scripts/diagnose_swsh_nest_discrepancies.py --validate-only
python scripts/rebuild_swsh_bcat_dist.py --index 001 --download --require-complete --validate-only
```

`swsh-tooling-tests.yml` 新增普通 Nest 源对账与 BCAT Index 001 真实样本检查；`swsh-bcat-dist-rebuild.yml` 单独完成全归档对账。**验收必须看该 PR 最新 HEAD 的 GitHub Actions 运行结果；提交成功不能代替 CI PASS**。无需提交或重新打包原始 ROM、BCAT 文件或游戏密钥。
