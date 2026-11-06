# GFPak 成员到游戏数据

当前容器：`bin/archive/field/resident/data_table.gfpak` 已拆解到 `Unpack/v1.3.2/extracted/bin/archive/field/resident/data_table.gfpak.files/`，成员名形式 `000000_<16 hex Hash>.bin`；Hash 不是可读文件名。

步骤：1. 确认 GFPack Magic；2. 使用 `GFPack.HashAbsolute`/成员表抽取原字节、原 Hash、SHA256；3. 使用 pkNX `GetDataFileName("encount_k.bin")` 的内部路径映射验证对应；4. 按匹配的 SWSH FlatBuffer schema 解码；5. 记录长度、条目计数与关联引用；6. 与 pkNX 编辑器显示对照。

注意不要用 ZA/SV Trinity 解析器替代 SWSH 专属逻辑。来源：[查看源码](https://github.com/969981/SWSH_Resources/blob/master/tools/pkNX/pkNX.SWSHDump/Program.cs)。
