/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0ab0; name: FUN_004d0ab0
 */


long FUN_004d0ab0(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_1 + 0x28);
    lVar4 = *(long *)(param_2 + 8);
    lVar5 = lVar3 + (ulong)*(uint *)(param_1 + 0x30) * 0x60;
    iVar1 = *(int *)(param_2 + 0x10) + -1;
    if (param_3 == 0) {
      do {
        if (-1 < iVar1) {
          iVar7 = 0;
          iVar8 = iVar1;
          do {
            while( true ) {
              iVar2 = iVar8 - iVar7;
              if (iVar2 < 0) {
                iVar2 = iVar2 + 1;
              }
              iVar2 = iVar7 + (iVar2 >> 1);
              uVar6 = *(ulong *)(lVar4 + (long)iVar2 * 8);
              if (*(ulong *)(lVar3 + 0x50) < uVar6) break;
              if (*(ulong *)(lVar3 + 0x50) <= uVar6) {
                if (lVar4 + (long)iVar2 * 8 != 0) {
                  if (param_4 == 0) {
                    return lVar3;
                  }
                  param_4 = param_4 + -1;
                }
                goto LAB_004d0bc4;
              }
              iVar7 = iVar2 + 1;
              if (iVar8 < iVar7) goto LAB_004d0bc4;
            }
            iVar8 = iVar2 + -1;
          } while (iVar7 <= iVar8);
        }
LAB_004d0bc4:
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != lVar5);
    }
    else {
      do {
        while (param_3 == 1) {
          if (-1 < iVar1) {
            uVar6 = *(ulong *)(lVar3 + 0x50);
            iVar7 = 0;
            iVar8 = iVar1;
            do {
              while( true ) {
                iVar2 = iVar8 - iVar7;
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 1;
                }
                iVar2 = iVar7 + (iVar2 >> 1);
                uVar9 = *(ulong *)(lVar4 + (long)iVar2 * 8);
                if (uVar6 > uVar9 || uVar9 == uVar6) break;
                iVar8 = iVar2 + -1;
                if (iVar8 < iVar7) goto LAB_004d0b48;
              }
              if (uVar6 <= uVar9) {
                if (lVar4 + (long)iVar2 * 8 != 0) goto LAB_004d0b38;
                break;
              }
              iVar7 = iVar2 + 1;
            } while (iVar7 <= iVar8);
          }
LAB_004d0b48:
          if (param_4 == 0) {
            return lVar3;
          }
          param_4 = param_4 + -1;
          lVar3 = lVar3 + 0x60;
          if (lVar3 == lVar5) {
            return 0;
          }
        }
LAB_004d0b38:
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != lVar5);
    }
  }
  return 0;
}


