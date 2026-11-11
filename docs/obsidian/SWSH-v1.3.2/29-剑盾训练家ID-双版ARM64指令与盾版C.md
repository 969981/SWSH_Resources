# 剑盾 v1.3.2 — 双版原始 ARM64 指令窗口与 Ghidra C

> 自动生成：分别核对两份 ELF 的 SHA-256，使用 LLVM 反汇编指定线性窗口；C 来自 Sword Ghidra 独立导出及 Shield Ghidra annotated C ZIP。这不是 Nintendo 原始代码，也**不等于 Ghidra 完整非连续函数体枚举**。

参见 [[28-剑盾训练家ID-双版ELF与Ghidra逐行审计]]。

## Sword

Verified SHA256: `4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43`

### state — Ghidra `0x00D87D80`, main+`0x00C87D80`

Linear window (not exact-body proof): `0x00D87D80`..`0x00D87FC0`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x00D87D80` | `0x00C87D80` | `c87d80:      	sub	sp, sp, #0x60` | 原始指令；未恢复确定的业务字段 |
| `0x00D87D84` | `0x00C87D84` | `c87d84:      	stp	x26, x25, [sp, #0x10]` | 写入内存/保存寄存器 |
| `0x00D87D88` | `0x00C87D88` | `c87d88:      	stp	x24, x23, [sp, #0x20]` | 写入内存/保存寄存器 |
| `0x00D87D8C` | `0x00C87D8C` | `c87d8c:      	stp	x22, x21, [sp, #0x30]` | 写入内存/保存寄存器 |
| `0x00D87D90` | `0x00C87D90` | `c87d90:      	stp	x20, x19, [sp, #0x40]` | 写入内存/保存寄存器 |
| `0x00D87D94` | `0x00C87D94` | `c87d94:      	stp	x29, x30, [sp, #0x50]` | 写入内存/保存寄存器 |
| `0x00D87D98` | `0x00C87D98` | `c87d98:      	add	x29, sp, #0x50` | 原始指令；未恢复确定的业务字段 |
| `0x00D87D9C` | `0x00C87D9C` | `c87d9c:      	adrp	x26, 0x2610000` | 构造相对页地址 |
| `0x00D87DA0` | `0x00C87DA0` | `c87da0:      	ldr	x26, [x26, #0x798]` | 读取内存/栈字段 |
| `0x00D87DA4` | `0x00C87DA4` | `c87da4:      	mov	x19, x0` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DA8` | `0x00C87DA8` | `c87da8:      	ldr	x0, [x26]` | 读取内存/栈字段 |
| `0x00D87DAC` | `0x00C87DAC` | `c87dac:      	tst	w1, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB0` | `0x00C87DB0` | `c87db0:      	orr	w8, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB4` | `0x00C87DB4` | `c87db4:      	mov	w20, w1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB8` | `0x00C87DB8` | `c87db8:      	cinc	w1, w8, ne` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DBC` | `0x00C87DBC` | `c87dbc:      	bl	0x143d5a0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd3b910>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87DC0` | `0x00C87DC0` | `c87dc0:      	cmp	w0, #0x4` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DC4` | `0x00C87DC4` | `c87dc4:      	str	w0, [x19, #0x94]` | 写入内存/保存寄存器 |
| `0x00D87DC8` | `0x00C87DC8` | `c87dc8:      	b.ne	0xc87ddc <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x58614c>` | 条件跳转 |
| `0x00D87DCC` | `0x00C87DCC` | `c87dcc:      	ldr	x0, [x26]` | 读取内存/栈字段 |
| `0x00D87DD0` | `0x00C87DD0` | `c87dd0:      	add	x1, sp, #0xc` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DD4` | `0x00C87DD4` | `c87dd4:      	str	wzr, [sp, #0xc]` | 写入内存/保存寄存器 |
| `0x00D87DD8` | `0x00C87DD8` | `c87dd8:      	bl	0x143d540 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd3b8b0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87DDC` | `0x00C87DDC` | `c87ddc:      	adrp	x25, 0x2610000` | 构造相对页地址 |
| `0x00D87DE0` | `0x00C87DE0` | `c87de0:      	ldr	x25, [x25, #0x848]` | 读取内存/栈字段 |
| `0x00D87DE4` | `0x00C87DE4` | `c87de4:      	ldr	x8, [x25]` | 读取内存/栈字段 |
| `0x00D87DE8` | `0x00C87DE8` | `c87de8:      	ldr	x21, [x8, #0x90]` | 读取内存/栈字段 |
| `0x00D87DEC` | `0x00C87DEC` | `c87dec:      	cbz	x21, 0xc87e00 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586170>` | 条件跳转 |
| `0x00D87DF0` | `0x00C87DF0` | `c87df0:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DF4` | `0x00C87DF4` | `c87df4:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x00D87DF8` | `0x00C87DF8` | `c87df8:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87DFC` | `0x00C87DFC` | `c87dfc:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E00` | `0x00C87E00` | `c87e00:      	ldr	x22, [x21, #0x7d0]` | 读取内存/栈字段 |
| `0x00D87E04` | `0x00C87E04` | `c87e04:      	cbz	x22, 0xc87e18 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586188>` | 条件跳转 |
| `0x00D87E08` | `0x00C87E08` | `c87e08:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E0C` | `0x00C87E0C` | `c87e0c:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E10` | `0x00C87E10` | `c87e10:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87E14` | `0x00C87E14` | `c87e14:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E18` | `0x00C87E18` | `c87e18:      	ldr	x23, [x22, #0x80]` | 读取内存/栈字段 |
| `0x00D87E1C` | `0x00C87E1C` | `c87e1c:      	cbz	x23, 0xc87e50 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5861c0>` | 条件跳转 |
| `0x00D87E20` | `0x00C87E20` | `c87e20:      	mov	x24, x23` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E24` | `0x00C87E24` | `c87e24:      	ldr	x8, [x24, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E28` | `0x00C87E28` | `c87e28:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87E2C` | `0x00C87E2C` | `c87e2c:      	mov	x0, x24` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E30` | `0x00C87E30` | `c87e30:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E34` | `0x00C87E34` | `c87e34:      	mov	x0, x23` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E38` | `0x00C87E38` | `c87e38:      	bl	0xea7da0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x7a6110>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87E3C` | `0x00C87E3C` | `c87e3c:      	ldr	x8, [x24]` | 读取内存/栈字段 |
| `0x00D87E40` | `0x00C87E40` | `c87e40:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E44` | `0x00C87E44` | `c87e44:      	mov	x0, x24` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E48` | `0x00C87E48` | `c87e48:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E4C` | `0x00C87E4C` | `c87e4c:      	b	0xc87e58 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5861c8>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E50` | `0x00C87E50` | `c87e50:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E54` | `0x00C87E54` | `c87e54:      	bl	0xea7da0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x7a6110>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87E58` | `0x00C87E58` | `c87e58:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E5C` | `0x00C87E5C` | `c87e5c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E60` | `0x00C87E60` | `c87e60:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E64` | `0x00C87E64` | `c87e64:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E68` | `0x00C87E68` | `c87e68:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E6C` | `0x00C87E6C` | `c87e6c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E70` | `0x00C87E70` | `c87e70:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E74` | `0x00C87E74` | `c87e74:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E78` | `0x00C87E78` | `c87e78:      	ldr	w8, [x19, #0x94]` | 读取内存/栈字段 |
| `0x00D87E7C` | `0x00C87E7C` | `c87e7c:      	orr	w8, w8, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E80` | `0x00C87E80` | `c87e80:      	cmp	w8, #0x3` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E84` | `0x00C87E84` | `c87e84:      	b.ne	0xc87ef4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586264>` | 条件跳转 |
| `0x00D87E88` | `0x00C87E88` | `c87e88:      	tbnz	w20, #0x0, 0xc87ec8 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586238>` | 条件跳转 |
| `0x00D87E8C` | `0x00C87E8C` | `c87e8c:      	ldr	x8, [x26]` | 读取内存/栈字段 |
| `0x00D87E90` | `0x00C87E90` | `c87e90:      	ldr	x20, [x8, #0x1e8]` | 读取内存/栈字段 |
| `0x00D87E94` | `0x00C87E94` | `c87e94:      	cbz	x20, 0xc87f54 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862c4>` | 条件跳转 |
| `0x00D87E98` | `0x00C87E98` | `c87e98:      	mov	x21, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E9C` | `0x00C87E9C` | `c87e9c:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x00D87EA0` | `0x00C87EA0` | `c87ea0:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87EA4` | `0x00C87EA4` | `c87ea4:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EA8` | `0x00C87EA8` | `c87ea8:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EAC` | `0x00C87EAC` | `c87eac:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EB0` | `0x00C87EB0` | `c87eb0:      	bl	0x1424d00 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd23070>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87EB4` | `0x00C87EB4` | `c87eb4:      	str	w0, [x19, #0x1f8]` | 写入内存/保存寄存器 |
| `0x00D87EB8` | `0x00C87EB8` | `c87eb8:      	ldr	x8, [x21]` | 读取内存/栈字段 |
| `0x00D87EBC` | `0x00C87EBC` | `c87ebc:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87EC0` | `0x00C87EC0` | `c87ec0:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EC4` | `0x00C87EC4` | `c87ec4:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EC8` | `0x00C87EC8` | `c87ec8:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87ECC` | `0x00C87ECC` | `c87ecc:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87ED0` | `0x00C87ED0` | `c87ed0:      	cbz	x21, 0xc87f6c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862dc>` | 条件跳转 |
| `0x00D87ED4` | `0x00C87ED4` | `c87ed4:      	mov	x22, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87ED8` | `0x00C87ED8` | `c87ed8:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87EDC` | `0x00C87EDC` | `c87edc:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87EE0` | `0x00C87EE0` | `c87ee0:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EE4` | `0x00C87EE4` | `c87ee4:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EE8` | `0x00C87EE8` | `c87ee8:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EEC` | `0x00C87EEC` | `c87eec:      	bl	0xf072d0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805640>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87EF0` | `0x00C87EF0` | `c87ef0:      	b	0xc87f1c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x58628c>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EF4` | `0x00C87EF4` | `c87ef4:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87EF8` | `0x00C87EF8` | `c87ef8:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87EFC` | `0x00C87EFC` | `c87efc:      	cbz	x21, 0xc87f48 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862b8>` | 条件跳转 |
| `0x00D87F00` | `0x00C87F00` | `c87f00:      	mov	x22, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F04` | `0x00C87F04` | `c87f04:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87F08` | `0x00C87F08` | `c87f08:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87F0C` | `0x00C87F0C` | `c87f0c:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F10` | `0x00C87F10` | `c87f10:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87F14` | `0x00C87F14` | `c87f14:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F18` | `0x00C87F18` | `c87f18:      	bl	0xf06f50 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8052c0>` | 关键调用候选[dispatch call #1]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F1C` | `0x00C87F1C` | `c87f1c:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F20` | `0x00C87F20` | `c87f20:      	bl	0xc87fc0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586330>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F24` | `0x00C87F24` | `c87f24:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F28` | `0x00C87F28` | `c87f28:      	bl	0xc88170 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5864e0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F2C` | `0x00C87F2C` | `c87f2c:      	ldr	x0, [x19, #0x88]` | 读取内存/栈字段 |
| `0x00D87F30` | `0x00C87F30` | `c87f30:      	bl	0xf0c420 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x80a790>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F34` | `0x00C87F34` | `c87f34:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x00D87F38` | `0x00C87F38` | `c87f38:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87F3C` | `0x00C87F3C` | `c87f3c:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F40` | `0x00C87F40` | `c87f40:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87F44` | `0x00C87F44` | `c87f44:      	b	0xc87f8c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862fc>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F48` | `0x00C87F48` | `c87f48:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F4C` | `0x00C87F4C` | `c87f4c:      	bl	0xf06f50 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8052c0>` | 关键调用候选[dispatch call #2]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F50` | `0x00C87F50` | `c87f50:      	b	0xc87f74 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862e4>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F54` | `0x00C87F54` | `c87f54:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F58` | `0x00C87F58` | `c87f58:      	bl	0x1424d00 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd23070>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F5C` | `0x00C87F5C` | `c87f5c:      	str	w0, [x19, #0x1f8]` | 写入内存/保存寄存器 |
| `0x00D87F60` | `0x00C87F60` | `c87f60:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87F64` | `0x00C87F64` | `c87f64:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87F68` | `0x00C87F68` | `c87f68:      	cbnz	x21, 0xc87ed4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586244>` | 条件跳转 |
| `0x00D87F6C` | `0x00C87F6C` | `c87f6c:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F70` | `0x00C87F70` | `c87f70:      	bl	0xf072d0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805640>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F74` | `0x00C87F74` | `c87f74:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F78` | `0x00C87F78` | `c87f78:      	bl	0xc87fc0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586330>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F7C` | `0x00C87F7C` | `c87f7c:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F80` | `0x00C87F80` | `c87f80:      	bl	0xc88170 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5864e0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F84` | `0x00C87F84` | `c87f84:      	ldr	x0, [x19, #0x88]` | 读取内存/栈字段 |
| `0x00D87F88` | `0x00C87F88` | `c87f88:      	bl	0xf0c420 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x80a790>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F8C` | `0x00C87F8C` | `c87f8c:      	ldp	x29, x30, [sp, #0x50]` | 读取内存/栈字段 |
| `0x00D87F90` | `0x00C87F90` | `c87f90:      	ldp	x20, x19, [sp, #0x40]` | 读取内存/栈字段 |
| `0x00D87F94` | `0x00C87F94` | `c87f94:      	ldp	x22, x21, [sp, #0x30]` | 读取内存/栈字段 |
| `0x00D87F98` | `0x00C87F98` | `c87f98:      	ldp	x24, x23, [sp, #0x20]` | 读取内存/栈字段 |
| `0x00D87F9C` | `0x00C87F9C` | `c87f9c:      	ldp	x26, x25, [sp, #0x10]` | 读取内存/栈字段 |
| `0x00D87FA0` | `0x00C87FA0` | `c87fa0:      	add	sp, sp, #0x60` | 原始指令；未恢复确定的业务字段 |
| `0x00D87FA4` | `0x00C87FA4` | `c87fa4:      	ret` | 函数返回 |
| `0x00D87FB0` | `0x00C87FB0` | `c87fb0:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d87d80; name: FUN_00d87d80
 */


void FUN_00d87d80(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_02710798;
  uVar4 = 1;
  if ((param_2 & 1) != 0) {
    uVar4 = 2;
  }
  iVar3 = FUN_0153d5a0(*(undefined8 *)PTR_DAT_02710798,uVar4);
  *(int *)(param_1 + 0x94) = iVar3;
  if (iVar3 == 4) {
    local_54 = 0;
    FUN_0153d540(*(undefined8 *)puVar1,&local_54);
  }
  puVar2 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 2000);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x80);
  if (lVar8 == 0) {
    FUN_00fa7da0(0);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_00fa7da0(lVar8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if ((*(uint *)(param_1 + 0x94) | 1) != 3) {
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
    if (lVar7 == 0) {
      uVar5 = FUN_01006f50(0);
      goto LAB_00d87f74;
    }
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar5 = FUN_01006f50(lVar7);
    goto LAB_00d87f1c;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(*(long *)puVar1 + 0x1e8);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar4 = FUN_01524d00(lVar6);
      *(undefined4 *)(param_1 + 0x1f8) = uVar4;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      goto LAB_00d87ec8;
    }
    uVar4 = FUN_01524d00(0);
    *(undefined4 *)(param_1 + 0x1f8) = uVar4;
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  else {
LAB_00d87ec8:
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  if (lVar7 == 0) {
    uVar5 = FUN_010072d0(0);
LAB_00d87f74:
    uVar5 = FUN_00d87fc0(uVar5,lVar6);
    FUN_00d88170(uVar5,lVar6);
    FUN_0100c420(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  plVar9 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar5 = FUN_010072d0(lVar7);
LAB_00d87f1c:
  uVar5 = FUN_00d87fc0(uVar5,lVar6);
  FUN_00d88170(uVar5,lVar6);
  FUN_0100c420(*(undefined8 *)(param_1 + 0x88));
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return;
}
```

### generator — Ghidra `0x01006F50`, main+`0x00F06F50`

Linear window (not exact-body proof): `0x01006F50`..`0x01007280`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01006F50` | `0x00F06F50` | `f06f50:      	str	x28, [sp, #-0x40]!` | 写入内存/保存寄存器 |
| `0x01006F54` | `0x00F06F54` | `f06f54:      	stp	x22, x21, [sp, #0x10]` | 写入内存/保存寄存器 |
| `0x01006F58` | `0x00F06F58` | `f06f58:      	stp	x20, x19, [sp, #0x20]` | 写入内存/保存寄存器 |
| `0x01006F5C` | `0x00F06F5C` | `f06f5c:      	stp	x29, x30, [sp, #0x30]` | 写入内存/保存寄存器 |
| `0x01006F60` | `0x00F06F60` | `f06f60:      	add	x29, sp, #0x30` | 原始指令；未恢复确定的业务字段 |
| `0x01006F64` | `0x00F06F64` | `f06f64:      	sub	sp, sp, #0x1d0` | 原始指令；未恢复确定的业务字段 |
| `0x01006F68` | `0x00F06F68` | `f06f68:      	adrp	x22, 0x2610000` | 构造相对页地址 |
| `0x01006F6C` | `0x00F06F6C` | `f06f6c:      	ldr	x22, [x22, #0x798]` | 读取内存/栈字段 |
| `0x01006F70` | `0x00F06F70` | `f06f70:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01006F74` | `0x00F06F74` | `f06f74:      	ldr	x19, [x8, #0x1e8]` | 读取内存/栈字段 |
| `0x01006F78` | `0x00F06F78` | `f06f78:      	mov	x21, x0` | 原始指令；未恢复确定的业务字段 |
| `0x01006F7C` | `0x00F06F7C` | `f06f7c:      	cbz	x19, 0xf06f90 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805300>` | 条件跳转 |
| `0x01006F80` | `0x00F06F80` | `f06f80:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01006F84` | `0x00F06F84` | `f06f84:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01006F88` | `0x00F06F88` | `f06f88:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01006F8C` | `0x00F06F8C` | `f06f8c:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01006F90` | `0x00F06F90` | `f06f90:      	add	x0, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01006F94` | `0x00F06F94` | `f06f94:      	orr	w1, wzr, #0x4` | 原始指令；未恢复确定的业务字段 |
| `0x01006F98` | `0x00F06F98` | `f06f98:      	bl	0x18ff700 <_ZN2nn6crypto36GenerateCryptographicallyRandomBytesEPvm@plt>` | 关键调用候选[CSPRNG]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006F9C` | `0x00F06F9C` | `f06f9c:      	ldr	w1, [sp, #0x8]` | 读取内存/栈字段 |
| `0x01006FA0` | `0x00F06FA0` | `f06fa0:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01006FA4` | `0x00F06FA4` | `f06fa4:      	bl	0x1424cf0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd23060>` | 关键调用候选[ID32 setter]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FA8` | `0x00F06FA8` | `f06fa8:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01006FAC` | `0x00F06FAC` | `f06fac:      	ldr	x20, [x8, #0x1f0]` | 读取内存/栈字段 |
| `0x01006FB0` | `0x00F06FB0` | `f06fb0:      	cbz	x20, 0xf06fc4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805334>` | 条件跳转 |
| `0x01006FB4` | `0x00F06FB4` | `f06fb4:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01006FB8` | `0x00F06FB8` | `f06fb8:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01006FBC` | `0x00F06FBC` | `f06fbc:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01006FC0` | `0x00F06FC0` | `f06fc0:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01006FC4` | `0x00F06FC4` | `f06fc4:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01006FC8` | `0x00F06FC8` | `f06fc8:      	bl	0x140dec0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd0c230>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FCC` | `0x00F06FCC` | `f06fcc:      	bl	0x13be100 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcbc470>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FD0` | `0x00F06FD0` | `f06fd0:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01006FD4` | `0x00F06FD4` | `f06fd4:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01006FD8` | `0x00F06FD8` | `f06fd8:      	mov	w1, wzr` | 原始指令；未恢复确定的业务字段 |
| `0x01006FDC` | `0x00F06FDC` | `f06fdc:      	bl	0xf0a950 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cc0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FE0` | `0x00F06FE0` | `f06fe0:      	orr	w1, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01006FE4` | `0x00F06FE4` | `f06fe4:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01006FE8` | `0x00F06FE8` | `f06fe8:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01006FEC` | `0x00F06FEC` | `f06fec:      	bl	0xf0a950 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cc0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FF0` | `0x00F06FF0` | `f06ff0:      	orr	w1, wzr, #0x2` | 原始指令；未恢复确定的业务字段 |
| `0x01006FF4` | `0x00F06FF4` | `f06ff4:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01006FF8` | `0x00F06FF8` | `f06ff8:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01006FFC` | `0x00F06FFC` | `f06ffc:      	bl	0xf0a950 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cc0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007000` | `0x00F07000` | `f07000:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01007004` | `0x00F07004` | `f07004:      	ldr	x21, [x8, #0x288]` | 读取内存/栈字段 |
| `0x01007008` | `0x00F07008` | `f07008:      	cbz	x21, 0xf0701c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x80538c>` | 条件跳转 |
| `0x0100700C` | `0x00F0700C` | `f0700c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007010` | `0x00F07010` | `f07010:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01007014` | `0x00F07014` | `f07014:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01007018` | `0x00F07018` | `f07018:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x0100701C` | `0x00F0701C` | `f0701c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007020` | `0x00F07020` | `f07020:      	bl	0x13fba00 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcf9d70>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007024` | `0x00F07024` | `f07024:      	mov	x22, x0` | 原始指令；未恢复确定的业务字段 |
| `0x01007028` | `0x00F07028` | `f07028:      	mov	w2, #0xc8               // =200` | 原始指令；未恢复确定的业务字段 |
| `0x0100702C` | `0x00F0702C` | `f0702c:      	add	x0, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01007030` | `0x00F07030` | `f07030:      	mov	x1, x22` | 原始指令；未恢复确定的业务字段 |
| `0x01007034` | `0x00F07034` | `f07034:      	bl	0x18fddc0 <memcpy@plt>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007038` | `0x00F07038` | `f07038:      	ldr	w8, [x22, #0xc8]` | 读取内存/栈字段 |
| `0x0100703C` | `0x00F0703C` | `f0703c:      	str	w8, [sp, #0xd0]` | 写入内存/保存寄存器 |
| `0x01007040` | `0x00F07040` | `f07040:      	ldrh	w8, [x22, #0xcc]` | 读取内存/栈字段 |
| `0x01007044` | `0x00F07044` | `f07044:      	strh	w8, [sp, #0xd4]` | 写入内存/保存寄存器 |
| `0x01007048` | `0x00F07048` | `f07048:      	ldr	w8, [x22, #0xd0]` | 读取内存/栈字段 |
| `0x0100704C` | `0x00F0704C` | `f0704c:      	str	w8, [sp, #0xd8]` | 写入内存/保存寄存器 |
| `0x01007050` | `0x00F07050` | `f07050:      	ldrb	w8, [x22, #0xd4]` | 读取内存/栈字段 |
| `0x01007054` | `0x00F07054` | `f07054:      	strb	w8, [sp, #0xdc]` | 写入内存/保存寄存器 |
| `0x01007058` | `0x00F07058` | `f07058:      	ldrb	w8, [x22, #0xd5]` | 读取内存/栈字段 |
| `0x0100705C` | `0x00F0705C` | `f0705c:      	strb	w8, [sp, #0xdd]` | 写入内存/保存寄存器 |
| `0x01007060` | `0x00F07060` | `f07060:      	ldr	w8, [x22, #0xd8]` | 读取内存/栈字段 |
| `0x01007064` | `0x00F07064` | `f07064:      	str	w8, [sp, #0xe0]` | 写入内存/保存寄存器 |
| `0x01007068` | `0x00F07068` | `f07068:      	ldr	w8, [x22, #0xdc]` | 读取内存/栈字段 |
| `0x0100706C` | `0x00F0706C` | `f0706c:      	str	w8, [sp, #0xe4]` | 写入内存/保存寄存器 |
| `0x01007070` | `0x00F07070` | `f07070:      	ldr	w8, [x22, #0xe0]` | 读取内存/栈字段 |
| `0x01007074` | `0x00F07074` | `f07074:      	str	w8, [sp, #0xe8]` | 写入内存/保存寄存器 |
| `0x01007078` | `0x00F07078` | `f07078:      	ldr	w8, [x22, #0xe4]` | 读取内存/栈字段 |
| `0x0100707C` | `0x00F0707C` | `f0707c:      	str	w8, [sp, #0xec]` | 写入内存/保存寄存器 |
| `0x01007080` | `0x00F07080` | `f07080:      	ldrh	w8, [x22, #0xe8]` | 读取内存/栈字段 |
| `0x01007084` | `0x00F07084` | `f07084:      	strh	w8, [sp, #0xf0]` | 写入内存/保存寄存器 |
| `0x01007088` | `0x00F07088` | `f07088:      	ldr	w8, [x22, #0xec]` | 读取内存/栈字段 |
| `0x0100708C` | `0x00F0708C` | `f0708c:      	str	w8, [sp, #0xf4]` | 写入内存/保存寄存器 |
| `0x01007090` | `0x00F07090` | `f07090:      	ldrb	w8, [x22, #0xf0]` | 读取内存/栈字段 |
| `0x01007094` | `0x00F07094` | `f07094:      	strb	w8, [sp, #0xf8]` | 写入内存/保存寄存器 |
| `0x01007098` | `0x00F07098` | `f07098:      	ldrb	w8, [x22, #0xf1]` | 读取内存/栈字段 |
| `0x0100709C` | `0x00F0709C` | `f0709c:      	strb	w8, [sp, #0xf9]` | 写入内存/保存寄存器 |
| `0x010070A0` | `0x00F070A0` | `f070a0:      	ldr	w8, [x22, #0xf4]` | 读取内存/栈字段 |
| `0x010070A4` | `0x00F070A4` | `f070a4:      	str	w8, [sp, #0xfc]` | 写入内存/保存寄存器 |
| `0x010070A8` | `0x00F070A8` | `f070a8:      	ldr	w8, [x22, #0xf8]` | 读取内存/栈字段 |
| `0x010070AC` | `0x00F070AC` | `f070ac:      	str	w8, [sp, #0x100]` | 写入内存/保存寄存器 |
| `0x010070B0` | `0x00F070B0` | `f070b0:      	ldr	w8, [x22, #0xfc]` | 读取内存/栈字段 |
| `0x010070B4` | `0x00F070B4` | `f070b4:      	str	w8, [sp, #0x104]` | 写入内存/保存寄存器 |
| `0x010070B8` | `0x00F070B8` | `f070b8:      	ldr	w8, [x22, #0x100]` | 读取内存/栈字段 |
| `0x010070BC` | `0x00F070BC` | `f070bc:      	str	w8, [sp, #0x108]` | 写入内存/保存寄存器 |
| `0x010070C0` | `0x00F070C0` | `f070c0:      	ldrh	w8, [x22, #0x104]` | 读取内存/栈字段 |
| `0x010070C4` | `0x00F070C4` | `f070c4:      	strh	w8, [sp, #0x10c]` | 写入内存/保存寄存器 |
| `0x010070C8` | `0x00F070C8` | `f070c8:      	ldr	w8, [x22, #0x108]` | 读取内存/栈字段 |
| `0x010070CC` | `0x00F070CC` | `f070cc:      	str	w8, [sp, #0x110]` | 写入内存/保存寄存器 |
| `0x010070D0` | `0x00F070D0` | `f070d0:      	ldrb	w8, [x22, #0x10c]` | 读取内存/栈字段 |
| `0x010070D4` | `0x00F070D4` | `f070d4:      	strb	w8, [sp, #0x114]` | 写入内存/保存寄存器 |
| `0x010070D8` | `0x00F070D8` | `f070d8:      	ldrb	w8, [x22, #0x10d]` | 读取内存/栈字段 |
| `0x010070DC` | `0x00F070DC` | `f070dc:      	strb	w8, [sp, #0x115]` | 写入内存/保存寄存器 |
| `0x010070E0` | `0x00F070E0` | `f070e0:      	ldr	w8, [x22, #0x110]` | 读取内存/栈字段 |
| `0x010070E4` | `0x00F070E4` | `f070e4:      	str	w8, [sp, #0x118]` | 写入内存/保存寄存器 |
| `0x010070E8` | `0x00F070E8` | `f070e8:      	ldr	w8, [x22, #0x114]` | 读取内存/栈字段 |
| `0x010070EC` | `0x00F070EC` | `f070ec:      	str	w8, [sp, #0x11c]` | 写入内存/保存寄存器 |
| `0x010070F0` | `0x00F070F0` | `f070f0:      	ldr	w8, [x22, #0x118]` | 读取内存/栈字段 |
| `0x010070F4` | `0x00F070F4` | `f070f4:      	str	w8, [sp, #0x120]` | 写入内存/保存寄存器 |
| `0x010070F8` | `0x00F070F8` | `f070f8:      	ldr	w8, [x22, #0x11c]` | 读取内存/栈字段 |
| `0x010070FC` | `0x00F070FC` | `f070fc:      	str	w8, [sp, #0x124]` | 写入内存/保存寄存器 |
| `0x01007100` | `0x00F07100` | `f07100:      	ldrh	w8, [x22, #0x120]` | 读取内存/栈字段 |
| `0x01007104` | `0x00F07104` | `f07104:      	strh	w8, [sp, #0x128]` | 写入内存/保存寄存器 |
| `0x01007108` | `0x00F07108` | `f07108:      	ldr	w8, [x22, #0x124]` | 读取内存/栈字段 |
| `0x0100710C` | `0x00F0710C` | `f0710c:      	str	w8, [sp, #0x12c]` | 写入内存/保存寄存器 |
| `0x01007110` | `0x00F07110` | `f07110:      	ldrb	w8, [x22, #0x128]` | 读取内存/栈字段 |
| `0x01007114` | `0x00F07114` | `f07114:      	strb	w8, [sp, #0x130]` | 写入内存/保存寄存器 |
| `0x01007118` | `0x00F07118` | `f07118:      	ldrb	w8, [x22, #0x129]` | 读取内存/栈字段 |
| `0x0100711C` | `0x00F0711C` | `f0711c:      	strb	w8, [sp, #0x131]` | 写入内存/保存寄存器 |
| `0x01007120` | `0x00F07120` | `f07120:      	ldr	w8, [x22, #0x12c]` | 读取内存/栈字段 |
| `0x01007124` | `0x00F07124` | `f07124:      	str	w8, [sp, #0x134]` | 写入内存/保存寄存器 |
| `0x01007128` | `0x00F07128` | `f07128:      	ldr	w8, [x22, #0x130]` | 读取内存/栈字段 |
| `0x0100712C` | `0x00F0712C` | `f0712c:      	str	w8, [sp, #0x138]` | 写入内存/保存寄存器 |
| `0x01007130` | `0x00F07130` | `f07130:      	ldr	w8, [x22, #0x134]` | 读取内存/栈字段 |
| `0x01007134` | `0x00F07134` | `f07134:      	str	w8, [sp, #0x13c]` | 写入内存/保存寄存器 |
| `0x01007138` | `0x00F07138` | `f07138:      	ldr	w8, [x22, #0x138]` | 读取内存/栈字段 |
| `0x0100713C` | `0x00F0713C` | `f0713c:      	str	w8, [sp, #0x140]` | 写入内存/保存寄存器 |
| `0x01007140` | `0x00F07140` | `f07140:      	ldrh	w8, [x22, #0x13c]` | 读取内存/栈字段 |
| `0x01007144` | `0x00F07144` | `f07144:      	strh	w8, [sp, #0x144]` | 写入内存/保存寄存器 |
| `0x01007148` | `0x00F07148` | `f07148:      	ldr	w8, [x22, #0x140]` | 读取内存/栈字段 |
| `0x0100714C` | `0x00F0714C` | `f0714c:      	str	w8, [sp, #0x148]` | 写入内存/保存寄存器 |
| `0x01007150` | `0x00F07150` | `f07150:      	ldrb	w8, [x22, #0x144]` | 读取内存/栈字段 |
| `0x01007154` | `0x00F07154` | `f07154:      	strb	w8, [sp, #0x14c]` | 写入内存/保存寄存器 |
| `0x01007158` | `0x00F07158` | `f07158:      	ldrb	w8, [x22, #0x145]` | 读取内存/栈字段 |
| `0x0100715C` | `0x00F0715C` | `f0715c:      	strb	w8, [sp, #0x14d]` | 写入内存/保存寄存器 |
| `0x01007160` | `0x00F07160` | `f07160:      	ldr	w8, [x22, #0x148]` | 读取内存/栈字段 |
| `0x01007164` | `0x00F07164` | `f07164:      	str	w8, [sp, #0x150]` | 写入内存/保存寄存器 |
| `0x01007168` | `0x00F07168` | `f07168:      	ldr	w8, [x22, #0x14c]` | 读取内存/栈字段 |
| `0x0100716C` | `0x00F0716C` | `f0716c:      	str	w8, [sp, #0x154]` | 写入内存/保存寄存器 |
| `0x01007170` | `0x00F07170` | `f07170:      	ldr	w8, [x22, #0x150]` | 读取内存/栈字段 |
| `0x01007174` | `0x00F07174` | `f07174:      	str	w8, [sp, #0x158]` | 写入内存/保存寄存器 |
| `0x01007178` | `0x00F07178` | `f07178:      	ldr	w8, [x22, #0x154]` | 读取内存/栈字段 |
| `0x0100717C` | `0x00F0717C` | `f0717c:      	str	w8, [sp, #0x15c]` | 写入内存/保存寄存器 |
| `0x01007180` | `0x00F07180` | `f07180:      	ldrh	w8, [x22, #0x158]` | 读取内存/栈字段 |
| `0x01007184` | `0x00F07184` | `f07184:      	strh	w8, [sp, #0x160]` | 写入内存/保存寄存器 |
| `0x01007188` | `0x00F07188` | `f07188:      	ldr	w8, [x22, #0x15c]` | 读取内存/栈字段 |
| `0x0100718C` | `0x00F0718C` | `f0718c:      	str	w8, [sp, #0x164]` | 写入内存/保存寄存器 |
| `0x01007190` | `0x00F07190` | `f07190:      	ldrb	w8, [x22, #0x160]` | 读取内存/栈字段 |
| `0x01007194` | `0x00F07194` | `f07194:      	strb	w8, [sp, #0x168]` | 写入内存/保存寄存器 |
| `0x01007198` | `0x00F07198` | `f07198:      	ldrb	w8, [x22, #0x161]` | 读取内存/栈字段 |
| `0x0100719C` | `0x00F0719C` | `f0719c:      	strb	w8, [sp, #0x169]` | 写入内存/保存寄存器 |
| `0x010071A0` | `0x00F071A0` | `f071a0:      	ldr	w8, [x22, #0x164]` | 读取内存/栈字段 |
| `0x010071A4` | `0x00F071A4` | `f071a4:      	str	w8, [sp, #0x16c]` | 写入内存/保存寄存器 |
| `0x010071A8` | `0x00F071A8` | `f071a8:      	ldr	w8, [x22, #0x168]` | 读取内存/栈字段 |
| `0x010071AC` | `0x00F071AC` | `f071ac:      	str	w8, [sp, #0x170]` | 写入内存/保存寄存器 |
| `0x010071B0` | `0x00F071B0` | `f071b0:      	ldr	w8, [x22, #0x16c]` | 读取内存/栈字段 |
| `0x010071B4` | `0x00F071B4` | `f071b4:      	str	w8, [sp, #0x174]` | 写入内存/保存寄存器 |
| `0x010071B8` | `0x00F071B8` | `f071b8:      	ldp	x8, x9, [x22, #0x170]` | 读取内存/栈字段 |
| `0x010071BC` | `0x00F071BC` | `f071bc:      	ldr	x10, [x22, #0x180]` | 读取内存/栈字段 |
| `0x010071C0` | `0x00F071C0` | `f071c0:      	stp	x9, x10, [sp, #0x180]` | 写入内存/保存寄存器 |
| `0x010071C4` | `0x00F071C4` | `f071c4:      	str	x8, [sp, #0x178]` | 写入内存/保存寄存器 |
| `0x010071C8` | `0x00F071C8` | `f071c8:      	ldp	x8, x9, [x22, #0x188]` | 读取内存/栈字段 |
| `0x010071CC` | `0x00F071CC` | `f071cc:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x010071D0` | `0x00F071D0` | `f071d0:      	ldp	x10, x11, [x22, #0x198]` | 读取内存/栈字段 |
| `0x010071D4` | `0x00F071D4` | `f071d4:      	stp	x10, x11, [sp, #0x1a0]` | 写入内存/保存寄存器 |
| `0x010071D8` | `0x00F071D8` | `f071d8:      	stp	x8, x9, [sp, #0x190]` | 写入内存/保存寄存器 |
| `0x010071DC` | `0x00F071DC` | `f071dc:      	ldr	x10, [x22, #0x1b8]` | 读取内存/栈字段 |
| `0x010071E0` | `0x00F071E0` | `f071e0:      	ldp	x8, x9, [x22, #0x1a8]` | 读取内存/栈字段 |
| `0x010071E4` | `0x00F071E4` | `f071e4:      	ldr	w11, [x22, #0x1c0]` | 读取内存/栈字段 |
| `0x010071E8` | `0x00F071E8` | `f071e8:      	str	w11, [sp, #0x1c8]` | 写入内存/保存寄存器 |
| `0x010071EC` | `0x00F071EC` | `f071ec:      	stp	x9, x10, [sp, #0x1b8]` | 写入内存/保存寄存器 |
| `0x010071F0` | `0x00F071F0` | `f071f0:      	str	x8, [sp, #0x1b0]` | 写入内存/保存寄存器 |
| `0x010071F4` | `0x00F071F4` | `f071f4:      	bl	0x1424d10 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd23080>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x010071F8` | `0x00F071F8` | `f071f8:      	str	w0, [sp, #0x24]` | 写入内存/保存寄存器 |
| `0x010071FC` | `0x00F071FC` | `f071fc:      	add	x1, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01007200` | `0x00F07200` | `f07200:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007204` | `0x00F07204` | `f07204:      	mov	w2, wzr` | 原始指令；未恢复确定的业务字段 |
| `0x01007208` | `0x00F07208` | `f07208:      	bl	0x13fba10 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcf9d80>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x0100720C` | `0x00F0720C` | `f0720c:      	adrp	x8, 0x2610000` | 构造相对页地址 |
| `0x01007210` | `0x00F07210` | `f07210:      	ldr	x8, [x8, #0x540]` | 读取内存/栈字段 |
| `0x01007214` | `0x00F07214` | `f07214:      	ldr	x8, [x8]` | 读取内存/栈字段 |
| `0x01007218` | `0x00F07218` | `f07218:      	ldr	x0, [x8, #0x288]` | 读取内存/栈字段 |
| `0x0100721C` | `0x00F0721C` | `f0721c:      	bl	0x158e710 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xe8ca80>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007220` | `0x00F07220` | `f07220:      	cbz	x21, 0xf07234 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055a4>` | 条件跳转 |
| `0x01007224` | `0x00F07224` | `f07224:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x01007228` | `0x00F07228` | `f07228:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x0100722C` | `0x00F0722C` | `f0722c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007230` | `0x00F07230` | `f07230:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01007234` | `0x00F07234` | `f07234:      	cbz	x20, 0xf07248 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055b8>` | 条件跳转 |
| `0x01007238` | `0x00F07238` | `f07238:      	ldr	x8, [x20, #0x48]!` | 读取内存/栈字段 |
| `0x0100723C` | `0x00F0723C` | `f0723c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x01007240` | `0x00F07240` | `f07240:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01007244` | `0x00F07244` | `f07244:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01007248` | `0x00F07248` | `f07248:      	cbz	x19, 0xf0725c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055cc>` | 条件跳转 |
| `0x0100724C` | `0x00F0724C` | `f0724c:      	ldr	x8, [x19, #0x48]!` | 读取内存/栈字段 |
| `0x01007250` | `0x00F07250` | `f07250:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x01007254` | `0x00F07254` | `f07254:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01007258` | `0x00F07258` | `f07258:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x0100725C` | `0x00F0725C` | `f0725c:      	add	sp, sp, #0x1d0` | 原始指令；未恢复确定的业务字段 |
| `0x01007260` | `0x00F07260` | `f07260:      	ldp	x29, x30, [sp, #0x30]` | 读取内存/栈字段 |
| `0x01007264` | `0x00F07264` | `f07264:      	ldp	x20, x19, [sp, #0x20]` | 读取内存/栈字段 |
| `0x01007268` | `0x00F07268` | `f07268:      	ldp	x22, x21, [sp, #0x10]` | 读取内存/栈字段 |
| `0x0100726C` | `0x00F0726C` | `f0726c:      	ldr	x28, [sp], #0x40` | 读取内存/栈字段 |
| `0x01007270` | `0x00F07270` | `f07270:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01006f50; name: FUN_01006f50
 */


void FUN_01006f50(undefined8 param_1)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_208 [7];
  undefined4 local_1ec;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_02710798;
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  nn::crypto::GenerateCryptographicallyRandomBytes(local_208,4);
  FUN_01524cf0(lVar2,local_208[0]);
  lVar3 = *(long *)(*(long *)puVar1 + 0x1f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_0150dec0(lVar3);
  FUN_014be100();
  FUN_0100a950(param_1,0,1);
  FUN_0100a950(param_1,1,1);
  FUN_0100a950(param_1,2,1);
  lVar4 = *(long *)(*(long *)puVar1 + 0x288);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  __src = (void *)FUN_014fba00(lVar4);
  memcpy(local_208,__src,200);
  local_140 = *(undefined4 *)((long)__src + 200);
  local_13c = *(undefined2 *)((long)__src + 0xcc);
  local_138 = *(undefined4 *)((long)__src + 0xd0);
  local_134 = *(undefined1 *)((long)__src + 0xd4);
  local_133 = *(undefined1 *)((long)__src + 0xd5);
  local_130 = *(undefined4 *)((long)__src + 0xd8);
  local_12c = *(undefined4 *)((long)__src + 0xdc);
  local_128 = *(undefined4 *)((long)__src + 0xe0);
  local_124 = *(undefined4 *)((long)__src + 0xe4);
  local_120 = *(undefined2 *)((long)__src + 0xe8);
  local_11c = *(undefined4 *)((long)__src + 0xec);
  local_118 = *(undefined1 *)((long)__src + 0xf0);
  local_117 = *(undefined1 *)((long)__src + 0xf1);
  local_114 = *(undefined4 *)((long)__src + 0xf4);
  local_110 = *(undefined4 *)((long)__src + 0xf8);
  local_10c = *(undefined4 *)((long)__src + 0xfc);
  local_108 = *(undefined4 *)((long)__src + 0x100);
  local_104 = *(undefined2 *)((long)__src + 0x104);
  local_100 = *(undefined4 *)((long)__src + 0x108);
  local_fc = *(undefined1 *)((long)__src + 0x10c);
  local_fb = *(undefined1 *)((long)__src + 0x10d);
  local_f8 = *(undefined4 *)((long)__src + 0x110);
  local_f4 = *(undefined4 *)((long)__src + 0x114);
  local_f0 = *(undefined4 *)((long)__src + 0x118);
  local_ec = *(undefined4 *)((long)__src + 0x11c);
  local_e8 = *(undefined2 *)((long)__src + 0x120);
  local_e4 = *(undefined4 *)((long)__src + 0x124);
  local_e0 = *(undefined1 *)((long)__src + 0x128);
  local_df = *(undefined1 *)((long)__src + 0x129);
  local_dc = *(undefined4 *)((long)__src + 300);
  local_d8 = *(undefined4 *)((long)__src + 0x130);
  local_d4 = *(undefined4 *)((long)__src + 0x134);
  local_d0 = *(undefined4 *)((long)__src + 0x138);
  local_cc = *(undefined2 *)((long)__src + 0x13c);
  local_c8 = *(undefined4 *)((long)__src + 0x140);
  local_c4 = *(undefined1 *)((long)__src + 0x144);
  local_c3 = *(undefined1 *)((long)__src + 0x145);
  local_c0 = *(undefined4 *)((long)__src + 0x148);
  local_bc = *(undefined4 *)((long)__src + 0x14c);
  local_b8 = *(undefined4 *)((long)__src + 0x150);
  local_b4 = *(undefined4 *)((long)__src + 0x154);
  local_b0 = *(undefined2 *)((long)__src + 0x158);
  local_ac = *(undefined4 *)((long)__src + 0x15c);
  local_a8 = *(undefined1 *)((long)__src + 0x160);
  local_a7 = *(undefined1 *)((long)__src + 0x161);
  local_a4 = *(undefined4 *)((long)__src + 0x164);
  local_a0 = *(undefined4 *)((long)__src + 0x168);
  local_9c = *(undefined4 *)((long)__src + 0x16c);
  local_98 = *(undefined8 *)((long)__src + 0x170);
  local_90 = *(undefined8 *)((long)__src + 0x178);
  uStack_88 = *(undefined8 *)((long)__src + 0x180);
  local_80 = *(undefined8 *)((long)__src + 0x188);
  uStack_78 = *(undefined8 *)((long)__src + 400);
  local_70 = *(undefined8 *)((long)__src + 0x198);
  uStack_68 = *(undefined8 *)((long)__src + 0x1a0);
  uStack_50 = *(undefined8 *)((long)__src + 0x1b8);
  local_60 = *(undefined8 *)((long)__src + 0x1a8);
  local_58 = *(undefined8 *)((long)__src + 0x1b0);
  local_48 = *(undefined4 *)((long)__src + 0x1c0);
  local_1ec = FUN_01524d10(lVar2);
  FUN_014fba10(lVar4,local_208,0);
  FUN_0168e710(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}
```

### setter — Ghidra `0x01524CF0`, main+`0x01424CF0`

Linear window (not exact-body proof): `0x01524CF0`..`0x01524D00`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524CF0` | `0x01424CF0` | `1424cf0:      	str	w1, [x0, #0x100]` | 写入内存/保存寄存器 |
| `0x01524CF4` | `0x01424CF4` | `1424cf4:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524cf0; name: FUN_01524cf0
 */


void FUN_01524cf0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = param_2;
  return;
}
```

### raw_get — Ghidra `0x01524D00`, main+`0x01424D00`

Linear window (not exact-body proof): `0x01524D00`..`0x01524D10`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524D00` | `0x01424D00` | `1424d00:      	ldr	w0, [x0, #0x100]` | 读取内存/栈字段 |
| `0x01524D04` | `0x01424D04` | `1424d04:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524d00; name: FUN_01524d00
 */


undefined4 FUN_01524d00(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}
```

### six_get — Ghidra `0x01524D10`, main+`0x01424D10`

Linear window (not exact-body proof): `0x01524D10`..`0x01524D30`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524D10` | `0x01424D10` | `1424d10:      	ldr	w8, [x0, #0x100]` | 读取内存/栈字段 |
| `0x01524D14` | `0x01424D14` | `1424d14:      	mov	w9, #0xde83             // =56963` | 原始指令；未恢复确定的业务字段 |
| `0x01524D18` | `0x01424D18` | `1424d18:      	movk	w9, #0x431b, lsl #16` | 原始指令；未恢复确定的业务字段 |
| `0x01524D1C` | `0x01424D1C` | `1424d1c:      	mul	x9, x8, x9` | 原始指令；未恢复确定的业务字段 |
| `0x01524D20` | `0x01424D20` | `1424d20:      	lsr	x9, x9, #50` | 原始指令；未恢复确定的业务字段 |
| `0x01524D24` | `0x01424D24` | `1424d24:      	mov	w10, #0x4240            // =16960` | 原始指令；未恢复确定的业务字段 |
| `0x01524D28` | `0x01424D28` | `1424d28:      	movk	w10, #0xf, lsl #16` | 原始指令；未恢复确定的业务字段 |
| `0x01524D2C` | `0x01424D2C` | `1424d2c:      	msub	w0, w9, w10, w8` | 除法/乘减组合，候选取模 |

本函数的完整 Ghidra C 伪代码：

```c
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01524d10; name: FUN_01524d10
 */


uint FUN_01524d10(long param_1)

{
  return *(uint *)(param_1 + 0x100) % 1000000;
}
```

## Shield

Verified SHA256: `a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a`

### state — Ghidra `0x00D87D80`, main+`0x00C87D80`

Linear window (not exact-body proof): `0x00D87D80`..`0x00D87FC0`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x00D87D80` | `0x00C87D80` | `c87d80:      	sub	sp, sp, #0x60` | 原始指令；未恢复确定的业务字段 |
| `0x00D87D84` | `0x00C87D84` | `c87d84:      	stp	x26, x25, [sp, #0x10]` | 写入内存/保存寄存器 |
| `0x00D87D88` | `0x00C87D88` | `c87d88:      	stp	x24, x23, [sp, #0x20]` | 写入内存/保存寄存器 |
| `0x00D87D8C` | `0x00C87D8C` | `c87d8c:      	stp	x22, x21, [sp, #0x30]` | 写入内存/保存寄存器 |
| `0x00D87D90` | `0x00C87D90` | `c87d90:      	stp	x20, x19, [sp, #0x40]` | 写入内存/保存寄存器 |
| `0x00D87D94` | `0x00C87D94` | `c87d94:      	stp	x29, x30, [sp, #0x50]` | 写入内存/保存寄存器 |
| `0x00D87D98` | `0x00C87D98` | `c87d98:      	add	x29, sp, #0x50` | 原始指令；未恢复确定的业务字段 |
| `0x00D87D9C` | `0x00C87D9C` | `c87d9c:      	adrp	x26, 0x2610000` | 构造相对页地址 |
| `0x00D87DA0` | `0x00C87DA0` | `c87da0:      	ldr	x26, [x26, #0x798]` | 读取内存/栈字段 |
| `0x00D87DA4` | `0x00C87DA4` | `c87da4:      	mov	x19, x0` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DA8` | `0x00C87DA8` | `c87da8:      	ldr	x0, [x26]` | 读取内存/栈字段 |
| `0x00D87DAC` | `0x00C87DAC` | `c87dac:      	tst	w1, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB0` | `0x00C87DB0` | `c87db0:      	orr	w8, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB4` | `0x00C87DB4` | `c87db4:      	mov	w20, w1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DB8` | `0x00C87DB8` | `c87db8:      	cinc	w1, w8, ne` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DBC` | `0x00C87DBC` | `c87dbc:      	bl	0x143d5d0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd3b940>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87DC0` | `0x00C87DC0` | `c87dc0:      	cmp	w0, #0x4` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DC4` | `0x00C87DC4` | `c87dc4:      	str	w0, [x19, #0x94]` | 写入内存/保存寄存器 |
| `0x00D87DC8` | `0x00C87DC8` | `c87dc8:      	b.ne	0xc87ddc <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x58614c>` | 条件跳转 |
| `0x00D87DCC` | `0x00C87DCC` | `c87dcc:      	ldr	x0, [x26]` | 读取内存/栈字段 |
| `0x00D87DD0` | `0x00C87DD0` | `c87dd0:      	add	x1, sp, #0xc` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DD4` | `0x00C87DD4` | `c87dd4:      	str	wzr, [sp, #0xc]` | 写入内存/保存寄存器 |
| `0x00D87DD8` | `0x00C87DD8` | `c87dd8:      	bl	0x143d570 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd3b8e0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87DDC` | `0x00C87DDC` | `c87ddc:      	adrp	x25, 0x2610000` | 构造相对页地址 |
| `0x00D87DE0` | `0x00C87DE0` | `c87de0:      	ldr	x25, [x25, #0x848]` | 读取内存/栈字段 |
| `0x00D87DE4` | `0x00C87DE4` | `c87de4:      	ldr	x8, [x25]` | 读取内存/栈字段 |
| `0x00D87DE8` | `0x00C87DE8` | `c87de8:      	ldr	x21, [x8, #0x90]` | 读取内存/栈字段 |
| `0x00D87DEC` | `0x00C87DEC` | `c87dec:      	cbz	x21, 0xc87e00 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586170>` | 条件跳转 |
| `0x00D87DF0` | `0x00C87DF0` | `c87df0:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87DF4` | `0x00C87DF4` | `c87df4:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x00D87DF8` | `0x00C87DF8` | `c87df8:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87DFC` | `0x00C87DFC` | `c87dfc:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E00` | `0x00C87E00` | `c87e00:      	ldr	x22, [x21, #0x7d0]` | 读取内存/栈字段 |
| `0x00D87E04` | `0x00C87E04` | `c87e04:      	cbz	x22, 0xc87e18 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586188>` | 条件跳转 |
| `0x00D87E08` | `0x00C87E08` | `c87e08:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E0C` | `0x00C87E0C` | `c87e0c:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E10` | `0x00C87E10` | `c87e10:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87E14` | `0x00C87E14` | `c87e14:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E18` | `0x00C87E18` | `c87e18:      	ldr	x23, [x22, #0x80]` | 读取内存/栈字段 |
| `0x00D87E1C` | `0x00C87E1C` | `c87e1c:      	cbz	x23, 0xc87e50 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5861c0>` | 条件跳转 |
| `0x00D87E20` | `0x00C87E20` | `c87e20:      	mov	x24, x23` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E24` | `0x00C87E24` | `c87e24:      	ldr	x8, [x24, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E28` | `0x00C87E28` | `c87e28:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87E2C` | `0x00C87E2C` | `c87e2c:      	mov	x0, x24` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E30` | `0x00C87E30` | `c87e30:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E34` | `0x00C87E34` | `c87e34:      	mov	x0, x23` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E38` | `0x00C87E38` | `c87e38:      	bl	0xea7dd0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x7a6140>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87E3C` | `0x00C87E3C` | `c87e3c:      	ldr	x8, [x24]` | 读取内存/栈字段 |
| `0x00D87E40` | `0x00C87E40` | `c87e40:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E44` | `0x00C87E44` | `c87e44:      	mov	x0, x24` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E48` | `0x00C87E48` | `c87e48:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E4C` | `0x00C87E4C` | `c87e4c:      	b	0xc87e58 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5861c8>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E50` | `0x00C87E50` | `c87e50:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E54` | `0x00C87E54` | `c87e54:      	bl	0xea7dd0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x7a6140>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87E58` | `0x00C87E58` | `c87e58:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E5C` | `0x00C87E5C` | `c87e5c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E60` | `0x00C87E60` | `c87e60:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E64` | `0x00C87E64` | `c87e64:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E68` | `0x00C87E68` | `c87e68:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x00D87E6C` | `0x00C87E6C` | `c87e6c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87E70` | `0x00C87E70` | `c87e70:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E74` | `0x00C87E74` | `c87e74:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87E78` | `0x00C87E78` | `c87e78:      	ldr	w8, [x19, #0x94]` | 读取内存/栈字段 |
| `0x00D87E7C` | `0x00C87E7C` | `c87e7c:      	orr	w8, w8, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E80` | `0x00C87E80` | `c87e80:      	cmp	w8, #0x3` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E84` | `0x00C87E84` | `c87e84:      	b.ne	0xc87ef4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586264>` | 条件跳转 |
| `0x00D87E88` | `0x00C87E88` | `c87e88:      	tbnz	w20, #0x0, 0xc87ec8 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586238>` | 条件跳转 |
| `0x00D87E8C` | `0x00C87E8C` | `c87e8c:      	ldr	x8, [x26]` | 读取内存/栈字段 |
| `0x00D87E90` | `0x00C87E90` | `c87e90:      	ldr	x20, [x8, #0x1e8]` | 读取内存/栈字段 |
| `0x00D87E94` | `0x00C87E94` | `c87e94:      	cbz	x20, 0xc87f54 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862c4>` | 条件跳转 |
| `0x00D87E98` | `0x00C87E98` | `c87e98:      	mov	x21, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87E9C` | `0x00C87E9C` | `c87e9c:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x00D87EA0` | `0x00C87EA0` | `c87ea0:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87EA4` | `0x00C87EA4` | `c87ea4:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EA8` | `0x00C87EA8` | `c87ea8:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EAC` | `0x00C87EAC` | `c87eac:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EB0` | `0x00C87EB0` | `c87eb0:      	bl	0x1424d30 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd230a0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87EB4` | `0x00C87EB4` | `c87eb4:      	str	w0, [x19, #0x1f8]` | 写入内存/保存寄存器 |
| `0x00D87EB8` | `0x00C87EB8` | `c87eb8:      	ldr	x8, [x21]` | 读取内存/栈字段 |
| `0x00D87EBC` | `0x00C87EBC` | `c87ebc:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87EC0` | `0x00C87EC0` | `c87ec0:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EC4` | `0x00C87EC4` | `c87ec4:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EC8` | `0x00C87EC8` | `c87ec8:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87ECC` | `0x00C87ECC` | `c87ecc:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87ED0` | `0x00C87ED0` | `c87ed0:      	cbz	x21, 0xc87f6c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862dc>` | 条件跳转 |
| `0x00D87ED4` | `0x00C87ED4` | `c87ed4:      	mov	x22, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87ED8` | `0x00C87ED8` | `c87ed8:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87EDC` | `0x00C87EDC` | `c87edc:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87EE0` | `0x00C87EE0` | `c87ee0:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EE4` | `0x00C87EE4` | `c87ee4:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87EE8` | `0x00C87EE8` | `c87ee8:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EEC` | `0x00C87EEC` | `c87eec:      	bl	0xf07300 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805670>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87EF0` | `0x00C87EF0` | `c87ef0:      	b	0xc87f1c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x58628c>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87EF4` | `0x00C87EF4` | `c87ef4:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87EF8` | `0x00C87EF8` | `c87ef8:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87EFC` | `0x00C87EFC` | `c87efc:      	cbz	x21, 0xc87f48 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862b8>` | 条件跳转 |
| `0x00D87F00` | `0x00C87F00` | `c87f00:      	mov	x22, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F04` | `0x00C87F04` | `c87f04:      	ldr	x8, [x22, #0x48]!` | 读取内存/栈字段 |
| `0x00D87F08` | `0x00C87F08` | `c87f08:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x00D87F0C` | `0x00C87F0C` | `c87f0c:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F10` | `0x00C87F10` | `c87f10:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87F14` | `0x00C87F14` | `c87f14:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F18` | `0x00C87F18` | `c87f18:      	bl	0xf06f80 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8052f0>` | 关键调用候选[dispatch call #1]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F1C` | `0x00C87F1C` | `c87f1c:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F20` | `0x00C87F20` | `c87f20:      	bl	0xc87fc0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586330>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F24` | `0x00C87F24` | `c87f24:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F28` | `0x00C87F28` | `c87f28:      	bl	0xc88170 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5864e0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F2C` | `0x00C87F2C` | `c87f2c:      	ldr	x0, [x19, #0x88]` | 读取内存/栈字段 |
| `0x00D87F30` | `0x00C87F30` | `c87f30:      	bl	0xf0c450 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x80a7c0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F34` | `0x00C87F34` | `c87f34:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x00D87F38` | `0x00C87F38` | `c87f38:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x00D87F3C` | `0x00C87F3C` | `c87f3c:      	mov	x0, x22` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F40` | `0x00C87F40` | `c87f40:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x00D87F44` | `0x00C87F44` | `c87f44:      	b	0xc87f8c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862fc>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F48` | `0x00C87F48` | `c87f48:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F4C` | `0x00C87F4C` | `c87f4c:      	bl	0xf06f80 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8052f0>` | 关键调用候选[dispatch call #2]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F50` | `0x00C87F50` | `c87f50:      	b	0xc87f74 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5862e4>` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F54` | `0x00C87F54` | `c87f54:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F58` | `0x00C87F58` | `c87f58:      	bl	0x1424d30 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd230a0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F5C` | `0x00C87F5C` | `c87f5c:      	str	w0, [x19, #0x1f8]` | 写入内存/保存寄存器 |
| `0x00D87F60` | `0x00C87F60` | `c87f60:      	ldr	x20, [x25]` | 读取内存/栈字段 |
| `0x00D87F64` | `0x00C87F64` | `c87f64:      	ldr	x21, [x20, #0x90]` | 读取内存/栈字段 |
| `0x00D87F68` | `0x00C87F68` | `c87f68:      	cbnz	x21, 0xc87ed4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586244>` | 条件跳转 |
| `0x00D87F6C` | `0x00C87F6C` | `c87f6c:      	mov	x0, xzr` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F70` | `0x00C87F70` | `c87f70:      	bl	0xf07300 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805670>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F74` | `0x00C87F74` | `c87f74:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F78` | `0x00C87F78` | `c87f78:      	bl	0xc87fc0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x586330>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F7C` | `0x00C87F7C` | `c87f7c:      	mov	x1, x20` | 原始指令；未恢复确定的业务字段 |
| `0x00D87F80` | `0x00C87F80` | `c87f80:      	bl	0xc88170 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x5864e0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F84` | `0x00C87F84` | `c87f84:      	ldr	x0, [x19, #0x88]` | 读取内存/栈字段 |
| `0x00D87F88` | `0x00C87F88` | `c87f88:      	bl	0xf0c450 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x80a7c0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x00D87F8C` | `0x00C87F8C` | `c87f8c:      	ldp	x29, x30, [sp, #0x50]` | 读取内存/栈字段 |
| `0x00D87F90` | `0x00C87F90` | `c87f90:      	ldp	x20, x19, [sp, #0x40]` | 读取内存/栈字段 |
| `0x00D87F94` | `0x00C87F94` | `c87f94:      	ldp	x22, x21, [sp, #0x30]` | 读取内存/栈字段 |
| `0x00D87F98` | `0x00C87F98` | `c87f98:      	ldp	x24, x23, [sp, #0x20]` | 读取内存/栈字段 |
| `0x00D87F9C` | `0x00C87F9C` | `c87f9c:      	ldp	x26, x25, [sp, #0x10]` | 读取内存/栈字段 |
| `0x00D87FA0` | `0x00C87FA0` | `c87fa0:      	add	sp, sp, #0x60` | 原始指令；未恢复确定的业务字段 |
| `0x00D87FA4` | `0x00C87FA4` | `c87fa4:      	ret` | 函数返回 |
| `0x00D87FB0` | `0x00C87FB0` | `c87fb0:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/*
 * [SWSH 自动注释 v1 | Ghidra 12.2]
 * 版本：宝可梦盾 1.3.2
 * 函数入口：0x00d87d80
 * Ghidra 名称：FUN_00d87d80
 * 命名空间：Global
 * Ghidra 签名：undefined FUN_00d87d80(void)
 * 函数体大小：552 bytes
 * 函数体 SHA-256：7dd83e3891d4e2e7ff1a9b5bccc1a7869c95cf2aba794ecbb6f28c3c890c52fb
 * 跨版本对应：SAME_RVA_DIFFERENT_BODY；同 RVA 存在函数，但机器码哈希不同；不能仅据地址认定为同一函数
 * 对照入口：0x00d87d80
 * 直接调用关系：可归属调用者 0；直接调用目标 9
 * 调用目标：0x00d87fc0 FUN_00d87fc0；0x00d88170 FUN_00d88170；0x00fa7dd0 FUN_00fa7dd0；0x01006f80 FUN_01006f80；0x01007300 FUN_01007300；0x0100c450 FUN_0100c450；0x01524d30 FUN_01524d30；0x0153d570 FUN_0153d570；…（其余见 NDJSON 注释索引）
 * 字符串引用：(未发现可归属的直接字符串引用)
 * 数据读取引用：0x02710798、0x02710848、0x027364f0、0x027365b8
 * 数据写入引用：(未记录)
 * 用途说明：未命名函数，存在多个已识别直接调用目标，属于调度/协调逻辑候选；需结合 CFG、参数流和调用者确认。
 * 判断可信度：低（结构推断）
 * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。
 * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a
 * Ghidra function entry: 00d87d80; name: FUN_00d87d80
 */


void FUN_00d87d80(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_54;
  
  puVar1 = PTR_DAT_02710798;
  uVar4 = 1;
  if ((param_2 & 1) != 0) {
    uVar4 = 2;
  }
  iVar3 = FUN_0153d5d0(*(undefined8 *)PTR_DAT_02710798,uVar4);
  *(int *)(param_1 + 0x94) = iVar3;
  if (iVar3 == 4) {
    local_54 = 0;
    FUN_0153d570(*(undefined8 *)puVar1,&local_54);
  }
  puVar2 = PTR_DAT_02710848;
  lVar6 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(lVar6 + 2000);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(lVar7 + 0x80);
  if (lVar8 == 0) {
    FUN_00fa7dd0(0);
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    FUN_00fa7dd0(lVar8);
    (**(code **)(*plVar9 + 0x18))(plVar9);
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  if ((*(uint *)(param_1 + 0x94) | 1) != 3) {
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
    if (lVar7 == 0) {
      uVar5 = FUN_01006f80(0);
      goto LAB_00d87f74;
    }
    plVar9 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    uVar5 = FUN_01006f80(lVar7);
    goto LAB_00d87f1c;
  }
  if ((param_2 & 1) == 0) {
    lVar6 = *(long *)(*(long *)puVar1 + 0x1e8);
    if (lVar6 != 0) {
      plVar9 = (long *)(lVar6 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      uVar4 = FUN_01524d30(lVar6);
      *(undefined4 *)(param_1 + 0x1f8) = uVar4;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      goto LAB_00d87ec8;
    }
    uVar4 = FUN_01524d30(0);
    *(undefined4 *)(param_1 + 0x1f8) = uVar4;
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  else {
LAB_00d87ec8:
    lVar6 = *(long *)puVar2;
    lVar7 = *(long *)(lVar6 + 0x90);
  }
  if (lVar7 == 0) {
    uVar5 = FUN_01007300(0);
LAB_00d87f74:
    uVar5 = FUN_00d87fc0(uVar5,lVar6);
    FUN_00d88170(uVar5,lVar6);
    FUN_0100c450(*(undefined8 *)(param_1 + 0x88));
    return;
  }
  plVar9 = (long *)(lVar7 + 0x48);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  uVar5 = FUN_01007300(lVar7);
LAB_00d87f1c:
  uVar5 = FUN_00d87fc0(uVar5,lVar6);
  FUN_00d88170(uVar5,lVar6);
  FUN_0100c450(*(undefined8 *)(param_1 + 0x88));
  (**(code **)(*plVar9 + 0x18))(plVar9);
  return;
}
```

### generator — Ghidra `0x01006F80`, main+`0x00F06F80`

Linear window (not exact-body proof): `0x01006F80`..`0x010072B0`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01006F80` | `0x00F06F80` | `f06f80:      	str	x28, [sp, #-0x40]!` | 写入内存/保存寄存器 |
| `0x01006F84` | `0x00F06F84` | `f06f84:      	stp	x22, x21, [sp, #0x10]` | 写入内存/保存寄存器 |
| `0x01006F88` | `0x00F06F88` | `f06f88:      	stp	x20, x19, [sp, #0x20]` | 写入内存/保存寄存器 |
| `0x01006F8C` | `0x00F06F8C` | `f06f8c:      	stp	x29, x30, [sp, #0x30]` | 写入内存/保存寄存器 |
| `0x01006F90` | `0x00F06F90` | `f06f90:      	add	x29, sp, #0x30` | 原始指令；未恢复确定的业务字段 |
| `0x01006F94` | `0x00F06F94` | `f06f94:      	sub	sp, sp, #0x1d0` | 原始指令；未恢复确定的业务字段 |
| `0x01006F98` | `0x00F06F98` | `f06f98:      	adrp	x22, 0x2610000` | 构造相对页地址 |
| `0x01006F9C` | `0x00F06F9C` | `f06f9c:      	ldr	x22, [x22, #0x798]` | 读取内存/栈字段 |
| `0x01006FA0` | `0x00F06FA0` | `f06fa0:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01006FA4` | `0x00F06FA4` | `f06fa4:      	ldr	x19, [x8, #0x1e8]` | 读取内存/栈字段 |
| `0x01006FA8` | `0x00F06FA8` | `f06fa8:      	mov	x21, x0` | 原始指令；未恢复确定的业务字段 |
| `0x01006FAC` | `0x00F06FAC` | `f06fac:      	cbz	x19, 0xf06fc0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805330>` | 条件跳转 |
| `0x01006FB0` | `0x00F06FB0` | `f06fb0:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01006FB4` | `0x00F06FB4` | `f06fb4:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01006FB8` | `0x00F06FB8` | `f06fb8:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01006FBC` | `0x00F06FBC` | `f06fbc:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01006FC0` | `0x00F06FC0` | `f06fc0:      	add	x0, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01006FC4` | `0x00F06FC4` | `f06fc4:      	orr	w1, wzr, #0x4` | 原始指令；未恢复确定的业务字段 |
| `0x01006FC8` | `0x00F06FC8` | `f06fc8:      	bl	0x18ff790 <_ZN2nn6crypto36GenerateCryptographicallyRandomBytesEPvm@plt>` | 关键调用候选[CSPRNG]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FCC` | `0x00F06FCC` | `f06fcc:      	ldr	w1, [sp, #0x8]` | 读取内存/栈字段 |
| `0x01006FD0` | `0x00F06FD0` | `f06fd0:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01006FD4` | `0x00F06FD4` | `f06fd4:      	bl	0x1424d20 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd23090>` | 关键调用候选[ID32 setter]；BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FD8` | `0x00F06FD8` | `f06fd8:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01006FDC` | `0x00F06FDC` | `f06fdc:      	ldr	x20, [x8, #0x1f0]` | 读取内存/栈字段 |
| `0x01006FE0` | `0x00F06FE0` | `f06fe0:      	cbz	x20, 0xf06ff4 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x805364>` | 条件跳转 |
| `0x01006FE4` | `0x00F06FE4` | `f06fe4:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01006FE8` | `0x00F06FE8` | `f06fe8:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01006FEC` | `0x00F06FEC` | `f06fec:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01006FF0` | `0x00F06FF0` | `f06ff0:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01006FF4` | `0x00F06FF4` | `f06ff4:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01006FF8` | `0x00F06FF8` | `f06ff8:      	bl	0x140def0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd0c260>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01006FFC` | `0x00F06FFC` | `f06ffc:      	bl	0x13be130 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcbc4a0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007000` | `0x00F07000` | `f07000:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01007004` | `0x00F07004` | `f07004:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007008` | `0x00F07008` | `f07008:      	mov	w1, wzr` | 原始指令；未恢复确定的业务字段 |
| `0x0100700C` | `0x00F0700C` | `f0700c:      	bl	0xf0a980 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cf0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007010` | `0x00F07010` | `f07010:      	orr	w1, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01007014` | `0x00F07014` | `f07014:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01007018` | `0x00F07018` | `f07018:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x0100701C` | `0x00F0701C` | `f0701c:      	bl	0xf0a980 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cf0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007020` | `0x00F07020` | `f07020:      	orr	w1, wzr, #0x2` | 原始指令；未恢复确定的业务字段 |
| `0x01007024` | `0x00F07024` | `f07024:      	orr	w2, wzr, #0x1` | 原始指令；未恢复确定的业务字段 |
| `0x01007028` | `0x00F07028` | `f07028:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x0100702C` | `0x00F0702C` | `f0702c:      	bl	0xf0a980 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x808cf0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007030` | `0x00F07030` | `f07030:      	ldr	x8, [x22]` | 读取内存/栈字段 |
| `0x01007034` | `0x00F07034` | `f07034:      	ldr	x21, [x8, #0x288]` | 读取内存/栈字段 |
| `0x01007038` | `0x00F07038` | `f07038:      	cbz	x21, 0xf0704c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8053bc>` | 条件跳转 |
| `0x0100703C` | `0x00F0703C` | `f0703c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007040` | `0x00F07040` | `f07040:      	ldr	x8, [x0, #0x48]!` | 读取内存/栈字段 |
| `0x01007044` | `0x00F07044` | `f07044:      	ldr	x8, [x8, #0x10]` | 读取内存/栈字段 |
| `0x01007048` | `0x00F07048` | `f07048:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x0100704C` | `0x00F0704C` | `f0704c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007050` | `0x00F07050` | `f07050:      	bl	0x13fba30 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcf9da0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007054` | `0x00F07054` | `f07054:      	mov	x22, x0` | 原始指令；未恢复确定的业务字段 |
| `0x01007058` | `0x00F07058` | `f07058:      	mov	w2, #0xc8               // =200` | 原始指令；未恢复确定的业务字段 |
| `0x0100705C` | `0x00F0705C` | `f0705c:      	add	x0, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01007060` | `0x00F07060` | `f07060:      	mov	x1, x22` | 原始指令；未恢复确定的业务字段 |
| `0x01007064` | `0x00F07064` | `f07064:      	bl	0x18fde50 <memcpy@plt>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007068` | `0x00F07068` | `f07068:      	ldr	w8, [x22, #0xc8]` | 读取内存/栈字段 |
| `0x0100706C` | `0x00F0706C` | `f0706c:      	str	w8, [sp, #0xd0]` | 写入内存/保存寄存器 |
| `0x01007070` | `0x00F07070` | `f07070:      	ldrh	w8, [x22, #0xcc]` | 读取内存/栈字段 |
| `0x01007074` | `0x00F07074` | `f07074:      	strh	w8, [sp, #0xd4]` | 写入内存/保存寄存器 |
| `0x01007078` | `0x00F07078` | `f07078:      	ldr	w8, [x22, #0xd0]` | 读取内存/栈字段 |
| `0x0100707C` | `0x00F0707C` | `f0707c:      	str	w8, [sp, #0xd8]` | 写入内存/保存寄存器 |
| `0x01007080` | `0x00F07080` | `f07080:      	ldrb	w8, [x22, #0xd4]` | 读取内存/栈字段 |
| `0x01007084` | `0x00F07084` | `f07084:      	strb	w8, [sp, #0xdc]` | 写入内存/保存寄存器 |
| `0x01007088` | `0x00F07088` | `f07088:      	ldrb	w8, [x22, #0xd5]` | 读取内存/栈字段 |
| `0x0100708C` | `0x00F0708C` | `f0708c:      	strb	w8, [sp, #0xdd]` | 写入内存/保存寄存器 |
| `0x01007090` | `0x00F07090` | `f07090:      	ldr	w8, [x22, #0xd8]` | 读取内存/栈字段 |
| `0x01007094` | `0x00F07094` | `f07094:      	str	w8, [sp, #0xe0]` | 写入内存/保存寄存器 |
| `0x01007098` | `0x00F07098` | `f07098:      	ldr	w8, [x22, #0xdc]` | 读取内存/栈字段 |
| `0x0100709C` | `0x00F0709C` | `f0709c:      	str	w8, [sp, #0xe4]` | 写入内存/保存寄存器 |
| `0x010070A0` | `0x00F070A0` | `f070a0:      	ldr	w8, [x22, #0xe0]` | 读取内存/栈字段 |
| `0x010070A4` | `0x00F070A4` | `f070a4:      	str	w8, [sp, #0xe8]` | 写入内存/保存寄存器 |
| `0x010070A8` | `0x00F070A8` | `f070a8:      	ldr	w8, [x22, #0xe4]` | 读取内存/栈字段 |
| `0x010070AC` | `0x00F070AC` | `f070ac:      	str	w8, [sp, #0xec]` | 写入内存/保存寄存器 |
| `0x010070B0` | `0x00F070B0` | `f070b0:      	ldrh	w8, [x22, #0xe8]` | 读取内存/栈字段 |
| `0x010070B4` | `0x00F070B4` | `f070b4:      	strh	w8, [sp, #0xf0]` | 写入内存/保存寄存器 |
| `0x010070B8` | `0x00F070B8` | `f070b8:      	ldr	w8, [x22, #0xec]` | 读取内存/栈字段 |
| `0x010070BC` | `0x00F070BC` | `f070bc:      	str	w8, [sp, #0xf4]` | 写入内存/保存寄存器 |
| `0x010070C0` | `0x00F070C0` | `f070c0:      	ldrb	w8, [x22, #0xf0]` | 读取内存/栈字段 |
| `0x010070C4` | `0x00F070C4` | `f070c4:      	strb	w8, [sp, #0xf8]` | 写入内存/保存寄存器 |
| `0x010070C8` | `0x00F070C8` | `f070c8:      	ldrb	w8, [x22, #0xf1]` | 读取内存/栈字段 |
| `0x010070CC` | `0x00F070CC` | `f070cc:      	strb	w8, [sp, #0xf9]` | 写入内存/保存寄存器 |
| `0x010070D0` | `0x00F070D0` | `f070d0:      	ldr	w8, [x22, #0xf4]` | 读取内存/栈字段 |
| `0x010070D4` | `0x00F070D4` | `f070d4:      	str	w8, [sp, #0xfc]` | 写入内存/保存寄存器 |
| `0x010070D8` | `0x00F070D8` | `f070d8:      	ldr	w8, [x22, #0xf8]` | 读取内存/栈字段 |
| `0x010070DC` | `0x00F070DC` | `f070dc:      	str	w8, [sp, #0x100]` | 写入内存/保存寄存器 |
| `0x010070E0` | `0x00F070E0` | `f070e0:      	ldr	w8, [x22, #0xfc]` | 读取内存/栈字段 |
| `0x010070E4` | `0x00F070E4` | `f070e4:      	str	w8, [sp, #0x104]` | 写入内存/保存寄存器 |
| `0x010070E8` | `0x00F070E8` | `f070e8:      	ldr	w8, [x22, #0x100]` | 读取内存/栈字段 |
| `0x010070EC` | `0x00F070EC` | `f070ec:      	str	w8, [sp, #0x108]` | 写入内存/保存寄存器 |
| `0x010070F0` | `0x00F070F0` | `f070f0:      	ldrh	w8, [x22, #0x104]` | 读取内存/栈字段 |
| `0x010070F4` | `0x00F070F4` | `f070f4:      	strh	w8, [sp, #0x10c]` | 写入内存/保存寄存器 |
| `0x010070F8` | `0x00F070F8` | `f070f8:      	ldr	w8, [x22, #0x108]` | 读取内存/栈字段 |
| `0x010070FC` | `0x00F070FC` | `f070fc:      	str	w8, [sp, #0x110]` | 写入内存/保存寄存器 |
| `0x01007100` | `0x00F07100` | `f07100:      	ldrb	w8, [x22, #0x10c]` | 读取内存/栈字段 |
| `0x01007104` | `0x00F07104` | `f07104:      	strb	w8, [sp, #0x114]` | 写入内存/保存寄存器 |
| `0x01007108` | `0x00F07108` | `f07108:      	ldrb	w8, [x22, #0x10d]` | 读取内存/栈字段 |
| `0x0100710C` | `0x00F0710C` | `f0710c:      	strb	w8, [sp, #0x115]` | 写入内存/保存寄存器 |
| `0x01007110` | `0x00F07110` | `f07110:      	ldr	w8, [x22, #0x110]` | 读取内存/栈字段 |
| `0x01007114` | `0x00F07114` | `f07114:      	str	w8, [sp, #0x118]` | 写入内存/保存寄存器 |
| `0x01007118` | `0x00F07118` | `f07118:      	ldr	w8, [x22, #0x114]` | 读取内存/栈字段 |
| `0x0100711C` | `0x00F0711C` | `f0711c:      	str	w8, [sp, #0x11c]` | 写入内存/保存寄存器 |
| `0x01007120` | `0x00F07120` | `f07120:      	ldr	w8, [x22, #0x118]` | 读取内存/栈字段 |
| `0x01007124` | `0x00F07124` | `f07124:      	str	w8, [sp, #0x120]` | 写入内存/保存寄存器 |
| `0x01007128` | `0x00F07128` | `f07128:      	ldr	w8, [x22, #0x11c]` | 读取内存/栈字段 |
| `0x0100712C` | `0x00F0712C` | `f0712c:      	str	w8, [sp, #0x124]` | 写入内存/保存寄存器 |
| `0x01007130` | `0x00F07130` | `f07130:      	ldrh	w8, [x22, #0x120]` | 读取内存/栈字段 |
| `0x01007134` | `0x00F07134` | `f07134:      	strh	w8, [sp, #0x128]` | 写入内存/保存寄存器 |
| `0x01007138` | `0x00F07138` | `f07138:      	ldr	w8, [x22, #0x124]` | 读取内存/栈字段 |
| `0x0100713C` | `0x00F0713C` | `f0713c:      	str	w8, [sp, #0x12c]` | 写入内存/保存寄存器 |
| `0x01007140` | `0x00F07140` | `f07140:      	ldrb	w8, [x22, #0x128]` | 读取内存/栈字段 |
| `0x01007144` | `0x00F07144` | `f07144:      	strb	w8, [sp, #0x130]` | 写入内存/保存寄存器 |
| `0x01007148` | `0x00F07148` | `f07148:      	ldrb	w8, [x22, #0x129]` | 读取内存/栈字段 |
| `0x0100714C` | `0x00F0714C` | `f0714c:      	strb	w8, [sp, #0x131]` | 写入内存/保存寄存器 |
| `0x01007150` | `0x00F07150` | `f07150:      	ldr	w8, [x22, #0x12c]` | 读取内存/栈字段 |
| `0x01007154` | `0x00F07154` | `f07154:      	str	w8, [sp, #0x134]` | 写入内存/保存寄存器 |
| `0x01007158` | `0x00F07158` | `f07158:      	ldr	w8, [x22, #0x130]` | 读取内存/栈字段 |
| `0x0100715C` | `0x00F0715C` | `f0715c:      	str	w8, [sp, #0x138]` | 写入内存/保存寄存器 |
| `0x01007160` | `0x00F07160` | `f07160:      	ldr	w8, [x22, #0x134]` | 读取内存/栈字段 |
| `0x01007164` | `0x00F07164` | `f07164:      	str	w8, [sp, #0x13c]` | 写入内存/保存寄存器 |
| `0x01007168` | `0x00F07168` | `f07168:      	ldr	w8, [x22, #0x138]` | 读取内存/栈字段 |
| `0x0100716C` | `0x00F0716C` | `f0716c:      	str	w8, [sp, #0x140]` | 写入内存/保存寄存器 |
| `0x01007170` | `0x00F07170` | `f07170:      	ldrh	w8, [x22, #0x13c]` | 读取内存/栈字段 |
| `0x01007174` | `0x00F07174` | `f07174:      	strh	w8, [sp, #0x144]` | 写入内存/保存寄存器 |
| `0x01007178` | `0x00F07178` | `f07178:      	ldr	w8, [x22, #0x140]` | 读取内存/栈字段 |
| `0x0100717C` | `0x00F0717C` | `f0717c:      	str	w8, [sp, #0x148]` | 写入内存/保存寄存器 |
| `0x01007180` | `0x00F07180` | `f07180:      	ldrb	w8, [x22, #0x144]` | 读取内存/栈字段 |
| `0x01007184` | `0x00F07184` | `f07184:      	strb	w8, [sp, #0x14c]` | 写入内存/保存寄存器 |
| `0x01007188` | `0x00F07188` | `f07188:      	ldrb	w8, [x22, #0x145]` | 读取内存/栈字段 |
| `0x0100718C` | `0x00F0718C` | `f0718c:      	strb	w8, [sp, #0x14d]` | 写入内存/保存寄存器 |
| `0x01007190` | `0x00F07190` | `f07190:      	ldr	w8, [x22, #0x148]` | 读取内存/栈字段 |
| `0x01007194` | `0x00F07194` | `f07194:      	str	w8, [sp, #0x150]` | 写入内存/保存寄存器 |
| `0x01007198` | `0x00F07198` | `f07198:      	ldr	w8, [x22, #0x14c]` | 读取内存/栈字段 |
| `0x0100719C` | `0x00F0719C` | `f0719c:      	str	w8, [sp, #0x154]` | 写入内存/保存寄存器 |
| `0x010071A0` | `0x00F071A0` | `f071a0:      	ldr	w8, [x22, #0x150]` | 读取内存/栈字段 |
| `0x010071A4` | `0x00F071A4` | `f071a4:      	str	w8, [sp, #0x158]` | 写入内存/保存寄存器 |
| `0x010071A8` | `0x00F071A8` | `f071a8:      	ldr	w8, [x22, #0x154]` | 读取内存/栈字段 |
| `0x010071AC` | `0x00F071AC` | `f071ac:      	str	w8, [sp, #0x15c]` | 写入内存/保存寄存器 |
| `0x010071B0` | `0x00F071B0` | `f071b0:      	ldrh	w8, [x22, #0x158]` | 读取内存/栈字段 |
| `0x010071B4` | `0x00F071B4` | `f071b4:      	strh	w8, [sp, #0x160]` | 写入内存/保存寄存器 |
| `0x010071B8` | `0x00F071B8` | `f071b8:      	ldr	w8, [x22, #0x15c]` | 读取内存/栈字段 |
| `0x010071BC` | `0x00F071BC` | `f071bc:      	str	w8, [sp, #0x164]` | 写入内存/保存寄存器 |
| `0x010071C0` | `0x00F071C0` | `f071c0:      	ldrb	w8, [x22, #0x160]` | 读取内存/栈字段 |
| `0x010071C4` | `0x00F071C4` | `f071c4:      	strb	w8, [sp, #0x168]` | 写入内存/保存寄存器 |
| `0x010071C8` | `0x00F071C8` | `f071c8:      	ldrb	w8, [x22, #0x161]` | 读取内存/栈字段 |
| `0x010071CC` | `0x00F071CC` | `f071cc:      	strb	w8, [sp, #0x169]` | 写入内存/保存寄存器 |
| `0x010071D0` | `0x00F071D0` | `f071d0:      	ldr	w8, [x22, #0x164]` | 读取内存/栈字段 |
| `0x010071D4` | `0x00F071D4` | `f071d4:      	str	w8, [sp, #0x16c]` | 写入内存/保存寄存器 |
| `0x010071D8` | `0x00F071D8` | `f071d8:      	ldr	w8, [x22, #0x168]` | 读取内存/栈字段 |
| `0x010071DC` | `0x00F071DC` | `f071dc:      	str	w8, [sp, #0x170]` | 写入内存/保存寄存器 |
| `0x010071E0` | `0x00F071E0` | `f071e0:      	ldr	w8, [x22, #0x16c]` | 读取内存/栈字段 |
| `0x010071E4` | `0x00F071E4` | `f071e4:      	str	w8, [sp, #0x174]` | 写入内存/保存寄存器 |
| `0x010071E8` | `0x00F071E8` | `f071e8:      	ldp	x8, x9, [x22, #0x170]` | 读取内存/栈字段 |
| `0x010071EC` | `0x00F071EC` | `f071ec:      	ldr	x10, [x22, #0x180]` | 读取内存/栈字段 |
| `0x010071F0` | `0x00F071F0` | `f071f0:      	stp	x9, x10, [sp, #0x180]` | 写入内存/保存寄存器 |
| `0x010071F4` | `0x00F071F4` | `f071f4:      	str	x8, [sp, #0x178]` | 写入内存/保存寄存器 |
| `0x010071F8` | `0x00F071F8` | `f071f8:      	ldp	x8, x9, [x22, #0x188]` | 读取内存/栈字段 |
| `0x010071FC` | `0x00F071FC` | `f071fc:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01007200` | `0x00F07200` | `f07200:      	ldp	x10, x11, [x22, #0x198]` | 读取内存/栈字段 |
| `0x01007204` | `0x00F07204` | `f07204:      	stp	x10, x11, [sp, #0x1a0]` | 写入内存/保存寄存器 |
| `0x01007208` | `0x00F07208` | `f07208:      	stp	x8, x9, [sp, #0x190]` | 写入内存/保存寄存器 |
| `0x0100720C` | `0x00F0720C` | `f0720c:      	ldr	x10, [x22, #0x1b8]` | 读取内存/栈字段 |
| `0x01007210` | `0x00F07210` | `f07210:      	ldp	x8, x9, [x22, #0x1a8]` | 读取内存/栈字段 |
| `0x01007214` | `0x00F07214` | `f07214:      	ldr	w11, [x22, #0x1c0]` | 读取内存/栈字段 |
| `0x01007218` | `0x00F07218` | `f07218:      	str	w11, [sp, #0x1c8]` | 写入内存/保存寄存器 |
| `0x0100721C` | `0x00F0721C` | `f0721c:      	stp	x9, x10, [sp, #0x1b8]` | 写入内存/保存寄存器 |
| `0x01007220` | `0x00F07220` | `f07220:      	str	x8, [sp, #0x1b0]` | 写入内存/保存寄存器 |
| `0x01007224` | `0x00F07224` | `f07224:      	bl	0x1424d40 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xd230b0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007228` | `0x00F07228` | `f07228:      	str	w0, [sp, #0x24]` | 写入内存/保存寄存器 |
| `0x0100722C` | `0x00F0722C` | `f0722c:      	add	x1, sp, #0x8` | 原始指令；未恢复确定的业务字段 |
| `0x01007230` | `0x00F07230` | `f07230:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007234` | `0x00F07234` | `f07234:      	mov	w2, wzr` | 原始指令；未恢复确定的业务字段 |
| `0x01007238` | `0x00F07238` | `f07238:      	bl	0x13fba40 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xcf9db0>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x0100723C` | `0x00F0723C` | `f0723c:      	adrp	x8, 0x2610000` | 构造相对页地址 |
| `0x01007240` | `0x00F07240` | `f07240:      	ldr	x8, [x8, #0x540]` | 读取内存/栈字段 |
| `0x01007244` | `0x00F07244` | `f07244:      	ldr	x8, [x8]` | 读取内存/栈字段 |
| `0x01007248` | `0x00F07248` | `f07248:      	ldr	x0, [x8, #0x288]` | 读取内存/栈字段 |
| `0x0100724C` | `0x00F0724C` | `f0724c:      	bl	0x158e7a0 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0xe8cb10>` | BL: 有返回的直接调用（按实际目标检查语义） |
| `0x01007250` | `0x00F07250` | `f07250:      	cbz	x21, 0xf07264 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055d4>` | 条件跳转 |
| `0x01007254` | `0x00F07254` | `f07254:      	ldr	x8, [x21, #0x48]!` | 读取内存/栈字段 |
| `0x01007258` | `0x00F07258` | `f07258:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x0100725C` | `0x00F0725C` | `f0725c:      	mov	x0, x21` | 原始指令；未恢复确定的业务字段 |
| `0x01007260` | `0x00F07260` | `f07260:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01007264` | `0x00F07264` | `f07264:      	cbz	x20, 0xf07278 <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055e8>` | 条件跳转 |
| `0x01007268` | `0x00F07268` | `f07268:      	ldr	x8, [x20, #0x48]!` | 读取内存/栈字段 |
| `0x0100726C` | `0x00F0726C` | `f0726c:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x01007270` | `0x00F07270` | `f07270:      	mov	x0, x20` | 原始指令；未恢复确定的业务字段 |
| `0x01007274` | `0x00F07274` | `f07274:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x01007278` | `0x00F07278` | `f07278:      	cbz	x19, 0xf0728c <_ZNSt3__124__put_character_sequenceIcNS_11char_traitsIcEEEERNS_13basic_ostreamIT_T0_EES7_PKS4_m+0x8055fc>` | 条件跳转 |
| `0x0100727C` | `0x00F0727C` | `f0727c:      	ldr	x8, [x19, #0x48]!` | 读取内存/栈字段 |
| `0x01007280` | `0x00F07280` | `f07280:      	ldr	x8, [x8, #0x18]` | 读取内存/栈字段 |
| `0x01007284` | `0x00F07284` | `f07284:      	mov	x0, x19` | 原始指令；未恢复确定的业务字段 |
| `0x01007288` | `0x00F07288` | `f07288:      	blr	x8` | BLR: 间接调用（目标需要寄存器证据） |
| `0x0100728C` | `0x00F0728C` | `f0728c:      	add	sp, sp, #0x1d0` | 原始指令；未恢复确定的业务字段 |
| `0x01007290` | `0x00F07290` | `f07290:      	ldp	x29, x30, [sp, #0x30]` | 读取内存/栈字段 |
| `0x01007294` | `0x00F07294` | `f07294:      	ldp	x20, x19, [sp, #0x20]` | 读取内存/栈字段 |
| `0x01007298` | `0x00F07298` | `f07298:      	ldp	x22, x21, [sp, #0x10]` | 读取内存/栈字段 |
| `0x0100729C` | `0x00F0729C` | `f0729c:      	ldr	x28, [sp], #0x40` | 读取内存/栈字段 |
| `0x010072A0` | `0x00F072A0` | `f072a0:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/*
 * [SWSH 自动注释 v1 | Ghidra 12.2]
 * 版本：宝可梦盾 1.3.2
 * 函数入口：0x01006f80
 * Ghidra 名称：FUN_01006f80
 * 命名空间：Global
 * Ghidra 签名：undefined FUN_01006f80(void)
 * 函数体大小：804 bytes
 * 函数体 SHA-256：71fd9ccec6a0d2f0894cd83473b78659a31b33c7601db5229d8da88b8eb0a998
 * 跨版本对应：NO_EXACT_BODY_MATCH；未找到唯一且完全相同的函数体字节
 * 直接调用关系：可归属调用者 1；直接调用目标 10
 * 调用者：0x00d87d80 FUN_00d87d80
 * 调用目标：0x0100a980 FUN_0100a980；0x014be130 FUN_014be130；0x014fba30 FUN_014fba30；0x014fba40 FUN_014fba40；0x0150def0 FUN_0150def0；0x01524d20 FUN_01524d20；0x01524d40 FUN_01524d40；0x0168e7a0 FUN_0168e7a0；…（其余见 NDJSON 注释索引）
 * 字符串引用：(未发现可归属的直接字符串引用)
 * 数据读取引用：0x02710540、0x02710798、0x027364f0、0x02736570
 * 数据写入引用：(未记录)
 * 用途说明：未命名函数；从已识别的直接调用目标与字符串引用看，可能涉及内存/缓冲区操作。这只是静态线索，需检查调用点、参数和控制流。
 * 判断可信度：低（启发式）
 * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。
 * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a
 * Ghidra function entry: 01006f80; name: FUN_01006f80
 */


void FUN_01006f80(undefined8 param_1)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 local_208 [7];
  undefined4 local_1ec;
  undefined4 local_140;
  undefined2 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined1 local_133;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  undefined1 local_117;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined1 local_df;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_02710798;
  lVar2 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1e8);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  nn::crypto::GenerateCryptographicallyRandomBytes(local_208,4);
  FUN_01524d20(lVar2,local_208[0]);
  lVar3 = *(long *)(*(long *)puVar1 + 0x1f0);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN_0150def0(lVar3);
  FUN_014be130();
  FUN_0100a980(param_1,0,1);
  FUN_0100a980(param_1,1,1);
  FUN_0100a980(param_1,2,1);
  lVar4 = *(long *)(*(long *)puVar1 + 0x288);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  __src = (void *)FUN_014fba30(lVar4);
  memcpy(local_208,__src,200);
  local_140 = *(undefined4 *)((long)__src + 200);
  local_13c = *(undefined2 *)((long)__src + 0xcc);
  local_138 = *(undefined4 *)((long)__src + 0xd0);
  local_134 = *(undefined1 *)((long)__src + 0xd4);
  local_133 = *(undefined1 *)((long)__src + 0xd5);
  local_130 = *(undefined4 *)((long)__src + 0xd8);
  local_12c = *(undefined4 *)((long)__src + 0xdc);
  local_128 = *(undefined4 *)((long)__src + 0xe0);
  local_124 = *(undefined4 *)((long)__src + 0xe4);
  local_120 = *(undefined2 *)((long)__src + 0xe8);
  local_11c = *(undefined4 *)((long)__src + 0xec);
  local_118 = *(undefined1 *)((long)__src + 0xf0);
  local_117 = *(undefined1 *)((long)__src + 0xf1);
  local_114 = *(undefined4 *)((long)__src + 0xf4);
  local_110 = *(undefined4 *)((long)__src + 0xf8);
  local_10c = *(undefined4 *)((long)__src + 0xfc);
  local_108 = *(undefined4 *)((long)__src + 0x100);
  local_104 = *(undefined2 *)((long)__src + 0x104);
  local_100 = *(undefined4 *)((long)__src + 0x108);
  local_fc = *(undefined1 *)((long)__src + 0x10c);
  local_fb = *(undefined1 *)((long)__src + 0x10d);
  local_f8 = *(undefined4 *)((long)__src + 0x110);
  local_f4 = *(undefined4 *)((long)__src + 0x114);
  local_f0 = *(undefined4 *)((long)__src + 0x118);
  local_ec = *(undefined4 *)((long)__src + 0x11c);
  local_e8 = *(undefined2 *)((long)__src + 0x120);
  local_e4 = *(undefined4 *)((long)__src + 0x124);
  local_e0 = *(undefined1 *)((long)__src + 0x128);
  local_df = *(undefined1 *)((long)__src + 0x129);
  local_dc = *(undefined4 *)((long)__src + 300);
  local_d8 = *(undefined4 *)((long)__src + 0x130);
  local_d4 = *(undefined4 *)((long)__src + 0x134);
  local_d0 = *(undefined4 *)((long)__src + 0x138);
  local_cc = *(undefined2 *)((long)__src + 0x13c);
  local_c8 = *(undefined4 *)((long)__src + 0x140);
  local_c4 = *(undefined1 *)((long)__src + 0x144);
  local_c3 = *(undefined1 *)((long)__src + 0x145);
  local_c0 = *(undefined4 *)((long)__src + 0x148);
  local_bc = *(undefined4 *)((long)__src + 0x14c);
  local_b8 = *(undefined4 *)((long)__src + 0x150);
  local_b4 = *(undefined4 *)((long)__src + 0x154);
  local_b0 = *(undefined2 *)((long)__src + 0x158);
  local_ac = *(undefined4 *)((long)__src + 0x15c);
  local_a8 = *(undefined1 *)((long)__src + 0x160);
  local_a7 = *(undefined1 *)((long)__src + 0x161);
  local_a4 = *(undefined4 *)((long)__src + 0x164);
  local_a0 = *(undefined4 *)((long)__src + 0x168);
  local_9c = *(undefined4 *)((long)__src + 0x16c);
  local_98 = *(undefined8 *)((long)__src + 0x170);
  local_90 = *(undefined8 *)((long)__src + 0x178);
  uStack_88 = *(undefined8 *)((long)__src + 0x180);
  local_80 = *(undefined8 *)((long)__src + 0x188);
  uStack_78 = *(undefined8 *)((long)__src + 400);
  local_70 = *(undefined8 *)((long)__src + 0x198);
  uStack_68 = *(undefined8 *)((long)__src + 0x1a0);
  uStack_50 = *(undefined8 *)((long)__src + 0x1b8);
  local_60 = *(undefined8 *)((long)__src + 0x1a8);
  local_58 = *(undefined8 *)((long)__src + 0x1b0);
  local_48 = *(undefined4 *)((long)__src + 0x1c0);
  local_1ec = FUN_01524d40(lVar2);
  FUN_014fba40(lVar4,local_208,0);
  FUN_0168e7a0(*(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x288));
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  return;
}
```

### setter — Ghidra `0x01524D20`, main+`0x01424D20`

Linear window (not exact-body proof): `0x01524D20`..`0x01524D30`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524D20` | `0x01424D20` | `1424d20:      	str	w1, [x0, #0x100]` | 写入内存/保存寄存器 |
| `0x01524D24` | `0x01424D24` | `1424d24:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/*
 * [SWSH 自动注释 v1 | Ghidra 12.2]
 * 版本：宝可梦盾 1.3.2
 * 函数入口：0x01524d20
 * Ghidra 名称：FUN_01524d20
 * 命名空间：Global
 * Ghidra 签名：undefined FUN_01524d20(void)
 * 函数体大小：8 bytes
 * 函数体 SHA-256：03d364817c7dfb23e6310f632b382e487cfd48c10d22bf575900912de625a5be
 * 跨版本对应：sword 0x01524cf0（唯一函数体字节完全匹配；地址相同/搬迁不代表语义等价）
 * 直接调用关系：可归属调用者 1；直接调用目标 0
 * 调用者：0x01006f80 FUN_01006f80
 * 字符串引用：(未发现可归属的直接字符串引用)
 * 数据读取引用：(未记录)
 * 数据写入引用：(未记录)
 * 用途说明：未命名函数，当前未发现可归属的直接调用目标，属于叶子函数候选；间接调用和运行时分派不在此结论范围内。
 * 判断可信度：低（结构推断）
 * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。
 * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a
 * Ghidra function entry: 01524d20; name: FUN_01524d20
 */


void FUN_01524d20(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x100) = param_2;
  return;
}
```

### raw_get — Ghidra `0x01524D30`, main+`0x01424D30`

Linear window (not exact-body proof): `0x01524D30`..`0x01524D40`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524D30` | `0x01424D30` | `1424d30:      	ldr	w0, [x0, #0x100]` | 读取内存/栈字段 |
| `0x01524D34` | `0x01424D34` | `1424d34:      	ret` | 函数返回 |

本函数的完整 Ghidra C 伪代码：

```c
/*
 * [SWSH 自动注释 v1 | Ghidra 12.2]
 * 版本：宝可梦盾 1.3.2
 * 函数入口：0x01524d30
 * Ghidra 名称：FUN_01524d30
 * 命名空间：Global
 * Ghidra 签名：undefined FUN_01524d30(void)
 * 函数体大小：8 bytes
 * 函数体 SHA-256：0e33c30da1af05c73078d0c10d78ff74e705e50c969c072a211766aeca16d1fb
 * 跨版本对应：sword 0x01524d00（唯一函数体字节完全匹配；地址相同/搬迁不代表语义等价）
 * 直接调用关系：可归属调用者 8；直接调用目标 0
 * 调用者：0x00d87d80 FUN_00d87d80；0x00e30590 FUN_00e30590；0x00e30620 FUN_00e30620；0x00f4aa60 FUN_00f4aa60；0x00f4d500 FUN_00f4d500；0x014b56e0 FUN_014b56e0；…（其余见 NDJSON 注释索引）
 * 字符串引用：(未发现可归属的直接字符串引用)
 * 数据读取引用：(未记录)
 * 数据写入引用：(未记录)
 * 用途说明：未命名函数被多个函数直接调用、下游调用较少，属于共享辅助函数候选；尚不能确定具体职责。
 * 判断可信度：低（结构推断）
 * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。
 * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a
 * Ghidra function entry: 01524d30; name: FUN_01524d30
 */


undefined4 FUN_01524d30(long param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}
```

### six_get — Ghidra `0x01524D40`, main+`0x01424D40`

Linear window (not exact-body proof): `0x01524D40`..`0x01524D60`; objdump mapping RVA

| Ghidra VA | main+RVA | ARM64 原始指令 | 单条注释 |
|---|---|---|---|
| `0x01524D40` | `0x01424D40` | `1424d40:      	ldr	w8, [x0, #0x100]` | 读取内存/栈字段 |
| `0x01524D44` | `0x01424D44` | `1424d44:      	mov	w9, #0xde83             // =56963` | 原始指令；未恢复确定的业务字段 |
| `0x01524D48` | `0x01424D48` | `1424d48:      	movk	w9, #0x431b, lsl #16` | 原始指令；未恢复确定的业务字段 |
| `0x01524D4C` | `0x01424D4C` | `1424d4c:      	mul	x9, x8, x9` | 原始指令；未恢复确定的业务字段 |
| `0x01524D50` | `0x01424D50` | `1424d50:      	lsr	x9, x9, #50` | 原始指令；未恢复确定的业务字段 |
| `0x01524D54` | `0x01424D54` | `1424d54:      	mov	w10, #0x4240            // =16960` | 原始指令；未恢复确定的业务字段 |
| `0x01524D58` | `0x01424D58` | `1424d58:      	movk	w10, #0xf, lsl #16` | 原始指令；未恢复确定的业务字段 |
| `0x01524D5C` | `0x01424D5C` | `1424d5c:      	msub	w0, w9, w10, w8` | 除法/乘减组合，候选取模 |

本函数的完整 Ghidra C 伪代码：

```c
/*
 * [SWSH 自动注释 v1 | Ghidra 12.2]
 * 版本：宝可梦盾 1.3.2
 * 函数入口：0x01524d40
 * Ghidra 名称：FUN_01524d40
 * 命名空间：Global
 * Ghidra 签名：undefined FUN_01524d40(void)
 * 函数体大小：36 bytes
 * 函数体 SHA-256：b5a1a7729125579c04451a9149a8369cb36db34c47ab252b10870d62020ef3cb
 * 跨版本对应：sword 0x01524d10（唯一函数体字节完全匹配；地址相同/搬迁不代表语义等价）
 * 直接调用关系：可归属调用者 1；直接调用目标 0
 * 调用者：0x01006f80 FUN_01006f80
 * 字符串引用：(未发现可归属的直接字符串引用)
 * 数据读取引用：(未记录)
 * 数据写入引用：(未记录)
 * 用途说明：未命名函数，当前未发现可归属的直接调用目标，属于叶子函数候选；间接调用和运行时分派不在此结论范围内。
 * 判断可信度：低（结构推断）
 * 证据边界：只使用 Ghidra 静态符号、函数体、直接引用和字符串数据。
 * 不覆盖函数指针/虚调用/动态分派；不证明实机行为，也不是任天堂原始源码。
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: a6045f506af68254a434cc9c33658d5ec3171d18c55b0122b44fc645c347812a
 * Ghidra function entry: 01524d40; name: FUN_01524d40
 */


uint FUN_01524d40(long param_1)

{
  return *(uint *)(param_1 + 0x100) % 1000000;
}
```

## 静态证据边界

LLVM 指令窗口来自哈希验证的完整 ELF；函数名/原始 ID 语义来自同版 Ghidra C。 窗口终点是保守选择，若有跨窗口/非连续函数体，必须回 Ghidra SQLite 获取精确 CFG。 运行时写回、初始化状态码语义与持久化均仍需实机验证。
