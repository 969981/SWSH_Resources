/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a6000; name: FUN_005a6000
 */


undefined8 FUN_005a6000(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  int iVar1;
  long lVar2;
  
  if (param_4 == -1) {
    param_4 = *(int *)(param_3 + 0x90);
  }
  else if (param_4 == 0x7fffffff) {
    iVar1 = *(int *)(param_3 + 0x30);
    if (iVar1 < 1) {
      return 0;
    }
    lVar2 = 0;
    do {
      if (*(long *)(*(long *)(param_3 + 0x38) + lVar2 * 8) != 0) {
        FUN_0059b070(param_1,param_2);
        iVar1 = *(int *)(param_3 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
    return 0;
  }
  FUN_0059b070(param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + (long)param_4 * 8));
  return 0;
}


