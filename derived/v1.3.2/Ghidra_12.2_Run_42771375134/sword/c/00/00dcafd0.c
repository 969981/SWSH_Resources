/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dcafd0; name: FUN_00dcafd0
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dcafd0(long param_1,int *param_2,int *param_3)

{
  undefined1 (*pauVar1) [12];
  byte *__s;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  uint uVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if (param_3 != (int *)0x0) {
    uVar16 = (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3));
    uVar18 = (ulong)*(uint *)((long)param_3 + uVar16);
    uVar11 = (ulong)*(uint *)((long)((long)param_3 + uVar16) + uVar18);
    if (uVar11 != 0) {
      lVar10 = uVar16 + uVar18;
      lVar12 = 0;
      do {
        uVar14 = (ulong)*(uint *)((long)param_3 + lVar12 + lVar10 + 4);
        lVar19 = uVar14 - (long)*(int *)((long)param_3 + lVar12 + uVar14 + lVar10 + 4);
        lVar9 = lVar12 + lVar19 + lVar10;
        uVar5 = *(ushort *)((long)param_3 + lVar9 + 4);
        if ((uVar5 < 5) || (uVar21 = (ulong)*(ushort *)((long)param_3 + lVar9 + 8), uVar21 == 0)) {
          bVar7 = *(long *)(param_1 + 0xaa0) == 0;
        }
        else {
          bVar7 = *(long *)((long)param_3 + lVar12 + uVar14 + uVar21 + lVar10 + 4) ==
                  *(long *)(param_1 + 0xaa0);
        }
        if (bVar7) {
          uVar29 = 0;
          if ((6 < uVar5) &&
             (uVar11 = (ulong)*(ushort *)((long)param_3 + lVar12 + lVar19 + uVar18 + uVar16 + 10),
             uVar11 != 0)) {
            uVar29 = *(undefined4 *)((long)param_3 + lVar12 + uVar11 + uVar14 + lVar10 + 4);
          }
          *(undefined4 *)(param_1 + 0xac0) = uVar29;
          lVar9 = (long)*(int *)((long)param_3 + lVar12 + uVar14 + uVar18 + uVar16 + 4);
          if ((*(ushort *)((long)param_3 + lVar12 + (uVar14 - lVar9) + lVar10 + 4) < 9) ||
             (uVar11 = (ulong)*(ushort *)((long)param_3 + lVar12 + (uVar14 - lVar9) + lVar10 + 0xc),
             uVar11 == 0)) {
            bVar7 = false;
          }
          else {
            bVar7 = *(char *)((long)param_3 + lVar12 + uVar11 + uVar14 + lVar10 + 4) != '\0';
          }
          *(bool *)(param_1 + 0xac4) = bVar7;
          break;
        }
        lVar12 = lVar12 + 4;
      } while (uVar11 * 4 != lVar12);
    }
  }
  uVar11 = (ulong)*(ushort *)((long)param_2 + (0x14 - (long)*param_2));
  puVar27 = (uint *)((long)param_2 + uVar11);
  uVar16 = (ulong)*puVar27;
  puVar27 = (uint *)((long)puVar27 + uVar16);
  puVar26 = puVar27 + 1;
  uVar18 = (ulong)*puVar27;
  if (uVar18 != 0) {
    lVar12 = (long)param_2 + uVar16 + uVar11 + 9;
    uVar2 = *(undefined8 *)PTR_DAT_02715420;
    uVar3 = *(undefined8 *)(PTR_DAT_02715420 + 8);
    puVar27 = puVar26;
LAB_00dcb1ac:
    do {
      puVar28 = puVar27 + 1;
      uVar34 = *puVar27;
      __s = (byte *)((long)puVar28 + (ulong)uVar34);
      sVar8 = strlen((char *)__s);
      bVar4 = *__s;
      uVar11 = 0xcbf29ce484222645;
      if (bVar4 != 0) {
        pbVar13 = (byte *)(lVar12 + (ulong)uVar34);
        do {
          uVar11 = (uVar11 ^ bVar4) * 0x100000001b3;
          bVar4 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar4 != 0);
      }
      local_f0 = 0xcbf29ce484222645;
      local_e8 = &DAT_01d38550;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      local_88 = 0;
      local_b8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_d0 = 0x44fa0000457a0000;
      local_c8 = 0x44fa0000;
      local_c0 = 0;
      local_a0 = 0;
      local_98 = 0;
      puVar25 = *(undefined8 **)(param_1 + 0xaf8);
      local_b0 = uVar2;
      local_a8 = uVar3;
      if (puVar25 < *(undefined8 **)(param_1 + 0xb00)) {
        uVar24 = *(undefined8 *)(param_1 + 0xb08);
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        lVar10 = local_d8;
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar24;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *puVar25 = local_f0;
        puVar25[1] = local_e8;
        puVar25[2] = local_e0;
        local_d8 = 0;
        puVar25[3] = lVar10;
        puVar25[7] = local_b8;
        puVar25[4] = local_d0;
        puVar25[5] = local_c8;
        puVar25[6] = local_c0;
        puVar25[0xb] = local_98;
        puVar25[9] = local_a8;
        puVar25[10] = local_a0;
        puVar25[8] = local_b0;
        puVar25[0xd] = local_88;
        puVar25[0xc] = local_90;
        puVar25[0xe] = local_80;
        puVar25[0xf] = uStack_78;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        *(long *)(param_1 + 0xaf8) = *(long *)(param_1 + 0xaf8) + 0x80;
      }
      else {
        FUN_00dd36f0(param_1 + 0xaf0,&local_f0);
        if (local_d8 != 0) {
          (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
          local_d8 = 0;
        }
      }
      lVar9 = *(long *)(param_1 + 0xaf8);
      lVar10 = *(long *)(lVar9 + -0x68);
      *(ulong *)(lVar9 + -0x80) = uVar11;
      *(byte **)(lVar9 + -0x78) = __s;
      *(size_t *)(lVar9 + -0x70) = sVar8;
      *(undefined8 *)(lVar9 + -0x68) = 0;
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      }
      puVar27 = puVar28;
      if (param_3 != (int *)0x0) {
        uVar14 = (ulong)*(ushort *)((long)param_3 + (4 - (long)*param_3));
        uVar21 = (ulong)*(uint *)((long)param_3 + uVar14);
        uVar16 = (ulong)*(uint *)((long)((long)param_3 + uVar14) + uVar21);
        if (uVar16 != 0) {
          lVar19 = uVar14 + uVar21;
          lVar10 = 0;
          do {
            uVar15 = (ulong)*(uint *)((long)param_3 + lVar10 + lVar19 + 4);
            lVar20 = uVar15 - (long)*(int *)((long)param_3 + lVar10 + uVar15 + lVar19 + 4);
            lVar17 = lVar10 + lVar20 + lVar19;
            uVar5 = *(ushort *)((long)param_3 + lVar17 + 4);
            if (uVar5 < 5) {
              if (*(long *)(param_1 + 0xaa0) == 0) goto LAB_00dcb454;
            }
            else {
              uVar22 = (ulong)*(ushort *)((long)param_3 + lVar17 + 8);
              lVar23 = 0;
              if (uVar22 != 0) {
                lVar23 = *(long *)((long)param_3 + lVar10 + uVar15 + uVar22 + lVar19 + 4);
              }
              if (lVar23 == *(long *)(param_1 + 0xaa0)) {
LAB_00dcb454:
                if ((uVar5 < 0xb) ||
                   (uVar22 = (ulong)*(ushort *)((long)param_3 + lVar17 + 0xe), uVar22 == 0)) {
                  if (uVar11 == 0) goto LAB_00dcb4b8;
                }
                else if (*(ulong *)((long)param_3 + lVar10 + uVar15 + uVar22 + lVar19 + 4) == uVar11
                        ) {
LAB_00dcb4b8:
                  uVar29 = 0;
                  lVar17 = lVar10 + uVar15 + uVar21 + uVar14;
                  if (0xc < uVar5) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + lVar20 + uVar21 + uVar14 + 0x10);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(undefined4 *)(lVar9 + -0x60) = uVar29;
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  uVar29 = 0;
                  if (0xe < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x12);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(undefined4 *)(lVar9 + -0x5c) = uVar29;
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  uVar29 = 0;
                  if (0x10 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x14);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(undefined4 *)(lVar9 + -0x58) = uVar29;
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  uVar29 = 0;
                  if (0x1e < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x22);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(undefined4 *)(lVar9 + -0x54) = uVar29;
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  uVar29 = 0;
                  if (0x20 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x24);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(undefined4 *)(lVar9 + -0x50) = uVar29;
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  uVar29 = 0;
                  if (0x12 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x16);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  uVar24 = *(undefined8 *)(lVar9 + -0x38);
                  uVar33 = 0;
                  *(undefined8 *)(lVar9 + -0x38) = uVar24;
                  *(ulong *)(lVar9 + -0x40) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar9 + -0x40) >> 0x20),uVar29);
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  if (0x14 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x18);
                    uVar33 = 0;
                    if (uVar11 != 0) {
                      uVar33 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  uVar34 = 0;
                  *(undefined8 *)(lVar9 + -0x38) = uVar24;
                  *(ulong *)(lVar9 + -0x40) = CONCAT44(uVar33,uVar29);
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  if (0x16 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x1a);
                    uVar34 = 0;
                    if (uVar11 != 0) {
                      uVar34 = *(uint *)((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  uVar35 = 0;
                  *(ulong *)(lVar9 + -0x38) = (ulong)uVar34;
                  *(ulong *)(lVar9 + -0x40) = CONCAT44(uVar33,uVar29);
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  if (0x18 < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x1c);
                    uVar35 = 0;
                    if (uVar11 != 0) {
                      uVar35 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  uVar24 = *(undefined8 *)(lVar9 + -0x28);
                  uVar29 = 0;
                  *(undefined8 *)(lVar9 + -0x28) = uVar24;
                  *(ulong *)(lVar9 + -0x30) =
                       CONCAT44((int)((ulong)*(undefined8 *)(lVar9 + -0x30) >> 0x20),uVar35);
                  lVar20 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  if (0x1a < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar20) + lVar19 + 0x1e);
                    uVar29 = 0;
                    if (uVar11 != 0) {
                      uVar29 = *(undefined4 *)
                                ((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  uVar34 = 0;
                  *(undefined8 *)(lVar9 + -0x28) = uVar24;
                  *(ulong *)(lVar9 + -0x30) = CONCAT44(uVar29,uVar35);
                  lVar17 = (long)*(int *)((long)param_3 + lVar17 + 4);
                  if (0x1c < *(ushort *)((long)param_3 + lVar10 + (uVar15 - lVar17) + lVar19 + 4)) {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)param_3 + lVar10 + (uVar15 - lVar17) + lVar19 + 0x20);
                    uVar34 = 0;
                    if (uVar11 != 0) {
                      uVar34 = *(uint *)((long)param_3 + lVar10 + uVar11 + uVar15 + lVar19 + 4);
                    }
                  }
                  *(ulong *)(lVar9 + -0x28) = (ulong)uVar34;
                  *(ulong *)(lVar9 + -0x30) = CONCAT44(uVar29,uVar35);
                  lVar12 = lVar12 + 4;
                  if (puVar28 == puVar26 + uVar18) goto LAB_00dcb850;
                  goto LAB_00dcb1ac;
                }
              }
            }
            lVar10 = lVar10 + 4;
          } while (uVar16 * 4 != lVar10);
        }
      }
      lVar12 = lVar12 + 4;
    } while (puVar28 != puVar26 + uVar18);
  }
LAB_00dcb850:
  if (*(char *)(param_1 + 0xac4) == '\0') {
    *(undefined8 *)(param_1 + 0xae8) = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0xad8) = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0xad0) = *(undefined8 *)(param_1 + 400);
  }
  else {
    lVar12 = *(long *)(param_1 + 0xaf0);
    pauVar1 = (undefined1 (*) [12])(lVar12 + 0x50);
    uVar29 = (undefined4)((ulong)*(undefined8 *)(lVar12 + 0x58) >> 0x20);
    fVar45 = (float)*(undefined8 *)*pauVar1;
    fVar46 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar47._12_4_ = uVar29;
    auVar47._0_12_ = *pauVar1;
    auVar6._12_4_ = uVar29;
    auVar6._0_12_ = *pauVar1;
    auVar47 = NEON_ext(auVar47,auVar6,8,1);
    fVar36 = (float)*(undefined8 *)(param_1 + 0x1a0);
    fVar39 = (float)*(undefined8 *)(param_1 + 400);
    fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x1a0) >> 0x20);
    fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 400) >> 0x20);
    fVar38 = (float)*(undefined8 *)(param_1 + 0x1a8);
    fVar41 = (float)*(undefined8 *)(param_1 + 0x198);
    fVar30 = (fVar39 + fVar36) * 0.5;
    fVar31 = (fVar40 + fVar37) * 0.5;
    fVar32 = (fVar41 + fVar38) * 0.5;
    fVar42 = (float)*(undefined8 *)(lVar12 + 0x40);
    fVar43 = (float)((ulong)*(undefined8 *)(lVar12 + 0x40) >> 0x20);
    fVar44 = (float)*(undefined8 *)(lVar12 + 0x48);
    *(ulong *)(param_1 + 0xad8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x198) >> 0x20) + 0.0,
                  auVar47._0_4_ + fVar32 + (fVar41 - fVar32) * fVar44);
    *(ulong *)(param_1 + 0xad0) =
         CONCAT44(fVar46 + fVar31 + (fVar40 - fVar31) * fVar43,
                  fVar45 + fVar30 + (fVar39 - fVar30) * fVar42);
    *(ulong *)(param_1 + 0xae8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x1a8) >> 0x20) + 0.0,
                  auVar47._0_4_ + fVar32 + (fVar38 - fVar32) * fVar44);
    *(ulong *)(param_1 + 0xae0) =
         CONCAT44(fVar46 + fVar31 + (fVar37 - fVar31) * fVar43,
                  fVar45 + fVar30 + (fVar36 - fVar30) * fVar42);
  }
  return;
}


