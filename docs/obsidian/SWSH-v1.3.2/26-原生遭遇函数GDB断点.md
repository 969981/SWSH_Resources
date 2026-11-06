# 26 · 剑盾 v1.3.2 原生遭遇 Hook 地址与 GDB 采证

状态：**静态原生函数入口已关联上游 Hook 源码，尚无 GDB 运行时命中证明，也未识别天气允许/拒绝分支。**

## 来源和版本约束

上游源码：[lincoln-lm/swsh-mods-exl 的 symbols.hpp](https://github.com/lincoln-lm/swsh-mods-exl/blob/61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/symbols.hpp)。仓库声明仅适配剑盾 1.3.2。`#ifdef VERSION_SHIELD` 定义 Shield `VER_OFF=0`、Sword `VER_OFF=0x30`。

Hook 用法：[underworld.hpp](https://github.com/lincoln-lm/swsh-mods-exl/blob/61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/patches/underworld.hpp)、[randomizer.hpp](https://github.com/lincoln-lm/swsh-mods-exl/blob/61dc6d8df4347c0fd3a30373a117502e9dfdce80/source/program/patches/randomizer.hpp)。禁止把第三方代码地址与当前 BuildID 无核对地直接混用。

## 原生函数候选（main + RVA）

| 用途 | Sword | Shield |
|---|---|---|
| FetchZoneHash：当前地理区域哈希 | `0xD7E2E0` | `0xD7E310` |
| FetchSymbolEncountTable：获取明雷候选表 | `0xD05720` | `0xD05750` |
| GenerateSymbolEncountParam：明雷参数生成 | `0xD05080` | `0xD050B0` |
| TryGenerateSymbolEncount：明雷生成器 | `0xDAF350` | `0xDAF380` |
| GenerateBasicSpec：从槽位生成参数 | `0xD329D0` | `0xD32A00` |
| GenerateMainSpec：主实体生成／闪光重掷 | `0xD311C0` | `0xD311F0` |
| EncountSpawnerInit：生成器初始化 | `0xDAE1E0` | `0xDAE210` |
| FetchSymbolEncountTable + 0x54：表哈希访问内部点 | `0xD05774` | `0xD057A4` |
| TryGenerateSymbolEncount + 0x1C：空表检查内部点 | `0xDAF36C` | `0xDAF39C` |
| EncountSpawnerInit + 0x13C：生成器类型检查 | `0xDAE31C` | `0xDAE34C` |

## 已可复现的静态验证

运行 `python scripts/swsh_native_encounter_anchors.py --repo .`，以仓库真正的剑、盾 `v1.3.2/0/{sword,shield}_main` 原始 NSO 解压 TEXT 段后获取每个函数的 32 字节机器码，输出 `nso_native_encounter_anchors.csv` 与 `nso_native_encounter_anchors_summary.json`。

全部地址检查：BuildID 对应性、原 NSO SHA-256、TEXT SHA-256、RVA 在 TEXT 中、ARM64 4 字节对齐、32 字节指令快照，随后将 `GenerateMainSpec` 的 pkNX 32 字节独立锚点进行交叉校验。其他函数名称来自上游 Hook 线索，**源代码给出的函数语义仍须动态追踪或交叉引用确认**。


## 自动布防四个已知原生入口

`scripts/swsh_weather_gdb_capture.py` 现在提供一键命令。**请先连接目标 GDB、从模块映射中确定当前 main 基址、确认剑盾游戏版本与 BuildID**；`case_id` 直接取自 `weather_bleed_268_cases.csv`：

```gdb
target remote <GDB_HOST:PORT>
source scripts/swsh_weather_gdb_capture.py
swsh-weather-arm-known . <case_id> <MAIN_BASE_HEX> <output.jsonl>
continue
```

此命令读取经过 NSO 校验的 `nso_native_encounter_anchors.csv`，根据本次案例的 Sword/Shield BuildID 自动布防 `FetchZoneHash`、`FetchSymbolEncountTable`、`GenerateSymbolEncountParam` 和 `GenerateBasicSpec` 四个入口，保存 PC、32 位 ARM64 指令切片（16 字节）、寄存器与时间戳。每次断点命中会暂停，需由用户继续或单步。**日志里的 `branch_outcome` 固定 `UNDETERMINED`，它不是已证实的天气函数分支。**

要人工对已经分析过的天气判断内部指令布断点，继续使用 `swsh-weather-capture <repo_root> <case_id> <main_base_hex> <verified_branch_rva_hex> <output.jsonl>`。这里所说的“已分析”必须具备 Ghidra/IDA 交叉引用和同 BuildID 的真实指令证据，不应直接使用闪光重掷 RVA。

## GDB 最小诊断

**下面 `main_base` 必须从当前进程的模块映射中获取，不能直接套用其他项目的地址。** 在 GDB 里使用当前剑/盾对应的函数 RVA。先核对 NSO BuildID，然后用实际运行场景核对 ZoneHash：

```gdb
target remote <GDB_HOST:PORT>
set $main_base = <CURRENT_MAIN_MODULE_BASE>
break *($main_base + 0xD7E310)
continue
finish
p/x $x0
```

以上是 Shield 的例子；Sword 要改为 `0xD7E2E0`。在 ARM64 AAPCS 下，`u64 FetchZoneHash()` 通常通过 x0 返回结果，但仍须用实时指令与调用现场确认。预期在目标地点得到 `weather_bleed_268_cases.csv` 里的 `zone_id_hex` 之一，不相等时优先排查当前位置、边界区域与调用线程。

随后对 `FetchSymbolEncountTable`、`GenerateSymbolEncountParam`、`TryGenerateSymbolEncount`、`GenerateBasicSpec` 分别断点，记录返回值、当前地理哈希、天气索引、取表调用与选择槽位。对另一版本分别进行，不跨版本复用 RVA。录制寄存器可使用 `scripts/swsh_weather_gdb_capture.py`，但它**不判定天气分支是否允许**。

如果真正定位了天气许可分支，还应分别对 48 组场景与其 48 条同区域正对照建立调用轨迹；实际执行分支前后记录指令、输入天气、当前区域和最后的槽位来源。不得把 NPC 可见模型或长时间没遇到某物种当作分支拒绝的直接证据。

参见 [[25-天气渗透268例运行时验证]]、[[24-遭遇天气与官方中文地名]]、[[10-ExeFS地址定位]]。
