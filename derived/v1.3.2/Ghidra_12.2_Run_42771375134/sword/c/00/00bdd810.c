/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bdd810; name: FUN_00bdd810
 */


void FUN_00bdd810(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_2 + 0x68);
  if (iVar1 == 0) {
    *param_1 = 0;
    return;
  }
  if (iVar1 == 2) {
    if (*(long *)(param_2 + 0xa0) == 0) {
      *param_1 = 0;
      return;
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0xa0) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *param_1 = lVar2;
    return;
  }
  if (iVar1 != 3) {
    if (*(long *)(param_2 + 0x98) == 0) {
      *param_1 = 0;
      return;
    }
    lVar2 = *(long *)(*(long *)(param_2 + 0x98) + 0x58);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
    }
    *param_1 = lVar2;
    return;
  }
  if (*(long *)(param_2 + 0xa8) == 0) {
    *param_1 = 0;
    return;
  }
  lVar2 = *(long *)(*(long *)(param_2 + 0xa8) + 0x58);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  *param_1 = lVar2;
  return;
}


