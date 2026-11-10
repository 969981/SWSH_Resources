---
title: SWSH 1.3.2 野生遭遇 PKL 版本隔离与原始字节级复核
aliases: [剑盾四张野生遭遇 PKL, Sword Shield wild encounter version audit]
tags: [SWSH, 1.3.2, Wild, PKL, PKHeX, pkNX, FlatBuffers, Version]
status: CONFIRMED_SOURCE_MEMBER_MAPPING_AND_BYTE_EXACT_REFERENCE_REBUILD
date: 2026-11-10
---

# 剑／盾 1.3.2：四张野生遭遇 PKL 的版本隔离与原始 ROM 对账

> [!success] 结论
> 从原始 `data_table.gfpak` 四个遭遇成员导出的 35,960 条原始槽位，经过仓库 pkNX 的 ZoneID/Location 映射、天气条件筛选、槽位合并、Hidden 树遭遇修正和 BinLinker 序列化后，**四张重建结果均与 PKHeX 固定提交的对应 .pkl 逐字节相同（4/4）**。剑版和盾版的野生版本隔离由四张独立资源及加载时的 GameVersion 完成，不需要在每个槽位中增加版本字段。

## 1. 固定输入与来源证明

- 原始游戏：Pokémon Sword / Shield v1.3.2。
- 仓库：`969981/SWSH_Resources`，本次审计基线 master：`3c0c8a9fb1dfbed1be6464cfce02890111693b95`。
- 原始容器：`Unpack/v1.3.2/parsed/bin/archive/field/resident/data_table.gfpak.manifest.json`。
- 结构：`tools/pkNX/FlatBuffers/SWSH/Schemas/EncounterArchive.fbs`。
- 原始记录导出：`Unpack/v1.3.2/catalog/wild_encounters.csv`，SHA-256 `108c5a313eca466368d586c5bd9b5197ce93a383d2858667ff3cdf255d7ae90a`。
- 区域映射：`Unpack/v1.3.2/catalog/wild_zone_index.csv`，372 行。
- 映射汇总：`Unpack/v1.3.2/catalog/wild_mapping_summary.json`。

四个原始成员 SHA-256 已与实际提取文件重新核对：

| Member | 原始文件名 | 版本 / 类型 | 原始大小 | SHA-256 |
|---:|---|---|---:|---|
| 0 | `000000_744C3156047D75C6.bin` | Sword / Hidden | 93,360 | `dcd02a5753015eae75fdb1ee9a7ecd0641495aef37fa0c0e97a7a6466b0ff646` |
| 1 | `000001_15DECA74DF13D299.bin` | Sword / Symbol | 158,664 | `b20fad938a6e95bd3af72259d4a322c599db1a22441888b784525b26c54f9ad7` |
| 2 | `000002_291F1145B91FEA10.bin` | Shield / Symbol | 158,728 | `7932ce8298677291a75ae1170681cc642d8146ef524eaa51512626585681e658` |
| 3 | `000003_578005D361256063.bin` | Shield / Hidden | 93,360 | `e9073fe0ec279c13ab97e352d38996a009350a033f36c12a7faef6a8c5f590b2` |

总计 **35,960** 个原始槽位、372/372 个 ZoneID 表成功映射、186 个不同 ZoneID hash、0 个未映射区域。剑／盾使用成对相同的 ZoneID 集合，但各自的遭遇成员内容不同。

## 2. 原始成员到 PKL 的精确映射

`GameDumperSWSH.DumpWilds()` 将四个成员对应到四张资源：

| 原始成员 | PKL 文件 | 区域块 | 最终槽位 | 文件大小 |
|---|---|---:|---:|---:|
| Sword Hidden | `encounter_sw_hidden.pkl` | 62 | 863 | 4,720 |
| Sword Symbol | `encounter_sw_symbol.pkl` | 123 | 1,050 | 6,476 |
| Shield Symbol | `encounter_sh_symbol.pkl` | 123 | 1,057 | 6,508 |
| Shield Hidden | `encounter_sh_hidden.pkl` | 62 | 855 | 4,696 |

对应 PKHeX 基准固定为 `kwsch/PKHeX` commit `0660d1e1f4924b8478daec73281bb8071a82ad19`，不是浮动的 master。

| PKL | SHA-256 |
|---|---|
| `encounter_sw_hidden.pkl` | `1d35c403f6183626556e97588f3d19681676bde6d437b81514e9d1ffa386bcf6` |
| `encounter_sw_symbol.pkl` | `5a6bdd129c919f0a015df8c60471a57de0aa8149146239375e91f7994f5853f6` |
| `encounter_sh_symbol.pkl` | `7a760946b8b04e7696a15d426f1e28489894513755094f1e32032f08c200d224` |
| `encounter_sh_hidden.pkl` | `2eaf700f6eefe7e9555de278d6765d5f9771b33a3429c5130fd877ec3d926b22` |

## 3. 字节级重建方法

本次独立复算遵循仓库中的实际实现，而不是按物种名单猜测：

1. 按原始 member 和 table index 读取 EncounterArchive 中的区域表。
2. 使用 `SWSHInfo.ZoneLocations`、`ZoneType` 将 ZoneID 映射到 Location 与槽位类型。
3. 按 0–8 天气子表、9 摇树、10 钓鱼读取原始槽位。
4. 应用 `EncounterTableUtil.IsPermittedWeather()` 与按槽位类型区分的 weather-bleed 规则。
5. 按 `Species/Form/LevelMin/LevelMax` 合并同一遭遇模板，并 OR 天气位。
6. 按 `(weather mask, min level, max level)` 分组序列化，槽位 species/form 打包成 16 位值。
7. Hidden 表执行 Bridge Field → Stony Wilderness 的树遭遇修正。
8. 使用 `MiniUtil.PackMini()` 写入 `sw/sh` 标记、区域数、偏移表和 4 字节对齐。

### 容易错误移植的 WeatherBleed 语义

`EncounterTableUtil.IsWeatherBleedPossible(type, permit, location)` 中的判断是：

```csharp
WeatherBleedSymbol.TryGetValue(location, out var weather)
    && weather.HasFlag(permit)
```

这里要求 **bleed mask 包含整个该地点的基础 permit mask**，不是简单检查 bleed mask 是否包含当前单个候选天气位。改变这一语义会改变输出天气掩码，不能自行“简化”。

### Hidden 树遭遇修正

`hiddenTreeFix` 从 Bridge Field（Location 142）取得 `Shaking_Trees` 槽位，并将其追加到 Stony Wilderness（Location 144）。序列化时，追加记录属于 Stony 的区域块。该修正是四张文件字节一致所必需的一部分。

### 重建结果

本次以原始 CSV 导出和 ZoneID 映射为输入，按上述源码语义独立重建 BinLinker；四个重建字节数组分别与固定 PKHeX commit 的四个资源逐字节比较，**4/4 长度相同且所有字节相同**。

> [!note] 方法边界
> 这是对原始 ROM 提取结果和仓库 pkNX 序列化源码的独立复算；本次没有重新运行 pkNX WinForms UI。原始成员本身的 SHA-256 已与仓库 manifest 及实际提取文件核对。

## 4. 版本专属物种交叉证据

原始成员的版本标记与版本专属物种一致；每个成员的 opposite-version marker 均为空。以下计数是原始子表中的槽位出现次数，包含天气条件重复，并非去重后的 PKL 记录数。

| Member | 版本 | 原始专属物种编号及出现次数 |
|---:|---|---|
| 0 | Sword Hidden | `273:23, 554:27, 627:1, 684:19, 766:9, 874:11` |
| 1 | Sword Symbol | `273:1, 554:1, 627:27, 684:19, 692:45, 766:18, 874:16` |
| 2 | Shield Symbol | `77:10, 270:1, 629:27, 682:19, 690:45, 765:18, 875:14` |
| 3 | Shield Hidden | `77:9, 270:24, 629:1, 682:19, 765:9, 875:11` |

例子：Sword 的 Seedot #273、Darumaka #554、Swirlix #684、Stonjourner #874；Shield 的 Galarian Ponyta #77、Lotad #270、Spritzee #682、Eiscue #875。

## 5. PKHeX 如何执行版本隔离

固定 PKHeX commit 的实现：

- `Encounters8.cs` 分别加载 `sw_symbol`、`sh_symbol`、`sw_hidden`、`sh_hidden`，并分别传入 `GameVersion.SW` / `GameVersion.SH`。
- `EncounterArea8` 在区域对象上保存 `Version`。
- `EncounterSlot8.Version` 继承 `Parent.Version`。
- `EncounterEnumerator8` 根据实体版本只枚举对应版本的 Symbol/Hidden 数组。

因此每个 2 字节物种槽位不需要再存一个版本字段；版本在**资源文件和父级区域对象**上确定。

关键源码：
- [Encounters8.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Data/Gen8/Encounters8.cs)
- [EncounterArea8.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Templates/Gen8/EncounterArea8.cs)
- [EncounterSlot8.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Templates/Gen8/EncounterSlot8.cs)
- [EncounterEnumerator8.cs](https://github.com/kwsch/PKHeX/blob/0660d1e1f4924b8478daec73281bb8071a82ad19/PKHeX.Core/Legality/Encounters/Generator/Search/EncounterEnumerator8.cs)

## 6. Sword / Shield 两版本的模板差异

按 PKL 记录身份 `Location/Species/Form/LevelMin/LevelMax/Weather/SlotType` 做多重集合比较：

| 类型 | 是否包含天气掩码 | 两版相同 | 仅 Sword | 仅 Shield |
|---|---|---:|---:|---:|
| Symbol | 是 | 902 | 148 | 155 |
| Symbol | 否 | 911 | 139 | 146 |
| Hidden | 是 | 775 | 88 | 80 |
| Hidden | 否 | 784 | 79 | 71 |

这些“仅某版”记录不全是物种专属，也包含等级范围和天气差异；物种专属结论应结合上一节的原始 member 标记。

## 7. 结论与适用范围

- **CONFIRMED**：四个原始遭遇成员分别映射到四张 PKL。
- **CONFIRMED**：372/372 个区域表成功映射，无未映射 ZoneID。
- **BYTE_EXACT**：四张按 pkNX 源码语义重建的 PKL 与 PKHeX 固定 commit 的资源 4/4 逐字节一致。
- **CONFIRMED**：PKHeX 通过资源级 `SW/SH` 版本隔离，不依赖每槽位的版本标志。
- **NOT_CLAIMED**：本报告不证明动态遭遇概率、天气切换、剧情条件或 Max Raid 联机行为；它验证的是普通野生 Symbol/Hidden 静态模板数据链。

这也解释了与朱紫的架构差异：剑盾没有朱紫联盟集友圈那种跨版本共享的开放世界野生生成场景，因此 PKHeX 保留四张版本独立的野生表是合理且与原始 ROM 对应的。
