/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9480; name: FUN_003f9480
 */


void FUN_003f9480(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  float *pfVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  long *plVar14;
  float *pfVar15;
  undefined8 uVar16;
  float *unaff_x27;
  long *unaff_x28;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_144;
  uint local_140;
  uint local_13c;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_100;
  float fStack_fc;
  float local_f8;
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  
  lVar10 = *(long *)(param_1 + 0x58);
  if (lVar10 == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x48);
  fVar21 = *(float *)(lVar7 + 0x1288);
  fVar26 = 1.0;
  if (*(ulong *)(*(long *)(param_1 + 0x30) + 0x10) <= *(ulong *)(*(long *)(param_1 + 0x28) + 0x10))
  {
    fVar26 = -1.0;
  }
  fVar27 = fVar21 * DAT_01d4bec4;
  local_140 = 0;
  if (lVar10 != 0) goto LAB_003f9528;
LAB_003f9610:
  pfVar11 = (float *)0x0;
  local_144 = local_140;
  pfVar15 = (float *)0x0;
  local_13c = 0;
  plVar14 = (long *)0x0;
LAB_003f961c:
  do {
    fVar17 = (float)FUN_003e6620(lVar7,10);
    fVar18 = (float)FUN_003e6620(lVar7,8);
    fVar19 = (float)FUN_003e6620(lVar7,9);
    fVar20 = (float)FUN_003e6620(lVar7,7);
    if (plVar14 == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      uVar6 = 0x10;
      if ((*(byte *)((long)plVar14 + 0x2b) & 2) != 0) {
        uVar6 = 0x40;
      }
      if ((*(byte *)((long)plVar14 + 0x2b) & 0x80) != 0) {
        uVar6 = 0x20;
      }
      uVar12 = (ulong)uVar6;
      unaff_x27 = pfVar11;
      unaff_x28 = plVar14;
    }
    if (local_13c != 0) {
      bVar3 = false;
      uVar6 = 0;
      uVar13 = 0;
      do {
        while( true ) {
          if (uVar6 != 0) {
            pbVar1 = (byte *)((long)unaff_x28 + 0x29);
            unaff_x28 = unaff_x28 + 6;
            pfVar11 = (float *)((long)unaff_x27 + (ulong)((*pbVar1 - uVar13) * (int)uVar12));
            if (*pbVar1 <= uVar13) {
              pfVar11 = unaff_x27;
            }
            unaff_x27 = pfVar11;
          }
          uVar6 = uVar6 + 1;
          if (*(char *)((long)unaff_x28 + 0x29) == '\0') break;
          if (bVar3) {
            unaff_x27 = (float *)((long)unaff_x27 + uVar12);
          }
          if (pfVar15 == (float *)0x0 || fVar17 == 0.0) {
            if (fVar18 != 0.0) {
              uVar16 = 0xff;
              fVar23 = fVar21 * fVar18;
              goto joined_r0x003f9768;
            }
            if (fVar19 != 0.0) {
              fVar23 = fabsf(fVar21 * fVar19 * unaff_x27[3]);
              uVar16 = 0xffff00;
              goto joined_r0x003f9768;
            }
          }
          else {
            fVar23 = fVar21 * fVar17 * *pfVar15;
            uVar16 = 0xff0000;
joined_r0x003f9768:
            if (fVar23 != 0.0) {
              uVar5 = FUN_00218570(param_2,1);
              uVar16 = FUN_00218580(uVar5,uVar16);
              local_b0 = *unaff_x27;
              local_ac = unaff_x27[1];
              local_a8 = unaff_x27[2];
              uVar16 = FUN_002186d0(uVar16,&local_b0);
              fStack_bc = fVar26 * fVar23 * *(float *)((long)unaff_x28 + 0x14) + unaff_x27[1];
              local_c0 = fVar26 * fVar23 * *(float *)(unaff_x28 + 2) + *unaff_x27;
              local_b8 = fVar26 * fVar23 * *(float *)(unaff_x28 + 3) + unaff_x27[2];
              FUN_002186d0(uVar16,&local_c0);
            }
          }
          if (fVar20 != 0.0) {
            fVar24 = *unaff_x27;
            fVar22 = unaff_x27[1];
            fVar23 = unaff_x27[2];
            uVar16 = FUN_00218570(param_2,1);
            FUN_00218580(uVar16,0xffff0000);
            local_d0 = fVar24 - fVar27;
            fVar28 = fVar23 + 0.0;
            fVar25 = fVar22 + 0.0;
            fStack_cc = fVar25;
            local_c8 = fVar28;
            uVar16 = FUN_002186d0(param_2,&local_d0);
            local_e0 = fVar27 + fVar24;
            fStack_dc = fVar25;
            local_d8 = fVar28;
            FUN_002186d0(uVar16,&local_e0);
            fVar24 = fVar24 + 0.0;
            fStack_ec = fVar22 - fVar27;
            local_f0 = fVar24;
            local_e8 = fVar28;
            uVar16 = FUN_002186d0(param_2,&local_f0);
            fStack_fc = fVar27 + fVar22;
            local_100 = fVar24;
            local_f8 = fVar28;
            FUN_002186d0(uVar16,&local_100);
            local_108 = fVar23 - fVar27;
            local_110 = fVar24;
            fStack_10c = fVar25;
            uVar16 = FUN_002186d0(param_2,&local_110);
            local_118 = fVar27 + fVar23;
            local_120 = fVar24;
            fStack_11c = fVar25;
            FUN_002186d0(uVar16,&local_120);
          }
          uVar13 = 1;
          pfVar11 = unaff_x27;
          if (1 < *(byte *)((long)unaff_x28 + 0x29)) {
            do {
              unaff_x27 = (float *)((long)pfVar11 + uVar12);
              if (pfVar15 == (float *)0x0 || fVar17 == 0.0) {
                if (fVar18 != 0.0) {
                  uVar16 = 0xff;
                  fVar23 = fVar21 * fVar18;
                  goto joined_r0x003f9920;
                }
                if (fVar19 != 0.0) {
                  fVar23 = fabsf(fVar21 * fVar19 * *(float *)((long)pfVar11 + uVar12 + 0xc));
                  uVar16 = 0xffff00;
                  goto joined_r0x003f9920;
                }
              }
              else {
                fVar23 = fVar21 * fVar17 * *pfVar15;
                uVar16 = 0xff0000;
joined_r0x003f9920:
                if (fVar23 != 0.0) {
                  uVar5 = FUN_00218570(param_2,1);
                  uVar16 = FUN_00218580(uVar5,uVar16);
                  pfVar2 = (float *)(uVar12 + (long)pfVar11);
                  local_b0 = *pfVar2;
                  local_ac = pfVar2[1];
                  local_a8 = pfVar2[2];
                  uVar16 = FUN_002186d0(uVar16,&local_b0);
                  fStack_bc = fVar26 * fVar23 * *(float *)((long)unaff_x28 + 0x14) + pfVar2[1];
                  local_c0 = fVar26 * fVar23 * *(float *)(unaff_x28 + 2) + *pfVar2;
                  local_b8 = fVar26 * fVar23 * *(float *)(unaff_x28 + 3) + pfVar2[2];
                  FUN_002186d0(uVar16,&local_c0);
                }
              }
              uVar13 = uVar13 + 1;
              if (fVar20 != 0.0) {
                pfVar11 = (float *)(uVar12 + (long)pfVar11);
                fVar23 = *pfVar11;
                fVar22 = pfVar11[1];
                fVar24 = pfVar11[2];
                uVar16 = FUN_00218570(param_2,1);
                FUN_00218580(uVar16,0xffff0000);
                local_d0 = fVar23 - fVar27;
                fVar28 = fVar24 + 0.0;
                fVar25 = fVar22 + 0.0;
                fStack_cc = fVar25;
                local_c8 = fVar28;
                uVar16 = FUN_002186d0(param_2,&local_d0);
                local_e0 = fVar27 + fVar23;
                fStack_dc = fVar25;
                local_d8 = fVar28;
                FUN_002186d0(uVar16,&local_e0);
                fVar23 = fVar23 + 0.0;
                fStack_ec = fVar22 - fVar27;
                local_f0 = fVar23;
                local_e8 = fVar28;
                uVar16 = FUN_002186d0(param_2,&local_f0);
                fStack_fc = fVar27 + fVar22;
                local_100 = fVar23;
                local_f8 = fVar28;
                FUN_002186d0(uVar16,&local_100);
                local_108 = fVar24 - fVar27;
                local_110 = fVar23;
                fStack_10c = fVar25;
                uVar16 = FUN_002186d0(param_2,&local_110);
                local_118 = fVar27 + fVar24;
                local_120 = fVar23;
                fStack_11c = fVar25;
                FUN_002186d0(uVar16,&local_120);
              }
              pfVar11 = unaff_x27;
            } while (uVar13 < *(byte *)((long)unaff_x28 + 0x29));
          }
          bVar3 = true;
          if (uVar6 == local_13c) goto LAB_003f9acc;
        }
        uVar13 = 0;
      } while (uVar6 != local_13c);
    }
LAB_003f9acc:
    if (local_144 == local_140) {
      return;
    }
    lVar10 = *(long *)(param_1 + 0x58);
    local_140 = local_144;
    if (lVar10 == 0) goto LAB_003f9610;
LAB_003f9528:
    uVar6 = *(uint *)(lVar10 + 0x6c);
    if ((int)uVar6 < 0) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x720)
                                       + 0x6e8) + 0xa0))();
      plVar8 = *(long **)(lVar10 + 0x40);
      if (*(char *)(puVar4 + 3) == '\0') goto LAB_003f9590;
LAB_003f9554:
      if (local_140 == 0) {
        plVar14 = (long *)*puVar4;
        pfVar11 = (float *)puVar4[1];
        pfVar15 = (float *)puVar4[2];
        local_144 = (uint)(plVar8 != (long *)0x0);
        local_13c = (uint)*(byte *)((long)puVar4 + 0x19);
        goto LAB_003f961c;
      }
      iVar9 = 1;
    }
    else {
      puVar4 = (undefined8 *)
               (*(long *)(param_3 + 0x20) +
               (ulong)(*(int *)(param_3 + (ulong)(uVar6 & 7) * 4) + (uVar6 >> 3)) * 0x20);
      plVar8 = *(long **)(lVar10 + 0x40);
      if (*(char *)(puVar4 + 3) != '\0') goto LAB_003f9554;
LAB_003f9590:
      iVar9 = 0;
    }
    if (plVar8 == (long *)0x0) goto LAB_003f9610;
    iVar9 = (local_140 + 1) - iVar9;
    while (iVar9 = iVar9 + -1, iVar9 != 0) {
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) goto LAB_003f9610;
    }
    plVar14 = plVar8 + 2;
    pfVar11 = (float *)(plVar8 + 8);
    pfVar15 = (float *)((long)plVar8 + ((ulong)(*(ushort *)(plVar8 + 1) + 0xf) & 0x1fff0));
    local_144 = local_140;
    if (*plVar8 != 0) {
      local_144 = local_140 + 1;
    }
    local_13c = 1;
  } while( true );
}


