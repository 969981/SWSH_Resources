/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005aeec0; name: FUN_005aeec0
 */


long FUN_005aeec0(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  iVar1 = *(int *)(param_1 + 0x498);
  if (iVar1 < 1) {
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = 0;
    do {
      while (lVar5 = *(long *)(*(long *)(param_1 + 0x490) + lVar4 * 8), lVar5 != 0) {
        if ((*(uint *)(lVar5 + 0x54) < param_2) ||
           (lVar4 = lVar4 + 1, lVar2 = lVar5, iVar1 <= lVar4)) goto LAB_005aef20;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
  }
LAB_005aef20:
  if (((*(byte *)(param_1 + 0x154) >> 3 & 1) == 0) && (0 < *(int *)(param_1 + 0x20c))) {
    lVar4 = 0;
    plVar3 = (long *)(*(long *)(param_1 + 0x4a8) + 0x38);
    do {
      lVar5 = *plVar3;
      if (lVar5 == 0) {
        lVar5 = lVar2;
      }
      else if (*(uint *)(lVar5 + 0x54) < param_2) {
        return lVar2;
      }
      lVar2 = lVar5;
      lVar4 = lVar4 + 1;
      plVar3 = plVar3 + 0x21;
    } while (lVar4 < *(int *)(param_1 + 0x20c));
  }
  return lVar2;
}


