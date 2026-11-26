---
title: 原生壁纸动画与PRMB字段注册表
status: static-evidence
updated: 2026-11-26
---
# 原生壁纸动画与PRMB字段注册表
[[40-原版模型目录与通用PRMB研究]]
## 上轮完整路径验收
Run 45774472651 PASS: 24 PRMB,1958 strings,924 exact name/path matches (+220),1778 models,882 icon joins,0 missing. Artifact 15096155299.
## 原版 marking animation
pokebox_wallpaper.arc member22 marking_ptn: pat1 group G_00, pai1 frame count5, 6 textures common_icon_marking_btn_01^s..06^s, target P_icon_marking_00 kind1, FLTP channel0/index0/curve1, 6 step keys at frames0..5 values0..5. Member3 marking_blue, member6 marking_default, member18 marking_red each 3 FLMC tracks channel4/5/6, frame0 curve2 slope0. Raw values blue(47,131,233), default(204,204,204), red(245,57,71). These are material animation channel values, not final rendered pixel RGB. No native GPU shader parity. 
## Parser
PAT1/pai1 structure from vendored Switch-Toolbox CAFE/BFLAN.cs verified against original archive bytes. Track header index/channel/curve/key count/relative key offset. Curve1 step (float frame,u16 value,u16 tail); curve2 Hermite (float frame,value,slope). Separate FLTP texture list, FLMC material values, FLTS transform, FLVI visibility. Unknown curve retained. 
## Registry
Use actual PRMB schemas, group field hash and type hashes by occurrence. Only known ELF literal hash labels promoted; unknown/candidate separate. SQLite copy from verified core; add model_catalog, model_icon_links, prmb_schema_fields, prmb_image_strings, box_animation. Original database untouched. CI pending. 
Wallpaper ID mapping remains unresolved until animated selection and native consumer proven; no guessed IDs.
