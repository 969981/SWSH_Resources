/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c16d0; name: FUN_003c16d0
 */


void FUN_003c16d0(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = lVar3;
  if (*(long *)(lVar3 + 8) != lVar3) {
    lVar5 = *(long *)(lVar3 + 8);
    uVar2 = 0;
    uVar1 = 0xfffffffe;
    do {
      uVar6 = uVar1;
      uVar8 = uVar2;
      lVar4 = lVar5;
      uVar1 = uVar6 + 1;
      lVar5 = *(long *)(lVar4 + 8);
      uVar2 = uVar8 + 1;
    } while (lVar4 != *(long *)(lVar4 + 8));
    if ((uVar1 != 0xfffffffe) && (*(long *)(param_1 + 8) = lVar4, uVar1 != 0xffffffff)) {
      uVar6 = uVar6 + 2;
      if ((uVar6 & 3) != 0) {
        iVar7 = -(uVar8 & 3);
        lVar5 = lVar3;
        do {
          lVar3 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 8) = lVar4;
          uVar6 = uVar6 - 1;
          iVar7 = iVar7 + 1;
          lVar5 = lVar3;
        } while (iVar7 != 0);
      }
      if (2 < uVar1) {
        do {
          lVar5 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4;
          lVar3 = *(long *)(lVar5 + 8);
          *(long *)(lVar5 + 8) = lVar4;
          lVar5 = *(long *)(lVar3 + 8);
          *(long *)(lVar3 + 8) = lVar4;
          lVar3 = *(long *)(lVar5 + 8);
          uVar6 = uVar6 - 4;
          *(long *)(lVar5 + 8) = lVar4;
        } while (uVar6 != 0);
      }
    }
  }
  if ((*(byte *)(lVar4 + 0x58) >> 2 & 1) == 0) {
    FUN_003c1a80(param_2,lVar4);
    return;
  }
  return;
}


