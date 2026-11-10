/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00729fc0; name: FUN_00729fc0
 */


void FUN_00729fc0(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar1 = PTR_DAT_02710810 + 0x10;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((long)param_1 + 0x11c) = param_2;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  return;
}


