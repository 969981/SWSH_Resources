# Sword 1.3.2 结构化 CSV 目录

`species_personal.csv` 从仓库真实 `Unpack/v1.3.2/parsed/bin/pml/personal/personal_total.bin.json` 转换，原 JSON Blob SHA: `56fc0813076f737db6e464b6a0524d9b9e53775f`；共有 1192 行。此表字段源自 pkNX 解码，不是原始 ROM 字节，个人表 index 不可直接假设为全国图鉴号。

`moves/evolution/trainer_party/trainer_held_items/egg_moves` 由 `scripts/export_swsh_catalog.py` 批量生成，使用 UTF-8 BOM CSV；每条结果需与源 JSON 关联。未生成的表属于尚未处理，不宣称完整。
