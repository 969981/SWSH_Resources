/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ba090; name: FUN_011ba090
 */


int FUN_011ba090(long param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  plVar6 = *(long **)(param_1 + 0x450);
  if (plVar6 == (long *)0x0) {
    return 0;
  }
  lVar4 = *plVar6;
  if (lVar4 == plVar6[1]) {
    return 0;
  }
  uVar10 = (plVar6[1] + -0x10) - lVar4;
  uVar9 = uVar10 >> 4;
  uVar2 = (int)uVar9 + 1;
  uVar7 = (ulong)uVar2 & 3;
  if (uVar10 < 0x30) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    lVar8 = (uVar7 - 1) - uVar9;
    do {
      if (*(int *)(lVar4 + 8) == 1) {
        iVar3 = iVar3 + 1;
      }
      piVar5 = (int *)(lVar4 + 0x28);
      if (*(int *)(lVar4 + 0x18) == 1) {
        iVar3 = iVar3 + 1;
      }
      piVar1 = (int *)(lVar4 + 0x38);
      lVar4 = lVar4 + 0x40;
      if (*piVar5 == 1) {
        iVar3 = iVar3 + 1;
      }
      if (*piVar1 == 1) {
        iVar3 = iVar3 + 1;
      }
      lVar8 = lVar8 + 4;
    } while (lVar8 != 0);
  }
  if ((uVar2 & 3) != 0) {
    lVar8 = -uVar7;
    piVar5 = (int *)(lVar4 + 8);
    do {
      if (*piVar5 == 1) {
        iVar3 = iVar3 + 1;
      }
      lVar8 = lVar8 + 1;
      piVar5 = piVar5 + 4;
    } while (lVar8 != 0);
  }
  return iVar3;
}


