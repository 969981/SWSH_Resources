/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a1130; name: FUN_004a1130
 */


void FUN_004a1130(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  bVar1 = *param_2;
  if (((bVar1 == 0xff) && (param_2[8] == 0xff)) && (*(long *)(param_2 + 0x10) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar6) {
      lVar8 = *(long *)(param_1 + 0x10);
      iVar7 = 0;
      do {
        while( true ) {
          iVar3 = iVar6 - iVar7;
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          iVar3 = iVar7 + (iVar3 >> 1);
          lVar9 = (long)iVar3;
          bVar2 = *(byte *)(lVar8 + (long)iVar3 * 0x28 + 0x20);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            lVar4 = lVar8 + lVar9 * 0x28;
            if (lVar4 == 0) {
              return;
            }
            FUN_004a1270(lVar4,param_2 + 8);
            if (*(char *)(lVar8 + lVar9 * 0x28 + 0xc) != '\0') {
              return;
            }
            piVar5 = (int *)(lVar8 + lVar9 * 0x28 + 0x18);
            if (*piVar5 != 0) {
              return;
            }
            plVar10 = (long *)(lVar8 + lVar9 * 0x28 + 0x10);
            if (*plVar10 != 0) {
              *piVar5 = 0;
              FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
              *plVar10 = 0;
              *(undefined4 *)(lVar8 + lVar9 * 0x28 + 0x1c) = 0;
            }
            FUN_004a0bd0((long *)(param_1 + 0x10),*param_2);
            return;
          }
          iVar7 = iVar3 + 1;
          if (iVar6 < iVar7) {
            return;
          }
        }
        iVar6 = iVar3 + -1;
      } while (iVar7 <= iVar6);
    }
  }
  return;
}


