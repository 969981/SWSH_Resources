# Sword / Shield 1.3.2 结构化 CSV 目录

`species_personal.csv` 从仓库真实 `Unpack/v1.3.2/parsed/bin/pml/personal/personal_total.bin.json` 转换，原 JSON Blob SHA: `56fc0813076f737db6e464b6a0524d9b9e53775f`；共有 1192 行。此表字段源自 pkNX 解码，不是原始 ROM 字节，个人表 index 不可直接假设为全国图鉴号。

`moves/evolution/trainer_party/trainer_held_items/egg_moves` 由 `scripts/export_swsh_catalog.py` 批量生成，使用 UTF-8 BOM CSV；每条结果需与源 JSON 关联。未生成的表属于尚未处理，不宣称完整。

## 野生遭遇版本、天气与地区映射（真实文件已验收）

- `wild_encounters.csv`：来自 Sword v1.3.2 RomFS 中的四组剑盾共用遭遇资源，35,960 个槽位。
- `wild_encounters_enriched.csv`：同 35,960 行数据，增加剑/盾版本、明雷/暗雷、天气与摇树/钓鱼、英文地图名、位置 ID 与原始证据。
- `wild_zone_index.csv`：372 张地图表（186 个不同 ZoneID），372/372 成功命名。
- `wild_mapping_summary.json`：按成员核对版本限定物种、来源文件 SHA-256 和各项统计。数据由 `scripts/enrich_swsh_wild_encounters.py` 生成。

天气子表存在不等于该天气在地图内合法。新工具已依据 pkNX `EncounterTable8Util.IsPermittedWeather` 导出天气候选并严格分开保存原样逻辑和当前天气位对照。中文地名则已依据简体中文原版 `place_name_indirect.dat.json` 的索引关联，全部 372 张地区表可用。

其它原生数据：`static_encounters.csv`、`gift_encounters.csv`、`trade_encounters.csv`、`item_properties.csv`、`nso_segments.csv` 和 `nso_shiny_candidates.csv`。静态重掷函数候选不等于经过 GDB 验证的实时锁闪函数。

## 官方简体中文与地区天气审计

- `zone_id_zh_cn_dictionary.csv`：196 个 pkNX ZoneID 的官方中英文消息文本、数字位置 ID、消息 flags 与场景类型；涉及 69 个不同原版消息索引。
- `wild_zone_bilingual.csv`：372 行原地区表，附原版简体中文地名和原始消息索引。
- `wild_weather_candidates.csv`：35,960 行原始遭遇槽位扩展天气许可及天气渗透，两种位判断并存，均**不是已实机验证**。
- `wild_weather_locale_summary.json`：完整源文件 SHA-256、分类计数、分歧及校验结果。

其中基础有效槽位 16,928 行、按 pkNX 原文许可的候选槽位 10,965 行、按天气位对照的候选槽位 10,697 行，后两种逻辑存在 268 个基础有效槽位的分歧。脚本：`python scripts/swsh_weather_locale.py --repo .`。权威语义仍以动态验证为准，不能把候选数视为游戏内真实概率。

## 268 条天气渗透争议槽位：运行时验收准备

- `weather_bleed_268_cases.csv`：268 条具体槽位，包括两个版本 BuildID、ZoneID、实际天气子表和相反的两种静态判断，全部标记 `NOT_TESTED`。
- `weather_bleed_scenarios.csv`：48 组独立的地图/天气/版本场景。
- `weather_bleed_control_cases.csv`：48 条同区域正对照。
- `weather_bleed_runtime_observations_TEMPLATE.csv`：仅表头的真实运行记录模板，**零条实机记录**。
- `weather_bleed_casebook_summary.json`：验证聚合统计、SHA-256 与原始构建版本证据。

运行：`python scripts/swsh_bleed_casebook.py --repo .`。GDB 断点录制器：`scripts/swsh_weather_gdb_capture.py`；回读/审计：`scripts/swsh_weather_validate_runtime.py`。pkNX 的 `IsWeatherBleedPossible` 是导出器逻辑，不是游戏二进制中经确认的逻辑。禁止将 CI 结果标为游戏实测。
