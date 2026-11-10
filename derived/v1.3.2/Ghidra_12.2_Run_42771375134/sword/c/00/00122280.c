/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00122280; name: FUN_00122280
 */


undefined1  [16] FUN_00122280(long param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
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
  ulong uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float local_68;
  
  FUN_00121ff0();
  iVar2 = *(int *)(param_1 + 0x54);
  iVar3 = *(int *)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x18);
  if (iVar2 <= iVar3) {
    lVar1 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 0x10);
  }
  local_80 = *(undefined4 *)(lVar4 + 0x28);
  local_7c = *(undefined4 *)(lVar4 + 0x2c);
  local_78 = *(undefined4 *)(lVar4 + 0x30);
  local_74 = *(undefined4 *)(lVar4 + 0x34);
  local_70 = *(float *)(lVar4 + 0x38);
  fStack_6c = *(float *)(lVar4 + 0x3c);
  local_68 = *(float *)(lVar4 + 0x40);
  local_a0 = *(undefined4 *)(lVar4 + 0xc);
  local_9c = *(undefined4 *)(lVar4 + 0x10);
  local_98 = *(undefined4 *)(lVar4 + 0x14);
  local_94 = *(undefined4 *)(lVar4 + 0x18);
  local_90 = *(float *)(lVar4 + 0x1c);
  fStack_8c = *(float *)(lVar4 + 0x20);
  local_88 = *(float *)(lVar4 + 0x24);
  local_c0 = *(undefined4 *)(lVar1 + 0x28);
  local_bc = *(undefined4 *)(lVar1 + 0x2c);
  local_b8 = *(undefined4 *)(lVar1 + 0x30);
  fVar31 = local_70 - local_90;
  fVar34 = fStack_6c - fStack_8c;
  fVar24 = local_68 - local_88;
  local_b4 = *(undefined4 *)(lVar1 + 0x34);
  local_b0 = *(float *)(lVar1 + 0x38);
  fStack_ac = *(float *)(lVar1 + 0x3c);
  local_a8 = *(float *)(lVar1 + 0x40);
  local_e0 = *(undefined4 *)(lVar1 + 0xc);
  local_dc = *(undefined4 *)(lVar1 + 0x10);
  local_d8 = *(undefined4 *)(lVar1 + 0x14);
  local_d4 = *(undefined4 *)(lVar1 + 0x18);
  local_d0 = *(float *)(lVar1 + 0x1c);
  fStack_cc = *(float *)(lVar1 + 0x20);
  local_c8 = *(float *)(lVar1 + 0x24);
  fVar32 = local_b0 - local_d0;
  fVar30 = fStack_ac - fStack_cc;
  fVar25 = local_a8 - local_c8;
  fVar18 = fVar31 - fVar32;
  fVar19 = fVar34 - fVar30;
  fVar17 = *(float *)(lVar4 + 8);
  fVar23 = *(float *)(lVar1 + 8);
  fVar14 = *(float *)(*(long *)(param_1 + 0x48) + 0x5c);
  *(undefined4 *)(param_1 + 0x80) = 0;
  fVar20 = fVar24 - fVar25;
  fVar17 = fVar17 + fVar23;
  if (fVar18 * fVar18 + fVar19 * fVar19 + fVar20 * fVar20 <= fVar17 * fVar17) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    goto LAB_00122444;
  }
  uVar27 = 0;
  if (fVar14 <= 0.0) {
    fVar14 = 0.0;
  }
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 == 6) {
    auVar16 = FUN_002f0230(lVar4,lVar1,&local_80,&local_c0,&local_a0,&local_e0);
  }
  else {
    if (iVar2 != 5) {
      fVar19 = *(float *)(lVar4 + 0x54);
      fVar26 = *(float *)(lVar4 + 0x50);
      fVar20 = *(float *)(lVar4 + 0x58);
      fVar21 = *(float *)(lVar1 + 0x54);
      fVar28 = *(float *)(lVar1 + 0x50);
      fVar22 = *(float *)(lVar1 + 0x58);
      fVar35 = (fVar14 + *(float *)(lVar4 + 0x48)) * DAT_01d4bcb8;
      fVar17 = (fVar14 + *(float *)(lVar4 + 0x4c)) * DAT_01d4bcb8;
      fVar29 = (fVar14 + *(float *)(lVar4 + 0x44)) * DAT_01d4bcb8;
      fVar23 = *(float *)(lVar1 + 0x4c) * DAT_01d4bcb8;
      fVar14 = *(float *)(lVar1 + 0x48) * DAT_01d4bcb8;
      fVar33 = *(float *)(lVar1 + 0x44) * DAT_01d4bcb8;
      fVar18 = fabsf(fVar26 - fVar28);
      if ((fVar18 <= fVar29 + fVar33) &&
         (fVar18 = fabsf(fVar19 - fVar21), fVar18 <= fVar35 + fVar14)) {
        fVar18 = fabsf(fVar20 - fVar22);
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar27;
        auVar7 = auVar13 << 0x40;
        if (fVar18 <= fVar17 + fVar23) goto LAB_00122468;
      }
      fVar32 = fVar32 - fVar31;
      fVar31 = fVar28 + fVar33;
      fVar28 = fVar28 - fVar33;
      fVar18 = fVar26 + fVar29;
      fVar26 = fVar26 - fVar29;
      if (fVar32 < DAT_01d4c4d8) {
        if (fVar26 <= fVar31) {
          if (fVar28 <= fVar18) {
            uVar27 = 0;
          }
          else {
            fVar18 = (fVar18 - fVar28) / fVar32;
            uVar27 = (ulong)(uint)fVar18;
            if (fVar18 <= 0.0) {
              uVar27 = 0;
            }
          }
          if (fVar31 <= fVar26) goto LAB_00122650;
          fVar26 = fVar26 - fVar31;
LAB_00122638:
          fVar32 = (float)NEON_fminnm(fVar26 / fVar32,0x3f800000);
          if ((float)uVar27 <= fVar32) goto LAB_0012265c;
        }
      }
      else {
        if (fVar32 <= DAT_01d4c1cc) {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = CONCAT44(0,DAT_01d4c18c);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = CONCAT44(0,DAT_01d4c18c);
          if ((fVar31 < fVar26) || (auVar7 = auVar10, fVar18 < fVar28)) goto LAB_00122468;
          uVar27 = 0;
          fVar32 = 1.0;
LAB_0012265c:
          fVar18 = fVar19 + fVar35;
          fVar19 = fVar19 - fVar35;
          fVar30 = fVar30 - fVar34;
          fVar31 = fVar21 + fVar14;
          fVar21 = fVar21 - fVar14;
          uVar15 = uVar27;
          if (DAT_01d4c4d8 <= fVar30) {
            if (fVar30 <= DAT_01d4c1cc) {
              auVar9._8_8_ = 0;
              auVar9._0_8_ = CONCAT44(0,DAT_01d4c18c);
              auVar7._8_8_ = 0;
              auVar7._0_8_ = CONCAT44(0,DAT_01d4c18c);
              if ((fVar31 < fVar19) || (auVar7 = auVar9, fVar18 < fVar21)) goto LAB_00122468;
            }
            else {
              if (fVar18 < fVar21) goto LAB_00122444;
              if ((fVar31 < fVar19) &&
                 (fVar14 = (fVar19 - fVar31) / fVar30, uVar15 = (ulong)(uint)fVar14,
                 fVar14 <= (float)uVar27)) {
                uVar15 = uVar27;
              }
              uVar27 = uVar15;
              if (fVar21 < fVar18) {
                fVar19 = fVar18 - fVar21;
                goto LAB_001226f0;
              }
            }
LAB_00122728:
            uVar15 = uVar27;
            fVar14 = fVar32;
            auVar7 = ZEXT416(DAT_01d4c18c);
            if (fVar32 < (float)uVar27) goto LAB_00122468;
          }
          else {
            if (fVar31 < fVar19) goto LAB_00122444;
            if ((fVar18 < fVar21) &&
               (fVar14 = (fVar18 - fVar21) / fVar30, uVar15 = (ulong)(uint)fVar14,
               fVar14 <= (float)uVar27)) {
              uVar15 = uVar27;
            }
            uVar27 = uVar15;
            if (fVar31 <= fVar19) goto LAB_00122728;
            fVar19 = fVar19 - fVar31;
LAB_001226f0:
            fVar14 = fVar19 / fVar30;
            if (fVar32 <= fVar19 / fVar30) {
              fVar14 = fVar32;
            }
            auVar7 = ZEXT416(DAT_01d4c18c);
            if (fVar14 < (float)uVar15) goto LAB_00122468;
          }
          uVar27 = CONCAT44(0,DAT_01d4c18c);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = uVar27;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = uVar27;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar27;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar27;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar27;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = uVar27;
          fVar25 = fVar25 - fVar24;
          fVar32 = fVar20 + fVar17;
          fVar20 = fVar20 - fVar17;
          fVar17 = fVar22 + fVar23;
          fVar22 = fVar22 - fVar23;
          uVar27 = uVar15;
          if (DAT_01d4c4d8 <= fVar25) {
            if (fVar25 <= DAT_01d4c1cc) {
              if ((fVar17 < fVar20) || (auVar7 = auVar8, fVar32 < fVar22)) goto LAB_00122468;
            }
            else {
              auVar7 = auVar6;
              if (fVar32 < fVar22) goto LAB_00122468;
              if ((fVar17 < fVar20) &&
                 (fVar17 = (fVar20 - fVar17) / fVar25, uVar27 = (ulong)(uint)fVar17,
                 fVar17 <= (float)uVar15)) {
                uVar27 = uVar15;
              }
              uVar15 = uVar27;
              if (fVar22 < fVar32) {
                fVar20 = fVar32 - fVar22;
                goto LAB_001227d0;
              }
            }
          }
          else {
            auVar7 = auVar5;
            if (fVar17 < fVar20) goto LAB_00122468;
            if ((fVar32 < fVar22) &&
               (fVar32 = (fVar32 - fVar22) / fVar25, uVar27 = (ulong)(uint)fVar32,
               fVar32 <= (float)uVar15)) {
              uVar27 = uVar15;
            }
            uVar15 = uVar27;
            if (fVar20 < fVar17) {
              fVar20 = fVar20 - fVar17;
LAB_001227d0:
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar27;
              fVar17 = fVar20 / fVar25;
              if (fVar14 <= fVar20 / fVar25) {
                fVar17 = fVar14;
              }
              auVar7 = auVar11;
              if (fVar17 < (float)uVar27) goto LAB_00122468;
              goto LAB_00122464;
            }
          }
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar15;
          auVar7 = auVar12;
          if (fVar14 < (float)uVar15) goto LAB_00122468;
          goto LAB_00122464;
        }
        if (fVar28 <= fVar18) {
          if (fVar26 <= fVar31) {
            uVar27 = 0;
          }
          else {
            fVar31 = (fVar26 - fVar31) / fVar32;
            uVar27 = (ulong)(uint)fVar31;
            if (fVar31 <= 0.0) {
              uVar27 = 0;
            }
          }
          if (fVar28 < fVar18) {
            fVar26 = fVar18 - fVar28;
            goto LAB_00122638;
          }
LAB_00122650:
          fVar32 = 1.0;
          if ((float)uVar27 <= 1.0) goto LAB_0012265c;
        }
      }
LAB_00122444:
      auVar7 = ZEXT416(DAT_01d4c18c);
      goto LAB_00122468;
    }
    auVar16 = FUN_002f26f0(lVar4,lVar1,&local_80,&local_c0,&local_a0,&local_e0);
  }
LAB_00122464:
  auVar7 = auVar16;
LAB_00122468:
  *(int *)(param_1 + 0x2c) = auVar7._0_4_;
  return auVar7;
}


