/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0028c2e0; name: FUN_0028c2e0
 */


undefined8
FUN_0028c2e0(long param_1,long *param_2,long param_3,undefined8 *param_4,ulong *param_5,
            undefined4 *param_6,undefined1 (*param_7) [16],undefined4 *param_8)

{
  float *pfVar1;
  bool bVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  ulong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar31;
  float local_a0;
  float fStack_9c;
  ulong uStack_98;
  undefined1 local_90 [8];
  undefined1 auStack_88 [8];
  
  auVar16 = *param_7;
  if (*(char *)(param_3 + 0x38) == '\0') {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar19 = 0x7f7fffff7f7fffff;
      lVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      do {
        pfVar1 = (float *)(*(long *)(param_1 + 0x18) + lVar7);
        fVar11 = *pfVar1;
        fVar23 = pfVar1[1];
        fVar28 = pfVar1[2];
        pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)((long)pfVar1 + 0x13) * 0xc);
        pfVar6 = *(float **)(param_3 + 0x30);
        auVar26._0_4_ = fVar11 * pfVar6[4];
        auVar26._4_4_ = fVar23 * pfVar6[5];
        auVar26._8_4_ = fVar28 * pfVar6[6];
        auVar26._12_4_ = pfVar6[7] * 0.0;
        auVar25._0_4_ = fVar11 * *pfVar6;
        auVar25._4_4_ = fVar23 * pfVar6[1];
        auVar25._8_4_ = fVar28 * pfVar6[2];
        auVar25._12_4_ = pfVar6[3] * 0.0;
        auVar29 = NEON_ext(auVar25,auVar25,8,1);
        auVar20._0_4_ = *pfVar3 * fVar11;
        auVar20._4_4_ = pfVar3[1] * fVar23;
        auVar20._8_4_ = pfVar3[2] * fVar28;
        auVar20._12_4_ = 0;
        fVar12 = auVar29._0_4_ + auVar29._4_4_;
        auVar29 = NEON_ext(auVar26,auVar26,8,1);
        fVar13 = auVar29._0_4_ + auVar29._4_4_;
        auVar30._0_4_ = fVar11 * pfVar6[8];
        auVar30._4_4_ = fVar23 * pfVar6[9];
        auVar30._8_4_ = fVar28 * pfVar6[10];
        auVar30._12_4_ = pfVar6[0xb] * 0.0;
        auVar29 = NEON_ext(auVar30,auVar30,8,1);
        uVar24 = NEON_ext(CONCAT44(auVar25._0_4_ + auVar25._4_4_ + fVar12,
                                   auVar25._0_4_ + auVar25._4_4_ + fVar12),
                          CONCAT44(auVar26._0_4_ + auVar26._4_4_ + fVar13,
                                   auVar26._0_4_ + auVar26._4_4_ + fVar13),4,1);
        fVar11 = auVar30._0_4_ + auVar30._4_4_ + auVar29._0_4_ + auVar29._4_4_;
        fVar28 = pfVar1[3];
        local_a0 = (float)uVar24;
        auVar27._0_4_ = local_a0 * local_a0;
        fStack_9c = (float)((ulong)uVar24 >> 0x20);
        auVar27._4_4_ = fStack_9c * fStack_9c;
        auVar27._8_4_ = fVar11 * fVar11;
        auVar27._12_4_ = 0;
        auVar29 = NEON_ext(auVar27,auVar27,8,1);
        fVar23 = auVar29._0_4_ + auVar29._4_4_;
        uVar24 = CONCAT44(auVar27._0_4_ + auVar27._4_4_ + fVar23,
                          auVar27._0_4_ + auVar27._4_4_ + fVar23);
        uVar31 = NEON_frsqrte(uVar24,4);
        fVar23 = (float)uVar31;
        fVar12 = (float)((ulong)uVar31 >> 0x20);
        uVar24 = NEON_frsqrts(CONCAT44(fVar12 * fVar12,fVar23 * fVar23),uVar24,4);
        fVar23 = fVar23 * (float)uVar24;
        auVar29 = NEON_ext(auVar20,auVar20,8,1);
        local_a0 = local_a0 * fVar23;
        fStack_9c = fStack_9c * fVar23;
        uStack_98 = (ulong)(uint)(fVar11 * fVar23);
        fVar11 = fVar23 * fVar28;
        (**(code **)(*param_2 + 0x18))(param_2,&local_a0,auStack_88,local_90);
        iVar22 = -(uint)((float)*param_4 - fVar11 < auStack_88._0_4_);
        iVar18 = -(uint)((float)*param_4 + local_90._0_4_ <
                        fVar23 * (auVar20._0_4_ + auVar20._4_4_ + auVar29._0_4_ + auVar29._4_4_));
        iVar18 = CONCAT13((byte)((uint)iVar18 >> 0x18) | (byte)((uint)iVar22 >> 0x18),
                          CONCAT12((byte)((uint)iVar18 >> 0x10) | (byte)((uint)iVar22 >> 0x10),
                                   CONCAT11((byte)((uint)iVar18 >> 8) | (byte)((uint)iVar22 >> 8),
                                            (byte)iVar18 | (byte)iVar22)));
        auVar29._0_4_ = -(uint)(iVar18 == -1);
        auVar29._4_4_ = -(uint)(iVar18 == -1);
        auVar29._8_4_ = -(uint)(iVar18 == -1);
        auVar29._12_4_ = -(uint)(iVar18 == -1);
        NEON_ext(auVar29,auVar29,8,1);
        if (CONCAT13((char)auVar29._12_4_,
                     CONCAT12((char)auVar29._8_4_,CONCAT11((char)auVar29._4_4_,(char)auVar29._0_4_))
                    ) == -1) {
          return 0;
        }
        fVar11 = -fVar11 - auStack_88._0_4_;
        bVar2 = fVar11 < (float)uVar19;
        auVar5._4_4_ = fStack_9c;
        auVar5._0_4_ = local_a0;
        auVar5._8_8_ = uStack_98;
        iVar18 = -(uint)bVar2;
        auVar17._4_4_ = iVar18;
        auVar17._0_4_ = iVar18;
        auVar17._8_4_ = iVar18;
        auVar17._12_4_ = iVar18;
        uVar10 = (int)uVar8;
        if (!bVar2) {
          uVar10 = uVar9;
        }
        auVar16 = auVar16 ^ (auVar16 ^ auVar5) & auVar17;
        uVar8 = uVar8 + 1;
        uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(-(fVar12 * (float)((ulong)uVar24 >> 0x20) * fVar28) -
                                             auStack_88._4_4_,fVar11)) & CONCAT44(iVar18,iVar18);
        lVar7 = lVar7 + 0x14;
        uVar9 = uVar10;
      } while (uVar8 < *(uint *)(param_1 + 0x10));
      goto LAB_0028c5e4;
    }
  }
  else if (*(int *)(param_1 + 0x10) != 0) {
    uVar19 = 0x7f7fffff7f7fffff;
    lVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    do {
      pfVar1 = (float *)(*(long *)(param_1 + 0x18) + lVar7);
      pfVar3 = (float *)(*(long *)(param_1 + 0x20) + (ulong)*(byte *)((long)pfVar1 + 0x13) * 0xc);
      local_a0 = *pfVar1;
      fStack_9c = pfVar1[1];
      auVar14._0_4_ = *pfVar3 * local_a0;
      auVar14._4_4_ = pfVar3[1] * fStack_9c;
      auVar14._8_4_ = pfVar3[2] * pfVar1[2];
      auVar14._12_4_ = 0;
      fVar11 = pfVar1[3];
      uStack_98 = (ulong)(uint)pfVar1[2];
      auVar20 = NEON_ext(auVar14,auVar14,8,1);
      (**(code **)(*param_2 + 0x18))(param_2,&local_a0,auStack_88,local_90);
      iVar22 = -(uint)((float)*param_4 - fVar11 < auStack_88._0_4_);
      iVar18 = -(uint)((float)*param_4 + local_90._0_4_ <
                      auVar14._0_4_ + auVar14._4_4_ + auVar20._0_4_ + auVar20._4_4_);
      iVar18 = CONCAT13((byte)((uint)iVar18 >> 0x18) | (byte)((uint)iVar22 >> 0x18),
                        CONCAT12((byte)((uint)iVar18 >> 0x10) | (byte)((uint)iVar22 >> 0x10),
                                 CONCAT11((byte)((uint)iVar18 >> 8) | (byte)((uint)iVar22 >> 8),
                                          (byte)iVar18 | (byte)iVar22)));
      auVar21._0_4_ = -(uint)(iVar18 == -1);
      auVar21._4_4_ = -(uint)(iVar18 == -1);
      auVar21._8_4_ = -(uint)(iVar18 == -1);
      auVar21._12_4_ = -(uint)(iVar18 == -1);
      NEON_ext(auVar21,auVar21,8,1);
      if (CONCAT13((char)auVar21._12_4_,
                   CONCAT12((char)auVar21._8_4_,CONCAT11((char)auVar21._4_4_,(char)auVar21._0_4_)))
          == -1) {
        return 0;
      }
      fVar23 = -fVar11 - auStack_88._0_4_;
      bVar2 = fVar23 < (float)uVar19;
      auVar4._4_4_ = fStack_9c;
      auVar4._0_4_ = local_a0;
      auVar4._8_8_ = uStack_98;
      iVar18 = -(uint)bVar2;
      auVar15._4_4_ = iVar18;
      auVar15._0_4_ = iVar18;
      auVar15._8_4_ = iVar18;
      auVar15._12_4_ = iVar18;
      uVar10 = (int)uVar8;
      if (!bVar2) {
        uVar10 = uVar9;
      }
      auVar16 = auVar16 ^ (auVar16 ^ auVar4) & auVar15;
      uVar8 = uVar8 + 1;
      uVar19 = uVar19 ^ (uVar19 ^ CONCAT44(-fVar11 - auStack_88._4_4_,fVar23)) &
                        CONCAT44(iVar18,iVar18);
      lVar7 = lVar7 + 0x14;
      uVar9 = uVar10;
    } while (uVar8 < *(uint *)(param_1 + 0x10));
    goto LAB_0028c5e4;
  }
  uVar10 = 0;
  uVar19 = 0x7f7fffff7f7fffff;
LAB_0028c5e4:
  if ((float)uVar19 + 1.1920929e-07 < (float)*param_5) {
    *(long *)(*param_7 + 8) = auVar16._8_8_;
    *(long *)*param_7 = auVar16._0_8_;
    *param_5 = uVar19;
    *param_8 = 1;
  }
  *param_6 = uVar10;
  return 1;
}


