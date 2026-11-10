/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075b680; name: FUN_0075b680
 */


void FUN_0075b680(long *param_1,long param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 400);
  lVar5 = *(long *)(param_2 + 0x198);
  if (lVar5 == 0) {
LAB_0075b710:
    plVar3 = plVar4;
    if (plVar3 == (long *)(*(long *)(param_2 + 400) + *(long *)(param_2 + 0x198) * 8)) {
LAB_0075b724:
      *param_1 = 0;
      return;
    }
  }
  else {
    iVar1 = *param_3;
    plVar3 = plVar4 + lVar5;
    lVar5 = lVar5 << 3;
    do {
      if ((*plVar4 != 0) && (iVar2 = FUN_0075a3a0(), iVar2 == iVar1)) goto LAB_0075b710;
      lVar5 = lVar5 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    if (plVar3 == (long *)(*(long *)(param_2 + 400) + *(long *)(param_2 + 0x198) * 8))
    goto LAB_0075b724;
  }
  lVar5 = *(long *)(*plVar3 + 0x58);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  *param_1 = lVar5;
  return;
}


