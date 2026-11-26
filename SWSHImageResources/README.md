# SWSHImageResources — 剑盾 v1.3.2 分类素材包
本目录为可复现资源包定义，不含原版图片文件。原版数据、生成 PNG 保留本地。基线 [全量解码 Run 45768302542](https://github.com/969981/SWSH_Resources/actions/runs/45768302542)：15407/15407 解码、PNG 往返、13295 exact、2112 different、4591 观察像素键、857 重复组。BC1 2111 项差异及 RGB5A1 1 项差异保留待验证，不将原审计标记严格 PASS。

## 目录与生成文件
artifacts/SWSHImageResources/manifest.json、assets.jsonl、semantic_links.jsonl、layout_panes.jsonl、atlas_uv_candidates.jsonl、errors.jsonl；本地可选 png/{pokemon,items,ribbons_marks,types,avatars,backgrounds,wallpapers_candidate,company_logos,brand_logos,stamps,curry,maps,trainer_cards,ui}/。精灵球通过 ball_candidate 语义链接引用 items，避免重复拷贝。ribbons_marks 保留统一分类，直到 RibbonID/MarkID 原生区分确认。分类基于源目录和少量名称候选，不等同于运行时业务映射。

## 本地导出
```bash
python -m pip install numpy==2.2.6 Pillow==12.3.0 texture2ddecoder==1.0.6
python scripts/swsh_texture_parity_audit.py --png
python scripts/swsh_image_package.py --pixels artifacts/swsh-texture-parity/pixels.jsonl --png-dir artifacts/swsh-texture-parity/png
```
可加 --crop-candidates 生成 raw UV 矩形候选。只裁原始像素，不重建材料、着色器、坐标变换及 UI 渲染；不会自动作为游戏实际图标。所有候选保持原始路径、纹理名、UV、材料、像素哈希。

## BC1
独立按压缩块 c0<=c1 且 index==3 判定 RGBA punch-through，主解码器 Pillow 必须逐像素通过此规则。Texture2DDecoder 保留未修正对账，同时另列 policy-normalized 比较；不能把修正后的比较称原始双解码器完全一致。RGB5A1 颜色量化仍待验证。新运行结果以 Actions 为准。
