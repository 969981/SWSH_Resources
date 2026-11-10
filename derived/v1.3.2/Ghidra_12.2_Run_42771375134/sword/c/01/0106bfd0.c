/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0106bfd0; name: FUN_0106bfd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0106bfd0(long *param_1,long *param_2,int param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 local_2b0;
  undefined1 *puStack_2a8;
  undefined8 local_2a0;
  undefined5 uStack_298;
  undefined3 local_293;
  undefined5 uStack_290;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined1 *puStack_248;
  undefined8 local_240;
  long local_238;
  undefined *local_230;
  long local_228;
  undefined8 local_220;
  code *local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [96];
  undefined8 local_1a0;
  code *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 auStack_180 [96];
  undefined1 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  undefined1 *puStack_a0;
  undefined8 local_98;
  long local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_a8 = 0xcbf29ce484222645;
  puStack_a0 = &DAT_01d38550;
  local_84 = 0;
  local_98 = 0;
  local_90 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_88 = 0;
  local_70 = *(undefined8 *)PTR_DAT_02715420;
  uStack_68 = *(undefined8 *)(PTR_DAT_02715420 + 8);
  if (param_3 == 0) {
    local_60 = *(undefined8 *)PTR_DAT_02723be8;
    uStack_58 = *(undefined8 *)(PTR_DAT_02723be8 + 8);
  }
  else {
    if (param_3 == 1) {
      puVar12 = (undefined8 *)PTR_DAT_02723be0;
    }
    else {
      puVar12 = (undefined8 *)PTR_DAT_02723bf0;
    }
    local_60 = *puVar12;
    uStack_58 = puVar12[1];
  }
  fVar15 = (float)local_60;
  fVar14 = fVar15 * fVar15;
  fVar16 = (float)((ulong)local_60 >> 0x20);
  fVar4 = fVar16 * fVar16;
  uVar19 = (undefined1)((uint)fVar4 >> 8);
  uVar20 = (undefined1)((uint)fVar4 >> 0x10);
  uVar21 = (undefined1)((uint)fVar4 >> 0x18);
  fVar17 = (float)uStack_58;
  fVar13 = fVar17 * fVar17;
  uVar22 = (undefined1)((uint)fVar13 >> 8);
  uVar23 = (undefined1)((uint)fVar13 >> 0x10);
  uVar24 = (undefined1)((uint)fVar13 >> 0x18);
  fVar18 = (float)((ulong)uStack_58 >> 0x20);
  fVar7 = fVar18 * fVar18;
  uVar25 = (undefined1)((uint)fVar7 >> 8);
  uVar26 = (undefined1)((uint)fVar7 >> 0x10);
  uVar27 = (undefined1)((uint)fVar7 >> 0x18);
  auVar28[4] = SUB41(fVar4,0);
  auVar28._0_4_ = fVar14;
  auVar28[5] = uVar19;
  auVar28[6] = uVar20;
  auVar28[7] = uVar21;
  auVar28[8] = SUB41(fVar13,0);
  auVar28[9] = uVar22;
  auVar28[10] = uVar23;
  auVar28[0xb] = uVar24;
  auVar28[0xc] = SUB41(fVar7,0);
  auVar28[0xd] = uVar25;
  auVar28[0xe] = uVar26;
  auVar28[0xf] = uVar27;
  auVar31[4] = SUB41(fVar4,0);
  auVar31._0_4_ = fVar14;
  auVar31[5] = uVar19;
  auVar31[6] = uVar20;
  auVar31[7] = uVar21;
  auVar31[8] = SUB41(fVar13,0);
  auVar31[9] = uVar22;
  auVar31[10] = uVar23;
  auVar31[0xb] = uVar24;
  auVar31[0xc] = SUB41(fVar7,0);
  auVar31[0xd] = uVar25;
  auVar31[0xe] = uVar26;
  auVar31[0xf] = uVar27;
  auVar28 = NEON_ext(auVar28,auVar31,8,1);
  fVar14 = auVar28._0_4_ + fVar14;
  fVar4 = auVar28._4_4_ + fVar4;
  uStack_290 = 0;
  local_2b0 = 0xcbf29ce484222645;
  puStack_2a8 = &DAT_01d38550;
  local_2a0 = 0;
  uStack_298 = 0;
  local_293 = 0;
  fVar13 = fVar14 + fVar4;
  fVar14 = fVar14 + fVar4;
  uVar19 = SUB41(fVar14,0);
  uVar20 = (undefined1)((uint)fVar14 >> 8);
  uVar21 = (undefined1)((uint)fVar14 >> 0x10);
  uVar22 = (undefined1)((uint)fVar14 >> 0x18);
  local_260 = 0;
  uStack_258 = 0;
  local_228 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_250 = 0xcbf29ce484222645;
  puStack_248 = &DAT_01d38550;
  local_240 = 0;
  local_238 = 0;
  local_190 = 0;
  uStack_188 = 0;
  local_1a0 = 0;
  local_198 = (code *)0x0;
  local_210 = 0;
  uStack_208 = 0;
  local_220 = 0;
  local_218 = (code *)0x0;
  auVar1[4] = uVar19;
  auVar1._0_4_ = fVar13;
  auVar1[5] = uVar20;
  auVar1[6] = uVar21;
  auVar1[7] = uVar22;
  auVar1[8] = SUB41(fVar13,0);
  auVar1[9] = (char)((uint)fVar13 >> 8);
  auVar1[10] = (char)((uint)fVar13 >> 0x10);
  auVar1[0xb] = (char)((uint)fVar13 >> 0x18);
  auVar1[0xc] = uVar19;
  auVar1[0xd] = uVar20;
  auVar1[0xe] = uVar21;
  auVar1[0xf] = uVar22;
  auVar28 = NEON_frsqrte(auVar1,4);
  local_230 = PTR_DAT_02710818 + 0x10;
  auVar30._0_4_ = auVar28._0_4_ * fVar13;
  auVar30._4_4_ = auVar28._4_4_ * fVar14;
  auVar30._8_4_ = auVar28._8_4_ * fVar13;
  uVar2 = (undefined2)(CONCAT15(uVar20,CONCAT14(uVar19,fVar13)) >> 0x20);
  auVar30._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2));
  auVar31 = NEON_frsqrts(auVar28,auVar30,4);
  auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
  auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
  auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
  auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
  local_120 = 0;
  local_11c = 2;
  local_114 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  auVar32._0_4_ = fVar13 * auVar29._0_4_;
  auVar32._4_4_ = fVar14 * auVar29._4_4_;
  auVar32._8_4_ = fVar13 * auVar29._8_4_;
  auVar32._12_4_ = (float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2)) * auVar29._12_4_;
  local_f0 = 0x3f800000;
  iVar3 = -(uint)(fVar13 == 0.0);
  iVar5 = -(uint)(fVar14 == 0.0);
  iVar6 = -(uint)(fVar13 == 0.0);
  iVar8 = -(uint)((float)CONCAT13(uVar22,CONCAT12(uVar21,uVar2)) == 0.0);
  auVar28 = NEON_frsqrts(auVar29,auVar32,4);
  local_e0 = 0;
  fVar15 = fVar15 * auVar29._0_4_ * auVar28._0_4_;
  fVar16 = fVar16 * auVar29._4_4_ * auVar28._4_4_;
  fVar17 = fVar17 * auVar29._8_4_ * auVar28._8_4_;
  fVar18 = fVar18 * auVar29._12_4_ * auVar28._12_4_;
  local_60 = CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                      CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                               CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                        CONCAT14(SUB41(fVar16,0) & ~(byte)iVar5,
                                                 CONCAT13((byte)((uint)fVar15 >> 0x18) &
                                                          ~(byte)((uint)iVar3 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar15 >> 0x10) &
                                                                   ~(byte)((uint)iVar3 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar15 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar3 >> 8),SUB41(fVar15,0) & ~(byte)iVar3)))))));
  uStack_58 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                       CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                         CONCAT14(SUB41(fVar18,0) & ~(byte)iVar8,
                                                  CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                           ~(byte)((uint)iVar6 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                    ~(byte)((uint)iVar6 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar17 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    8),
                                                                             SUB41(fVar17,0) &
                                                                             ~(byte)iVar6)))))));
  local_d4 = 0;
  local_dc = 0;
  local_b0[0] = param_4;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = param_2;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar11 = (**(code **)(*param_2 + 0x10))(param_2,0x7b0,0x10);
  if (lVar11 == 0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  FUN_0074bce0(lVar11,param_2);
  *(long **)(lVar11 + 8) = param_2;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 0x7b0;
  *(undefined8 *)(lVar11 + 0x20) = 0x10;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  *param_1 = lVar11;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  FUN_0074be30(lVar11,&local_2b0,param_2);
  FUN_0074be70(lVar11,local_b0,param_2);
  local_230 = PTR_DAT_02710808 + 0x10;
  if (local_228 == 0) {
    local_228 = 0;
    pcVar9 = local_198;
  }
  else {
    FUN_006e2100(local_228,&local_230);
    lVar10 = local_228;
    local_228 = 0;
    pcVar9 = local_198;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))();
      pcVar9 = local_198;
    }
  }
  local_198 = pcVar9;
  if (pcVar9 != (code *)0x0) {
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    local_198 = (code *)0x0;
    (*pcVar9)(auStack_180);
  }
  pcVar9 = local_218;
  if (local_218 != (code *)0x0) {
    local_210 = 0;
    uStack_208 = 0;
    local_220 = 0;
    local_218 = (code *)0x0;
    (*pcVar9)(auStack_200);
  }
  if (local_228 != 0) {
    (**(code **)(*(long *)(local_228 + 0x48) + 0x18))();
    local_228 = 0;
  }
  if (local_238 != 0) {
    (**(code **)(*(long *)(local_238 + 0x48) + 0x18))();
    local_238 = 0;
  }
  if (CONCAT35(local_293,uStack_298) != 0) {
    (**(code **)(*(long *)(CONCAT35(local_293,uStack_298) + 0x48) + 0x18))();
    uStack_298 = 0;
    local_293 = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  return;
}


