/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c1610; name: FUN_003c1610
 */


long FUN_003c1610(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = lVar3;
  if (*(long *)(lVar3 + 8) != lVar3) {
    lVar6 = *(long *)(lVar3 + 8);
    uVar2 = 0;
    uVar1 = 0xfffffffe;
    do {
      uVar5 = uVar1;
      uVar8 = uVar2;
      lVar4 = lVar6;
      uVar1 = uVar5 + 1;
      lVar6 = *(long *)(lVar4 + 8);
      uVar2 = uVar8 + 1;
    } while (lVar4 != *(long *)(lVar4 + 8));
    if ((uVar1 != 0xfffffffe) && (*(long *)(param_1 + 8) = lVar4, uVar1 != 0xffffffff)) {
      uVar5 = uVar5 + 2;
      if ((uVar5 & 3) != 0) {
        iVar7 = -(uVar8 & 3);
        lVar6 = lVar3;
        do {
          lVar3 = *(long *)(lVar6 + 8);
          *(long *)(lVar6 + 8) = lVar4;
          uVar5 = uVar5 - 1;
          iVar7 = iVar7 + 1;
          lVar6 = lVar3;
        } while (iVar7 != 0);
      }
      if (2 < uVar1) {
        do {
          lVar6 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4;
          lVar3 = *(long *)(lVar6 + 8);
          *(long *)(lVar6 + 8) = lVar4;
          lVar6 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4;
          lVar3 = *(long *)(lVar6 + 8);
          uVar5 = uVar5 - 4;
          *(long *)(lVar6 + 8) = lVar4;
        } while (uVar5 != 0);
      }
    }
  }
  return lVar4;
}


