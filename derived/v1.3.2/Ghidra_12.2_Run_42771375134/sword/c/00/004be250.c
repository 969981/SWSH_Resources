/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004be250; name: FUN_004be250
 */


undefined8 FUN_004be250(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = *(long **)(param_2 + 0x28);
  uVar2 = *(uint *)(param_2 + 0x30);
  plVar1 = plVar4 + uVar2;
  if (uVar2 != 0) {
    lVar5 = (ulong)uVar2 << 3;
    do {
      if (*plVar4 == param_3) goto LAB_004be288;
      lVar5 = lVar5 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    plVar4 = plVar1;
  }
LAB_004be288:
  if (plVar1 == plVar4) {
    return 0x1d;
  }
  if (uVar2 < 2) {
    iVar3 = uVar2 - 1;
    *(int *)(param_2 + 0x30) = iVar3;
  }
  else {
    *plVar4 = plVar1[-1];
    iVar3 = *(int *)(param_2 + 0x30) + -1;
    *(int *)(param_2 + 0x30) = iVar3;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 6;
    return 1;
  }
  return 1;
}


