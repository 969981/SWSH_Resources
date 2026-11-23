---
title: SWSH v1.3.2 补全巢穴、配信、极巨大冒险与固定遭遇索引
aliases: [剑盾特殊遭遇数据库, SWSH Raid PKL]
tags: [SWSH, 1.3.2, PKHeX, Raid, Dist, MaxLair, Static, Gift, Trade, Evidence]
date: 2026-11-23
status: PINNED_REFERENCE_BYTES_VERIFIED_AND_SOURCE_CATALOG_VALIDATED
---

# 剑盾 v1.3.2：特殊遭遇、巢穴与配信的证据化补全

## 数据和文件

普通野生的四份 \`.pkl\` 见 [[27-野生PKL版本隔离与原始字节级复核]]，已由本仓库原始 CSV 独立复算与固定 PKHeX 4/4 字节完全相同。

本阶段另增加五份 **PKHeX 固定记录序列**，位置为 \`Unpack/v1.3.2/pkl/raid/\`：

| 文件 | 版本范围 | 每条字节 | 记录数 | 内容 |
|---|---|---:|---:|---|
| \`encounter_sw_nest.pkl\` | 剑 | 10 | 2156 | 普通极巨巢穴 |
| \`encounter_sh_nest.pkl\` | 盾 | 10 | 2151 | 普通极巨巢穴 |
| \`encounter_sw_dist.pkl\` | 剑 | 16 | 1171 | 配信巢穴 |
| \`encounter_sh_dist.pkl\` | 盾 | 16 | 1179 | 配信巢穴 |
| \`encounter_swsh_underground.pkl\` | 剑／盾共享 | 14 | 273 | 极巨大冒险（Max Lair） |

合计 6,930 个固定长度的 **PKHeX 参考记录**。各文件均从 \`kwsch/PKHeX@0660d1e1f4924b8478daec73281bb8071a82ad19\` 字节级导入；Git Blob SHA-1 与上游完全一致，额外校验了 SHA-256、完整长度、各条物种和字段范围。详见 \`Unpack/v1.3.2/pkl/raid/manifest.json\`；上游许可为 GPL-3.0。

**与野生 PKL 的重要区别：** 野生 \`sw_symbol\` 等文件是 \`sw/sh\` 签名的 Mini，巢穴/配信/极巨大冒险文件没有 Mini 头，而是 10/16/14 字节定长记录，不能用同一个反序列化器。

## 字段与约束

- **普通巢穴**：物种 ushort、形态、性别、特性许可、超极巨化、巢穴 index、最小/最大星级（0 基）、保底 V 数。星级对应 PKHeX 的五档等级范围：15–20、25–30、35–40、45–50、55–60。巢穴空间位置需配合 \`Encounters8Nest.GetNestLocations\`，不只是巢穴 ID。
- **活动配信**：物种、形态、特性、四招式、等级、极巨化等级、超极巨化位、锁闪高半字节、保底 V 低半字节、配信 index。**锁闪编码不同于原始固定遭遇 CSV**：配信 \`0=Random,1=Never,2=Always\`；原版 \`ShinyLock\` 标注 \`0=Random,1=Always,2=Never\`。切勿复用一个枚举映射。
- **极巨大冒险**：物种、形态、等级、四招式、特性和超极巨化。PKHeX 将两个版本共用一张表，遭遇地点 244。闪光状态在冒险结束的选择流程中处理，不能只凭条目认定固定锁闪。
- **配信时间边界**：从这 16 字节记录无法还原活动开放开始/结束时间，也不能证明某个配信在 2026-11-23 仍可获取。

PKHeX 模板依据：
- [Encounters8Nest.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Data/Gen8/Encounters8Nest.cs)
- [EncounterStatic8N.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Templates/Gen8/EncounterStatic8N.cs)
- [EncounterStatic8ND.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Templates/Gen8/EncounterStatic8ND.cs)
- [EncounterStatic8U.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Templates/Gen8/EncounterStatic8U.cs)

## 固定、赠送、交换（原版资源数据）

仓库原始 ROM 已通过 \`scripts/swsh_semantic_catalog.py\` 解码了以下 CSV：

| 类型 | 原始文件（剑版 v1.3.2） | 输出表 | 行数 |
|---|---|---|---:|
| 静态遭遇 | \`v1.3.2/1/bin/script_event_data/event_encount_data.bin\` | \`static_encounters.csv\` | 647 |
| 剧情赠送 | \`v1.3.2/1/bin/script_event_data/add_poke.bin\` | \`gift_encounters.csv\` | 31 |
| NPC 交换 | \`v1.3.2/1/bin/script_event_data/field_trade.bin\` | \`trade_encounters.csv\` | 23 |

总计 701 条原始记录。来源字节 SHA-256 见 \`Unpack/v1.3.2/catalog/semantic-summary.json\`。这是 **原版表的原始静态配置**，尚未和 PKHeX 的 \`Encounters8.StaticSWSH/StaticSW/StaticSH/Trade...\` 全部完成合法性模板逐条 JOIN。不得将原始 647 条直接声称为 647 条均可实际触发的合法固定遭遇。三个表已独立保留，**没有伪造兼容 PKHeX 的固定遭遇 PKL**：该固定遭遇实现主要是手工 C# 模板，而非这五个巢穴二进制格式。

PKHeX 还有 13 条水晶／特定招募遭遇，已按固定源码快照落在 \`Unpack/v1.3.2/pkl/raid/crystal_pkhex_reference.json\`（其中共享 11、剑限定 1、盾限定 1）。这也是 C# 模板，不属于该 5 个二进制文件。

## 验证与导出

在仓库根目录运行：

\`\`\`powershell
python scripts/verify_swsh_wild_pkl.py
python scripts/export_swsh_special_encounters.py --validate-only
python scripts/export_swsh_special_encounters.py --out-dir artifacts/swsh-special
python -m unittest discover -s tests -v
\`\`\`

导出程序会：校验五份二进制的预期 SHA-256/长度/条数；按 PKHeX 原样读取定长字段；输出五个可读 CSV；核对 647/31/23 行的 \`record_index\` 连续性、物种及 \`ShinyLock\` 标注，再写三个 JSONL 和 \`summary.json\`。写入仅在忽略的 \`artifacts/\` 下，不修改原始输入。全部代码仅用 Python 标准库。

## 268 条天气争议的诚实边界

\`weather_bleed_268_cases.csv\` 是 268 槽位、48 场景的静态争议清单；\`weather_bleed_runtime_observations_TEMPLATE.csv\` 仍无实机观测记录。可按 [[25-天气渗透268例运行时验证]] 的 GDB 采样与运行时审核入口写入证明。除非确有对应 BuildID、运行轨迹、天气/位置和原生分支判断证据，状态仍然是 **268 待游戏运行时验证，0 已经证明**。新增特殊 PKL 不会自动解决这 268 个普通野生天气争议。

## 下一阶段原始资源重建工作

1. 通过 \`data_table.gfpak\` 原始成员、\`EncounterNestArchive\` 与 \`NestHoleDistributionEncounterArchive\` 解包，按原 \`TableID\` 进行明确的双版本映射。
2. 将 \`LevelTableID\` 对应等级表，\`DropTableID/BonusTableID\` 对应奖励表；使用键 JOIN、校验重复/缺失键、不能把哈希值当数组下标。
3. 与已导入的固定 PKHeX \`nest/dist\` 及 Max Lair 文件进行逐记录对比，记录差异与来源 SHA-256。**当前未建立这五个参考 PKL 的 ROM→PKL 字节级独立复现**。
4. 逐项比较原始固定/赠送/交换表与 PKHeX 的手工模板和故事条件，区分存在于文件、满足剧情可达、合法捕获三个层级。
5. 针对 268 条争议开展配套 BuildID/断点的真实运行样本采集与独立人工审核。
