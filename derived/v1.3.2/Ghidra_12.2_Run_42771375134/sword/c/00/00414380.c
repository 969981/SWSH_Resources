/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00414380; name: FUN_00414380
 */


/* WARNING: Removing unreachable block (ram,0x00414438) */

undefined8 FUN_00414380(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  undefined4 *puVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  puVar6 = PTR_DAT_02712a90;
  dVar20 = (*(double *)(param_2 + 6) + *(double *)(param_2 + 8)) - *(double *)(param_2 + 4);
  if (dVar20 <= 0.0) {
LAB_004145c0:
    uVar8 = 1;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xe8);
    uVar15 = *(uint *)(param_1 + 0xec);
    if (uVar3 < uVar15) {
LAB_004144e0:
      if (uVar3 < uVar15) {
        uVar15 = *(uint *)(param_1 + 0xe8);
        lVar11 = *(long *)(param_1 + 0xe0);
        *(uint *)(param_1 + 0xe8) = uVar15 + 1;
        puVar14 = (undefined4 *)(lVar11 + (ulong)uVar15 * 0x18);
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = *param_2;
          lVar11 = lVar11 + (ulong)uVar15 * 0x18;
          *(undefined4 *)(lVar11 + 4) = param_2[1];
          dVar17 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
          dVar17 = dVar17 * DAT_01cd5288;
          dVar16 = dVar17 * (*(double *)(param_2 + 4) + *(double *)(param_2 + 2));
          dVar18 = 0.5;
          if (dVar16 <= 0.0) {
            dVar18 = -0.5;
          }
          dVar20 = dVar17 * dVar20;
          dVar19 = 0.5;
          if (dVar20 <= 0.0) {
            dVar19 = -0.5;
          }
          *(int *)(lVar11 + 8) = (int)(dVar18 + dVar16);
          *(int *)(lVar11 + 0xc) = (int)(dVar19 + dVar20);
          dVar20 = 0.5;
          if (dVar17 * *(double *)(param_2 + 8) <= 0.0) {
            dVar20 = -0.5;
          }
          iVar10 = (int)(dVar20 + dVar17 * *(double *)(param_2 + 8));
          *(int *)(lVar11 + 0x10) = iVar10;
          dVar20 = 0.5;
          if (dVar17 * *(double *)(param_2 + 4) <= 0.0) {
            dVar20 = -0.5;
          }
          iVar12 = (int)(dVar20 + dVar17 * *(double *)(param_2 + 4));
          iVar5 = 0;
          if (iVar10 != 0) {
            iVar5 = iVar12 / iVar10;
          }
          iVar12 = iVar12 - iVar5 * iVar10;
          *(int *)(lVar11 + 0x14) = iVar12;
          if (iVar12 < 0) {
            *(int *)(lVar11 + 0x14) = iVar12 + iVar10;
          }
          goto LAB_004145c0;
        }
      }
    }
    else {
      uVar15 = uVar15 + 1;
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar15 * 0x18);
      if (puVar7 != (undefined8 *)0x0) {
        puVar9 = *(undefined8 **)(param_1 + 0xe0);
        if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar7)) {
          uVar4 = *(uint *)(param_1 + 0xe8);
          if (uVar4 != 0) {
            puVar7[2] = puVar9[2];
            puVar7[1] = puVar9[1];
            *puVar7 = *puVar9;
            if (uVar4 != 1) {
              if (uVar4 == 2) {
                lVar11 = 1;
              }
              else {
                lVar11 = 1;
                lVar13 = 0;
                do {
                  lVar1 = *(long *)(param_1 + 0xe0) + lVar13;
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x18) = *(undefined8 *)(lVar1 + 0x18);
                  lVar1 = *(long *)(param_1 + 0xe0) + lVar13;
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x40) = *(undefined8 *)(lVar1 + 0x40);
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x38) = *(undefined8 *)(lVar1 + 0x38);
                  lVar11 = lVar11 + 2;
                  *(undefined8 *)((long)puVar7 + lVar13 + 0x30) = *(undefined8 *)(lVar1 + 0x30);
                  lVar13 = lVar13 + 0x30;
                } while ((ulong)uVar4 - (ulong)(~uVar4 & 1) != lVar11);
                if ((~uVar4 & 1) == 0) goto LAB_004144cc;
              }
              puVar9 = puVar7 + lVar11 * 3;
              puVar2 = (undefined8 *)(*(long *)(param_1 + 0xe0) + lVar11 * 0x18);
              puVar9[2] = puVar2[2];
              puVar9[1] = puVar2[1];
              *puVar9 = *puVar2;
            }
LAB_004144cc:
            puVar9 = *(undefined8 **)(param_1 + 0xe0);
          }
          FUN_00404870(*(undefined4 *)puVar6,puVar9);
        }
        *(undefined8 **)(param_1 + 0xe0) = puVar7;
        *(uint *)(param_1 + 0xec) = uVar15;
        goto LAB_004144e0;
      }
    }
    uVar8 = 2;
  }
  return uVar8;
}


