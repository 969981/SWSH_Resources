/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3d80; name: FUN_004e3d80
 */


void FUN_004e3d80(void)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  
  puVar4 = PTR_DAT_02713620;
  puVar2 = PTR_DAT_02712de0;
  if (*(long *)PTR_DAT_02713620 != 0) {
    iVar6 = 0;
    do {
      lVar7 = *(long *)puVar2;
      piVar8 = *(int **)(lVar7 + 0xa0);
      uVar9 = *(uint *)(lVar7 + 0xa8);
      piVar11 = piVar8 + (ulong)uVar9 * 6;
      if (uVar9 != 0) {
        lVar12 = (ulong)uVar9 * 0x18;
        do {
          if (*piVar8 == iVar6) goto LAB_004e3df4;
          lVar12 = lVar12 + -0x18;
          piVar8 = piVar8 + 6;
        } while (lVar12 != 0);
        piVar8 = piVar11;
      }
LAB_004e3df4:
      if (piVar11 != piVar8) {
        if (piVar8 < piVar11 + -6) {
          do {
            piVar10 = piVar8 + 6;
            *(undefined8 *)piVar8 = *(undefined8 *)piVar10;
            *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(piVar8 + 8);
            *(undefined8 *)(piVar8 + 4) = *(undefined8 *)(piVar8 + 10);
            piVar8 = piVar10;
          } while (piVar10 < piVar11 + -6);
          uVar9 = *(uint *)(lVar7 + 0xa8);
        }
        *(uint *)(lVar7 + 0xa8) = uVar9 - 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x11);
    FUN_00432780(PTR_LAB_02713648,0x188);
    puVar5 = PTR_DAT_02713630;
    lVar7 = *(long *)(PTR_DAT_02713630 + 0x10);
    puVar2 = PTR_DAT_02713638;
    while (PTR_DAT_02713638 = puVar2, lVar7 != 0) {
      if ((5 < *(uint *)(*(long *)(lVar7 + 8) + 0x40)) &&
         (*(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x38) + 0x28) != 0)) {
        FUN_00462d70();
        lVar7 = *(long *)(puVar5 + 0x10);
        puVar2 = PTR_DAT_02713638;
      }
    }
    lVar7 = *(long *)(puVar2 + 0x10);
    puVar3 = (undefined4 *)PTR_DAT_02713640;
    while (PTR_DAT_02713640 = (undefined *)puVar3, lVar7 != 0) {
      if ((6 < *(uint *)(*(long *)(lVar7 + 8) + 0x40)) &&
         (*(long *)(*(long *)(*(long *)(lVar7 + 8) + 0x38) + 0x30) != 0)) {
        FUN_00462d70();
        lVar7 = *(long *)(puVar2 + 0x10);
        puVar3 = (undefined4 *)PTR_DAT_02713640;
      }
    }
    lVar13 = *(long *)puVar4;
    lVar12 = *(long *)(lVar13 + 0xe0);
    piVar8 = (int *)(lVar13 + 0xe8);
    lVar7 = lVar12;
    if (*piVar8 != 0) {
      do {
        lVar12 = *(long *)(lVar7 + 8);
        if (lVar12 != 0) {
          if (*(uint *)(lVar7 + 0x10) != 0) {
            lVar13 = (ulong)*(uint *)(lVar7 + 0x10) * 0x48;
            pcVar14 = (char *)(lVar12 + 0x40);
            do {
              if ((*(long *)(pcVar14 + -8) != 0) && (*pcVar14 != '\0')) {
                FUN_00404870(*puVar3);
                *pcVar14 = '\0';
              }
              pcVar14[-8] = '\0';
              pcVar14[-7] = '\0';
              pcVar14[-6] = '\0';
              pcVar14[-5] = '\0';
              pcVar14[-4] = '\0';
              pcVar14[-3] = '\0';
              pcVar14[-2] = '\0';
              pcVar14[-1] = '\0';
              lVar13 = lVar13 + -0x48;
              pcVar14 = pcVar14 + 0x48;
            } while (lVar13 != 0);
            lVar12 = *(long *)(lVar7 + 8);
          }
          *(undefined4 *)(lVar7 + 0x10) = 0;
          FUN_00404870(*puVar3,lVar12);
          *(undefined8 *)(lVar7 + 8) = 0;
          *(undefined4 *)(lVar7 + 0x14) = 0;
          lVar13 = *(long *)puVar4;
        }
        lVar12 = *(long *)(lVar13 + 0xe0);
        lVar7 = lVar7 + 0x18;
      } while (lVar7 != lVar12 + (ulong)*(uint *)(lVar13 + 0xe8) * 0x18);
      piVar8 = (int *)(lVar13 + 0xe8);
    }
    if (lVar12 != 0) {
      *piVar8 = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640,lVar12);
      *(undefined8 *)(lVar13 + 0xe0) = 0;
      *(undefined4 *)(lVar13 + 0xec) = 0;
      lVar13 = *(long *)puVar4;
    }
    if (lVar13 != 0) {
      uVar1 = *(undefined4 *)PTR_DAT_02713640;
      nn::os::FinalizeMutex((MutexType *)(lVar13 + 0xb8));
      FUN_004ed7d0(lVar13 + 0x18);
      FUN_00404870(uVar1,lVar13);
    }
    *(undefined8 *)puVar4 = 0;
    puVar2 = PTR_DAT_02713650;
    lVar7 = *(long *)PTR_DAT_02713650;
    if (lVar7 != 0) {
      nn::os::FinalizeMutex((MutexType *)(lVar7 + 0x28));
      if (*(long *)(lVar7 + 0x10) != 0) {
        *(undefined4 *)(lVar7 + 0x18) = 0;
        FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
        *(undefined8 *)(lVar7 + 0x10) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
      }
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640,*(undefined8 *)puVar2);
      *(undefined8 *)puVar2 = 0;
    }
  }
  puVar2 = PTR_DAT_02713640;
  if (*(int *)PTR_DAT_02713640 != -1) {
    FUN_00405710();
    *(undefined4 *)puVar2 = 0xffffffff;
  }
  return;
}


