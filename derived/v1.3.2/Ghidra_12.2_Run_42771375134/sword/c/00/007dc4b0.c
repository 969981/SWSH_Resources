/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dc4b0; name: FUN_007dc4b0
 */


void FUN_007dc4b0(long *param_1)

{
  DAT_029f5478 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x30,8);
  *DAT_029f5478 = 0;
  DAT_029f5478[1] = 0;
  DAT_029f5478[4] = 0;
  DAT_029f5478[2] = 0;
  DAT_029f5478[3] = param_1;
  *(undefined4 *)(DAT_029f5478 + 5) = 0;
  FUN_007dc510(DAT_029f5478,8);
  DAT_029f5480 = param_1;
  return;
}


