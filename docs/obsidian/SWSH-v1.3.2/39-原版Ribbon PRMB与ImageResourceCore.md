---
title: 原版 Ribbon PRMB 与 ImageResourceCore
status: static-evidence
updated: 2026-11-26
---
# 原版 Ribbon PRMB 与 ImageResourceCore
[[38-原生图片选择与九语言消息]]
原版 status_ribbon.prmb 39760 bytes，FB root 3 vectors: nodes 689, values 589, schema 2. ribbon_table 98 rows, six fields showNum/imageName/imageName2/three message hashes. 实际读取 row0 showNum9 image ribbon_05, row1 showNum10 ribbon_03, row37 ribbon_01_a/b, row38 ribbon_02_a/b。旧数字同名图片映射不可靠，应由 PRMB 取代。消息哈希按原版 AHTB little-endian u64 关联九语言。 
剑版 00BB8910 (169 instructions ELF byte match) calls 0087EE40 -> 00876410, bounds index<=0x61, ribbon_table[index].imageName, index0x25 and count==0x28 OR index0x26 and count==8 select imageName2. 0087EE10 -> 00876260(count selector0/1). 01498620/014993D0 等按 showNum 排序，并非图片编号转换。反编译为静态证据，不声称运行时测试。双版本 selector refs Run 45771356483 PASS，48 references each, 11 candidate entries each, 1 oversized excluded.
_g: 38 records, 33 national species (actual list includes 890 Eternatus); no runtime predicate recovered, do not equate with stored Gigantamax factor. Wallpaper 19 menu names, 18 main BRTI names 00..17 +3 helper names; uikit_pokebox_wallpaper.bin 2048 bytes, uikit_pokebox_top.bin 24904 bytes, no obvious plaintext wallpaper names. No WallpaperID assumption. 
新增 SWSHImageResourceCore SQLite prototype, JSONL native ribbon rows + localized texts + primary/alternate asset FK, Pokemon explicit resource token lookup, wallpaper groups and menu separately, type names, other semantic links. Does not include image bytes; assets carry source path/hash; no fabricated runtime mappings. Previous package input used old parity label, corrected pixels same hashes, v0.2 status remains separate. CI pending.

首轮 CI 45772452742 失败：imageName2 的缺省值为单空格而不是文件名。修复为保留原值、NULL alternate_asset_id，仅两个记忆奖章允许非空备用图片。四个盒子 UIKIT/LYT 文件对原版背景名及菜单键的两种 FNV64 字节扫描无匹配，未证明没有运行时引用。PRMB schema hash 使用 FNV1a 64 非标准 offset basis 0xcbf29ce484222645（ribbon_table/imageName/imageName2/showNum 均实测吻合）。
