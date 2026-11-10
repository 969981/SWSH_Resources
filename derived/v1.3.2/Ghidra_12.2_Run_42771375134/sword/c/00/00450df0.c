/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00450df0; name: FUN_00450df0
 */


void FUN_00450df0(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 *local_c0;
  undefined8 local_a8;
  
  plVar19 = (long *)FUN_004958e0(*(undefined8 *)(param_1 + 0x10));
  if (*(char *)(param_1 + 0xe0) != '\0') {
    if (DAT_01d4c2ec <= *(float *)(param_1 + 0xd4) * DAT_01d4c158) {
      uVar22 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * *(float *)(param_1 + 0xd4));
      fVar28 = (float)(uVar22 & 0x7fffff | 0x3f800000);
      fVar28 = (DAT_01d4c23c + fVar28 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar28)) *
               (float)(uVar22 & 0xff800000);
    }
    else {
      fVar28 = 0.0;
    }
    FUN_00451370(fVar28,*(undefined4 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),plVar19,
                 param_2);
  }
  puVar18 = PTR_DAT_02712d38;
  puVar17 = PTR_DAT_02712d18;
  puVar16 = PTR_DAT_02712a90;
  local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x48);
  if (*(char *)(param_1 + 0x11d) == '\0') {
    local_c0 = &local_a8;
    uVar22 = 1;
  }
  else {
    if ((char)plVar19[0x17] == '\0') {
      plVar19 = *(long **)PTR_DAT_02712d18;
      puVar1 = PTR_DAT_02712d28 + 0x10;
      puVar2 = PTR_DAT_02712d30 + 0x10;
      do {
        while (plVar19 == (long *)0x0) {
          plVar19 = (long *)FUN_00404690(*(undefined4 *)puVar16,0xc0);
          *plVar19 = (long)puVar1;
          plVar19[1] = 0;
          lVar27 = *(long *)(puVar18 + 8);
          plVar19[2] = 0;
          plVar19[3] = lVar27;
          plVar7 = (long *)(puVar18 + 0x10);
          if (*(long *)(puVar18 + 0x10) != 0) {
            plVar7 = (long *)(lVar27 + 0x10);
          }
          *plVar7 = (long)plVar19;
          *(long **)(puVar18 + 8) = plVar19;
          *(int *)puVar18 = *(int *)puVar18 + 1;
          *plVar19 = (long)puVar2;
          plVar19[7] = 0;
          plVar19[8] = 0;
          plVar19[10] = 0;
          plVar19[0xb] = 0;
          plVar19[0xf] = 0;
          plVar19[0x10] = 0;
          plVar19[0x12] = 0;
          plVar19[0x13] = 0;
          plVar19[0x15] = 0;
          plVar19[0x16] = 0;
          *(long **)puVar17 = plVar19;
          *(undefined2 *)(plVar19 + 0x17) = 0x101;
          if ((char)plVar19[0x17] != '\0') goto LAB_00450f94;
        }
      } while ((char)plVar19[0x17] == '\0');
    }
LAB_00450f94:
    local_c0 = (undefined8 *)plVar19[10];
    uVar22 = *(uint *)(plVar19 + 0xb);
  }
  puVar16 = PTR_DAT_02712df0;
  fVar15 = DAT_01d4c714;
  fVar14 = DAT_01d4c46c;
  fVar13 = DAT_01d4c2ec;
  fVar12 = DAT_01d4c23c;
  fVar11 = DAT_01d4c1d8;
  fVar10 = DAT_01d4c158;
  fVar28 = DAT_01d4bda4;
  lVar27 = 0;
  do {
    lVar3 = param_1 + lVar27 * 4;
    if ((*(int *)(lVar3 + 0xc4) != 0) && (uVar22 != 0)) {
      uVar26 = 0;
      do {
        if (*(float *)puVar16 < *(float *)(lVar3 + 0x94)) {
          uVar8 = *(uint *)(param_2 + 1);
          uVar24 = *(uint *)((long)param_2 + 0xc);
          if (uVar24 <= uVar8) {
            uVar24 = uVar24 + 1;
            puVar20 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar24 << 5)
            ;
            if (puVar20 == (undefined8 *)0x0) goto LAB_0045131c;
            puVar21 = (undefined8 *)*param_2;
            if ((puVar21 != (undefined8 *)0x0) && (puVar21 != puVar20)) {
              uVar9 = *(uint *)(param_2 + 1);
              if (uVar9 != 0) {
                *(undefined4 *)(puVar20 + 3) = *(undefined4 *)(puVar21 + 3);
                puVar20[2] = puVar21[2];
                puVar20[1] = puVar21[1];
                *puVar20 = *puVar21;
                if (uVar9 != 1) {
                  uVar6 = uVar9 + 7 & 7;
                  if ((ulong)uVar9 - 2 < 7) {
                    lVar25 = 1;
                  }
                  else {
                    lVar23 = 0x100;
                    lVar25 = 1;
                    do {
                      lVar4 = *param_2 + lVar23;
                      puVar21 = (undefined8 *)((long)puVar20 + lVar23);
                      *(undefined4 *)(puVar21 + -0x19) = *(undefined4 *)(lVar4 + -200);
                      puVar21[-0x1a] = *(undefined8 *)(lVar4 + -0xd0);
                      puVar21[-0x1b] = *(undefined8 *)(lVar4 + -0xd8);
                      puVar21[-0x1c] = *(undefined8 *)(lVar4 + -0xe0);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -0x15) = *(undefined4 *)(lVar4 + -0xa8);
                      puVar21[-0x16] = *(undefined8 *)(lVar4 + -0xb0);
                      puVar21[-0x17] = *(undefined8 *)(lVar4 + -0xb8);
                      puVar21[-0x18] = *(undefined8 *)(lVar4 + -0xc0);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -0x11) = *(undefined4 *)(lVar4 + -0x88);
                      puVar21[-0x12] = *(undefined8 *)(lVar4 + -0x90);
                      puVar21[-0x13] = *(undefined8 *)(lVar4 + -0x98);
                      puVar21[-0x14] = *(undefined8 *)(lVar4 + -0xa0);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -0xd) = *(undefined4 *)(lVar4 + -0x68);
                      puVar21[-0xe] = *(undefined8 *)(lVar4 + -0x70);
                      puVar21[-0xf] = *(undefined8 *)(lVar4 + -0x78);
                      puVar21[-0x10] = *(undefined8 *)(lVar4 + -0x80);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -9) = *(undefined4 *)(lVar4 + -0x48);
                      puVar21[-10] = *(undefined8 *)(lVar4 + -0x50);
                      puVar21[-0xb] = *(undefined8 *)(lVar4 + -0x58);
                      puVar21[-0xc] = *(undefined8 *)(lVar4 + -0x60);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -5) = *(undefined4 *)(lVar4 + -0x28);
                      puVar21[-6] = *(undefined8 *)(lVar4 + -0x30);
                      puVar21[-7] = *(undefined8 *)(lVar4 + -0x38);
                      puVar21[-8] = *(undefined8 *)(lVar4 + -0x40);
                      lVar4 = *param_2 + lVar23;
                      *(undefined4 *)(puVar21 + -1) = *(undefined4 *)(lVar4 + -8);
                      puVar21[-2] = *(undefined8 *)(lVar4 + -0x10);
                      puVar21[-3] = *(undefined8 *)(lVar4 + -0x18);
                      puVar21[-4] = *(undefined8 *)(lVar4 + -0x20);
                      puVar5 = (undefined8 *)(*param_2 + lVar23);
                      lVar23 = lVar23 + 0x100;
                      *(undefined4 *)(puVar21 + 3) = *(undefined4 *)(puVar5 + 3);
                      puVar21[2] = puVar5[2];
                      puVar21[1] = puVar5[1];
                      lVar25 = lVar25 + 8;
                      *puVar21 = *puVar5;
                    } while ((ulong)uVar9 - (ulong)uVar6 != lVar25);
                  }
                  if (uVar6 != 0) {
                    lVar25 = lVar25 << 5;
                    lVar23 = -(ulong)uVar6;
                    do {
                      puVar21 = (undefined8 *)(*param_2 + lVar25);
                      puVar5 = (undefined8 *)((long)puVar20 + lVar25);
                      lVar25 = lVar25 + 0x20;
                      *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(puVar21 + 3);
                      puVar5[2] = puVar21[2];
                      puVar5[1] = puVar21[1];
                      lVar23 = lVar23 + 1;
                      *puVar5 = *puVar21;
                    } while (lVar23 != 0);
                  }
                }
                puVar21 = (undefined8 *)*param_2;
              }
              FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,puVar21);
            }
            *param_2 = (long)puVar20;
            *(uint *)((long)param_2 + 0xc) = uVar24;
          }
          if (uVar8 < uVar24) {
            uVar24 = *(uint *)(param_2 + 1);
            lVar23 = *param_2;
            *(uint *)(param_2 + 1) = uVar24 + 1;
            puVar20 = (undefined8 *)(lVar23 + (ulong)uVar24 * 0x20);
            if (puVar20 != (undefined8 *)0x0) {
              *puVar20 = local_c0[uVar26];
              lVar23 = lVar23 + (ulong)uVar24 * 0x20;
              *(int *)(lVar23 + 8) = *(int *)(lVar3 + 0xc4);
              fVar29 = *(float *)(lVar3 + 0x94);
              fVar30 = 0.0;
              if (fVar13 <= fVar29 * fVar10) {
                uVar24 = (uint)(fVar15 + fVar28 * fVar29);
                fVar29 = (float)(uVar24 & 0x7fffff | 0x3f800000);
                fVar30 = (fVar12 + fVar29 * (fVar11 + fVar14 * fVar29)) *
                         (float)(uVar24 & 0xff800000);
              }
              *(float *)(lVar23 + 0xc) = fVar30;
              *(undefined4 *)(lVar23 + 0x14) = *(undefined4 *)(lVar3 + 0xa4);
              *(undefined4 *)(lVar23 + 0x18) = *(undefined4 *)(lVar3 + 0xb4);
              *(undefined4 *)(lVar23 + 0x10) = 2;
            }
          }
        }
LAB_0045131c:
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar22);
    }
    lVar27 = lVar27 + 1;
    if (lVar27 == 4) {
      return;
    }
  } while( true );
}


