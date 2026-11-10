/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a60a0; name: FUN_005a60a0
 */


undefined8 FUN_005a60a0(long param_1,int param_2,int param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == -1) {
    param_3 = *(int *)(param_1 + 0x90);
  }
  else if (param_3 == 0x7fffffff) {
    iVar1 = *(int *)(param_1 + 0x30);
    if (iVar1 < 1) {
      return 0;
    }
    lVar2 = 0;
    do {
      lVar3 = *(long *)(*(long *)(param_1 + 0x38) + lVar2 * 8);
      if ((lVar3 != 0) && (*(int *)(lVar3 + 0xa0) != param_2)) {
        *(int *)(lVar3 + 0xa0) = param_2;
        iVar1 = *(int *)(param_1 + 0x30);
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
    return 0;
  }
  lVar2 = *(long *)(*(long *)(param_1 + 0x38) + (long)param_3 * 8);
  if (*(int *)(lVar2 + 0xa0) != param_2) {
    *(int *)(lVar2 + 0xa0) = param_2;
  }
  return 0;
}


