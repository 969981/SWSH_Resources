/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00795bb0; name: FUN_00795bb0
 */


undefined1  [16] FUN_00795bb0(float param_1)

{
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (DAT_01d4c38c < param_1) {
    auVar1._0_4_ = powf((param_1 + DAT_01d4c254) / DAT_01d4c120,DAT_01d4c5d0);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)(param_1 / DAT_01d4bbf0));
}


