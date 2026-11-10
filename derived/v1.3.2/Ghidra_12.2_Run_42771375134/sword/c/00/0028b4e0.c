/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028b4e0; name: FUN_0028b4e0
 */


void FUN_0028b4e0(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  
  *param_2 = 0;
  param_2[1] = 0x800000000;
  param_2[2] = 6;
  param_2[3] = param_1 + 0x68;
  puVar1 = PTR_DAT_02711ea8;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[4] = param_1 + 8;
  param_2[5] = puVar1;
  return;
}


