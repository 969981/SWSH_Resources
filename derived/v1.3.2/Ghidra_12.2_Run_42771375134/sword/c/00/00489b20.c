/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00489b20; name: FUN_00489b20
 */


void FUN_00489b20(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[0x11] + (param_2 - param_1[0x16]);
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[0x12] + (param_2 - param_1[0x16]);
  *param_1 = 1;
  param_1[0x15] = -((float)param_1[0x14] * (float)uVar1);
  return;
}


