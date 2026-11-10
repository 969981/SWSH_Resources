/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0970; name: FUN_004d0970
 */


int FUN_004d0970(long param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  
  if (*(uint *)(param_1 + 0x30) == 0) {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  lVar6 = lVar4 + (ulong)*(uint *)(param_1 + 0x30) * 0x60;
  lVar5 = *(long *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0x10) + -1;
  iVar3 = 0;
  if (param_3 == 0) {
    do {
      if (-1 < iVar1) {
        iVar8 = 0;
        iVar9 = iVar1;
        do {
          while( true ) {
            iVar2 = iVar9 - iVar8;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar8 + (iVar2 >> 1);
            uVar7 = *(ulong *)(lVar5 + (long)iVar2 * 8);
            if (*(ulong *)(lVar4 + 0x50) < uVar7) break;
            if (*(ulong *)(lVar4 + 0x50) <= uVar7) {
              if (lVar5 + (long)iVar2 * 8 != 0) {
                iVar3 = iVar3 + 1;
              }
              goto joined_r0x004d0a94;
            }
            iVar8 = iVar2 + 1;
            if (iVar9 < iVar8) goto joined_r0x004d0a94;
          }
          iVar9 = iVar2 + -1;
        } while (iVar8 <= iVar9);
      }
joined_r0x004d0a94:
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar6);
  }
  else {
    do {
      while (param_3 != 1) {
LAB_004d09fc:
        lVar4 = lVar4 + 0x60;
        if (lVar4 == lVar6) {
          return iVar3;
        }
      }
      if (-1 < iVar1) {
        uVar7 = *(ulong *)(lVar4 + 0x50);
        iVar8 = 0;
        iVar9 = iVar1;
        do {
          while( true ) {
            iVar2 = iVar9 - iVar8;
            if (iVar2 < 0) {
              iVar2 = iVar2 + 1;
            }
            iVar2 = iVar8 + (iVar2 >> 1);
            uVar10 = *(ulong *)(lVar5 + (long)iVar2 * 8);
            if (uVar7 > uVar10 || uVar10 == uVar7) break;
            iVar9 = iVar2 + -1;
            if (iVar9 < iVar8) goto LAB_004d0a0c;
          }
          if (uVar7 <= uVar10) {
            if (lVar5 + (long)iVar2 * 8 != 0) goto LAB_004d09fc;
            break;
          }
          iVar8 = iVar2 + 1;
        } while (iVar8 <= iVar9);
      }
LAB_004d0a0c:
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x60;
    } while (lVar4 != lVar6);
  }
  return iVar3;
}


