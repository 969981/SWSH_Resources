/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b9920; name: FUN_007b9920
 */


void FUN_007b9920(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar1 = *(long **)(param_1 + 0x4c0);
  lVar4 = *(long *)(param_1 + 0x4c8);
  plVar3 = plVar1 + lVar4 * 2;
  if (lVar4 != 0) {
    lVar6 = lVar4 << 4;
    do {
      if ((*plVar1 == *param_2) && (plVar1[1] == param_2[1])) goto LAB_007b9968;
      lVar6 = lVar6 + -0x10;
      plVar1 = plVar1 + 2;
    } while (lVar6 != 0);
    plVar1 = plVar3;
  }
LAB_007b9968:
  if ((plVar3 != plVar1) && (plVar5 = plVar1 + 2, plVar2 = plVar1, plVar5 != plVar3)) {
    do {
      if ((*plVar5 != *param_2) || (plVar1 = plVar2, plVar5[1] != param_2[1])) {
        lVar4 = plVar5[1];
        plVar1 = plVar2 + 2;
        *plVar2 = *plVar5;
        plVar2[1] = lVar4;
      }
      plVar5 = plVar5 + 2;
      plVar2 = plVar1;
    } while (plVar3 != plVar5);
    lVar4 = *(long *)(param_1 + 0x4c8);
    plVar3 = (long *)(*(long *)(param_1 + 0x4c0) + lVar4 * 0x10);
  }
  if (plVar3 != plVar1) {
    *(long *)(param_1 + 0x4c8) = lVar4 - ((long)plVar3 - (long)plVar1 >> 4);
  }
  return;
}


