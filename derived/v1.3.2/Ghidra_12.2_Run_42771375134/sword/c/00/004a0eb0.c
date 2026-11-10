/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a0eb0; name: FUN_004a0eb0
 */


void FUN_004a0eb0(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  
  uVar1 = *param_2;
  if ((((uVar1 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar7 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar7) {
      lVar9 = *(long *)(param_1 + 0x10);
      iVar8 = 0;
      do {
        while( true ) {
          iVar4 = iVar7 - iVar8;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar8 + (iVar4 >> 1);
          lVar10 = (long)iVar4;
          uVar2 = *(uint *)(lVar9 + (long)iVar4 * 0x28 + 0x20);
          if (uVar1 < uVar2) break;
          if (uVar1 <= uVar2) {
            lVar5 = lVar9 + lVar10 * 0x28;
            if (lVar5 == 0) {
              return;
            }
            FUN_004a1010(lVar5,param_2 + 2);
            if (*(char *)(lVar9 + lVar10 * 0x28 + 0xc) != '\0') {
              return;
            }
            piVar6 = (int *)(lVar9 + lVar10 * 0x28 + 0x18);
            if (*piVar6 != 0) {
              return;
            }
            plVar11 = (long *)(lVar9 + lVar10 * 0x28 + 0x10);
            if (*plVar11 != 0) {
              uVar3 = *(undefined4 *)PTR_DAT_02712a90;
              *piVar6 = 0;
              FUN_00404870(uVar3);
              *plVar11 = 0;
              *(undefined4 *)(lVar9 + lVar10 * 0x28 + 0x1c) = 0;
            }
            FUN_0049ff40((long *)(param_1 + 0x10),*param_2);
            return;
          }
          iVar8 = iVar4 + 1;
          if (iVar7 < iVar8) {
            return;
          }
        }
        iVar7 = iVar4 + -1;
      } while (iVar8 <= iVar7);
    }
  }
  return;
}


