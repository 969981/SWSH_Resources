/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014e1390; name: FUN_014e1390
 */


undefined1  [16] FUN_014e1390(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_1 + 0x78) >> 0x20;
  if (uVar2 < 5 && (*(ulong *)(param_1 + 0x78) & 0xff) != 0) {
    auVar3._8_8_ = *(undefined8 *)(param_1 + uVar2 * 0x880 + 0x910);
    auVar3._0_8_ = 1;
    return auVar3;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  return auVar1 << 0x40;
}


