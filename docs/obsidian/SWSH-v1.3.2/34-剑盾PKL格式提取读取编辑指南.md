---
title: 剑盾 v1.3.2 PKL 格式、原始提取与安全编辑完整指南
aliases: [剑盾 PKL 读写, SWSH PKL 编辑器, PKHeX Gen8 遭遇 PKL]
tags: [SWSH, PKHeX, pkNX, FlatBuffers, Mini, PKL, Obsidian, Binary, Reproducible]
date: 2026-11-23
status: REPRODUCIBLE_FORMAT_AND_EDITING__SPECIAL_SOURCE_PARITY_PARTIAL
---

# 34 · 剑盾 v1.3.2 PKL：如何从原始游戏资源提取、解析、读取和编辑

> [!important] 核心结论
> 剑盾的遭遇 \`.pkl\` 是 **PKHeX/pkNX 自定义的二进制格式，不是 Python pickle**；绝不能用 \`pickle.load()\` 读。野生的四份为带 \`sw/sh\` 签名、区域偏移表的 **Mini/BinLinker 容器**；普通巢穴、配信及极巨大冒险的五份则是 **10/16/14 字节定长记录**。编辑 PKL 只是改变本地遇敌模板数据，**不等于修改游戏 ROM、存档或实机合法性规则**。

关联：[[31-剑盾巢穴配信与固定遭遇PKL补全]]、[[32-剑盾特殊遭遇第三阶段跨源对账]]、[[33-剑盾历史BCAT巢穴差异与GDB第四阶段]]、[[18-巢穴结构字段表]]、[[25-天气渗透268例运行时验证]]。

## 1. 来源、文件及已完成程度

固定源版本为 **Sword/Shield 1.3.2**，PKHeX 基准提交 [kwsch/PKHeX@0660d1e](https://github.com/kwsch/PKHeX/tree/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Resources/legality/wild/Gen8)，参考代码/资源按上游 **GPL-3.0** 引用。仓库不随意替换这 9 份已归档的官方参考快照。

| 文件 | 数据类型 | 大小 | 数量 | 真实来源/独立复算状态 |
|---|---|---:|---:|---|
| \`encounter_sw_hidden.pkl\` | Sword 暗雷 Mini | 4,720 B | 62 区 / 863 槽 | 原始 1.3.2 GFPak CSV → pkNX Mini 的**既有** 4/4 字节一致审计；当前二进制从 pin 住的 PKHeX 拷贝 |
| \`encounter_sw_symbol.pkl\` | Sword 明雷 Mini | 6,476 B | 123 区 / 1,050 槽 | 同上 |
| \`encounter_sh_hidden.pkl\` | Shield 暗雷 Mini | 4,696 B | 62 区 / 855 槽 | 同上 |
| \`encounter_sh_symbol.pkl\` | Shield 明雷 Mini | 6,508 B | 123 区 / 1,057 槽 | 同上 |
| \`raid/encounter_sw_nest.pkl\` | Sword 普通巢穴 | 21,560 B | 2,156 条 | ROM 原版巢穴归档 → PKHeX 模板**部分匹配**，未字节一致复算 |
| \`raid/encounter_sh_nest.pkl\` | Shield 普通巢穴 | 21,510 B | 2,151 条 | 同上 |
| \`raid/encounter_sw_dist.pkl\` | Sword 历史配信 | 18,736 B | 1,171 条 | 历史 BCAT 原生 FlatBuffers → **独立候选记录**；尚未恢复 PKHeX 全部过滤/排序 |
| \`raid/encounter_sh_dist.pkl\` | Shield 历史配信 | 18,864 B | 1,179 条 | 同上 |
| \`raid/encounter_swsh_underground.pkl\` | 极巨大冒险共用 | 3,822 B | 273 条 | 原始 \`underground_exploration_poke.bin\` **273/273、3,822 B 字节级独立重建成功** |

**先验证源文件：**

\`\`\`powershell
python scripts/verify_swsh_wild_pkl.py
python scripts/export_swsh_special_encounters.py --validate-only
python scripts/rebuild_swsh_max_lair.py --validate-only
\`\`\`

可审计 manifest：
- \`Unpack/v1.3.2/pkl/manifest.json\`
- \`Unpack/v1.3.2/pkl/raid/manifest.json\`
- \`Unpack/v1.3.2/catalog/wild_pkl_version_audit.json\`

## 2. 原始游戏资源 → PKL 的分析与提取全过程

### 2.1 通用步骤

\`\`\`text
Sword/Shield v1.3.2 已合法取得的原始资源（不修改）
  ↓ 按 source path + SHA-256 + GameVersion 固定来源
GFPak / 原版 BIN / 已归档的 BCAT
  ↓ pkNX Schema 和 FlatBuffers 表字段定位
原始结构化遭遇表（每条保留来源索引/哈希、物种、形态、等级、条件）
  ↓ 字段映射 + 版本隔离 + 条目有效性/权重过滤
pkNX/PKHeX 的合法性模板（不是游戏运行时的完整语义）
  ↓ 按每个类型正确编码：
    野生 -> Mini (sw/sh) + 4 字节偏移表 + 分组 + padding
    巢穴 -> 10 B 每条
    配信 -> 16 B 每条
    极巨大冒险 -> 14 B 每条
  ↓ 校验总长度、记录数、结构、SHA-256
将独立构建产物逐字节与固定 PKHeX reference 比较
  ↓
BYTE_EXACT / PARTIAL_MATCH / CANDIDATE / UNKNOWN（不可混用）
\`\`\`

**注意数据层次：** 原版游戏中的遭遇 FlatBuffers 是运行时资源，PKHeX 的 PKL 是合法性模板索引的序列化。两者不是原封不动拷贝关系。配信事件是否发生、巢穴是否被存档状态激活、天气渗透是否进入代码分支，都不能仅靠 PKL 断言。

### 2.2 明雷／暗雷的原始解析

- 原始 \`bin/archive/field/resident/data_table.gfpak\` 中四个 EncounterArchive 成员，按 Sword Hidden / Sword Symbol / Shield Symbol / Shield Hidden 对应；原始成员 SHA-256 已锁定在 \`Unpack/v1.3.2/pkl/manifest.json\`。
- 原版 Schema：\`tools/pkNX/FlatBuffers/SWSH/Schemas/EncounterArchive.fbs\`。
- 结构：\`EncounterArchive.EncounterTables[].ZoneID/SubTables[].LevelMin/LevelMax/Slots[].Species/Form/Probability\`。
- 建立 \`ZoneID\` → location 与 slot type 对应表；失效/不可达表必须按规则判定，不能把原始 zone hash 当作 PKL 中的一个字节地点 ID。
- 按 pkNX \`tools/pkNX/FlatBuffers/SWSH/Gen8/Wild/EncounterTableUtil.cs\` 实现的 \`IsPermittedWeather\` / \`IsWeatherBleedPossible\` 处理 Normal、天气、钓鱼、摇树、跨区域树木。原始 35,960 行并不会全部保留。
- 将同一物种、形态和等级区间的不同天气槽位合并为一个 \`weather_mask\` 位集，按 \`location + group(weather_mask, min_level, max_level, slot_type)\` 输出。
- 既有 \`wild_pkl_version_audit.json\` 记录四份原始数据到 PKHeX 模板的字节级对账通过；**当前仓库没有单独新提交的「从完整 GFPak 自行重新生成四份 Mini」脚本**，因此请区分既有审计证据与本轮新建的只读/编辑编解码器。

可独立读取既有四份 PKL 并验证重新打包的二进制完全不变：

\`\`\`powershell
python scripts/swsh_pkl_tool.py inspect --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl
python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl --json artifacts/swsh-pkl/sw_symbol.json --csv artifacts/swsh-pkl/sw_symbol.csv
\`\`\`

### 2.3 普通巢穴 Nest（尚缺最终差异归因）

源：\`Unpack/v1.3.2/extracted/bin/archive/field/resident/data_table.gfpak.files/000008_A5963232100F7DEE.bin\`，SHA-256 为 \`f7ba0222e11c268386b56c1d8c3936e8813a1a1aa08262cd137774cb58847be7\`。

- 原生 \`EncounterNestArchive\`：394 张表 = 剑／盾各 197 张，4,728 行。
- \`TableID\` 是哈希身份，\`LevelTableID\` / \`DropTableID\` / \`BonusTableID\` 是需进一步关联的源表哈希；**不是 PKHeX 的 nest_index**。
- 将原始 5 档概率中相邻非零档位转换为从 0 起始的 \`min_rank\` / \`max_rank\`，并做正确的原生 ability/gender 编码映射。
- 对账：Sword 原生 2,365 候选对 PKHeX 2,156（相同 2,114，源多出 251，参考未匹配 42）；Shield 2,365 对 2,151（相同 2,109，源多出 256，参考未匹配 42）。

\`\`\`powershell
python scripts/audit_swsh_raw_nests.py
python scripts/diagnose_swsh_nest_discrepancies.py
\`\`\`

这两个工具可以追踪参考差异的 \`TableID\`、\`EntryIndex\`、权重及等级/掉落相关 ID；**它们不是已完成的官方 10 B Nest PKL 字节完全一致重建。**

### 2.4 历史配信 BCAT（独立候选 PKL）

固定原始来源：[projectpokemon/EventsGallery@f1f3095](https://github.com/projectpokemon/EventsGallery/tree/f1f3095183ee54dca63216164adb1f278714ec55/Released/Gen%208/SwSh/Wild%20Area%20Events)。

- BCAT 头部 \`0x20\` 字节，首字节为配信的 \`Distribution Index\`；FlatBuffers 有效载荷为 \`data[0x20:-4]\`；末尾 CRC 语义 **尚未验证**。
- 以 \`NestHoleDistributionEncounterArchive.fbs\` 定义的原生 \`GameVersion\` / \`EntryIndex\` / \`Species\` / \`Form\` / \`Moves\` / \`Level\` / \`ShinyLock\` / \`Ability\` / \`Probabilities[5]\` 解析 \`normal_encount\`、\`normal_encount_rigel1/2\`。
- 排除零权重和 pinned pkNX 当前源中认定不可捕获的标记；候选只存独立原生来源，不伪造历史日期／合法性。
- 原生 \`Ability 0/1/2/3/4\` → PKHeX \`1/2/4/0/255\`；\`DynamaxLevel | (GMax << 7)\`；\`(Shiny << 4) | FlawlessIVs\`。
- 历史 Index 001 的真实源 \`normal_encount\` 每版 30 行，Sword 11 行、Shield 16 行能和 pinned PKHeX Dist **逐记录二进制相同**。
- 全部历史候选导出 \`encounter_sw_dist_rom_candidates.pkl\` / \`encounter_sh_dist_rom_candidates.pkl\`：**这是原生候选的确定性排序／去重结果，不是 PKHeX 1,171/1,179 条合法性文件的完全复算**。

\`\`\`powershell
python scripts/rebuild_swsh_bcat_dist.py --index 001 --download --require-complete
python scripts/rebuild_swsh_bcat_dist.py --all --download --require-complete
\`\`\`

输出位于忽略提交的 \`artifacts/swsh-bcat-dist/\`；每份来源记录应与 \`bcat_source_file_proof.json\` 的 SHA、index 和表索引关联。真实活动时间、活动与游戏版本生效窗口另行采证。

### 2.5 极巨大冒险：目前独立重建最完整的示例

ROM 源 \`v1.3.2/1/bin/appli/chika/data_table/underground_exploration_poke.bin\`，SHA-256 \`18d7d6546eb2c6a5ca9531eb13a0a3bffeaab186ee2f6510ea4b6275b5ea4328\`，273 条原版记录。

\`scripts/rebuild_swsh_max_lair.py\` 用 \`swsh_semantic_catalog.FB\` 按原版字段偏移解析：
- \`Species = scalar(field 8, i32)\`
- \`Form = field 3, u8\`；\`Level = field 7, u32\`
- \`Move0..3 = fields 21..24, u32\`
- \`Ability = field 19, u32\`：\`0/1/2 → 1/2/4\`
- \`GigantamaxState = field 4, u32\`：\`1/2 → 0/1\`
- 按 \`Species\` 进行 **stable sort**（相同物种内部原顺序不变），以 \`<HBB4HBB\` 生成 14 B 记录，拼接为 **273 × 14 = 3,822 字节**，与 PKHeX 固定源完全相同。

\`\`\`powershell
python scripts/rebuild_swsh_max_lair.py --out-dir artifacts/swsh-max-lair-rebuilt
\`\`\`

极巨大冒险异色与最终领取选择另外计算，14 B 源数据本身没有随意设定的锁闪标记。

### 2.6 剧情固定、NPC 交换、赠送：**不导出虚构的 PKL**

原版 \`static_encounters.csv\` 647、\`gift_encounters.csv\` 31、\`trade_encounters.csv\` 23；仍属于不同脚本/状态控制的模板。仓库使用以下工具保持原版来源、PKHeX 参考候选、GDB 实机证据独立：

\`\`\`powershell
python scripts/swsh_fixed_runtime_casebook.py
python scripts/audit_swsh_static_gift_pkhex.py --validate-only
python scripts/audit_swsh_trade_pkhex.py --validate-only
\`\`\`

不能将 701 行粗暴写进普通 Nest 10 B 或 Dist 16 B 格式。

## 3. PKL 字节结构速查（真正的二进制含义）

### 3.1 野生 Mini：前缀与变长区域

\`\`\`text
偏移       字段                  类型                   含义
0x00      signature             ASCII[2]               sw / sh
0x02      area_count            u16 LE                 区域数
0x04      offsets               u32 LE[area_count+1]   每个区域起点，最后一个是文件长度
各 area   location_id           u8                     PKHeX 地点 ID，不是 ZoneID Hash
          total_slot_count      u8                     当前区域的槽位总数
各 group  weather_mask          u16 LE                 天气/钓鱼/摇树位掩码
          level_min             u8
          level_max             u8
          group_slot_count      u8
          slot_type             u8
各 slot   species_form_packed   u16 LE                 低 11 位 Species / 高 5 位 Form
区域末尾  zero padding          0–3 B                  对齐到 4 字节
\`\`\`

\`packed = species | (form << 11)\`；解码 \`species = packed & 0x7FF\`、\`form = packed >> 11\`。在每个区域里按 group 内 \`group_slot_count\` 累加直到等于区域开头的 \`total_slot_count\`，剩余的 0–3 个零字节是对齐填充，不是独立条目。所有偏移量是**文件绝对偏移，4 字节小端**。

常见天气位（\`weather_mask\`）：

| bit | 十六进制 | 含义 |
|---|---|---|
| 0 | \`0x001\` | 晴朗/Normal |
| 1 | \`0x002\` | 多云 |
| 2 | \`0x004\` | 下雨 |
| 3 | \`0x008\` | 雷暴 |
| 4 | \`0x010\` | 大晴天 |
| 5 | \`0x020\` | 下雪 |
| 6 | \`0x040\` | 暴风雪 |
| 7 | \`0x080\` | 沙暴 |
| 8 | \`0x100\` | 浓雾 |
| 9 | \`0x200\` | 摇树 |
| 10 | \`0x400\` | 钓鱼 |

天气位可 OR 组合，比如 \`0x005\` 表示 Normal + Raining。游戏特定条件和天气许可依赖关卡/脚本，不能直接将任意 bit OR 结果等同于实机允许遭遇。

### 3.2 Nest：10 B

| 顺序 | 字段 | 字节 |
|---|---|---:|
| 1 | Species | 2，u16LE |
| 2–6 | Form、Gender、Ability、IsGigantamax、NestIndex | 各 1 |
| 7–9 | MinRank、MaxRank、FlawlessIVs | 各 1 |

完整 Python struct：\`<H8B\`。巢穴 rank 为 **0–4**；例如 rank=2 是 3 星，不是等级。PKHeX 从 rank 另算对应等级范围。

### 3.3 Distribution：16 B

完整 struct：\`<HBB4H4B\`。

| 字段 | 说明 |
|---|---|
| \`species:u16\` | 物种 |
| \`form:u8\` / \`ability:u8\` | 形态 / 特性许可 |
| \`moves:u16[4]\` | 固定招式 ID |
| \`level:u8\` | 遭遇等级 |
| \`dmax_gmax:u8\` | bit 7 为 G-Max，低 7 bit 为 Dynamax Level |
| \`shiny_iv:u8\` | 高 4 bit 锁闪：0 Random、1 Never、2 Always；低 4 bit 保底 IV 数 |
| \`index:u8\` | 历史 distribution index |

**重点：** 原版剧情固定遭遇的 \`ShinyLock\` 原生枚举与 PKHeX Dist 记录高半字节的含义不是同一个字段体系，禁止共用无条件映射。

### 3.4 Max Lair：14 B

完整 struct：\`<HBB4HBB\`，依次为 Species、Form、Level、4 Moves、Ability、GMax。没有分发 index 和当前天气字段。

## 4. Windows PowerShell：如何查看 PKL

依赖：**Python 3.10+，仅标准库**；无需安装 \`pickle\`、\`pandas\`、\`flatbuffers\` 包。先在仓库根目录执行：

\`\`\`powershell
cd D:\WorkSpace\Pokemon\SWSH_Resources

# 查看野生明雷格式及区域/槽位总数
python scripts/swsh_pkl_tool.py inspect --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl

# 把原始野生 PKL 展开成可读 JSON 和 CSV
python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl --json artifacts/swsh-pkl/sw_symbol.json --csv artifacts/swsh-pkl/sw_symbol.csv

# 读取一份历史配信
python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --json artifacts/swsh-pkl/sw_dist.json --csv artifacts/swsh-pkl/sw_dist.csv

# 普通巢穴与极巨大冒险同理
python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/raid/encounter_sh_nest.pkl --json artifacts/swsh-pkl/sh_nest.json
python scripts/swsh_pkl_tool.py export --file Unpack/v1.3.2/pkl/raid/encounter_swsh_underground.pkl --csv artifacts/swsh-pkl/max_lair.csv
\`\`\`

**导出的 JSON 是唯一推荐的可编辑形式**，保留区域及分组结构。CSV 只作为 Excel/数据检查的扁平化查看格式。JSON 包含原文件名、来源 SHA-256、长度、格式，以及 \`data\` 树。

## 5. 如何编辑并重新生成新的 PKL

### 5.1 编辑野生

编辑 \`artifacts/swsh-pkl/sw_symbol.json\`：

\`\`\`json
{
  "schema": "SWSH_PKHEX_PKL_EDIT_V1",
  "source_file": "encounter_sw_symbol.pkl",
  "source_sha256": "<export 自动生成，不要手改>",
  "source_bytes": 6476,
  "data": {
    "kind": "wild",
    "signature": "sw",
    "areas": [
      {
        "area_index": 0,
        "location_id": 12,
        "groups": [
          {
            "weather_mask": 1,
            "level_min": 2,
            "level_max": 5,
            "slot_type": 0,
            "slots": [{"species": 25, "form": 0}]
          }
        ]
      }
    ]
  },
  "note": "CUSTOM_EDIT_ONLY_NOT_OFFICIAL_PKHEX_LEGALITY"
}
\`\`\`

> [!warning] 这是字段**结构示例**，不是一份真实能直接覆盖全部 123 个区域的剑版明雷文件。实际操作请先 \`export\`，只编辑需要修改的 \`data.areas[].groups[].slots[]\`，其余完整 JSON 保留。不要修改源 SHA-256。

\`\`\`powershell
python scripts/swsh_pkl_tool.py repack --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl --json artifacts/swsh-pkl/sw_symbol.json --output artifacts/swsh-pkl/sw_symbol_edited.pkl

python scripts/swsh_pkl_tool.py diff --file Unpack/v1.3.2/pkl/encounter_sw_symbol.pkl --other artifacts/swsh-pkl/sw_symbol_edited.pkl
\`\`\`

编辑器负责重算组槽位数量、区域总槽位数量、每个区域长度、4 字节对齐填充以及 Mini 偏移表。**不会保留错误的旧 offset。**

### 5.2 编辑定长巢穴／配信／极巨大冒险

每条 JSON 记录拥有 \`record_index\`，其余是该类型真正存储的可编辑字段。例如分发模板：

\`\`\`json
{
  "record_index": 0,
  "species": 25,
  "form": 0,
  "ability_permission": 255,
  "move_1": 33,
  "move_2": 45,
  "move_3": 0,
  "move_4": 0,
  "level": 30,
  "dynamax_level": 3,
  "can_gigantamax": false,
  "flawless_iv_count": 2,
  "shiny_rule_raw": 0,
  "distribution_index": 1
}
\`\`\`

\`can_gigantamax\` 要写 JSON 布尔值 \`true/false\`，不能写字符串。编辑 \`species\`、\`moves\`、\`level\` 等后，运行：

\`\`\`powershell
python scripts/swsh_pkl_tool.py repack --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --json artifacts/swsh-pkl/sw_dist.json --output artifacts/swsh-pkl/sw_dist_edited.pkl

python scripts/swsh_pkl_tool.py diff --file Unpack/v1.3.2/pkl/raid/encounter_sw_dist.pkl --other artifacts/swsh-pkl/sw_dist_edited.pkl
\`\`\`

生成器按正确 stride 编码字段，逐条回读验证，不允许未定义字段、错误物种号、字段溢出、星级倒置或非法锁闪值。原始 PKL 永远不能作为 \`--output\`；已存在的目标文件也会拒绝覆盖。

### 5.3 保留结构 vs 游戏合法性

- **无修改**：导出 JSON，再重打包，与输入应**逐字节一致**。
- **有修改**：能通过字节格式校验，仅表示自定义数据结构上合法，不代表这些宝可梦在对应版本、位置、天气和活动期内可以真实出现。
- **不改原始 ROM**：新 PKL 仅写本地输出，原始 PKL 和 ROM 不变；对于 PKHeX 的正常使用，是否替换哪个内部资源另有版本、许可证及兼容性要求。
- **动态研究**：固定剧情和 268 条天气争议仍需实机/GDB 证据，不能让 JSON 结果代替运行时验证。

## 6. 源码位置、回归测试、问题排查

| 工作 | 代码 |
|---|---|
| 通用九类 PKL 读／写／编辑／差异工具 | \`scripts/swsh_pkl_tool.py\` |
| 9 份真实文件编解码 + 合成编辑回归测试 | \`tests/test_swsh_pkl_tool.py\` |
| 野生 Mini 原文件结构和哈希核验 | \`scripts/verify_swsh_wild_pkl.py\` |
| 原版 273 条 Max Lair → 14 B PKL 独立重建 | \`scripts/rebuild_swsh_max_lair.py\` |
| 历史 BCAT → 16 B 独立候选 Dist PKL | \`scripts/rebuild_swsh_bcat_dist.py\` |
| 394 张巢穴原表 + PKHeX 精确/差异对账 | \`scripts/audit_swsh_raw_nests.py\` |
| 普通巢穴差异的逐源归因线索 | \`scripts/diagnose_swsh_nest_discrepancies.py\` |
| 数据源固定与防伪造 | 两份 \`manifest.json\` + \`AGENTS.md\` |

运行所有测试：

\`\`\`powershell
python -m unittest discover -s tests -v
\`\`\`

失败含义：

- \`bad Mini header\`：不是 SWSH 野生 \`sw/sh\` 文件，或者输入文件不匹配类型。
- \`truncated\` / \`corrupt slot count\`：偏移、分组长度或槽位计数损坏。
- \`source PKL SHA-256 ... changed\`：导出 JSON 后输入源数据变动，禁止默默回写旧版。
- \`output already exists\`：为防原数据丢失而拒绝覆盖，换一个输出文件名。
- \`CUSTOM_EDITED_PKL_NOT_PKHEX_REFERENCE\`：重打包成功，但是**自定义修改产物**，与参考 PKHeX 的合法性状态不同。

所有生成结果建议存储在 \`artifacts/\`，只提交**源代码、测试、说明、可公开的校验摘要**。原版提取二进制和历史 BCAT 来源保持已固定的出处，不引入额外的游戏授权/密钥文件。
