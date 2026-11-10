/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00237120; name: FUN_00237120
 */


undefined1  [16]
FUN_00237120(undefined1 (*param_1) [16],undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  float fVar11;
  float fVar13;
  ulong uVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined3 uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar39;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  float fVar48;
  int iVar49;
  float fVar52;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  ulong uVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  undefined1 auVar82 [16];
  undefined8 uVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  ulong local_50;
  uint local_48;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  auVar58 = *param_1;
  auVar40 = param_1[1];
  pauVar6 = param_1 + 2;
  auVar74 = *pauVar6;
  fVar14 = auVar58._0_4_;
  fVar21 = auVar40._0_4_;
  auVar54._0_4_ = fVar21 - fVar14;
  fVar15 = auVar58._4_4_;
  fVar36 = auVar40._4_4_;
  auVar54._4_4_ = fVar36 - fVar15;
  fVar16 = auVar58._8_4_;
  fVar37 = auVar40._8_4_;
  auVar54._8_4_ = fVar37 - fVar16;
  fVar17 = auVar58._12_4_;
  fVar38 = auVar40._12_4_;
  auVar54._12_4_ = fVar38 - fVar17;
  fVar39 = auVar74._0_4_;
  auVar57._0_4_ = fVar39 - fVar14;
  fVar44 = auVar74._4_4_;
  auVar57._4_4_ = fVar44 - fVar15;
  fVar45 = auVar74._8_4_;
  auVar57._8_4_ = fVar45 - fVar16;
  fVar46 = auVar74._12_4_;
  auVar57._12_4_ = fVar46 - fVar17;
  auVar61 = NEON_ext(auVar54,auVar54,8,1);
  auVar78 = NEON_ext(auVar57,auVar57,8,1);
  fVar66 = auVar54._0_4_ * auVar57._4_4_ - auVar54._4_4_ * auVar57._0_4_;
  auVar32._0_8_ =
       NEON_ext(CONCAT44(auVar54._4_4_ * auVar57._8_4_ - auVar54._8_4_ * auVar57._4_4_,fVar66),
                CONCAT44(auVar61._4_4_ * auVar57._4_4_ - auVar54._4_4_ * auVar78._4_4_,
                         auVar61._0_4_ * auVar57._0_4_ - auVar54._0_4_ * auVar78._0_4_),4,1);
  fVar18 = (float)auVar32._0_8_;
  fVar59 = (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar86._0_4_ = fVar18 * fVar18;
  auVar86._4_4_ = fVar59 * fVar59;
  auVar86._8_4_ = fVar66 * fVar66;
  auVar86._12_4_ = 0;
  auVar67 = NEON_ext(auVar86,auVar86,8,1);
  fVar13 = auVar67._0_4_ + auVar67._4_4_;
  fVar11 = auVar86._0_4_ + auVar86._4_4_ + fVar13;
  fVar13 = auVar86._0_4_ + auVar86._4_4_ + fVar13;
  uVar12 = CONCAT44(fVar13,fVar11);
  auVar32._0_8_ = NEON_frsqrte(uVar12,4);
  fVar47 = (float)auVar32._0_8_;
  fVar52 = (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar47 * fVar47),uVar12,4);
  fVar47 = fVar47 * (float)auVar32._0_8_;
  fVar52 = fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar47 * fVar47),uVar12,4);
  fVar47 = fVar47 * (float)auVar32._0_8_;
  fVar52 = fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar47 * fVar47),uVar12,4);
  fVar47 = fVar47 * (float)auVar32._0_8_;
  fVar52 = fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frsqrts(CONCAT44(fVar52 * fVar52,fVar47 * fVar47),uVar12,4);
  uVar81 = -(uint)(fVar11 == 0.0);
  uVar71 = CONCAT44(fVar13 * fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20),
                    fVar11 * fVar47 * (float)auVar32._0_8_);
  uVar71 = uVar71 ^ (uVar71 ^ uVar12) & CONCAT44(uVar81,uVar81);
  auVar32._0_8_ = NEON_frecpe(uVar71,4);
  uVar83 = NEON_frecps(uVar71,auVar32._0_8_,4);
  fVar48 = (float)auVar32._0_8_ * (float)uVar83;
  fVar13 = (float)((ulong)auVar32._0_8_ >> 0x20) * (float)((ulong)uVar83 >> 0x20);
  auVar32._0_8_ = NEON_frecps(uVar71,CONCAT44(fVar13,fVar48),4);
  fVar48 = fVar48 * (float)auVar32._0_8_;
  fVar13 = fVar13 * (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frecps(uVar71,CONCAT44(fVar13,fVar48),4);
  fVar48 = fVar48 * (float)auVar32._0_8_;
  fVar13 = fVar13 * (float)((ulong)auVar32._0_8_ >> 0x20);
  auVar32._0_8_ = NEON_frecps(uVar71,CONCAT44(fVar13,fVar48),4);
  fVar48 = fVar48 * (float)auVar32._0_8_;
  auVar32._0_8_ =
       NEON_frecps(uVar71,CONCAT44(fVar13 * (float)((ulong)auVar32._0_8_ >> 0x20),fVar48),4);
  fVar48 = fVar48 * (float)auVar32._0_8_;
  fVar13 = *(float *)param_1[3];
  fVar47 = *(float *)(param_1[3] + 4);
  fVar52 = *(float *)(param_1[3] + 8);
  fVar60 = *(float *)(param_1[3] + 0xc);
  auVar67._0_4_ = fVar13 - fVar14;
  auVar67._4_4_ = fVar47 - fVar15;
  auVar67._8_4_ = fVar52 - fVar16;
  auVar67._12_4_ = fVar60 - fVar17;
  auVar85._0_4_ = auVar67._0_4_ * fVar18 * fVar48;
  auVar85._4_4_ = auVar67._4_4_ * fVar59 * fVar48;
  auVar85._8_4_ = auVar67._8_4_ * fVar66 * fVar48;
  auVar85._12_4_ = auVar67._12_4_ * 0.0;
  auVar86 = NEON_ext(auVar85,auVar85,8,1);
  if (0.0001 <= ABS(auVar85._0_4_ + auVar85._4_4_ + auVar86._0_4_ + auVar86._4_4_)) {
    auVar58 = NEON_ext(auVar67,auVar67,8,1);
    auVar68._0_4_ = fVar13 - fVar21;
    auVar68._4_4_ = fVar47 - fVar36;
    auVar68._8_4_ = fVar52 - fVar37;
    auVar68._12_4_ = fVar60 - fVar38;
    auVar82._0_4_ = fVar39 - fVar21;
    auVar82._4_4_ = fVar44 - fVar36;
    auVar82._8_4_ = fVar45 - fVar37;
    auVar82._12_4_ = fVar46 - fVar38;
    fVar48 = auVar57._0_4_ * auVar67._4_4_ - auVar57._4_4_ * auVar67._0_4_;
    auVar32._0_8_ =
         NEON_ext(CONCAT44(auVar57._4_4_ * auVar67._8_4_ - auVar57._8_4_ * auVar67._4_4_,fVar48),
                  CONCAT44(auVar78._4_4_ * auVar67._4_4_ - auVar57._4_4_ * auVar58._4_4_,
                           auVar78._0_4_ * auVar67._0_4_ - auVar57._0_4_ * auVar58._0_4_),4,1);
    fVar19 = auVar54._4_4_ * auVar67._0_4_ - auVar54._0_4_ * auVar67._4_4_;
    uVar83 = NEON_ext(CONCAT44(auVar54._8_4_ * auVar67._4_4_ - auVar54._4_4_ * auVar67._8_4_,fVar19)
                      ,CONCAT44(auVar54._4_4_ * auVar58._4_4_ - auVar61._4_4_ * auVar67._4_4_,
                                auVar54._0_4_ * auVar58._0_4_ - auVar61._0_4_ * auVar67._0_4_),4,1);
    auVar58 = NEON_ext(auVar68,auVar68,8,1);
    auVar40 = NEON_ext(auVar82,auVar82,8,1);
    fVar20 = auVar82._4_4_ * auVar68._0_4_ - auVar82._0_4_ * auVar68._4_4_;
    auVar43._0_4_ = fVar39 * (float)uVar83;
    fVar11 = (float)((ulong)uVar83 >> 0x20);
    auVar43._4_4_ = fVar44 * fVar11;
    auVar43._8_4_ = fVar45 * fVar19;
    auVar43._12_4_ = fVar46 * 0.0;
    uVar56 = NEON_ext(CONCAT44(auVar82._8_4_ * auVar68._4_4_ - auVar82._4_4_ * auVar68._8_4_,fVar20)
                      ,CONCAT44(auVar82._4_4_ * auVar58._4_4_ - auVar40._4_4_ * auVar68._4_4_,
                                auVar82._0_4_ * auVar58._0_4_ - auVar40._0_4_ * auVar68._0_4_),4,1);
    auVar62._0_4_ = fVar14 * fVar18;
    auVar62._4_4_ = fVar15 * fVar59;
    auVar62._8_4_ = fVar16 * fVar66;
    auVar62._12_4_ = fVar17 * 0.0;
    auVar58 = NEON_ext(auVar62,auVar62,8,1);
    fVar13 = fVar13 * fVar18;
    fVar47 = fVar47 * fVar59;
    auVar40._4_4_ = fVar47;
    auVar40._0_4_ = fVar13;
    auVar40._8_4_ = fVar52 * fVar66;
    auVar40._12_4_ = fVar60 * 0.0;
    auVar74._4_4_ = fVar47;
    auVar74._0_4_ = fVar13;
    auVar74._8_4_ = fVar52 * fVar66;
    auVar74._12_4_ = fVar60 * 0.0;
    auVar40 = NEON_ext(auVar40,auVar74,8,1);
    fVar52 = auVar58._0_4_ + auVar58._4_4_;
    auVar63._0_4_ = fVar14 * (float)auVar32._0_8_;
    fVar60 = (float)((ulong)auVar32._0_8_ >> 0x20);
    auVar63._4_4_ = fVar15 * fVar60;
    auVar63._8_4_ = fVar16 * fVar48;
    auVar63._12_4_ = fVar17 * 0.0;
    auVar50._0_4_ = fVar21 * (float)auVar32._0_8_;
    auVar50._4_4_ = fVar36 * fVar60;
    auVar50._8_4_ = fVar37 * fVar48;
    auVar50._12_4_ = fVar38 * 0.0;
    auVar58 = NEON_ext(auVar63,auVar63,8,1);
    auVar35._0_4_ = fVar21 * (float)uVar56;
    fVar21 = (float)((ulong)uVar56 >> 0x20);
    auVar35._4_4_ = fVar36 * fVar21;
    auVar35._8_4_ = fVar37 * fVar20;
    auVar35._12_4_ = fVar38 * 0.0;
    fVar60 = auVar58._0_4_ + auVar58._4_4_;
    auVar69._0_4_ = fVar14 * (float)uVar83;
    auVar69._4_4_ = fVar15 * fVar11;
    auVar69._8_4_ = fVar16 * fVar19;
    auVar69._12_4_ = fVar17 * 0.0;
    auVar58 = NEON_ext(auVar43,auVar43,8,1);
    auVar61._0_4_ = fVar14 * (float)uVar56;
    auVar61._4_4_ = fVar15 * fVar21;
    auVar61._8_4_ = fVar16 * fVar20;
    auVar61._12_4_ = fVar17 * 0.0;
    fVar11 = auVar58._0_4_ + auVar58._4_4_;
    auVar58 = NEON_ext(auVar35,auVar35,8,1);
    auVar74 = NEON_ext(auVar69,auVar69,8,1);
    fVar14 = auVar74._0_4_ + auVar74._4_4_;
    auVar74 = NEON_ext(auVar61,auVar61,8,1);
    fVar15 = auVar40._0_4_ + auVar40._4_4_;
    auVar40 = NEON_ext(auVar50,auVar50,8,1);
    fVar16 = auVar58._0_4_ + auVar58._4_4_;
    fVar17 = auVar40._0_4_ + auVar40._4_4_;
    uVar53 = NEON_ext(CONCAT44(auVar62._0_4_ + auVar62._4_4_ + fVar52,
                               auVar62._0_4_ + auVar62._4_4_ + fVar52),
                      CONCAT44(auVar63._0_4_ + auVar63._4_4_ + fVar60,
                               auVar63._0_4_ + auVar63._4_4_ + fVar60),4,1);
    fVar52 = auVar74._0_4_ + auVar74._4_4_;
    uVar83 = NEON_ext(CONCAT44(auVar69._0_4_ + auVar69._4_4_ + fVar14,
                               auVar69._0_4_ + auVar69._4_4_ + fVar14),
                      CONCAT44(auVar35._0_4_ + auVar35._4_4_ + fVar16,
                               auVar35._0_4_ + auVar35._4_4_ + fVar16),4,1);
    uVar56 = NEON_ext(CONCAT44(fVar13 + fVar47 + fVar15,fVar13 + fVar47 + fVar15),
                      CONCAT44(auVar50._0_4_ + auVar50._4_4_ + fVar17,
                               auVar50._0_4_ + auVar50._4_4_ + fVar17),4,1);
    auVar32._0_8_ =
         NEON_ext(CONCAT44(auVar43._0_4_ + auVar43._4_4_ + fVar11,
                           auVar43._0_4_ + auVar43._4_4_ + fVar11),
                  CONCAT44(auVar61._0_4_ + auVar61._4_4_ + fVar52,
                           auVar61._0_4_ + auVar61._4_4_ + fVar52),4,1);
    local_40 = -(uint)(-1e-06 <= (float)uVar56 * (float)uVar53);
    iStack_3c = -(uint)(-1e-06 <= (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar53 >> 0x20));
    iStack_38 = -(uint)(-1e-06 <= (float)auVar32._0_8_ * (float)uVar83);
    iStack_34 = -(uint)(-1e-06 <=
                       (float)((ulong)auVar32._0_8_ >> 0x20) * (float)((ulong)uVar83 >> 0x20));
    auVar78[0] = ~(byte)local_40;
    auVar78[1] = ~(byte)((uint)local_40 >> 8);
    auVar78[2] = ~(byte)((uint)local_40 >> 0x10);
    auVar78[3] = ~(byte)((uint)local_40 >> 0x18);
    auVar78[4] = ~(byte)iStack_3c;
    auVar78[5] = ~(byte)((uint)iStack_3c >> 8);
    auVar78[6] = ~(byte)((uint)iStack_3c >> 0x10);
    auVar78[7] = ~(byte)((uint)iStack_3c >> 0x18);
    auVar78[8] = ~(byte)iStack_38;
    auVar78[9] = ~(byte)((uint)iStack_38 >> 8);
    auVar78[10] = ~(byte)((uint)iStack_38 >> 0x10);
    auVar78[0xb] = ~(byte)((uint)iStack_38 >> 0x18);
    auVar78[0xc] = ~(byte)iStack_34;
    auVar78[0xd] = ~(byte)((uint)iStack_34 >> 8);
    auVar78[0xe] = ~(byte)((uint)iStack_34 >> 0x10);
    auVar78[0xf] = ~(byte)((uint)iStack_34 >> 0x18);
    NEON_ext(auVar78,auVar78,8,1);
    uVar10 = CONCAT11(auVar78[4],auVar78[0]);
    uVar22 = CONCAT12(auVar78[8],uVar10);
    iVar23 = CONCAT13(auVar78[0xc],uVar22);
    if (iVar23 == -1) {
      return ZEXT816(0);
    }
    local_48 = DAT_01d4d0ac;
    local_50 = DAT_01d4d0a4;
    auVar58 = FUN_002379a0(param_1,&local_40,&local_50);
    uVar12 = local_50 & 0xffffffff;
    local_50 = local_50 >> 0x20;
    uVar71 = (ulong)local_48;
    auVar32._0_8_ = *(undefined8 *)param_1[uVar12];
    uVar83 = *(undefined8 *)param_1[local_50];
    uVar56 = *(undefined8 *)(param_1[local_50] + 8);
    uVar53 = *(undefined8 *)param_1[uVar71];
    uVar4 = *(undefined8 *)(param_1[uVar71] + 8);
    *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[uVar12] + 8);
    *(undefined8 *)*param_1 = auVar32._0_8_;
    *(undefined8 *)(param_1[1] + 8) = uVar56;
    *(undefined8 *)param_1[1] = uVar83;
    auVar32._0_8_ = param_2[uVar12 * 2];
    uVar83 = (param_2 + uVar12 * 2)[1];
    *(undefined8 *)(param_1[2] + 8) = uVar4;
    *(undefined8 *)param_1[2] = uVar53;
    uVar56 = param_2[local_50 * 2];
    uVar53 = (param_2 + local_50 * 2)[1];
    uVar4 = param_2[uVar71 * 2];
    uVar5 = (param_2 + uVar71 * 2)[1];
    param_2[1] = uVar83;
    *param_2 = auVar32._0_8_;
    param_2[3] = uVar53;
    param_2[2] = uVar56;
    auVar32._0_8_ = param_3[uVar12 * 2];
    uVar83 = (param_3 + uVar12 * 2)[1];
    uVar56 = param_3[local_50 * 2];
    uVar53 = (param_3 + local_50 * 2)[1];
    param_2[5] = uVar5;
    param_2[4] = uVar4;
    uVar4 = param_3[uVar71 * 2];
    uVar5 = (param_3 + uVar71 * 2)[1];
    param_3[1] = uVar83;
    *param_3 = auVar32._0_8_;
    param_3[3] = uVar53;
    param_3[2] = uVar56;
    param_3[5] = uVar5;
    param_3[4] = uVar4;
    return auVar58;
  }
  *param_4 = 3;
  if (fVar11 <= 1.1920929e-07) {
    auVar34._0_4_ = auVar54._0_4_ * auVar54._0_4_;
    auVar34._4_4_ = auVar54._4_4_ * auVar54._4_4_;
    auVar34._8_4_ = auVar54._8_4_ * auVar54._8_4_;
    auVar34._12_4_ = auVar54._12_4_ * auVar54._12_4_;
    auVar40 = NEON_ext(auVar34,auVar34,8,1);
    fVar47 = auVar40._0_4_ + auVar40._4_4_;
    fVar13 = auVar34._0_4_ + auVar34._4_4_ + fVar47;
    auVar32._0_8_ = CONCAT44(auVar34._0_4_ + auVar34._4_4_ + fVar47,fVar13);
    bVar1 = fVar13 <= 1.1920929e-07;
    auVar41._0_4_ = -(uint)bVar1;
    auVar41._4_4_ = -(uint)bVar1;
    auVar41._8_4_ = -(uint)bVar1;
    auVar41._12_4_ = -(uint)bVar1;
    NEON_ext(auVar41,auVar41,8,1);
    *param_4 = 2;
    if (CONCAT13((char)auVar41._12_4_,
                 CONCAT12((char)auVar41._8_4_,CONCAT11((char)auVar41._4_4_,(char)auVar41._0_4_))) ==
        -1) {
      *param_4 = 1;
      return auVar58;
    }
    auVar42._0_4_ = -fVar14 * auVar54._0_4_;
    auVar42._4_4_ = -fVar15 * auVar54._4_4_;
    auVar42._8_4_ = -fVar16 * auVar54._8_4_;
    auVar42._12_4_ = auVar54._12_4_ * 0.0;
    auVar58 = NEON_ext(auVar42,auVar42,8,1);
    fVar13 = auVar58._0_4_ + auVar58._4_4_;
    uVar56 = NEON_frecpe(auVar32._0_8_,4);
    uVar83 = NEON_frecps(auVar32._0_8_,uVar56,4);
    fVar47 = (float)uVar56 * (float)uVar83;
    fVar52 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)uVar83 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar52,fVar47),4);
    fVar47 = fVar47 * (float)uVar83;
    fVar52 = fVar52 * (float)((ulong)uVar83 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar52,fVar47),4);
    fVar47 = fVar47 * (float)uVar83;
    fVar52 = fVar52 * (float)((ulong)uVar83 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar52,fVar47),4);
    fVar47 = fVar47 * (float)uVar83;
    fVar52 = fVar52 * (float)((ulong)uVar83 >> 0x20);
    auVar32._0_8_ = NEON_frecps(auVar32._0_8_,CONCAT44(fVar52,fVar47),4);
    uVar83 = NEON_fmov(0x3f800000,4);
    auVar32._0_8_ =
         NEON_fmin(CONCAT44((auVar42._0_4_ + auVar42._4_4_ + fVar13) *
                            fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20),
                            (auVar42._0_4_ + auVar42._4_4_ + fVar13) * fVar47 * (float)auVar32._0_8_
                           ),uVar83,4);
    auVar32._0_8_ = NEON_fmax(auVar32._0_8_,0,4);
    fVar13 = (float)auVar32._0_8_;
    auVar24._0_8_ = CONCAT44(fVar15 + auVar54._4_4_ * fVar13,fVar14 + auVar54._0_4_ * fVar13);
    auVar24._8_4_ = fVar16 + auVar54._8_4_ * fVar13;
    auVar24._12_4_ = fVar17 + auVar54._12_4_ * fVar13;
    auVar58 = NEON_ext(auVar24,auVar24,8,1);
    auVar25._8_4_ = auVar58._0_4_;
    auVar25._0_8_ = auVar24._0_8_;
    auVar25._12_4_ = 0;
    return auVar25;
  }
  if ((uVar81 & 1) != 0) {
    return auVar58;
  }
  auVar86 = NEON_ext(auVar40,auVar40,8,1);
  auVar61 = NEON_ext(auVar74,auVar74,8,1);
  fVar47 = fVar21 * fVar44 - fVar36 * fVar39;
  auVar67 = NEON_ext(auVar58,auVar58,8,1);
  uVar56 = NEON_ext(CONCAT44(fVar36 * fVar45 - fVar37 * fVar44,fVar47),
                    CONCAT44(auVar86._4_4_ * fVar44 - fVar36 * auVar61._4_4_,
                             auVar86._0_4_ * fVar39 - fVar21 * auVar61._0_4_),4,1);
  fVar13 = fVar15 * fVar39 - fVar14 * fVar44;
  auVar32._0_8_ =
       NEON_ext(CONCAT44(fVar16 * fVar44 - fVar15 * fVar45,fVar13),
                CONCAT44(fVar15 * auVar61._4_4_ - auVar67._4_4_ * fVar44,
                         fVar14 * auVar61._0_4_ - auVar67._0_4_ * fVar39),4,1);
  fVar52 = fVar14 * fVar36 - fVar15 * fVar21;
  uVar83 = NEON_ext(CONCAT44(fVar15 * fVar37 - fVar16 * fVar36,fVar52),
                    CONCAT44(auVar67._4_4_ * fVar36 - fVar15 * auVar86._4_4_,
                             auVar67._0_4_ * fVar21 - fVar14 * auVar86._0_4_),4,1);
  auVar64._0_4_ = (float)uVar56 * fVar18;
  auVar64._4_4_ = (float)((ulong)uVar56 >> 0x20) * fVar59;
  auVar64._8_4_ = fVar47 * fVar66;
  auVar64._12_4_ = 0;
  auVar86 = NEON_ext(auVar64,auVar64,8,1);
  auVar72._0_4_ = (float)auVar32._0_8_ * fVar18;
  auVar72._4_4_ = (float)((ulong)auVar32._0_8_ >> 0x20) * fVar59;
  auVar72._8_4_ = fVar13 * fVar66;
  auVar72._12_4_ = 0;
  fVar13 = auVar64._0_4_ + auVar64._4_4_ + auVar86._0_4_ + auVar86._4_4_;
  auVar86 = NEON_ext(auVar72,auVar72,8,1);
  fVar47 = auVar72._0_4_ + auVar72._4_4_ + auVar86._0_4_ + auVar86._4_4_;
  auVar65._0_4_ = (float)uVar83 * fVar18;
  auVar65._4_4_ = (float)((ulong)uVar83 >> 0x20) * fVar59;
  auVar65._8_4_ = fVar52 * fVar66;
  auVar65._12_4_ = 0;
  auVar86 = NEON_ext(auVar65,auVar65,8,1);
  fVar52 = auVar65._0_4_ + auVar65._4_4_ + auVar86._0_4_ + auVar86._4_4_;
  bVar1 = 0.0 <= fVar52 && (0.0 <= fVar47 && 0.0 <= fVar13);
  auVar77._0_4_ = -(uint)bVar1;
  auVar77._4_4_ = -(uint)bVar1;
  auVar77._8_4_ = -(uint)bVar1;
  auVar77._12_4_ = -(uint)bVar1;
  NEON_ext(auVar77,auVar77,8,1);
  if (CONCAT13((char)auVar77._12_4_,
               CONCAT12((char)auVar77._8_4_,CONCAT11((char)auVar77._4_4_,(char)auVar77._0_4_))) ==
      -1) {
    auVar28._0_4_ = fVar14 * fVar18;
    auVar28._4_4_ = fVar15 * fVar59;
    auVar28._8_4_ = fVar16 * fVar66;
    auVar28._12_4_ = fVar17 * 0.0;
    auVar58 = NEON_ext(auVar28,auVar28,8,1);
    auVar32._0_8_ = NEON_frecpe(uVar12,4);
    uVar83 = NEON_frecps(uVar12,auVar32._0_8_,4);
    fVar13 = (float)auVar32._0_8_ * (float)uVar83;
    fVar47 = (float)((ulong)auVar32._0_8_ >> 0x20) * (float)((ulong)uVar83 >> 0x20);
    auVar32._0_8_ = NEON_frecps(uVar12,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)auVar32._0_8_;
    fVar47 = fVar47 * (float)((ulong)auVar32._0_8_ >> 0x20);
    auVar32._0_8_ = NEON_frecps(uVar12,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)auVar32._0_8_;
    fVar47 = fVar47 * (float)((ulong)auVar32._0_8_ >> 0x20);
    auVar32._0_8_ = NEON_frecps(uVar12,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)auVar32._0_8_;
    auVar32._0_8_ =
         NEON_frecps(uVar12,CONCAT44(fVar47 * (float)((ulong)auVar32._0_8_ >> 0x20),fVar13),4);
    fVar13 = (auVar28._0_4_ + auVar28._4_4_ + auVar58._0_4_ + auVar58._4_4_) *
             fVar13 * (float)auVar32._0_8_;
    auVar29._0_4_ = fVar18 * fVar13;
    auVar29._4_4_ = fVar59 * fVar13;
    auVar29._8_4_ = fVar66 * fVar13;
    auVar29._12_4_ = 0;
    return auVar29;
  }
  fVar59 = -fVar14 * auVar54._0_4_;
  fVar66 = -fVar15 * auVar54._4_4_;
  fVar60 = -fVar16 * auVar54._8_4_;
  auVar2._4_4_ = fVar66;
  auVar2._0_4_ = fVar59;
  auVar2._8_4_ = fVar60;
  auVar2._12_4_ = auVar54._12_4_ * 0.0;
  auVar3._4_4_ = fVar66;
  auVar3._0_4_ = fVar59;
  auVar3._8_4_ = fVar60;
  auVar3._12_4_ = auVar54._12_4_ * 0.0;
  auVar86 = NEON_ext(auVar2,auVar3,8,1);
  fVar48 = auVar86._0_4_ + auVar86._4_4_;
  auVar70._0_4_ = -fVar21 * auVar54._0_4_;
  auVar70._4_4_ = -fVar36 * auVar54._4_4_;
  auVar70._8_4_ = -fVar37 * auVar54._8_4_;
  auVar70._12_4_ = auVar54._12_4_ * 0.0;
  auVar86 = NEON_ext(auVar70,auVar70,8,1);
  fVar18 = auVar86._0_4_ + auVar86._4_4_;
  fVar60 = fVar59 + fVar66 + fVar48;
  fVar11 = auVar70._0_4_ + auVar70._4_4_ + fVar18;
  fVar18 = auVar70._0_4_ + auVar70._4_4_ + fVar18;
  bVar1 = (0.0 <= fVar60 && fVar52 <= 0.0) && fVar11 <= 0.0;
  auVar79._0_4_ = -(uint)bVar1;
  auVar79._4_4_ = -(uint)bVar1;
  auVar79._8_4_ = -(uint)bVar1;
  auVar79._12_4_ = -(uint)bVar1;
  NEON_ext(auVar79,auVar79,8,1);
  if (CONCAT13((char)auVar79._12_4_,
               CONCAT12((char)auVar79._8_4_,CONCAT11((char)auVar79._4_4_,(char)auVar79._0_4_))) ==
      -1) {
    auVar32._0_8_ = CONCAT44((fVar59 + fVar66 + fVar48) - fVar18,fVar60 - fVar11);
    uVar83 = NEON_frecpe(auVar32._0_8_,4);
    uVar56 = NEON_frecps(auVar32._0_8_,uVar83,4);
    fVar13 = (float)uVar83 * (float)uVar56;
    fVar47 = (float)((ulong)uVar83 >> 0x20) * (float)((ulong)uVar56 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)uVar83;
    fVar47 = fVar47 * (float)((ulong)uVar83 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)uVar83;
    fVar47 = fVar47 * (float)((ulong)uVar83 >> 0x20);
    uVar83 = NEON_frecps(auVar32._0_8_,CONCAT44(fVar47,fVar13),4);
    fVar13 = fVar13 * (float)uVar83;
    auVar32._0_8_ =
         NEON_frecps(auVar32._0_8_,CONCAT44(fVar47 * (float)((ulong)uVar83 >> 0x20),fVar13),4);
    fVar60 = fVar60 * (float)(-(uint)(1.1920929e-07 < ABS(fVar60 - fVar11)) &
                             (uint)(fVar13 * (float)auVar32._0_8_));
    lVar8 = 0;
    uVar9 = 2;
    auVar30._0_8_ = CONCAT44(fVar15 + auVar54._4_4_ * fVar60,fVar14 + auVar54._0_4_ * fVar60);
    auVar30._8_4_ = fVar16 + auVar54._8_4_ * fVar60;
    auVar30._12_4_ = fVar17 + auVar54._12_4_ * fVar60;
    auVar58 = NEON_ext(auVar30,auVar30,8,1);
    auVar58._8_4_ = auVar58._0_4_;
    auVar58._0_8_ = auVar30._0_8_;
    auVar58._12_4_ = 0;
LAB_00237954:
    lVar7 = 1;
    pauVar6 = param_1 + 1;
  }
  else {
    auVar80._0_4_ = -fVar21 * auVar57._0_4_;
    auVar80._4_4_ = -fVar36 * auVar57._4_4_;
    auVar80._8_4_ = -fVar37 * auVar57._8_4_;
    auVar80._12_4_ = auVar57._12_4_ * 0.0;
    auVar86 = NEON_ext(auVar80,auVar80,8,1);
    fVar66 = auVar86._0_4_ + auVar86._4_4_;
    auVar55._0_4_ = auVar54._0_4_ * -fVar39;
    auVar55._4_4_ = auVar54._4_4_ * -fVar44;
    auVar55._8_4_ = auVar54._8_4_ * -fVar45;
    auVar55._12_4_ = auVar54._12_4_ * 0.0;
    auVar84._0_4_ = auVar57._0_4_ * -fVar39;
    auVar84._4_4_ = auVar57._4_4_ * -fVar44;
    auVar84._8_4_ = auVar57._8_4_ * -fVar45;
    auVar84._12_4_ = auVar57._12_4_ * 0.0;
    fVar52 = auVar80._0_4_ + auVar80._4_4_ + fVar66;
    auVar86 = NEON_ext(auVar55,auVar55,8,1);
    fVar19 = auVar86._0_4_ + auVar86._4_4_;
    fVar48 = auVar55._0_4_ + auVar55._4_4_ + fVar19;
    auVar86 = NEON_ext(auVar84,auVar84,8,1);
    fVar20 = auVar86._0_4_ + auVar86._4_4_;
    fVar59 = auVar84._0_4_ + auVar84._4_4_ + fVar20;
    fVar20 = auVar84._0_4_ + auVar84._4_4_ + fVar20;
    bVar1 = (fVar11 <= fVar52 && fVar13 <= 0.0) && fVar59 <= fVar48;
    auVar75._0_4_ = -(uint)bVar1;
    auVar75._4_4_ = -(uint)bVar1;
    auVar75._8_4_ = -(uint)bVar1;
    auVar75._12_4_ = -(uint)bVar1;
    NEON_ext(auVar75,auVar75,8,1);
    if (CONCAT13((char)auVar75._12_4_,
                 CONCAT12((char)auVar75._8_4_,CONCAT11((char)auVar75._4_4_,(char)auVar75._0_4_))) ==
        -1) {
      fVar13 = (fVar52 - fVar11) + (fVar48 - fVar59);
      uVar83 = CONCAT44(((auVar80._0_4_ + auVar80._4_4_ + fVar66) - fVar18) +
                        ((auVar55._0_4_ + auVar55._4_4_ + fVar19) - fVar20),fVar13);
      auVar32._0_8_ = NEON_frecpe(uVar83,4);
      uVar56 = NEON_frecps(uVar83,auVar32._0_8_,4);
      fVar47 = (float)auVar32._0_8_ * (float)uVar56;
      fVar60 = (float)((ulong)auVar32._0_8_ >> 0x20) * (float)((ulong)uVar56 >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar60,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      fVar60 = fVar60 * (float)((ulong)auVar32._0_8_ >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar60,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      fVar60 = fVar60 * (float)((ulong)auVar32._0_8_ >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar60,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      auVar32._0_8_ =
           NEON_frecps(uVar83,CONCAT44(fVar60 * (float)((ulong)auVar32._0_8_ >> 0x20),fVar47),4);
      fVar13 = (fVar52 - fVar11) *
               (float)(-(uint)(1.1920929e-07 < ABS(fVar13)) & (uint)(fVar47 * (float)auVar32._0_8_))
      ;
      auVar31._0_8_ =
           CONCAT44(fVar36 + (fVar44 - fVar36) * fVar13,fVar21 + (fVar39 - fVar21) * fVar13);
      auVar31._8_4_ = fVar37 + (fVar45 - fVar37) * fVar13;
      auVar31._12_4_ = fVar38 + (fVar46 - fVar38) * fVar13;
      auVar58 = NEON_ext(auVar31,auVar31,8,1);
      uVar33 = auVar58._0_4_;
      lVar8 = 1;
      auVar32._0_8_ = auVar31._0_8_;
    }
    else {
      auVar76._0_4_ = -fVar14 * auVar57._0_4_;
      auVar76._4_4_ = -fVar15 * auVar57._4_4_;
      auVar76._8_4_ = -fVar16 * auVar57._8_4_;
      auVar76._12_4_ = auVar57._12_4_ * 0.0;
      auVar86 = NEON_ext(auVar76,auVar76,8,1);
      fVar21 = auVar86._0_4_ + auVar86._4_4_;
      fVar13 = auVar76._0_4_ + auVar76._4_4_ + fVar21;
      bVar1 = fVar59 <= 0.0 && (fVar47 <= 0.0 && 0.0 <= fVar13);
      auVar73._0_4_ = -(uint)bVar1;
      auVar73._4_4_ = -(uint)bVar1;
      auVar73._8_4_ = -(uint)bVar1;
      auVar73._12_4_ = -(uint)bVar1;
      NEON_ext(auVar73,auVar73,8,1);
      if (CONCAT13((char)auVar73._12_4_,
                   CONCAT12((char)auVar73._8_4_,CONCAT11((char)auVar73._4_4_,(char)auVar73._0_4_)))
          != -1) {
        bVar1 = fVar60 <= 0.0 && fVar13 <= 0.0;
        auVar51._0_4_ = -(uint)bVar1;
        auVar51._4_4_ = -(uint)bVar1;
        auVar51._8_4_ = -(uint)bVar1;
        auVar51._12_4_ = -(uint)bVar1;
        NEON_ext(auVar51,auVar51,8,1);
        if (CONCAT13((char)auVar51._12_4_,
                     CONCAT12((char)auVar51._8_4_,CONCAT11((char)auVar51._4_4_,(char)auVar51._0_4_))
                    ) == -1) {
          lVar8 = 0;
          uVar9 = 1;
        }
        else {
          bVar1 = 0.0 <= fVar11 && fVar52 <= fVar11;
          auVar26._0_4_ = -(uint)bVar1;
          auVar26._4_4_ = -(uint)bVar1;
          auVar26._8_4_ = -(uint)bVar1;
          auVar26._12_4_ = -(uint)bVar1;
          NEON_ext(auVar26,auVar26,8,1);
          iVar23 = CONCAT13((char)auVar26._12_4_,
                            CONCAT12((char)auVar26._8_4_,
                                     CONCAT11((char)auVar26._4_4_,(char)auVar26._0_4_)));
          iVar49 = -(uint)(iVar23 == -1);
          auVar27._4_4_ = iVar49;
          auVar27._0_4_ = iVar49;
          auVar27._8_4_ = iVar49;
          auVar27._12_4_ = iVar49;
          auVar58 = auVar74 ^ (auVar74 ^ auVar40) & auVar27;
          uVar9 = 1;
          lVar8 = 1;
          if (iVar23 != -1) {
            lVar8 = 2;
          }
        }
        goto LAB_00237954;
      }
      uVar83 = CONCAT44((auVar76._0_4_ + auVar76._4_4_ + fVar21) - fVar20,fVar13 - fVar59);
      uVar56 = NEON_frecpe(uVar83,4);
      auVar32._0_8_ = NEON_frecps(uVar83,uVar56,4);
      fVar47 = (float)uVar56 * (float)auVar32._0_8_;
      fVar52 = (float)((ulong)uVar56 >> 0x20) * (float)((ulong)auVar32._0_8_ >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar52,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      fVar52 = fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar52,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      fVar52 = fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20);
      auVar32._0_8_ = NEON_frecps(uVar83,CONCAT44(fVar52,fVar47),4);
      fVar47 = fVar47 * (float)auVar32._0_8_;
      auVar32._0_8_ =
           NEON_frecps(uVar83,CONCAT44(fVar52 * (float)((ulong)auVar32._0_8_ >> 0x20),fVar47),4);
      fVar13 = fVar13 * (float)(-(uint)(1.1920929e-07 < ABS(fVar13 - fVar59)) &
                               (uint)(fVar47 * (float)auVar32._0_8_));
      lVar8 = 0;
      auVar32._0_8_ = CONCAT44(fVar15 + auVar57._4_4_ * fVar13,fVar14 + auVar57._0_4_ * fVar13);
      auVar32._8_4_ = fVar16 + auVar57._8_4_ * fVar13;
      auVar32._12_4_ = fVar17 + auVar57._12_4_ * fVar13;
      auVar58 = NEON_ext(auVar32,auVar32,8,1);
      uVar33 = auVar58._0_4_;
    }
    uVar9 = 2;
    auVar58._8_4_ = uVar33;
    auVar58._0_8_ = auVar32._0_8_;
    auVar58._12_4_ = 0;
    lVar7 = 2;
  }
  auVar32._0_8_ = *(undefined8 *)param_1[lVar8];
  uVar83 = *(undefined8 *)*pauVar6;
  uVar56 = *(undefined8 *)(*pauVar6 + 8);
  uVar53 = param_2[lVar8 * 2];
  uVar4 = (param_2 + lVar8 * 2)[1];
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(param_1[lVar8] + 8);
  *(undefined8 *)*param_1 = auVar32._0_8_;
  *(undefined8 *)(param_1[1] + 8) = uVar56;
  *(undefined8 *)param_1[1] = uVar83;
  auVar32._0_8_ = param_2[lVar7 * 2];
  uVar83 = (param_2 + lVar7 * 2)[1];
  uVar56 = param_3[lVar8 * 2];
  uVar5 = (param_3 + lVar8 * 2)[1];
  param_2[1] = uVar4;
  *param_2 = uVar53;
  param_2[3] = uVar83;
  param_2[2] = auVar32._0_8_;
  auVar32._0_8_ = param_3[lVar7 * 2];
  uVar83 = (param_3 + lVar7 * 2)[1];
  param_3[1] = uVar5;
  *param_3 = uVar56;
  param_3[3] = uVar83;
  param_3[2] = auVar32._0_8_;
  *param_4 = uVar9;
  return auVar58;
}


