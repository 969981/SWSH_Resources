/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006b6670; name: FUN_006b6670
 */


undefined1  [16] FUN_006b6670(long param_1)

{
  ulong uVar1;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  do {
    uVar1 = FUN_006b9b40(*(undefined8 *)(param_1 + 0xf0));
    if ((uVar1 & 1) != 0) {
      FUN_006b9be0(*(undefined8 *)(param_1 + 0xf0));
      auVar2._4_4_ = extraout_var;
      auVar2._0_4_ = extraout_s0;
      auVar2._8_8_ = extraout_var_00;
      return auVar2;
    }
    param_1 = *(long *)(param_1 + 0x110);
  } while (param_1 != 0);
  return ZEXT416(DAT_01d4bec4);
}


