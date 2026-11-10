/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00915310; name: FUN_00915310
 */


void FUN_00915310(uint *param_1,void *param_2,ulong param_3)

{
  memcpy(param_1 + 2,param_2,param_3 & 0xffff);
  *param_1 = (uint)param_3 & 0xffff;
  param_1[1] = 0;
  return;
}


