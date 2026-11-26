---
title: SWSHImageResourceAudit 全量图片审计
game: SWSH
version: "1.3.2"
status: exploring
updated: 2026-11-26
tags: [swsh, images, bntx, sarc, audit]
---
# SWSHImageResourceAudit

入口：[[31-原版图片素材索引与管理规范]] · [[14-证据分级与对账]] · [[19-道具结构字段表]]

固定输入快照：[master 基线](https://github.com/969981/SWSH_Resources/tree/2b2e39f2ae9e627d5d7d71ba2f1950a877dfd1cd)。原始字节不修改。仅剑版资源，盾版仍为清单对账。

## 本轮已验证的静态关系

- pokecaplist.bin 实际 7072 字节 = **884 × 8**，修正此前 886 条的算术错误。小端布局 HH H B B：偏移 0、2 为编号及形态 token；4 为 s/m/f/n（0/1/2/3，分别 523/98/103/160）；6 全零；7 为 _g 后缀（38 条为 1，其余 846 条为 0）。
- 884 条记录与 884 个唯一文件名完全匹配。剩余 poke_icon_0973_00s_n.bntx、poke_icon_0973_01s_n.bntx 未收录。字段的游戏运行时语义仍待确认，不能将 _g 直接标为已验证极巨，也不能认定 n 为非闪光。
- item_properties.csv 1608 条；906 个数字图标、1 个 dummy。ItemID 同名关联 906 条；item_sprite 关联 964 条、481 个唯一编号图标，其中 501 条 ItemID 与 SpriteID 不同；425 个编号图标未被 SpriteID 引用。两类关联均保留为 CANDIDATE，未选择最终图片。
- pouch=1 且 group_type=1 命中的球类候选 26 条；分类仍待道具文本与运行时验证。
- 抽样 BNTX：NX+0x08（文件 +0x28）是 BRTI 指针表；BRTI+0x60 指向 u16 长度前缀名称；+0x24/+0x28 尺寸；+0x1c 格式原始值；+0x16 mip 数。宝可梦 0001 样例 136×112，道具 0001 样例 64×64，均为 format_raw=0x00001a01。完整结构等待全量审计，不将 raw format 解释为已验证颜色空间。

## 复现
```powershell
python -m unittest discover -s tests -p test_swsh_image_resource_audit.py -v
python scripts/swsh_image_resource_audit.py
```

输出仅在 ignored artifacts/swsh-image-audit/ 下：sources.jsonl、textures.jsonl、arc_members.jsonl、errors.jsonl、pokemon_icons.jsonl、item_icons.jsonl、ball_candidates.jsonl、summary.json。逐文件核对源 Git blob SHA-1 和长度，并另算 SHA-256；按 SARC 表指针读取成员，递归记录内部 BNTX，FLYT 先分类不解释坐标。出错记录，不作虚假成功。只归档元数据，不发布纹理或原始资源。

## 后续验收
- 全量 2638 BNTX 和 807 ARC 实际读取、格式统计、错误归档。纹理条目数与容器数分开。
- pokecaplist 0973 两个遗漏项与原生加载函数；ItemID/SpriteID 双路径与 TM/TR、精灵球回退。
- Ribbon/Mark、FLYT 坐标与盒子背景；GFPak 模型纹理后续单独处理。
- PNG、RGBA 哈希、BC/ASTC 双解码、透明度/色彩空间、运行时映射仍未完成；不宣称任何像素对账通过。
