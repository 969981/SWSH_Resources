/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004963c0; name: FUN_004963c0
 */


void FUN_004963c0(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *__s;
  bool bVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  uint uVar25;
  undefined4 *puVar26;
  ulong *puVar27;
  void *pvVar28;
  void *pvVar29;
  float fVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 auStack_d0 [4];
  uint local_cc;
  size_t local_c8;
  undefined4 *local_c0;
  void *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  long *local_98;
  ulong uStack_90;
  int local_84;
  long local_80;
  long local_78;
  
  puVar8 = PTR_DAT_02712d18;
  if ((*(byte *)(param_1 + 0x58) & 1) != 0) {
    uVar5 = *(ushort *)(param_1 + 0x38);
    if (((*(uint *)(*(long *)(param_1 + 8) + 0x40) < 2) ||
        (local_98 = *(long **)(*(long *)(*(long *)(param_1 + 8) + 0x38) + 8),
        local_98 == (long *)0x0)) &&
       (local_98 = *(long **)PTR_DAT_02712d18, local_98 == (long *)0x0)) {
      local_98 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
      if (local_98 == (long *)0x0) {
        *(undefined8 *)puVar8 = 0;
      }
      else {
        *local_98 = (long)(PTR_DAT_02712d28 + 0x10);
        local_98[1] = 0;
        puVar1 = PTR_DAT_02712d38;
        lVar19 = *(long *)(PTR_DAT_02712d38 + 8);
        local_98[2] = 0;
        local_98[3] = lVar19;
        plVar13 = (long *)(puVar1 + 0x10);
        if (*(long *)(puVar1 + 0x10) != 0) {
          plVar13 = (long *)(lVar19 + 0x10);
        }
        *plVar13 = (long)local_98;
        *(long **)(puVar1 + 8) = local_98;
        *(int *)puVar1 = *(int *)puVar1 + 1;
        puVar1 = PTR_DAT_02712d30 + 0x10;
        local_98[7] = 0;
        local_98[8] = 0;
        *local_98 = (long)puVar1;
        local_98[10] = 0;
        local_98[0xb] = 0;
        local_98[0xf] = 0;
        local_98[0x10] = 0;
        local_98[0x12] = 0;
        local_98[0x13] = 0;
        local_98[0x15] = 0;
        local_98[0x16] = 0;
        *(long **)puVar8 = local_98;
        *(undefined2 *)(local_98 + 0x17) = 0x101;
      }
    }
    lVar19 = local_98[0x16];
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar6 = (int)lVar19 * (uint)uVar5;
    iVar14 = uVar6 - *(uint *)(param_1 + 0x54);
    if ((uVar6 < *(uint *)(param_1 + 0x54) || iVar14 == 0) ||
       (uVar12 = FUN_00450d00(param_1 + 0x48,iVar14), (uVar12 & 1) != 0)) {
      puVar8 = PTR_DAT_02712d38;
      puStack_a0 = auStack_d0 + (ulong)uVar5 * -0x10;
      if ((int)local_98[0x16] != 0) {
        local_80 = 0;
        local_b8 = *(void **)(param_1 + 0x20);
        local_c8 = (ulong)uVar5 << 4;
        local_c0 = (undefined4 *)(auStack_d0 + (ulong)uVar5 * -0x10 + 8);
        local_84 = 0;
        puVar27 = (ulong *)local_98[0x15];
        local_b0 = PTR_DAT_02712d28 + 0x10;
        local_a8 = PTR_DAT_02712d30 + 0x10;
        local_cc = uVar6;
        uStack_90 = (ulong)uVar5;
        local_78 = param_1 + 0x48;
        fVar32 = DAT_01d4c198;
        do {
          uVar12 = uStack_90;
          plVar13 = local_98;
          __s = puStack_a0;
          puVar10 = local_a8;
          lVar19 = FUN_0042c0f0(*puVar27);
          puVar1 = PTR_DAT_02712d18;
          if (lVar19 != 0) {
            plVar17 = *(long **)(param_1 + 0x28);
            uVar6 = *(uint *)(param_1 + 0x30);
            uVar25 = (uint)uVar12;
            plVar15 = plVar17;
            if (uVar6 == 0) {
LAB_004965b4:
              if ((plVar15 == plVar17 + (ulong)uVar6 * 3) ||
                 (uVar6 = *(uint *)(plVar15 + 2), uVar6 == 0)) goto LAB_004965f8;
              uVar16 = uVar25;
              if (uVar6 <= uVar25) {
                uVar16 = uVar6;
              }
              if (uVar16 != 0) {
                uVar18 = (ulong)uVar16;
                if (uVar18 - 1 < 7) {
                  lVar23 = 0;
                }
                else {
                  lVar23 = 0;
                  lVar22 = 0x70;
                  do {
                    puVar21 = (undefined8 *)(__s + lVar22);
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x68);
                    lVar23 = lVar23 + 8;
                    puVar21[-0xe] = *(undefined8 *)(plVar15[1] + lVar22 + -0x70);
                    puVar21[-0xd] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x58);
                    puVar21[-0xc] = *(undefined8 *)(plVar15[1] + lVar22 + -0x60);
                    puVar21[-0xb] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x48);
                    puVar21[-10] = *(undefined8 *)(plVar15[1] + lVar22 + -0x50);
                    puVar21[-9] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x38);
                    puVar21[-8] = *(undefined8 *)(plVar15[1] + lVar22 + -0x40);
                    puVar21[-7] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x28);
                    puVar21[-6] = *(undefined8 *)(plVar15[1] + lVar22 + -0x30);
                    puVar21[-5] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -0x18);
                    puVar21[-4] = *(undefined8 *)(plVar15[1] + lVar22 + -0x20);
                    puVar21[-3] = uVar3;
                    uVar3 = *(undefined8 *)(plVar15[1] + lVar22 + -8);
                    puVar21[-2] = *(undefined8 *)(plVar15[1] + lVar22 + -0x10);
                    puVar21[-1] = uVar3;
                    puVar2 = (undefined8 *)(plVar15[1] + lVar22);
                    lVar22 = lVar22 + 0x80;
                    uVar3 = puVar2[1];
                    *puVar21 = *puVar2;
                    puVar21[1] = uVar3;
                  } while (uVar18 - (uVar18 & 7) != lVar23);
                }
                if ((uVar16 & 7) != 0) {
                  lVar23 = lVar23 << 4;
                  lVar22 = -(uVar18 & 7);
                  do {
                    puVar21 = (undefined8 *)(plVar15[1] + lVar23);
                    puVar2 = (undefined8 *)(__s + lVar23);
                    uVar3 = puVar21[1];
                    lVar23 = lVar23 + 0x10;
                    lVar22 = lVar22 + 1;
                    *puVar2 = *puVar21;
                    puVar2[1] = uVar3;
                  } while (lVar22 != 0);
                }
              }
              if (uVar6 < uVar25) {
                uVar6 = uVar16 - 1;
                puVar21 = (undefined8 *)(__s + (ulong)uVar16 * 0x10);
                do {
                  puVar2 = (undefined8 *)(plVar15[1] + (ulong)uVar6 * 0x10);
                  puVar21[1] = puVar2[1];
                  uVar16 = uVar16 + 1;
                  *puVar21 = *puVar2;
                  puVar21 = puVar21 + 2;
                } while (uVar16 < uVar25);
              }
            }
            else {
              lVar22 = (ulong)uVar6 * 0x18;
              do {
                if (*plVar15 == *(long *)(*(long *)(lVar19 + 8) + 0x48)) goto LAB_004965b4;
                lVar22 = lVar22 + -0x18;
                plVar15 = plVar15 + 3;
              } while (lVar22 != 0);
LAB_004965f8:
              if (uVar25 != 0) {
                    /* WARNING: Subroutine does not return */
                memset(__s,0,local_c8);
              }
            }
            puVar9 = local_b0;
            if ((char)plVar13[0x17] == '\0') {
              plVar13 = *(long **)PTR_DAT_02712d18;
              do {
                while (plVar13 == (long *)0x0) {
                  plVar13 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0xc0);
                  *plVar13 = (long)puVar9;
                  plVar13[1] = 0;
                  lVar22 = *(long *)(puVar8 + 8);
                  plVar13[2] = 0;
                  plVar13[3] = lVar22;
                  plVar15 = (long *)(puVar8 + 0x10);
                  if (*(long *)(puVar8 + 0x10) != 0) {
                    plVar15 = (long *)(lVar22 + 0x10);
                  }
                  *plVar15 = (long)plVar13;
                  *(long **)(puVar8 + 8) = plVar13;
                  *(int *)puVar8 = *(int *)puVar8 + 1;
                  *plVar13 = (long)puVar10;
                  plVar13[7] = 0;
                  plVar13[8] = 0;
                  plVar13[10] = 0;
                  plVar13[0xb] = 0;
                  plVar13[0xf] = 0;
                  plVar13[0x10] = 0;
                  plVar13[0x12] = 0;
                  plVar13[0x13] = 0;
                  plVar13[0x15] = 0;
                  plVar13[0x16] = 0;
                  *(long **)puVar1 = plVar13;
                  *(undefined2 *)(plVar13 + 0x17) = 0x101;
                  if ((char)plVar13[0x17] != '\0') goto LAB_004967b0;
                }
              } while ((char)plVar13[0x17] == '\0');
            }
LAB_004967b0:
            iVar14 = (int)plVar13[0xb] + -1;
            if (-1 < iVar14) {
              uVar18 = *puVar27;
              iVar20 = 0;
              do {
                while( true ) {
                  iVar7 = iVar14 - iVar20;
                  if (iVar7 < 0) {
                    iVar7 = iVar7 + 1;
                  }
                  iVar7 = iVar20 + (iVar7 >> 1);
                  uVar24 = *(ulong *)(plVar13[10] + (long)iVar7 * 8);
                  if (uVar18 > uVar24 || uVar24 == uVar18) break;
                  iVar14 = iVar7 + -1;
                  if (iVar14 < iVar20) goto LAB_00496808;
                }
                if (uVar18 <= uVar24) {
                  bVar11 = plVar13[10] + (long)iVar7 * 8 != 0;
                  goto joined_r0x00496a14;
                }
                iVar20 = iVar7 + 1;
              } while (iVar20 <= iVar14);
            }
LAB_00496808:
            bVar11 = false;
joined_r0x00496a14:
            if (uVar25 != 0) {
              if (bVar11) {
                puVar26 = local_c0;
                pvVar29 = local_b8;
                do {
                  uVar6 = *(uint *)(param_1 + 0x50);
                  uVar25 = *(uint *)(param_1 + 0x54);
                  if (uVar6 < uVar25) {
LAB_0049683c:
                    if (uVar25 <= uVar6) goto LAB_00496890;
                    uVar6 = *(uint *)(param_1 + 0x50);
                    *(uint *)(param_1 + 0x50) = uVar6 + 1;
                    pvVar28 = (void *)(*(long *)(param_1 + 0x48) + (ulong)uVar6 * 0x60);
                    if (pvVar28 != (void *)0x0) {
                      lVar22 = *(long *)(param_1 + 0x48) + (ulong)uVar6 * 0x60;
                      *(undefined8 *)(lVar22 + 0x2c) = 0x3f80000000000000;
                      *(undefined8 *)(lVar22 + 0x24) = 0;
                      *(undefined8 *)(lVar22 + 0x34) = 0x3f8000003f800000;
                      *(undefined8 *)(lVar22 + 0x44) = 0;
                      *(undefined8 *)(lVar22 + 0x3c) = 0;
                      *(undefined4 *)(lVar22 + 0x4c) = 0xffffffff;
                      *(undefined8 *)(lVar22 + 0x50) = 0;
                      *(undefined8 *)(lVar22 + 0x58) = 0x3f8000003f800000;
                    }
                  }
                  else {
                    uVar18 = FUN_00450d00(local_78,1);
                    if ((uVar18 & 1) != 0) {
                      uVar25 = *(uint *)(param_1 + 0x54);
                      goto LAB_0049683c;
                    }
LAB_00496890:
                    pvVar28 = (void *)0x0;
                  }
                  uVar31 = *(undefined4 *)(param_1 + 0x40);
                  uVar4 = *(undefined4 *)((long)pvVar29 + 0x24);
                  memcpy(pvVar28,pvVar29,0x24);
                  *(undefined4 *)((long)pvVar28 + 0x4c) = uVar4;
                  *(undefined8 *)((long)pvVar28 + 0x50) =
                       *(undefined8 *)(*(long *)(lVar19 + 8) + 0x48);
                  *(undefined4 *)((long)pvVar28 + 0x40) = puVar26[-1];
                  *(undefined4 *)((long)pvVar28 + 0x3c) = puVar26[-2];
                  *(undefined4 *)((long)pvVar28 + 0x44) = *puVar26;
                  *(undefined4 *)((long)pvVar28 + 0x48) = puVar26[1];
                  fVar30 = (float)FUN_0042e5f0(uVar31,lVar19,pvVar28);
                  if (fVar30 < fVar32) {
                    local_84 = *(int *)(param_1 + 0x50) + -1;
                    local_80 = lVar19;
                    fVar32 = fVar30;
                  }
                  pvVar29 = (void *)((long)pvVar29 + 0x28);
                  puVar26 = puVar26 + 4;
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
              else {
                puVar26 = local_c0;
                pvVar29 = local_b8;
                do {
                  uVar6 = *(uint *)(param_1 + 0x50);
                  uVar25 = *(uint *)(param_1 + 0x54);
                  if (uVar6 < uVar25) {
LAB_00496944:
                    if (uVar25 <= uVar6) goto LAB_00496998;
                    uVar6 = *(uint *)(param_1 + 0x50);
                    *(uint *)(param_1 + 0x50) = uVar6 + 1;
                    pvVar28 = (void *)(*(long *)(param_1 + 0x48) + (ulong)uVar6 * 0x60);
                    if (pvVar28 != (void *)0x0) {
                      lVar22 = *(long *)(param_1 + 0x48) + (ulong)uVar6 * 0x60;
                      *(undefined8 *)(lVar22 + 0x2c) = 0x3f80000000000000;
                      *(undefined8 *)(lVar22 + 0x24) = 0;
                      *(undefined8 *)(lVar22 + 0x34) = 0x3f8000003f800000;
                      *(undefined8 *)(lVar22 + 0x44) = 0;
                      *(undefined8 *)(lVar22 + 0x3c) = 0;
                      *(undefined4 *)(lVar22 + 0x4c) = 0xffffffff;
                      *(undefined8 *)(lVar22 + 0x50) = 0;
                      *(undefined8 *)(lVar22 + 0x58) = 0x3f8000003f800000;
                    }
                  }
                  else {
                    uVar18 = FUN_00450d00(local_78,1);
                    if ((uVar18 & 1) != 0) {
                      uVar25 = *(uint *)(param_1 + 0x54);
                      goto LAB_00496944;
                    }
LAB_00496998:
                    pvVar28 = (void *)0x0;
                  }
                  uVar31 = *(undefined4 *)(param_1 + 0x40);
                  uVar4 = *(undefined4 *)((long)pvVar29 + 0x24);
                  memcpy(pvVar28,pvVar29,0x24);
                  *(undefined4 *)((long)pvVar28 + 0x4c) = uVar4;
                  *(undefined8 *)((long)pvVar28 + 0x50) =
                       *(undefined8 *)(*(long *)(lVar19 + 8) + 0x48);
                  *(undefined4 *)((long)pvVar28 + 0x40) = puVar26[-1];
                  *(undefined4 *)((long)pvVar28 + 0x3c) = puVar26[-2];
                  *(undefined4 *)((long)pvVar28 + 0x44) = *puVar26;
                  *(undefined4 *)((long)pvVar28 + 0x48) = puVar26[1];
                  FUN_0042e5f0(uVar31,lVar19,pvVar28);
                  puVar26 = puVar26 + 4;
                  pvVar29 = (void *)((long)pvVar29 + 0x28);
                  uVar12 = uVar12 - 1;
                } while (uVar12 != 0);
              }
            }
          }
          puVar27 = puVar27 + 1;
        } while (puVar27 != (ulong *)(local_98[0x15] + (ulong)*(uint *)(local_98 + 0x16) * 8));
        if ((local_cc != 0) && (local_80 != 0)) {
          FUN_00496a90(param_1,local_84);
        }
      }
      *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) & 0xfe;
    }
  }
  return;
}


