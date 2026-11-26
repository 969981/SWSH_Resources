---
title: SWSHImageResources 分类资源包
status: exploring
updated: 2026-11-26
---
# SWSHImageResources
[[35-跨作品像素索引]] · [[34-纹理解码与像素对账]]
[资源包说明](../../../SWSHImageResources/README.md)

全量解码 Run 45768302542 成功，15407 解码/PNG roundtrip，13295 双实现 exact，2112 different（BC1 2111、RGB5A1 1）。Alpha 差值仅 0/255，255 共 16987628 像素；max RGB=1；观察去重 4591 keys、857 groups、10816 extra。基线不等于 strict parity pass。

新增分类工具：依据 3445 源路径和 15407 像素记录分类，宝可梦 pokecaplist token、道具 item_sprite、球类候选、缎带/证章编号候选、属性 token 分开保留。语义未知不猜。分类目录仅本地实际导出，CI 仅归档 JSONL。

FLYT 样本 type_dummy_sch.arc / blyt/type_dummy.bflyt 为 v9，488 bytes，8 sections。txl1 名称 typeIcon_text_00_normal_00^o；mat1 P_00 的 texture index 0；pic1 P_00 136 bytes，UV [0,0,1,0,0,1,1,1]。vendored Switch Toolbox CAFE/MAT1.cs 及 TextureRef.cs 校验材料布局。全量扫描 FLYT v9 及同 ARC BRTI name 匹配、整数像素边界矩形候选；未恢复最终 shader/材质变换、图集裁切只做 raw UV 候选，其他版本明确标记。 
BC1 修正方案以原始块 alpha rule 校验 Pillow，保留 Texture2DDecoder 原始差异，另列归一化结果。合成 c0=0/c1=65535/index3 样本 Pillow 实际返回 (0,0,0,0)。新 Actions 尚待验收。
