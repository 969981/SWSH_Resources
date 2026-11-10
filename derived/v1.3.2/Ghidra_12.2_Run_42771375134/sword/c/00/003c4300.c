/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003c4300; name: FUN_003c4300
 */


int FUN_003c4300(long *param_1,long param_2,long *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  
  lVar7 = *param_1;
  iVar8 = *(int *)(lVar7 + 0x34);
  if (iVar8 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    plVar9 = *(long **)(lVar7 + 0x28);
    do {
      while( true ) {
        iVar8 = iVar8 + -1;
        if ((*(char *)(*plVar9 + 0x24) == '\x04') &&
           (lVar6 = *(long *)(*plVar9 + 0x28), lVar6 != param_2)) break;
LAB_003c43f0:
        plVar9 = plVar9 + 1;
        if (iVar8 == 0) {
          return iVar5;
        }
      }
      uVar3 = FUN_003c5430(lVar6);
      lVar4 = *(long *)(lVar6 + 0x78);
      uVar2 = 0;
      if ((uVar3 & 1) == 0) {
        uVar2 = **(ushort **)(lVar6 + 0x68) & 6;
      }
      if (lVar4 == lVar7) {
        lVar4 = *(long *)(lVar6 + 0x80);
        uVar1 = uVar2 & 2;
        uVar2 = uVar2 & 4;
      }
      else {
        uVar1 = uVar2 & 4;
        uVar2 = uVar2 & 2;
      }
      if ((((lVar4 == 0) || ((*(byte *)(*(long *)(lVar4 + 0x50) + 0x2c) & 1) != 0)) ||
          (uVar2 != 0 && uVar1 == 0)) ||
         (lVar4 = *(long *)(lVar4 + 200), (*(byte *)(lVar4 + 0x58) & 1) != 0)) goto LAB_003c43f0;
      *param_3 = lVar4;
      FUN_003c17a0(lVar4,param_1,lVar6);
      iVar5 = iVar5 + 1;
      *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) | 1;
      param_3 = param_3 + 1;
      plVar9 = plVar9 + 1;
    } while (iVar8 != 0);
  }
  return iVar5;
}


