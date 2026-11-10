/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042ac40; name: FUN_0042ac40
 */


undefined8 FUN_0042ac40(uint param_1,uint *param_2,long *param_3,uint param_4)

{
  long lVar1;
  
  if (param_4 == 0) {
    param_4 = 1;
  }
  *param_2 = param_4;
  lVar1 = (**(code **)(*param_3 + 0x10))(param_3,(ulong)param_4 << 3);
  *(long *)(param_2 + 2) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  param_2[4] = 0;
  param_2[5] = param_1;
  return 1;
}


