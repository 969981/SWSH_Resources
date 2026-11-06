# Sword / Shield 1.3.2 结构化 CSV 目录

`species_personal.csv` 从仓库真实 `Unpack/v1.3.2/parsed/bin/pml/personal/personal_total.bin.json` 转换，原 JSON Blob SHA: `56fc0813076f737db6e464b6a0524d9b9e53775f`；共有 1192 行。此表字段源自 pkNX 解码，不是原始 ROM 字节，个人表 index 不可直接假设为全国图鉴号。

`moves/evolution/trainer_party/trainer_held_items/egg_moves` 由 `scripts/export_swsh_catalog.py` 批量生成，使用 UTF-8 BOM CSV；每条结果需与源 JSON 关联。未生成的表属于尚未处理，不宣称完整。

## 野生遭遇版本、天气与地区映射（真实文件已验收）

- `wild_encounters.csv`：来自 Sword v1.3.2 RomFS 中的四组剑盾共用遭遇资源，35,960 个槽位。
- `wild_encounters_enriched.csv`：同 35,960 行数据，增加剑/盾版本、明雷/暗雷、天气与摇树/钓鱼、英文地图名、位置 ID 与原始证据。
- `wild_zone_index.csv`：372 张地图表（186 个不同 ZoneID），372/372 成功命名。
- `wild_mapping_summary.json`：按成员核对版本限定物种、来源文件 SHA-256 和各项统计。数据由 `scripts/enrich_swsh_wild_encounters.py` 生成。

天气子表存在不等于该天气在地图内合法；有效遭遇规则仍需要应用 pkNX `EncounterTable8Util.IsPermittedWeather`。地名优先保留上游英文字段，不冒充已验证的简体中文官方名。

其它原生数据：`static_encounters.csv`、`gift_encounters.csv`、`trade_encounters.csv`、`item_properties.csv`、`nso_segments.csv` 和 `nso_shiny_candidates.csv`。静态重掷函数候选不等于经过 GDB 验证的实时锁闪函数。
