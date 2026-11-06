# ExeFS NSO、文件偏移、ELF VA 和运行时 RVA

源：`v1.3.2/0/sword_main`、`v1.3.2/0/shield_main`，版本 Sword/Shield v1.3.2。**Sword / Shield 的 main 不相同**，地址严禁直接混用。

术语：文件偏移 `fileOffset` 是 NSO 原始压缩文件内偏移；解压段偏移是节区内索引；ELF VA 是反编译器映射地址；`main+RVA` 是模块映像基址相对偏移；运行时 VA = ASLR 后的模块基址 + RVA。不可直接以原始 file offset 充当 `main+offset`。

流程：SHA256 校验原始 main → 解析 NSO text/rodata/data 分段及内存偏移 → 转换 ELF 并记录映射 → 静态交叉引用 → GDB/模拟器断点采样 → 同样输入与对照变量进行复测 → 证据分级。

每条地址必须记录：`game,version,build_id,main_sha256,module,segment,source_file_offset,elf_va,rva,runtime_va,anchor,validation,status`。未做真实反汇编和断点验证不能填写臆测地址。见 [[15-锁闪函数调查单]]。
