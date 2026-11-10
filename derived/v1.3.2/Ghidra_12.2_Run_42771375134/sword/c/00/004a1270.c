/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a1270; name: FUN_004a1270
 */


void FUN_004a1270(long param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  
  bVar1 = *param_2;
  if ((bVar1 == 0xff) && (*(long *)(param_2 + 8) == 0)) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x18) + -1;
    if (-1 < iVar9) {
      lVar19 = *(long *)(param_1 + 0x10);
      iVar12 = 0;
      do {
        while( true ) {
          iVar4 = iVar9 - iVar12;
          if (iVar4 < 0) {
            iVar4 = iVar4 + 1;
          }
          iVar4 = iVar12 + (iVar4 >> 1);
          lVar20 = (long)iVar4;
          bVar2 = *(byte *)(lVar19 + (long)iVar4 * 0x28 + 0x20);
          if (bVar1 < bVar2) break;
          if (bVar1 <= bVar2) {
            if (lVar19 + lVar20 * 0x28 == 0) {
              return;
            }
            uVar10 = *(ulong *)(param_2 + 8);
            if (uVar10 == 0) {
              pcVar7 = (char *)(lVar19 + lVar20 * 0x28 + 0xc);
              if (*pcVar7 == '\0') goto LAB_004a14b0;
              *pcVar7 = '\0';
              cVar3 = *(char *)(lVar19 + lVar20 * 0x28 + 0xc);
              goto joined_r0x004a14bc;
            }
            lVar5 = lVar19 + lVar20 * 0x28;
            puVar6 = (uint *)(lVar5 + 0x18);
            uVar13 = *puVar6;
            uVar15 = uVar13 - 1;
            plVar21 = (long *)(lVar5 + 0x10);
            if ((int)uVar15 < 0) goto LAB_004a1480;
            lVar5 = *plVar21;
            iVar9 = 0;
            uVar17 = uVar15;
            goto LAB_004a1338;
          }
          iVar12 = iVar4 + 1;
          if (iVar9 < iVar12) {
            return;
          }
        }
        iVar9 = iVar4 + -1;
      } while (iVar12 <= iVar9);
    }
  }
  return;
LAB_004a1338:
  iVar12 = uVar17 - iVar9;
  if (iVar12 < 0) {
    iVar12 = iVar12 + 1;
  }
  iVar12 = iVar9 + (iVar12 >> 1);
  uVar18 = *(ulong *)(lVar5 + (long)iVar12 * 0x10 + 8);
  if (uVar18 <= uVar10) {
    if (uVar18 < uVar10) {
      iVar9 = iVar12 + 1;
      if ((int)uVar17 < iVar9) goto LAB_004a1480;
      goto LAB_004a1338;
    }
    puVar14 = (undefined8 *)(lVar5 + (long)iVar12 * 0x10);
    puVar11 = (undefined8 *)(lVar5 + (ulong)uVar13 * 0x10 + -0x10);
    if (puVar14 < puVar11) {
      uVar10 = (ulong)uVar13 * 0x10 + -0x11 + (long)iVar12 * -0x10;
      uVar13 = ((uint)(uVar10 >> 4) & 0xfffffff) + 1;
      if ((uVar13 & 7) != 0) {
        lVar5 = -((ulong)uVar13 & 7);
        puVar16 = puVar14;
        do {
          puVar14 = puVar16 + 2;
          *puVar16 = *puVar14;
          puVar16[1] = puVar16[3];
          lVar5 = lVar5 + 1;
          puVar16 = puVar14;
        } while (lVar5 != 0);
      }
      if (0x6f < uVar10) {
        do {
          *puVar14 = puVar14[2];
          puVar14[1] = puVar14[3];
          puVar14[2] = puVar14[4];
          puVar14[3] = puVar14[5];
          puVar14[4] = puVar14[6];
          puVar14[5] = puVar14[7];
          puVar14[6] = puVar14[8];
          puVar14[7] = puVar14[9];
          puVar14[8] = puVar14[10];
          puVar14[9] = puVar14[0xb];
          puVar14[10] = puVar14[0xc];
          puVar14[0xb] = puVar14[0xd];
          puVar14[0xc] = puVar14[0xe];
          puVar14[0xd] = puVar14[0xf];
          puVar16 = puVar14 + 0x10;
          puVar14[0xe] = *puVar16;
          puVar14[0xf] = puVar14[0x11];
          puVar14 = puVar16;
        } while (puVar16 < puVar11);
      }
      uVar15 = *puVar6 - 1;
    }
    *puVar6 = uVar15;
    uVar13 = uVar15;
LAB_004a1480:
    if ((uVar13 == 0) && (*plVar21 != 0)) {
      *puVar6 = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar21 = 0;
      *(undefined4 *)(lVar19 + lVar20 * 0x28 + 0x1c) = 0;
    }
LAB_004a14b0:
    cVar3 = *(char *)(lVar19 + lVar20 * 0x28 + 0xc);
joined_r0x004a14bc:
    if (cVar3 != '\0') {
      return;
    }
    piVar8 = (int *)(lVar19 + lVar20 * 0x28 + 0x18);
    if (*piVar8 != 0) {
      return;
    }
    plVar21 = (long *)(lVar19 + lVar20 * 0x28 + 0x10);
    if (*plVar21 != 0) {
      *piVar8 = 0;
      FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
      *plVar21 = 0;
      *(undefined4 *)(lVar19 + lVar20 * 0x28 + 0x1c) = 0;
    }
    FUN_004a0d40((long *)(param_1 + 0x10),*param_2);
    return;
  }
  uVar17 = iVar12 - 1;
  if ((int)uVar17 < iVar9) goto LAB_004a1480;
  goto LAB_004a1338;
}


