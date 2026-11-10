/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fdded0; name: FUN_00fdded0
 */


void FUN_00fdded0(long *param_1,long param_2,long *param_3)

{
  long lVar1;
  
  *param_1 = (long)(PTR_DAT_02723050 + 0x10);
  param_1[1] = param_2;
  lVar1 = *param_3;
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x1010000;
  return;
}


