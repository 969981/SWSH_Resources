/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001e1920; name: FUN_001e1920
 */


void FUN_001e1920(undefined8 *param_1,long param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  byte *pbVar2;
  undefined1 (*pauVar3) [12];
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  ulong uVar28;
  long lVar29;
  undefined1 (*pauVar30) [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [16];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  undefined1 auVar51 [16];
  float fVar53;
  undefined8 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar64;
  undefined8 uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  pauVar30 = (undefined1 (*) [16])local_50;
  pauVar1 = (undefined1 (*) [16])(param_2 + 0x40);
  if ((*(byte *)(param_2 + 8) & 4) != 0) {
    pauVar1 = *(undefined1 (**) [16])(param_2 + 0x10);
  }
  uVar4 = *(uint *)(param_3 + 8);
  if ((uVar4 & 0xf000000) == 0x5000000) {
    pauVar30 = pauVar1 + 1;
    fVar37 = *(float *)(pauVar1[1] + 4);
    uVar54 = *(undefined8 *)(pauVar1[1] + 4);
    fVar32 = *(float *)*pauVar30;
    pauVar3 = (undefined1 (*) [12])(param_3 + 0x30);
    if ((uVar4 & 0x40) != 0) {
      pauVar3 = (undefined1 (*) [12])(*(long *)(param_3 + 0x10) + 0xb0);
    }
    fVar31 = (float)*(undefined8 *)(*pauVar3 + 8);
    fVar64 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
    fVar49 = (float)*(undefined8 *)*pauVar3;
    fVar34 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
    auVar45._12_4_ = 0;
    auVar45._0_12_ = *(undefined1 (*) [12])*pauVar30;
    auVar7._12_4_ = 0;
    auVar7._0_12_ = *(undefined1 (*) [12])*pauVar30;
    auVar55 = NEON_ext(auVar45,auVar7,8,1);
    auVar18._12_4_ = 0;
    auVar18._0_12_ = *pauVar3;
    auVar19._12_4_ = 0;
    auVar19._0_12_ = *pauVar3;
    auVar44 = NEON_ext(auVar18,auVar19,8,1);
    fVar38 = fVar49 * (float)uVar54 - fVar34 * fVar32;
    auVar56 = *pauVar1;
    fVar50 = auVar56._4_4_;
    fVar41 = fVar64 * fVar64 + -0.5;
    fVar53 = auVar56._12_4_;
    uVar54 = NEON_ext(CONCAT44(fVar34 * (float)((ulong)uVar54 >> 0x20) - fVar31 * fVar37,fVar38),
                      CONCAT44(auVar44._4_4_ * fVar37 - fVar34 * auVar55._4_4_,
                               auVar44._0_4_ * fVar32 - fVar49 * auVar55._0_4_),4,1);
    fVar52 = auVar56._8_4_;
    auVar62._0_12_ = auVar56._0_12_;
    auVar62._12_4_ = 0;
    fVar47 = auVar56._0_4_;
    auVar55 = NEON_ext(auVar62,auVar62,8,1);
    fVar33 = fVar49 * fVar32;
    fVar35 = fVar34 * fVar37;
    fVar36 = fVar31 * *(float *)(pauVar1[1] + 8);
    fVar39 = fVar49 * fVar50 - fVar34 * fVar47;
    auVar8._4_4_ = fVar35;
    auVar8._0_4_ = fVar33;
    auVar8._8_4_ = fVar36;
    auVar8._12_4_ = 0;
    auVar9._4_4_ = fVar35;
    auVar9._0_4_ = fVar33;
    auVar9._8_4_ = fVar36;
    auVar9._12_4_ = 0;
    auVar56 = NEON_ext(auVar8,auVar9,8,1);
    fVar33 = fVar33 + fVar35 + auVar56._0_4_ + auVar56._4_4_;
    auVar42._0_4_ = fVar32 * fVar41 + (float)uVar54 * fVar64;
    auVar42._4_4_ = fVar37 * fVar41 + (float)((ulong)uVar54 >> 0x20) * fVar64;
    auVar42._8_4_ = *(float *)(pauVar1[1] + 8) * fVar41 + fVar38 * fVar64;
    auVar42._12_4_ = fVar64 * 0.0 + 0.0;
    auVar56 = NEON_ext(auVar42,auVar42,8,1);
    fVar41 = fVar49 * fVar47;
    fVar48 = fVar34 * fVar50;
    fVar37 = fVar49 * fVar33 + auVar42._0_4_;
    fVar38 = fVar34 * fVar33 + auVar42._4_4_;
    fVar32 = fVar31 * fVar33 + auVar56._0_4_;
    fVar33 = fVar33 * 0.0 + 0.0;
    uVar54 = NEON_ext(CONCAT44(fVar34 * fVar52 - fVar31 * fVar50,fVar39),
                      CONCAT44(auVar44._4_4_ * fVar50 - fVar34 * auVar55._4_4_,
                               auVar44._0_4_ * fVar47 - fVar49 * auVar55._0_4_),4,1);
    auVar20._4_4_ = fVar48;
    auVar20._0_4_ = fVar41;
    auVar20._8_4_ = fVar31 * fVar52;
    auVar20._12_4_ = 0;
    auVar21._4_4_ = fVar48;
    auVar21._0_4_ = fVar41;
    auVar21._8_4_ = fVar31 * fVar52;
    auVar21._12_4_ = 0;
    auVar45 = NEON_ext(auVar20,auVar21,8,1);
    auVar10._4_4_ = fVar38;
    auVar10._0_4_ = fVar37;
    auVar10._8_4_ = fVar32;
    auVar10._12_4_ = fVar33;
    auVar11._4_4_ = fVar38;
    auVar11._0_4_ = fVar37;
    auVar11._8_4_ = fVar32;
    auVar11._12_4_ = fVar33;
    auVar56 = NEON_ext(auVar10,auVar11,8,1);
    fVar35 = fVar47 * fVar64 + (float)uVar54;
    fVar36 = fVar50 * fVar64 + (float)((ulong)uVar54 >> 0x20);
    fVar39 = fVar52 * fVar64 + fVar39;
    fVar32 = fVar64 * 0.0 + 0.0;
    auVar55._4_4_ = fVar36;
    auVar55._0_4_ = fVar35;
    auVar55._8_4_ = fVar39;
    auVar55._12_4_ = fVar32;
    auVar66._4_4_ = fVar36;
    auVar66._0_4_ = fVar35;
    auVar66._8_4_ = fVar39;
    auVar66._12_4_ = fVar32;
    auVar55 = NEON_ext(auVar55,auVar66,8,1);
    fVar32 = *(float *)(pauVar3[1] + 4) + fVar37 + fVar37;
    fVar37 = *(float *)(pauVar3[1] + 8) + fVar38 + fVar38;
    fVar33 = *(float *)pauVar3[2] + auVar56._0_4_ + auVar56._0_4_;
    auVar56._4_4_ = fVar37;
    auVar56._0_4_ = fVar32;
    auVar56._8_4_ = fVar33;
    auVar56._12_4_ = 0;
    auVar44._4_4_ = fVar37;
    auVar44._0_4_ = fVar32;
    auVar44._8_4_ = fVar33;
    auVar44._12_4_ = 0;
    auVar56 = NEON_ext(auVar56,auVar44,8,1);
    param_1[2] = CONCAT44(fVar37,fVar32);
    *(int *)(param_1 + 3) = auVar56._0_4_;
    param_1[1] = CONCAT44(fVar64 * fVar53 - (fVar41 + fVar48 + auVar45._0_4_ + auVar45._4_4_),
                          fVar31 * fVar53 + auVar55._0_4_);
    *param_1 = CONCAT44(fVar34 * fVar53 + fVar36,fVar49 * fVar53 + fVar35);
    return;
  }
  lVar29 = *(long *)(param_3 + 0x10);
  pbVar2 = (byte *)(param_3 + 0x4c);
  if ((*(uint *)(param_3 + 0x11c) & 0x4000) != 0) {
    pbVar2 = (byte *)(lVar29 + 0x14c);
  }
  if ((~*pbVar2 & 3) == 0) {
    if ((*(uint *)(param_3 + 0x11c) >> 0xf & 1) != 0) {
      local_50[0] = *(undefined4 *)(lVar29 + 0x100);
      local_50[1] = *(undefined4 *)(lVar29 + 0x104);
      local_50[2] = *(undefined4 *)(lVar29 + 0x108);
      local_50[3] = *(undefined4 *)(lVar29 + 0x10c);
      local_40 = *(undefined4 *)(lVar29 + 0x110);
      local_3c = *(undefined4 *)(lVar29 + 0x114);
      local_38 = *(undefined4 *)(lVar29 + 0x118);
      goto LAB_001e1b7c;
    }
    if (((uVar4 >> 0x1e < 3) && ((*(byte *)(param_3 + 0x4c) & 1) != 0)) &&
       (uVar28 = FUN_003becd0(param_3 + 0x20,local_50), pauVar30 = (undefined1 (*) [16])local_50,
       (uVar28 & 1) != 0)) goto LAB_001e1b7c;
  }
  pauVar30 = (undefined1 (*) [16])(param_3 + 0xe0);
LAB_001e1b7c:
  pauVar3 = (undefined1 (*) [12])(param_3 + 0x50);
  if ((*(uint *)(param_3 + 0x11c) & 0x200) != 0) {
    pauVar3 = (undefined1 (*) [12])(*(long *)(param_3 + 0x10) + 0xd0);
  }
  fVar35 = (float)*(undefined8 *)(*pauVar3 + 8);
  fVar48 = (float)((ulong)*(undefined8 *)(*pauVar3 + 8) >> 0x20);
  fVar33 = (float)*(undefined8 *)*pauVar3;
  fVar49 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
  auVar56 = *pauVar1;
  fVar36 = auVar56._4_4_;
  fVar37 = auVar56._8_4_;
  auVar46._0_4_ = *(float *)pauVar1[1] - (float)*(undefined8 *)(pauVar3[1] + 4);
  auVar46._4_4_ =
       *(float *)(pauVar1[1] + 4) - (float)((ulong)*(undefined8 *)(pauVar3[1] + 4) >> 0x20);
  auVar46._8_4_ = *(float *)(pauVar1[1] + 8) - *(float *)pauVar3[2];
  auVar46._12_4_ = 0;
  auVar12._12_4_ = 0;
  auVar12._0_12_ = *pauVar3;
  auVar13._12_4_ = 0;
  auVar13._0_12_ = *pauVar3;
  auVar55 = NEON_ext(auVar12,auVar13,8,1);
  auVar44 = NEON_ext(auVar46,auVar46,8,1);
  fVar64 = fVar48 * fVar48 + -0.5;
  fVar31 = auVar56._12_4_;
  fVar39 = auVar46._0_4_ * fVar49 - auVar46._4_4_ * fVar33;
  auVar40._0_12_ = auVar56._0_12_;
  auVar40._12_4_ = 0;
  uVar54 = NEON_ext(CONCAT44(auVar46._4_4_ * fVar35 - auVar46._8_4_ * fVar49,fVar39),
                    CONCAT44(auVar44._4_4_ * fVar49 - auVar46._4_4_ * auVar55._4_4_,
                             auVar44._0_4_ * fVar33 - auVar46._0_4_ * auVar55._0_4_),4,1);
  auVar44 = NEON_ext(auVar40,auVar40,8,1);
  fVar34 = auVar56._0_4_;
  fVar32 = fVar34 * fVar49 - fVar36 * fVar33;
  fVar38 = auVar46._0_4_ * fVar33;
  fVar41 = auVar46._4_4_ * fVar49;
  uVar65 = NEON_ext(CONCAT44(fVar36 * fVar35 - fVar37 * fVar49,fVar32),
                    CONCAT44(auVar44._4_4_ * fVar49 - fVar36 * auVar55._4_4_,
                             auVar44._0_4_ * fVar33 - fVar34 * auVar55._0_4_),4,1);
  auVar57._0_4_ = auVar46._0_4_ * fVar64 + (float)uVar54 * fVar48;
  auVar57._4_4_ = auVar46._4_4_ * fVar64 + (float)((ulong)uVar54 >> 0x20) * fVar48;
  auVar57._8_4_ = auVar46._8_4_ * fVar64 + fVar39 * fVar48;
  auVar57._12_4_ = fVar48 * 0.0 + 0.0;
  auVar26._4_4_ = fVar41;
  auVar26._0_4_ = fVar38;
  auVar26._8_4_ = auVar46._8_4_ * fVar35;
  auVar26._12_4_ = 0;
  auVar27._4_4_ = fVar41;
  auVar27._0_4_ = fVar38;
  auVar27._8_4_ = auVar46._8_4_ * fVar35;
  auVar27._12_4_ = 0;
  auVar56 = NEON_ext(auVar26,auVar27,8,1);
  auVar44 = NEON_ext(auVar57,auVar57,8,1);
  auVar63._0_4_ = fVar34 * fVar48 + (float)uVar65;
  auVar63._4_4_ = fVar36 * fVar48 + (float)((ulong)uVar65 >> 0x20);
  auVar63._8_4_ = fVar37 * fVar48 + fVar32;
  auVar63._12_4_ = fVar48 * 0.0 + 0.0;
  auVar66 = NEON_ext(auVar63,auVar63,8,1);
  fVar32 = fVar38 + fVar41 + auVar56._0_4_ + auVar56._4_4_;
  auVar56 = *pauVar30;
  fVar41 = auVar56._8_4_;
  fVar64 = auVar56._0_4_;
  fVar38 = auVar56._4_4_;
  fVar39 = auVar56._12_4_;
  auVar58._0_4_ = fVar33 * fVar32 + auVar57._0_4_;
  auVar58._4_4_ = fVar49 * fVar32 + auVar57._4_4_;
  auVar58._8_4_ = fVar35 * fVar32 + auVar44._0_4_;
  auVar58._12_4_ = fVar32 * 0.0 + 0.0;
  fVar47 = fVar39 * fVar39 + -0.5;
  fVar34 = fVar34 * fVar33;
  fVar36 = fVar36 * fVar49;
  auVar14._4_4_ = fVar36;
  auVar14._0_4_ = fVar34;
  auVar14._8_4_ = fVar37 * fVar35;
  auVar14._12_4_ = 0;
  auVar15._4_4_ = fVar36;
  auVar15._0_4_ = fVar34;
  auVar15._8_4_ = fVar37 * fVar35;
  auVar15._12_4_ = 0;
  auVar44 = NEON_ext(auVar14,auVar15,8,1);
  auVar16._12_4_ = 0;
  auVar16._0_12_ = auVar56._0_12_;
  auVar17._12_4_ = 0;
  auVar17._0_12_ = auVar56._0_12_;
  auVar55 = NEON_ext(auVar16,auVar17,8,1);
  fVar37 = auVar44._0_4_ + auVar44._4_4_;
  fVar50 = auVar63._0_4_ - fVar33 * fVar31;
  fVar52 = auVar63._4_4_ - fVar49 * fVar31;
  auVar51._0_8_ = CONCAT44(fVar52,fVar50);
  auVar51._8_4_ = auVar66._0_4_ - fVar35 * fVar31;
  auVar51._12_4_ = 0.0 - fVar31 * 0.0;
  auVar56 = NEON_ext(auVar58,auVar58,8,1);
  auVar59._0_4_ = auVar58._0_4_ + auVar58._0_4_;
  auVar59._4_4_ = auVar58._4_4_ + auVar58._4_4_;
  auVar59._8_4_ = auVar56._0_4_ + auVar56._0_4_;
  auVar59._12_4_ = 0;
  auVar44 = NEON_ext(auVar59,auVar59,8,1);
  auVar67._0_4_ = fVar64 * auVar59._0_4_;
  auVar67._4_4_ = fVar38 * auVar59._4_4_;
  auVar67._8_4_ = fVar41 * auVar59._8_4_;
  auVar67._12_4_ = 0;
  auVar66 = NEON_ext(auVar67,auVar67,8,1);
  auVar56 = NEON_ext(auVar51,auVar51,8,1);
  fVar32 = auVar67._0_4_ + auVar67._4_4_ + auVar66._0_4_ + auVar66._4_4_;
  fVar53 = auVar56._0_4_;
  fVar35 = fVar64 * auVar59._4_4_ - fVar38 * auVar59._0_4_;
  uVar65 = NEON_ext(auVar51._0_8_,(ulong)(uint)fVar53,4,1);
  uVar54 = NEON_ext(CONCAT44(fVar38 * auVar59._8_4_ - fVar41 * auVar59._4_4_,fVar35),
                    CONCAT44(auVar55._4_4_ * auVar59._4_4_ - fVar38 * auVar44._4_4_,
                             auVar55._0_4_ * auVar59._0_4_ - fVar64 * auVar44._0_4_),4,1);
  fVar61 = fVar64 * (float)uVar65 - fVar38 * fVar50;
  fVar33 = auVar59._0_4_ * fVar47 + (float)uVar54 * fVar39;
  fVar49 = auVar59._4_4_ * fVar47 + (float)((ulong)uVar54 >> 0x20) * fVar39;
  fVar35 = auVar59._8_4_ * fVar47 + fVar35 * fVar39;
  fVar47 = fVar39 * 0.0 + 0.0;
  auVar22._4_4_ = fVar49;
  auVar22._0_4_ = fVar33;
  auVar22._8_4_ = fVar35;
  auVar22._12_4_ = fVar47;
  auVar23._4_4_ = fVar49;
  auVar23._0_4_ = fVar33;
  auVar23._8_4_ = fVar35;
  auVar23._12_4_ = fVar47;
  auVar56 = NEON_ext(auVar22,auVar23,8,1);
  fVar35 = fVar31 * fVar48 + fVar34 + fVar36 + fVar37;
  fVar33 = fVar64 * fVar32 + fVar33;
  fVar49 = fVar38 * fVar32 + fVar49;
  fVar47 = fVar41 * fVar32 + auVar56._0_4_;
  fVar32 = fVar32 * 0.0 + 0.0;
  uVar54 = NEON_ext(CONCAT44(fVar38 * (float)((ulong)uVar65 >> 0x20) - fVar41 * fVar52,fVar61),
                    CONCAT44(auVar55._4_4_ * fVar52 - fVar38 * 0.0,
                             auVar55._0_4_ * fVar50 - fVar64 * fVar53),4,1);
  auVar24._4_4_ = fVar49;
  auVar24._0_4_ = fVar33;
  auVar24._8_4_ = fVar47;
  auVar24._12_4_ = fVar32;
  auVar25._4_4_ = fVar49;
  auVar25._0_4_ = fVar33;
  auVar25._8_4_ = fVar47;
  auVar25._12_4_ = fVar32;
  auVar55 = NEON_ext(auVar24,auVar25,8,1);
  auVar60._0_4_ = fVar50 * fVar39 + (float)uVar54;
  auVar60._4_4_ = fVar52 * fVar39 + (float)((ulong)uVar54 >> 0x20);
  auVar60._8_4_ = fVar53 * fVar39 + fVar61;
  auVar60._12_4_ = fVar39 * 0.0 + 0.0;
  auVar56 = NEON_ext(auVar60,auVar60,8,1);
  auVar43._0_4_ = fVar64 * fVar50;
  auVar43._4_4_ = fVar38 * fVar52;
  auVar43._8_4_ = fVar41 * fVar53;
  auVar43._12_4_ = 0;
  auVar44 = NEON_ext(auVar43,auVar43,8,1);
  fVar32 = *(float *)pauVar30[1] + fVar33 + fVar33;
  fVar33 = *(float *)(pauVar30[1] + 4) + fVar49 + fVar49;
  fVar49 = *(float *)(pauVar30[1] + 8) + auVar55._0_4_ + auVar55._0_4_;
  auVar5._4_4_ = fVar33;
  auVar5._0_4_ = fVar32;
  auVar5._8_4_ = fVar49;
  auVar5._12_4_ = 0;
  auVar6._4_4_ = fVar33;
  auVar6._0_4_ = fVar32;
  auVar6._8_4_ = fVar49;
  auVar6._12_4_ = 0;
  auVar55 = NEON_ext(auVar5,auVar6,8,1);
  param_1[2] = CONCAT44(fVar33,fVar32);
  *(int *)(param_1 + 3) = auVar55._0_4_;
  param_1[1] = CONCAT44((fVar31 * fVar48 + fVar34 + fVar36 + fVar37) * fVar39 -
                        (auVar43._0_4_ + auVar43._4_4_ + auVar44._0_4_ + auVar44._4_4_),
                        fVar41 * fVar35 + auVar56._0_4_);
  *param_1 = CONCAT44(fVar38 * fVar35 + auVar60._4_4_,fVar64 * fVar35 + auVar60._0_4_);
  return;
}


