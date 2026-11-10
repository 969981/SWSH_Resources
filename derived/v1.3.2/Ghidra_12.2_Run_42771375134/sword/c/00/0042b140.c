/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042b140; name: FUN_0042b140
 */


undefined8 FUN_0042b140(uint *param_1,long *param_2,uint param_3)

{
  long lVar1;
  
  if (param_3 < 5) {
    param_3 = 4;
  }
  *param_1 = param_3;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,param_3 * 4 + 0xc & 0xfffffff0);
  *(long *)(param_1 + 2) = lVar1;
  if (lVar1 == 0) {
    return 0x34;
  }
  param_1[4] = 0;
  return 1;
}


