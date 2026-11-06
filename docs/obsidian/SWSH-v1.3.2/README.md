# 宝可梦 剑／盾 v1.3.2 数据定位与提取手册

本目录可直接作为 Obsidian Vault 的子目录打开。版本：Sword/Shield 1.3.2。已核实的源文件、源码与证据分别见 [[00-导航]]、[[01-数据总表]]、[[14-证据分级与对账]]。

**数据现状：** 剑版 RomFS 源路径 50,494 条，PARSED（含容器提取及仅元数据）36,405 条，UNSUPPORTED_FORMAT 14,089 条，失败 0；这不是全部语义转换成功。依据：[`coverage-summary.json`](https://github.com/969981/SWSH_Resources/blob/master/Unpack/v1.3.2/reports/coverage-summary.json)。盾版 RomFS 仅有完整清单，不能把剑版输出直接称为盾版实测。

研究顺序：[[02-种族与图鉴]] → [[06-招式与习得]] → [[04-野生遭遇与等级]] → [[05-固定遭遇锁闪个体]] → [[10-ExeFS地址定位]]。CSV 汇总见仓库 `Unpack/v1.3.2/catalog/`；原始 JSON 见 `Unpack/v1.3.2/parsed/`。
