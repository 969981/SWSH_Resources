/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d68f70; name: FUN_00d68f70
 */


undefined1  [16] FUN_00d68f70(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._4_4_ = (float)((ulong)*param_1 >> 0x20) * (float)((ulong)*param_2 >> 0x20);
  auVar1._0_4_ = (float)*param_1 * (float)*param_2;
  auVar1._8_4_ = (float)param_1[1] * (float)param_2[1];
  auVar1._12_4_ = 0;
  return auVar1;
}


