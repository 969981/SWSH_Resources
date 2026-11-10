/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b68d0; name: FUN_004b68d0
 */


void FUN_004b68d0(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined8 *puVar15;
  
  puVar6 = PTR_DAT_02713460;
  if ((int)param_1[1] != 0) {
    puVar14 = (uint *)*param_1;
    do {
      iVar7 = *(int *)(puVar6 + 8) + -1;
      if (-1 < iVar7) {
        uVar2 = *puVar14;
        lVar9 = *(long *)puVar6;
        iVar12 = 0;
        do {
          while( true ) {
            iVar13 = iVar7 - iVar12;
            if (iVar13 < 0) {
              iVar13 = iVar13 + 1;
            }
            uVar1 = iVar12 + (iVar13 >> 1);
            uVar4 = *(uint *)(lVar9 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar1 << 4));
            if (uVar2 < uVar4) break;
            if (uVar2 <= uVar4) {
              if (lVar9 + (long)(int)uVar1 * 0x10 != 0) {
                puVar15 = (undefined8 *)(lVar9 + (long)(int)uVar1 * 0x10 + 8);
                iVar7 = (**(code **)(*(long *)*puVar15 + 0x20))();
                if (iVar7 == 0) {
                  *puVar15 = 0;
                  uVar1 = *(uint *)(puVar6 + 8);
                  iVar7 = uVar1 - 1;
                  if (-1 < iVar7) {
                    lVar9 = *(long *)puVar6;
                    iVar12 = 0;
                    iVar13 = iVar7;
                    goto LAB_004b691c;
                  }
                }
              }
              goto LAB_004b6ab4;
            }
            iVar12 = uVar1 + 1;
            if (iVar7 < iVar12) goto LAB_004b6ab4;
          }
          iVar7 = uVar1 - 1;
        } while (iVar12 <= iVar7);
      }
LAB_004b6ab4:
      puVar14 = puVar14 + 1;
    } while (puVar14 != (uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4));
  }
  *(undefined4 *)(param_1 + 1) = 0;
  puVar6 = PTR_DAT_02713460;
  if ((*(int *)(PTR_DAT_02713460 + 8) == 0) && (*(long *)PTR_DAT_02713460 != 0)) {
    *(undefined4 *)(PTR_DAT_02713460 + 8) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)puVar6 = 0;
    *(undefined4 *)(puVar6 + 0xc) = 0;
  }
  return;
LAB_004b691c:
  do {
    iVar5 = iVar13 - iVar12;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 1;
    }
    uVar4 = iVar12 + (iVar5 >> 1);
    uVar3 = *(uint *)(lVar9 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar4 << 4));
    if (uVar3 <= uVar2) {
      if (uVar3 < uVar2) goto code_r0x004b6954;
      puVar15 = (undefined8 *)(lVar9 + (long)(int)uVar4 * 0x10);
      puVar8 = (undefined8 *)(lVar9 + (ulong)uVar1 * 0x10 + -0x10);
      if (puVar8 <= puVar15) goto LAB_004b6a1c;
      uVar11 = (ulong)uVar1 * 0x10 + -0x11 + (long)(int)uVar4 * -0x10;
      uVar2 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
      if ((uVar2 & 7) == 0) {
        if (uVar11 < 0x70) goto LAB_004b6a14;
        goto LAB_004b69bc;
      }
      lVar9 = -((ulong)uVar2 & 7);
      do {
        puVar10 = puVar15 + 2;
        *puVar15 = *puVar10;
        puVar15[1] = puVar15[3];
        lVar9 = lVar9 + 1;
        puVar15 = puVar10;
      } while (lVar9 != 0);
      if (0x6f < uVar11) {
LAB_004b69bc:
        do {
          *puVar15 = puVar15[2];
          puVar15[1] = puVar15[3];
          puVar15[2] = puVar15[4];
          puVar15[3] = puVar15[5];
          puVar15[4] = puVar15[6];
          puVar15[5] = puVar15[7];
          puVar15[6] = puVar15[8];
          puVar15[7] = puVar15[9];
          puVar15[8] = puVar15[10];
          puVar15[9] = puVar15[0xb];
          puVar15[10] = puVar15[0xc];
          puVar15[0xb] = puVar15[0xd];
          puVar15[0xc] = puVar15[0xe];
          puVar15[0xd] = puVar15[0xf];
          puVar10 = puVar15 + 0x10;
          puVar15[0xe] = *puVar10;
          puVar15[0xf] = puVar15[0x11];
          puVar15 = puVar10;
        } while (puVar10 < puVar8);
      }
LAB_004b6a14:
      iVar7 = *(int *)(puVar6 + 8) + -1;
LAB_004b6a1c:
      *(int *)(puVar6 + 8) = iVar7;
      break;
    }
    iVar13 = uVar4 - 1;
  } while (iVar12 <= iVar13);
  goto LAB_004b6ab4;
code_r0x004b6954:
  iVar12 = uVar4 + 1;
  if (iVar13 < iVar12) goto LAB_004b6ab4;
  goto LAB_004b691c;
}


