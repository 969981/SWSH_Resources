---
title: 原版模型目录与通用PRMB研究
status: static-evidence
updated: 2026-11-26
---
# 模型目录、PRMB 与壁纸
[[39-原版Ribbon PRMB与ImageResourceCore]]
## 上轮实际验收
Run 45772559680 PASS，SQLite integrity/foreign keys PASS，15407 assets，98 ribbon rows/882 localized，39旧数字同名关联被纠正。38 _g 图标均有普通图标。191 wallpaper texture records，21 names，每个名称组只有1 pixel key。Artifact 15095170277。
## 原始模型目录
v1.3.2/1/bin/pokemon/table/poke_resource_table.gfbpmcatalog 745692 bytes 1692 rows，gpoke_resource_table.gfbpmcatalog 40908 bytes 86 rows。仓内 tools/pkNX/FlatBuffers/SWSH/Schemas/PokeResourceTable.fbs 给出 SpeciesInfo Species/Forme/Gender/Shiny、ModelPath/ConfigPath/ArchivePath/Animations。实际原始 bytes 解析：g 43 species/form pairs ×2 shiny,33 national species, all gender raw0. 38 _g icon rows cover same 33 species; Toxtricity form1 and Alcremie form1..8 model catalog additional forms, no corresponding explicit _g icon; cannot infer fallback. Urshifu form0/1 -> pm0983_81_00 / pm0983_82_00; Eternatus -> pm0940_81_00. Separate model gender raw and icon gender token. Native predicate not recovered. 
## PRMB
appli subtree full inventory 24 files, including 7 trlicence tables (bg1/bg2/frame/gloss/chara/capture/npc), live_comm player/stamp, etc. No dedicated wallpaper PRMB found. General PRMB flatbuffer node/value/schema parser preserves raw indices and type hashes, extracts known value kinds 1/3/4 only; other types uninterpreted. Exact strings joined to asset names as candidates, not ID proof. 
## Wallpaper
UIKIT root fields structural scan; FLYT/FLAN literals by section, no hash guessing. External PKHeX BoxLayout8.cs has name and CurrentBox only, not evidence for actual SWSH wallpaper save key. Do not conclude absence of wallpaper. 
## Reproduce
python scripts/swsh_model_prmb_audit.py --package artifacts/package --selectors artifacts/selectors
CI results pending. metadata only.
