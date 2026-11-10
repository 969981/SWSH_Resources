/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e5790; name: FUN_006e5790
 */


int FUN_006e5790(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int iVar2;
  
  iVar2 = nn::fs::ReadFile(param_1[2],param_1[1],param_2,param_3);
  if (iVar2 != 0) {
    return iVar2;
  }
  lVar1 = *param_1;
  if (param_1[1] + param_3 <= *param_1) {
    lVar1 = param_1[1] + param_3;
  }
  param_1[1] = lVar1;
  return 0;
}


