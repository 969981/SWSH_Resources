/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a837f0; name: FUN_00a837f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a837f0(long *param_1)

{
  float *pfVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  char *pcVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar42;
  float fVar43;
  undefined1 auVar31 [16];
  float fVar44;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  float fVar67;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  int iVar92;
  int iVar93;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  int iVar94;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  long local_168;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  ulong uStack_128;
  long local_120;
  long lStack_118;
  undefined1 local_110 [16];
  long *local_100;
  code *pcStack_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  long *aplStack_e0 [14];
  long local_68;
  
  plVar21 = (long *)param_1[0x7f];
  if (plVar21 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    plVar24 = plVar21 + 9;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    local_100 = plVar21;
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  local_120 = 0x1e0f2020be5b5db7;
  FUN_00cc0c50(&local_100,&local_120);
  if (local_100 != (long *)0x0) {
    (**(code **)(local_100[9] + 0x18))();
    local_100 = (long *)0x0;
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  plVar21 = (long *)param_1[0x80];
  if (plVar21 == (long *)0x0) {
    local_100 = (long *)0x0;
  }
  else {
    plVar24 = plVar21 + 9;
    (**(code **)(*plVar24 + 0x10))(plVar24);
    local_100 = plVar21;
    (**(code **)(*plVar24 + 0x10))(plVar24);
  }
  local_120 = 0x1e0f2020be5b5db7;
  FUN_00cc0c50(&local_100,&local_120);
  if (local_100 != (long *)0x0) {
    (**(code **)(local_100[9] + 0x18))();
    local_100 = (long *)0x0;
  }
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  FUN_01052ab0(&local_120,param_1[0x7f]);
  FUN_01052ad0(param_1[0x7f],1);
  FUN_01053370(param_1[0x7f],0);
  FUN_01052a80(param_1[0x80],&local_120);
  FUN_01052ad0(param_1[0x80],1);
  lVar22 = param_1[0x80];
  uVar13 = FUN_01052d00(param_1[0x7f]);
  FUN_01052cc0(lVar22,uVar13);
  FUN_01053370(param_1[0x80],0);
  param_1[0x2fd] = lStack_118;
  param_1[0x2fc] = local_120;
  param_1[0x2ff] = local_110._8_8_;
  param_1[0x2fe] = local_110._0_8_;
  lVar22 = FUN_009c5ff0(param_1);
  if ((lVar22 == 0) ||
     ((uVar14 = FUN_008f35c0(lVar22,0x800), (uVar14 & 1) == 0 &&
      (uVar14 = FUN_008f35c0(lVar22,0x1000), (uVar14 & 1) == 0)))) {
    auVar31._8_8_ = uRam0000000002a553d8;
    auVar31._0_8_ = _DAT_02a553d0;
  }
  else {
    auVar31._8_8_ = uRam0000000002a553e8;
    auVar31._0_8_ = _DAT_02a553e0;
  }
  iVar68 = -(uint)(0.0 < auVar31._4_4_);
  auVar77._0_4_ = auVar31._0_4_;
  auVar77._4_4_ = 0;
  auVar77._8_8_ = auVar31._8_8_;
  auVar79._4_4_ = iVar68;
  auVar79._0_4_ = iVar68;
  auVar79._8_4_ = iVar68;
  auVar79._12_4_ = iVar68;
  auVar31 = auVar31 ^ (auVar31 ^ auVar77) & auVar79;
  fVar30 = auVar31._0_4_;
  auVar46._0_4_ = fVar30 * fVar30;
  fVar42 = auVar31._4_4_;
  auVar46._4_4_ = fVar42 * fVar42;
  fVar43 = auVar31._8_4_;
  auVar46._8_4_ = fVar43 * fVar43;
  fVar44 = auVar31._12_4_;
  auVar46._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar46,auVar46,8,1);
  fVar45 = auVar31._0_4_ + auVar46._0_4_;
  fVar67 = auVar31._4_4_ + auVar46._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar47._8_8_ = CONCAT44(fVar45,fVar29);
    auVar47._0_8_ = CONCAT44(fVar45,fVar29);
    lVar22 = param_1[0x8a];
    auVar31 = NEON_frsqrte(auVar47,4);
    auVar78._0_4_ = auVar31._0_4_ * fVar29;
    auVar78._4_4_ = auVar31._4_4_ * fVar45;
    auVar78._8_4_ = auVar31._8_4_ * fVar29;
    auVar78._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar78,4);
    auVar69._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar69._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar69._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar69._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar48._0_4_ = fVar29 * auVar69._0_4_;
    auVar48._4_4_ = fVar45 * auVar69._4_4_;
    auVar48._8_4_ = fVar29 * auVar69._8_4_;
    auVar48._12_4_ = fVar45 * auVar69._12_4_;
    auVar31 = NEON_frsqrts(auVar69,auVar48,4);
    fVar30 = fVar30 * auVar69._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar69._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar69._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar69._12_4_ * auVar31._12_4_;
    auVar32._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar32[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar32[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar32[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar32[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar32[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar32[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar32[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar32[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    *(long *)(lVar22 + 0x88) = auVar32._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar32._0_8_;
  }
  lVar22 = FUN_007240b0(param_1[0x89] + 0x1c0,0);
  auVar31 = *(undefined1 (*) [16])(lVar22 + 0x80);
  fVar30 = auVar31._0_4_;
  auVar49._0_4_ = fVar30 * fVar30;
  fVar42 = auVar31._4_4_;
  auVar49._4_4_ = fVar42 * fVar42;
  fVar43 = auVar31._8_4_;
  auVar49._8_4_ = fVar43 * fVar43;
  fVar44 = auVar31._12_4_;
  auVar49._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar49,auVar49,8,1);
  fVar45 = auVar31._0_4_ + auVar49._0_4_;
  fVar67 = auVar31._4_4_ + auVar49._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar50._8_8_ = CONCAT44(fVar45,fVar29);
    auVar50._0_8_ = CONCAT44(fVar45,fVar29);
    lVar22 = param_1[0x8b];
    auVar31 = NEON_frsqrte(auVar50,4);
    auVar80._0_4_ = auVar31._0_4_ * fVar29;
    auVar80._4_4_ = auVar31._4_4_ * fVar45;
    auVar80._8_4_ = auVar31._8_4_ * fVar29;
    auVar80._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar80,4);
    auVar70._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar70._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar70._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar70._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar51._0_4_ = fVar29 * auVar70._0_4_;
    auVar51._4_4_ = fVar45 * auVar70._4_4_;
    auVar51._8_4_ = fVar29 * auVar70._8_4_;
    auVar51._12_4_ = fVar45 * auVar70._12_4_;
    auVar31 = NEON_frsqrts(auVar70,auVar51,4);
    fVar30 = fVar30 * auVar70._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar70._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar70._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar70._12_4_ * auVar31._12_4_;
    auVar33._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar33[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar33[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar33[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar33[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar33[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar33[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar33[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar33[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    *(long *)(lVar22 + 0x88) = auVar33._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar33._0_8_;
  }
  lVar22 = FUN_007240b0(param_1[0x89] + 0x1c0,0);
  lVar19 = param_1[0x8b];
  *(undefined8 *)(lVar19 + 0x98) = *(undefined8 *)(lVar22 + 0x98);
  *(undefined8 *)(lVar19 + 0x90) = *(undefined8 *)(lVar22 + 0x90);
  fVar30 = (float)_DAT_02a55370;
  auVar52._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a55370 >> 0x20);
  auVar52._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a55378;
  auVar52._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a55378 >> 0x20);
  auVar52._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar52,auVar52,8,1);
  fVar45 = auVar31._0_4_ + auVar52._0_4_;
  fVar67 = auVar31._4_4_ + auVar52._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar53._8_8_ = CONCAT44(fVar45,fVar29);
    auVar53._0_8_ = CONCAT44(fVar45,fVar29);
    lVar22 = param_1[0x8c];
    auVar31 = NEON_frsqrte(auVar53,4);
    auVar81._0_4_ = auVar31._0_4_ * fVar29;
    auVar81._4_4_ = auVar31._4_4_ * fVar45;
    auVar81._8_4_ = auVar31._8_4_ * fVar29;
    auVar81._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar81,4);
    auVar71._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar71._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar71._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar71._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar54._0_4_ = fVar29 * auVar71._0_4_;
    auVar54._4_4_ = fVar45 * auVar71._4_4_;
    auVar54._8_4_ = fVar29 * auVar71._8_4_;
    auVar54._12_4_ = fVar45 * auVar71._12_4_;
    auVar31 = NEON_frsqrts(auVar71,auVar54,4);
    fVar30 = fVar30 * auVar71._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar71._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar71._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar71._12_4_ * auVar31._12_4_;
    auVar34._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar34[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar34[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar34[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar34[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar34[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar34[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar34[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar34[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    *(long *)(lVar22 + 0x88) = auVar34._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar34._0_8_;
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,0);
    lVar22 = 0x468;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x470;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar34._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar34._0_8_;
  }
  fVar30 = (float)_DAT_02a55380;
  auVar55._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a55380 >> 0x20);
  auVar55._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a55388;
  auVar55._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a55388 >> 0x20);
  auVar55._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar55,auVar55,8,1);
  fVar45 = auVar31._0_4_ + auVar55._0_4_;
  fVar67 = auVar31._4_4_ + auVar55._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar56._8_8_ = CONCAT44(fVar45,fVar29);
    auVar56._0_8_ = CONCAT44(fVar45,fVar29);
    auVar31 = NEON_frsqrte(auVar56,4);
    auVar82._0_4_ = auVar31._0_4_ * fVar29;
    auVar82._4_4_ = auVar31._4_4_ * fVar45;
    auVar82._8_4_ = auVar31._8_4_ * fVar29;
    auVar82._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar82,4);
    auVar72._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar72._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar72._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar72._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    auVar83._0_4_ = fVar29 * auVar72._0_4_;
    auVar83._4_4_ = fVar45 * auVar72._4_4_;
    auVar83._8_4_ = fVar29 * auVar72._8_4_;
    auVar83._12_4_ = fVar45 * auVar72._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar31 = NEON_frsqrts(auVar72,auVar83,4);
    fVar30 = fVar30 * auVar72._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar72._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar72._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar72._12_4_ * auVar31._12_4_;
    auVar35._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar35[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar35[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar35[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar35[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar35[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar35[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar35[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar35[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,1);
    lVar22 = 0x468;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x470;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar35._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar35._0_8_;
  }
  fVar30 = (float)_DAT_02a55390;
  auVar57._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a55390 >> 0x20);
  auVar57._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a55398;
  auVar57._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a55398 >> 0x20);
  auVar57._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar57,auVar57,8,1);
  fVar45 = auVar31._0_4_ + auVar57._0_4_;
  fVar67 = auVar31._4_4_ + auVar57._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar58._8_8_ = CONCAT44(fVar45,fVar29);
    auVar58._0_8_ = CONCAT44(fVar45,fVar29);
    auVar31 = NEON_frsqrte(auVar58,4);
    auVar84._0_4_ = auVar31._0_4_ * fVar29;
    auVar84._4_4_ = auVar31._4_4_ * fVar45;
    auVar84._8_4_ = auVar31._8_4_ * fVar29;
    auVar84._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar84,4);
    auVar73._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar73._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar73._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar73._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    auVar85._0_4_ = fVar29 * auVar73._0_4_;
    auVar85._4_4_ = fVar45 * auVar73._4_4_;
    auVar85._8_4_ = fVar29 * auVar73._8_4_;
    auVar85._12_4_ = fVar45 * auVar73._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar31 = NEON_frsqrts(auVar73,auVar85,4);
    fVar30 = fVar30 * auVar73._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar73._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar73._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar73._12_4_ * auVar31._12_4_;
    auVar36._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar36[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar36[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar36[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar36[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar36[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar36[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar36[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar36[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,0);
    lVar22 = 0x478;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x480;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar36._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar36._0_8_;
  }
  fVar30 = (float)_DAT_02a553a0;
  auVar59._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a553a0 >> 0x20);
  auVar59._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a553a8;
  auVar59._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a553a8 >> 0x20);
  auVar59._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar59,auVar59,8,1);
  fVar45 = auVar31._0_4_ + auVar59._0_4_;
  fVar67 = auVar31._4_4_ + auVar59._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar60._8_8_ = CONCAT44(fVar45,fVar29);
    auVar60._0_8_ = CONCAT44(fVar45,fVar29);
    auVar31 = NEON_frsqrte(auVar60,4);
    auVar86._0_4_ = auVar31._0_4_ * fVar29;
    auVar86._4_4_ = auVar31._4_4_ * fVar45;
    auVar86._8_4_ = auVar31._8_4_ * fVar29;
    auVar86._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar86,4);
    auVar74._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar74._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar74._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar74._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    auVar87._0_4_ = fVar29 * auVar74._0_4_;
    auVar87._4_4_ = fVar45 * auVar74._4_4_;
    auVar87._8_4_ = fVar29 * auVar74._8_4_;
    auVar87._12_4_ = fVar45 * auVar74._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar31 = NEON_frsqrts(auVar74,auVar87,4);
    fVar30 = fVar30 * auVar74._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar74._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar74._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar74._12_4_ * auVar31._12_4_;
    auVar37._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar37[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar37[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar37[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar37[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar37[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar37[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar37[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar37[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,1);
    lVar22 = 0x478;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x480;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar37._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar37._0_8_;
  }
  fVar30 = (float)_DAT_02a553b0;
  auVar61._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a553b0 >> 0x20);
  auVar61._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a553b8;
  auVar61._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a553b8 >> 0x20);
  auVar61._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar61,auVar61,8,1);
  fVar45 = auVar31._0_4_ + auVar61._0_4_;
  fVar67 = auVar31._4_4_ + auVar61._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar62._8_8_ = CONCAT44(fVar45,fVar29);
    auVar62._0_8_ = CONCAT44(fVar45,fVar29);
    auVar31 = NEON_frsqrte(auVar62,4);
    auVar88._0_4_ = auVar31._0_4_ * fVar29;
    auVar88._4_4_ = auVar31._4_4_ * fVar45;
    auVar88._8_4_ = auVar31._8_4_ * fVar29;
    auVar88._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar88,4);
    auVar75._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar75._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar75._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar75._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    auVar89._0_4_ = fVar29 * auVar75._0_4_;
    auVar89._4_4_ = fVar45 * auVar75._4_4_;
    auVar89._8_4_ = fVar29 * auVar75._8_4_;
    auVar89._12_4_ = fVar45 * auVar75._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar31 = NEON_frsqrts(auVar75,auVar89,4);
    fVar30 = fVar30 * auVar75._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar75._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar75._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar75._12_4_ * auVar31._12_4_;
    auVar38._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar38[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar38[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar38[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar38[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar38[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar38[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar38[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar38[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,0);
    lVar22 = 0x488;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x490;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar38._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar38._0_8_;
  }
  fVar30 = (float)_DAT_02a553c0;
  auVar63._0_4_ = fVar30 * fVar30;
  fVar42 = (float)((ulong)_DAT_02a553c0 >> 0x20);
  auVar63._4_4_ = fVar42 * fVar42;
  fVar43 = (float)uRam0000000002a553c8;
  auVar63._8_4_ = fVar43 * fVar43;
  fVar44 = (float)((ulong)uRam0000000002a553c8 >> 0x20);
  auVar63._12_4_ = fVar44 * fVar44;
  auVar31 = NEON_ext(auVar63,auVar63,8,1);
  fVar45 = auVar31._0_4_ + auVar63._0_4_;
  fVar67 = auVar31._4_4_ + auVar63._4_4_;
  fVar29 = fVar45 + fVar67;
  fVar45 = fVar45 + fVar67;
  if (fVar29 != 0.0) {
    auVar64._8_8_ = CONCAT44(fVar45,fVar29);
    auVar64._0_8_ = CONCAT44(fVar45,fVar29);
    auVar31 = NEON_frsqrte(auVar64,4);
    auVar90._0_4_ = auVar31._0_4_ * fVar29;
    auVar90._4_4_ = auVar31._4_4_ * fVar45;
    auVar90._8_4_ = auVar31._8_4_ * fVar29;
    auVar90._12_4_ = auVar31._12_4_ * fVar45;
    auVar79 = NEON_frsqrts(auVar31,auVar90,4);
    auVar76._0_4_ = auVar31._0_4_ * auVar79._0_4_;
    auVar76._4_4_ = auVar31._4_4_ * auVar79._4_4_;
    auVar76._8_4_ = auVar31._8_4_ * auVar79._8_4_;
    auVar76._12_4_ = auVar31._12_4_ * auVar79._12_4_;
    auVar91._0_4_ = fVar29 * auVar76._0_4_;
    auVar91._4_4_ = fVar45 * auVar76._4_4_;
    auVar91._8_4_ = fVar29 * auVar76._8_4_;
    auVar91._12_4_ = fVar45 * auVar76._12_4_;
    iVar68 = -(uint)(fVar29 == 0.0);
    iVar92 = -(uint)(fVar45 == 0.0);
    iVar93 = -(uint)(fVar29 == 0.0);
    iVar94 = -(uint)(fVar45 == 0.0);
    auVar31 = NEON_frsqrts(auVar76,auVar91,4);
    fVar30 = fVar30 * auVar76._0_4_ * auVar31._0_4_;
    fVar42 = fVar42 * auVar76._4_4_ * auVar31._4_4_;
    fVar43 = fVar43 * auVar76._8_4_ * auVar31._8_4_;
    fVar44 = fVar44 * auVar76._12_4_ * auVar31._12_4_;
    auVar39._0_8_ =
         CONCAT17((byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                  CONCAT16((byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar92 >> 0x10),
                           CONCAT15((byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar92 >> 8),
                                    CONCAT14(SUB41(fVar42,0) & ~(byte)iVar92,
                                             CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                      ~(byte)((uint)iVar68 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                               ~(byte)((uint)iVar68 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar30 >> 8) &
                                                                        ~(byte)((uint)iVar68 >> 8),
                                                                        SUB41(fVar30,0) &
                                                                        ~(byte)iVar68)))))));
    auVar39[8] = SUB41(fVar43,0) & ~(byte)iVar93;
    auVar39[9] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar93 >> 8);
    auVar39[10] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar93 >> 0x10);
    auVar39[0xb] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar93 >> 0x18);
    auVar39[0xc] = SUB41(fVar44,0) & ~(byte)iVar94;
    auVar39[0xd] = (byte)((uint)fVar44 >> 8) & ~(byte)((uint)iVar94 >> 8);
    auVar39[0xe] = (byte)((uint)fVar44 >> 0x10) & ~(byte)((uint)iVar94 >> 0x10);
    auVar39[0xf] = (byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar94 >> 0x18);
    uVar14 = (**(code **)(*param_1 + 0x748))(param_1,1);
    lVar22 = 0x488;
    if ((uVar14 & 1) == 0) {
      lVar22 = 0x490;
    }
    lVar22 = *(long *)((long)param_1 + lVar22);
    *(long *)(lVar22 + 0x88) = auVar39._8_8_;
    *(undefined8 *)(lVar22 + 0x80) = auVar39._0_8_;
  }
  lVar22 = *(long *)PTR_DAT_027194e8;
  FUN_00dfb1f0(&local_100,lVar22);
  plVar21 = local_100;
  if (local_100 == (long *)0x0) {
    plVar21 = (long *)0x0;
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar22 == 0) goto LAB_00a840b4;
LAB_00a83fc4:
    plVar24 = (long *)(lVar22 + 0x48);
    (**(code **)(*plVar24 + 0x10))(plVar24);
    FUN_00daaec0(lVar22,0);
    (**(code **)(*plVar24 + 0x18))(plVar24);
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar22 != 0) goto LAB_00a84000;
LAB_00a840cc:
    FUN_00dab450(0,4,0);
    lVar22 = FUN_009c5ff0(param_1);
  }
  else {
    if (*(int *)((long)local_100 + 0x54) != 0) {
      piVar2 = (int *)((long)local_100 + 0x54);
      iVar68 = *(int *)((long)local_100 + 0x54);
      do {
        while( true ) {
          plVar24 = (long *)plVar21[0xb];
          lVar19 = FUN_00a89c30();
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_00a83e50;
            if (plVar24 == (long *)lVar19) break;
            plVar24 = (long *)*plVar24;
          }
          iVar92 = *piVar2;
          if (iVar92 != iVar68) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar68 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar19 = plVar21[0xc];
            plVar21 = (long *)0x0;
            if (lVar19 != 0) {
              plVar21 = (long *)(lVar19 + -0x50);
            }
            goto joined_r0x00a84f28;
          }
          iVar68 = iVar92;
          if (iVar92 == 0) goto LAB_00a83e50;
        }
        ClearExclusiveLocal();
        iVar68 = iVar92;
      } while (iVar92 != 0);
    }
LAB_00a83e50:
    plVar21 = (long *)0x0;
joined_r0x00a84f28:
    if (local_100 != (long *)0x0) {
      (**(code **)(local_100[9] + 0x18))();
      local_100 = (long *)0x0;
    }
    if (plVar21 != (long *)0x0) {
      if (*(int *)(lVar22 + 0x6c) != 0) {
        fVar29 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
        uVar14 = (ulong)(DAT_02a55364 * (fVar29 / *(float *)PTR_FloatDegree180_027194f0));
        pfVar1 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar14 >> 0x18 & 0xff) * 0x10);
        auVar40._0_4_ = *(float *)(plVar21 + 0x76) - (float)_DAT_02a55350;
        fVar29 = (float)((ulong)_DAT_02a55350 >> 0x20);
        auVar40._4_4_ = *(float *)((long)plVar21 + 0x3b4) - fVar29;
        auVar40._8_4_ = *(float *)(plVar21 + 0x77) - (float)uRam0000000002a55358;
        fVar45 = (float)((ulong)uRam0000000002a55358 >> 0x20);
        auVar40._12_4_ = *(float *)((long)plVar21 + 0x3bc) - fVar45;
        auVar65._0_4_ = *(float *)(plVar21 + 0x78) - (float)_DAT_02a55350;
        auVar65._4_4_ = *(float *)((long)plVar21 + 0x3c4) - fVar29;
        auVar65._8_4_ = *(float *)(plVar21 + 0x79) - (float)uRam0000000002a55358;
        auVar65._12_4_ = *(float *)((long)plVar21 + 0x3cc) - fVar45;
        fVar29 = (float)((uint)uVar14 & 0xffffff) * DAT_01d4bc78;
        fVar45 = pfVar1[1] + pfVar1[3] * fVar29;
        fVar29 = *pfVar1 + pfVar1[2] * fVar29;
        auVar41._4_12_ = auVar40._4_12_;
        auVar41._0_4_ = fVar29 * auVar40._0_4_ - fVar45 * auVar40._8_4_;
        auVar66._4_12_ = auVar65._4_12_;
        auVar66._0_4_ = fVar29 * auVar65._0_4_ - fVar45 * auVar65._8_4_;
        local_100 = auVar41._0_8_;
        local_130 = auVar66._0_8_;
        pcStack_f8 = (code *)(ulong)(uint)(fVar45 * auVar40._0_4_ + fVar29 * auVar40._8_4_);
        uStack_128 = (ulong)(uint)(fVar45 * auVar65._0_4_ + fVar29 * auVar65._8_4_);
        FUN_00a929b0(param_1[0x95],&local_100,&local_130);
        FUN_00a92a30(param_1[0x95]);
        FUN_00a92a40(param_1[0x95]);
        FUN_00a92a50(param_1[0x95]);
      }
      (**(code **)(*plVar21 + 0x180))(plVar21,0);
    }
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar22 != 0) goto LAB_00a83fc4;
LAB_00a840b4:
    FUN_00daaec0(0,0);
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar22 == 0) goto LAB_00a840cc;
LAB_00a84000:
    plVar24 = (long *)(lVar22 + 0x48);
    (**(code **)(*plVar24 + 0x10))(plVar24);
    FUN_00dab450(lVar22,4,0);
    (**(code **)(*plVar24 + 0x18))(plVar24);
    lVar22 = FUN_009c5ff0(param_1);
  }
  if ((lVar22 != 0) &&
     ((uVar14 = FUN_008f35c0(lVar22,0x800), (uVar14 & 1) != 0 ||
      (uVar14 = FUN_008f35c0(lVar22,0x1000), (uVar14 & 1) != 0)))) {
    lVar19 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar19 == 0) {
      FUN_00dab430(0,0);
    }
    else {
      plVar24 = (long *)(lVar19 + 0x48);
      (**(code **)(*plVar24 + 0x10))(plVar24);
      FUN_00dab430(lVar19,0);
      (**(code **)(*plVar24 + 0x18))(plVar24);
    }
  }
  lVar19 = (**(code **)(*param_1 + 0xa50))(param_1);
  if (lVar19 == 0) goto LAB_00a84210;
  uVar14 = (**(code **)(*param_1 + 0x880))(param_1);
  lVar25 = 0x138;
  if ((uVar14 & 1) != 0) {
    lVar25 = 0x139;
  }
  switch(*(undefined1 *)(lVar19 + lVar25)) {
  case 1:
    iVar68 = 0;
    *(undefined4 *)((long)param_1 + 0x1f34) = 0;
    lVar25 = *(long *)(param_1[0x3c3] + 0x400);
    goto joined_r0x00a84198;
  case 2:
    iVar68 = 1;
    break;
  case 3:
    iVar68 = 2;
    break;
  case 4:
    iVar68 = 3;
    break;
  case 5:
    iVar68 = 4;
    break;
  default:
    iVar68 = *(int *)((long)param_1 + 0x1f34);
    if (iVar68 == 5) goto LAB_00a84210;
    lVar25 = *(long *)(param_1[0x3c3] + 0x400);
joined_r0x00a84198:
    if (lVar25 != 0) goto LAB_00a841e0;
    goto LAB_00a84170;
  }
  *(int *)((long)param_1 + 0x1f34) = iVar68;
  lVar25 = *(long *)(param_1[0x3c3] + 0x400);
  if (lVar25 == 0) {
LAB_00a84170:
    FUN_00dab480(0);
  }
  else {
LAB_00a841e0:
    plVar24 = (long *)(lVar25 + 0x48);
    (**(code **)(*plVar24 + 0x10))(plVar24,iVar68);
    FUN_00dab480(lVar25,*(undefined4 *)((long)param_1 + 0x1f34));
    (**(code **)(*plVar24 + 0x18))(plVar24);
  }
LAB_00a84210:
  iVar68 = (**(code **)(*param_1 + 0x870))(param_1);
  if ((iVar68 == 2) && (*(char *)((long)param_1 + 0x14c1) != '\0')) {
    lVar25 = param_1[0x3c3];
    local_68 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
    }
    FUN_00e391d0(lVar25,1,1,&local_68,param_1[0xb8]);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    puVar8 = PTR_DAT_027195c0;
    puVar7 = PTR_DAT_027195b8;
    plVar17 = *(long **)(param_1[0xb7] + 0xb8);
    for (plVar24 = *(long **)(param_1[0xb7] + 0xb0); plVar24 != plVar17; plVar24 = plVar24 + 1) {
      while (uVar14 = (**(code **)(*(long *)*plVar24 + 0x88))(), (uVar14 & 1) == 0) {
        lVar25 = *plVar24;
        puVar28 = (undefined8 *)(lVar25 + 0x50);
        plVar15 = (long *)(**(code **)*puVar28)(puVar28);
        if (((*puVar7 & 1) == 0) && (iVar68 = __cxa_guard_acquire(puVar7), iVar68 != 0)) {
          uVar13 = FUN_00a8c480();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_00a84340;
          if (plVar15 == (long *)puVar8) break;
          plVar15 = (long *)*plVar15;
        }
        *(undefined4 *)(lVar25 + 0x564) = 1;
        plVar24 = plVar24 + 1;
        if (plVar24 == plVar17) goto LAB_00a8434c;
      }
LAB_00a84340:
    }
LAB_00a8434c:
    lVar25 = *(long *)PTR_DAT_027107a8;
    FUN_0010d170(&local_130,"Play_PM_G_Lowtone");
    FUN_006cf0c0(&local_100,&local_130);
    FUN_008962c0(lVar25 + 0x108,&local_100);
    if (local_e8 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = (undefined1 *)0x0;
    }
    if (local_130 != 0) {
      (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
      local_130 = 0;
    }
    if (lVar22 == 0) goto LAB_00a843cc;
LAB_00a84550:
    uVar14 = FUN_008f35c0(lVar22,0x4000);
    if ((uVar14 & 1) != 0) {
      lVar25 = *(long *)(param_1[0x3c3] + 0x400);
      if (lVar25 == 0) {
        FUN_00dab450(0,3,0);
      }
      else {
        plVar24 = (long *)(lVar25 + 0x48);
        (**(code **)(*plVar24 + 0x10))(plVar24);
        FUN_00dab450(lVar25,3,0);
        (**(code **)(*plVar24 + 0x18))(plVar24);
      }
    }
    uVar14 = FUN_008f35c0(lVar22,0x2000000);
    uVar10 = FUN_008f35c0(lVar22,0x800);
    uVar11 = FUN_008f35c0(lVar22,0x1000);
    uVar10 = uVar10 | uVar11;
    if ((uVar14 & 1) == 0) {
      lVar25 = param_1[0xb8];
      goto joined_r0x00a843d4;
    }
  }
  else {
    lVar25 = *(long *)(param_1[0x3c3] + 0x400);
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x10))();
    }
    local_138 = param_1[0x89];
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x10))();
    }
    local_140 = param_1[0x7f];
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
    }
    local_148 = param_1[0x80];
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
    }
    FUN_00da60e0(lVar25,0,&local_138,&local_140,&local_148,param_1[0xb8],0);
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
      local_148 = 0;
    }
    if (local_140 != 0) {
      (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
      local_140 = 0;
    }
    if (local_138 != 0) {
      (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
      local_138 = 0;
    }
    if (lVar25 != 0) {
      (**(code **)(*(long *)(lVar25 + 0x48) + 0x18))((long *)(lVar25 + 0x48));
    }
    if (lVar22 != 0) goto LAB_00a84550;
LAB_00a843cc:
    uVar10 = 0;
    lVar25 = param_1[0xb8];
joined_r0x00a843d4:
    if ((lVar25 != 0) && (*(long *)(lVar25 + 0x108) != 0)) {
      puVar28 = *(undefined8 **)(lVar25 + 0x100);
      lVar25 = *(long *)(lVar25 + 0x108) << 3;
      do {
        uVar14 = (**(code **)(*(long *)*puVar28 + 0x40))();
        if ((uVar14 & 1) == 0) {
          local_f0 = &LAB_00a8f480;
          local_e8 = &LAB_00a8f490;
          local_100 = (long *)&LAB_00a8f380;
          pcStack_f8 = FUN_00a8f470;
          aplStack_e0[0] = param_1;
          FUN_00dcd4a0(*puVar28,&local_100);
          pcVar9 = pcStack_f8;
          if (pcStack_f8 != (code *)0x0) {
            local_f0 = (undefined1 *)0x0;
            local_e8 = (undefined1 *)0x0;
            local_100 = (long *)0x0;
            pcStack_f8 = (code *)0x0;
            (*pcVar9)(aplStack_e0);
          }
        }
        puVar28 = puVar28 + 1;
        lVar25 = lVar25 + -8;
      } while (lVar25 != 0);
    }
    puVar7 = PTR_DAT_027195c0;
    lVar25 = param_1[0xb7];
    if (lVar25 != 0) {
      plVar24 = *(long **)(lVar25 + 0xb0);
      plVar17 = *(long **)(lVar25 + 0xb8);
      if (plVar24 != plVar17) {
        pbVar20 = PTR_DAT_027195b8;
        do {
          while (uVar14 = (**(code **)(*(long *)*plVar24 + 0x88))(), (uVar14 & 1) == 0) {
            lVar25 = *plVar24;
            plVar15 = (long *)(*(code *)**(undefined8 **)(lVar25 + 0x50))
                                        ((undefined8 *)(lVar25 + 0x50));
            if (((*pbVar20 & 1) == 0) && (iVar68 = __cxa_guard_acquire(pbVar20), iVar68 != 0)) {
              uVar13 = FUN_00a8c480();
              *(undefined8 *)puVar7 = uVar13;
              __cxa_guard_release(pbVar20);
              if (plVar15 != (long *)0x0) goto LAB_00a84858;
              break;
            }
joined_r0x00a84854:
            if (plVar15 == (long *)0x0) break;
LAB_00a84858:
            if (plVar15 != (long *)puVar7) goto code_r0x00a84860;
            lVar23 = nn::os::GetCurrentThread();
            plVar15 = (long *)(lVar25 + 0xf0);
            do {
              if (*plVar15 != 0) {
                ClearExclusiveLocal();
                do {
                  nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0xe4));
                  while (*plVar15 == 0) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                    if (bVar6) {
                      *plVar15 = lVar23;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') goto LAB_00a84668;
                  }
                  ClearExclusiveLocal();
                } while( true );
              }
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = lVar23;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
LAB_00a84668:
            puVar28 = *(undefined8 **)(lVar25 + 0x140);
            puVar3 = *(undefined8 **)(lVar25 + 0x148);
            if (puVar28 == puVar3) {
LAB_00a84720:
              puVar3 = *(undefined8 **)(lVar25 + 0x118);
              for (puVar28 = *(undefined8 **)(lVar25 + 0x110); puVar28 != puVar3;
                  puVar28 = puVar28 + 1) {
                plVar26 = (long *)*puVar28;
                uVar14 = FUN_00a8cbe0(plVar26 + 1);
                if (((uVar14 & 1) != 0) && ((*(byte *)(plVar26 + 0x90) & 1) != 0)) {
                  lVar23 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
                  if (lVar23 != 0) {
                    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
                  }
                  local_100 = plVar26 + -9;
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                  FUN_01066f60(lVar23,&local_100);
                  if (local_100 != (long *)0x0) {
                    (**(code **)(local_100[9] + 0x18))();
                    local_100 = (long *)0x0;
                  }
                  if (lVar23 != 0) {
                    (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
                  }
                }
              }
            }
            else {
              do {
                plVar26 = (long *)*puVar28;
                uVar14 = FUN_00a8cbe0(plVar26 + 1);
                if (((uVar14 & 1) != 0) && ((*(byte *)(plVar26 + 0x90) & 1) != 0)) {
                  lVar23 = *(long *)(*(long *)PTR_DAT_02710848 + 0x88);
                  if (lVar23 != 0) {
                    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
                  }
                  local_100 = plVar26 + -9;
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                  FUN_01066f60(lVar23,&local_100);
                  if (local_100 != (long *)0x0) {
                    (**(code **)(local_100[9] + 0x18))();
                    local_100 = (long *)0x0;
                  }
                  if (lVar23 != 0) {
                    (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
                  }
                }
                puVar28 = puVar28 + 1;
              } while (puVar3 != puVar28);
              if (*(undefined8 **)(lVar25 + 0x148) == puVar3) goto LAB_00a84720;
            }
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar6) {
                *plVar15 = 0;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0xe4));
            plVar24 = plVar24 + 1;
            pbVar20 = PTR_DAT_027195b8;
            if (plVar24 == plVar17) goto LAB_00a84878;
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != plVar17);
      }
    }
  }
LAB_00a84878:
  puVar7 = PTR_DAT_02710848;
  if (((uVar10 & 1) != 0) && (lVar25 = param_1[0xb7], lVar25 != 0)) {
    local_168 = 0;
    plVar24 = *(long **)(lVar25 + 0xb0);
    plVar17 = *(long **)(lVar25 + 0xb8);
    if (plVar24 == plVar17) goto LAB_00a84a90;
    do {
      lVar25 = *(long *)(&DAT_02157790 + local_168 * 8);
      do {
        uVar14 = (**(code **)(*(long *)*plVar24 + 0x88))();
        if (((uVar14 & 1) == 0) && (lVar23 = *plVar24, lVar25 == *(long *)(lVar23 + 0x1a0))) {
          lVar16 = nn::os::GetCurrentThread();
          plVar15 = (long *)(lVar23 + 0xf0);
          do {
            if (*plVar15 != 0) {
              ClearExclusiveLocal();
              do {
                nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0xe4));
                while (*plVar15 == 0) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                  if (bVar6) {
                    *plVar15 = lVar16;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') goto LAB_00a8491c;
                }
                ClearExclusiveLocal();
              } while( true );
            }
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = lVar16;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
LAB_00a8491c:
          puVar28 = *(undefined8 **)(lVar23 + 0x140);
          puVar3 = *(undefined8 **)(lVar23 + 0x148);
          if (puVar28 == puVar3) {
LAB_00a849c0:
            puVar3 = *(undefined8 **)(lVar23 + 0x118);
            for (puVar28 = *(undefined8 **)(lVar23 + 0x110); puVar28 != puVar3;
                puVar28 = puVar28 + 1) {
              plVar26 = (long *)*puVar28;
              uVar14 = FUN_00a8cbe0(plVar26 + 1);
              if ((uVar14 & 1) != 0) {
                lVar16 = *(long *)(*(long *)puVar7 + 0x88);
                if (lVar16 != 0) {
                  (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
                }
                local_100 = plVar26 + -9;
                (**(code **)(*plVar26 + 0x10))(plVar26);
                FUN_01066f60(lVar16,&local_100);
                if (local_100 != (long *)0x0) {
                  (**(code **)(local_100[9] + 0x18))();
                  local_100 = (long *)0x0;
                }
                if (lVar16 != 0) {
                  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
                }
              }
            }
          }
          else {
            do {
              plVar26 = (long *)*puVar28;
              uVar14 = FUN_00a8cbe0(plVar26 + 1);
              if ((uVar14 & 1) != 0) {
                lVar16 = *(long *)(*(long *)puVar7 + 0x88);
                if (lVar16 != 0) {
                  (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
                }
                local_100 = plVar26 + -9;
                (**(code **)(*plVar26 + 0x10))(plVar26);
                FUN_01066f60(lVar16,&local_100);
                if (local_100 != (long *)0x0) {
                  (**(code **)(local_100[9] + 0x18))();
                  local_100 = (long *)0x0;
                }
                if (lVar16 != 0) {
                  (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
                }
              }
              puVar28 = puVar28 + 1;
            } while (puVar3 != puVar28);
            if (*(undefined8 **)(lVar23 + 0x148) == puVar3) goto LAB_00a849c0;
          }
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar6) {
              *plVar15 = 0;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0xe4));
        }
        plVar24 = plVar24 + 1;
      } while (plVar24 != plVar17);
LAB_00a84a90:
      do {
        local_168 = local_168 + 1;
        if (local_168 == 3) goto LAB_00a84aa4;
        plVar24 = *(long **)(param_1[0xb7] + 0xb0);
        plVar17 = *(long **)(param_1[0xb7] + 0xb8);
      } while (plVar24 == plVar17);
    } while( true );
  }
LAB_00a84aa4:
  plVar24 = param_1 + 0x3e6;
  if (lVar22 == 0) {
LAB_00a84c94:
    if (((((char)*plVar24 != '\0') && (*(char *)((long)param_1 + 0xb99) == '\0')) &&
        (uVar14 = (**(code **)(*param_1 + 0x880))(param_1), (uVar14 & 1) != 0)) &&
       (plVar17 = (long *)param_1[0xb7], plVar17 != (long *)0x0)) {
      (**(code **)(*plVar17 + 0x30))(plVar17,PTR_DAT_02715088,0);
    }
  }
  else if ((char)*plVar24 != '\0') {
    uVar14 = FUN_008f35c0(lVar22,0x40000);
    if ((((uVar14 & 1) != 0) || (uVar14 = FUN_008f89c0(lVar22,0x10), (uVar14 & 1) != 0)) ||
       (uVar14 = FUN_008f89c0(lVar22,0x20), (uVar14 & 1) != 0)) {
      local_100 = (long *)0xb422bdf0d05d7f81;
      pcStack_f8 = (code *)0x1d00b4a;
      local_f0 = (undefined1 *)0x16;
      local_e8 = (undefined1 *)0x0;
      lVar25 = param_1[0xb8];
      if ((lVar25 != 0) && (*(long *)(lVar25 + 0x108) != 0)) {
        puVar28 = *(undefined8 **)(lVar25 + 0x100);
        lVar25 = *(long *)(lVar25 + 0x108) << 3;
        do {
          uVar14 = (**(code **)(*(long *)*puVar28 + 0x40))();
          if ((uVar14 & 1) == 0) {
            FUN_00dce9b0(*puVar28,&local_100);
          }
          puVar28 = puVar28 + 1;
          lVar25 = lVar25 + -8;
        } while (lVar25 != 0);
        if (local_e8 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          local_e8 = (undefined1 *)0x0;
        }
      }
      *(undefined1 *)((long)param_1 + 0xb99) = 1;
      lVar25 = param_1[0xb7];
      if (lVar25 != 0) {
        plVar17 = *(long **)(lVar25 + 0xb0);
        plVar15 = *(long **)(lVar25 + 0xb8);
        if (plVar17 != plVar15) {
          lVar22 = *(long *)(*(long *)(lVar22 + 0x88) + 0x2d0);
          do {
            uVar14 = (**(code **)(*(long *)*plVar17 + 0x88))();
            if (((uVar14 & 1) == 0) && (lVar25 = *plVar17, lVar22 == *(long *)(lVar25 + 0x1a0))) {
              lVar23 = nn::os::GetCurrentThread();
              plVar26 = (long *)(lVar25 + 0xf0);
              do {
                if (*plVar26 != 0) {
                  ClearExclusiveLocal();
                  do {
                    nn::os::WaitLightEvent((LightEventType *)(lVar25 + 0xe4));
                    while (*plVar26 == 0) {
                      cVar5 = '\x01';
                      bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                      if (bVar6) {
                        *plVar26 = lVar23;
                        cVar5 = ExclusiveMonitorsStatus();
                      }
                      if (cVar5 == '\0') goto LAB_00a84bfc;
                    }
                    ClearExclusiveLocal();
                  } while( true );
                }
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar6) {
                  *plVar26 = lVar23;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
LAB_00a84bfc:
              plVar27 = *(long **)(lVar25 + 0x140);
              plVar4 = *(long **)(lVar25 + 0x148);
              if (plVar27 == plVar4) {
LAB_00a84c3c:
                plVar4 = *(long **)(lVar25 + 0x118);
                for (plVar27 = *(long **)(lVar25 + 0x110); plVar27 != plVar4; plVar27 = plVar27 + 1)
                {
                  lVar23 = *plVar27;
                  uVar14 = FUN_00a8c5b0(lVar23 + 8);
                  if ((uVar14 & 1) != 0) {
                    FUN_00794740(lVar23 + -0x48);
                  }
                }
              }
              else {
                do {
                  lVar23 = *plVar27;
                  uVar14 = FUN_00a8c5b0(lVar23 + 8);
                  if ((uVar14 & 1) != 0) {
                    FUN_00794740(lVar23 + -0x48);
                  }
                  plVar27 = plVar27 + 1;
                } while (plVar4 != plVar27);
                if (*(long **)(lVar25 + 0x148) == plVar4) goto LAB_00a84c3c;
              }
              do {
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar26,0x10);
                if (bVar6) {
                  *plVar26 = 0;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              nn::os::SignalLightEvent((LightEventType *)(lVar25 + 0xe4));
            }
            plVar17 = plVar17 + 1;
          } while (plVar17 != plVar15);
        }
      }
    }
    goto LAB_00a84c94;
  }
  if (lVar19 == 0) goto LAB_00a84ddc;
  uVar14 = (**(code **)(*param_1 + 0x880))(param_1);
  lVar22 = 0x138;
  if ((uVar14 & 1) != 0) {
    lVar22 = 0x139;
  }
  switch(*(undefined1 *)(lVar19 + lVar22)) {
  case 1:
    iVar68 = 0;
    *(undefined4 *)((long)param_1 + 0x1f34) = 0;
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    goto joined_r0x00a84d64;
  case 2:
    iVar68 = 1;
    break;
  case 3:
    iVar68 = 2;
    break;
  case 4:
    iVar68 = 3;
    break;
  case 5:
    iVar68 = 4;
    break;
  default:
    iVar68 = *(int *)((long)param_1 + 0x1f34);
    if (iVar68 == 5) goto LAB_00a84ddc;
    lVar22 = *(long *)(param_1[0x3c3] + 0x400);
    goto joined_r0x00a84d64;
  }
  *(int *)((long)param_1 + 0x1f34) = iVar68;
  lVar22 = *(long *)(param_1[0x3c3] + 0x400);
joined_r0x00a84d64:
  if (lVar22 == 0) {
    FUN_00dab480(0);
  }
  else {
    plVar17 = (long *)(lVar22 + 0x48);
    (**(code **)(*plVar17 + 0x10))(plVar17,iVar68);
    FUN_00dab480(lVar22,*(undefined4 *)((long)param_1 + 0x1f34));
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
LAB_00a84ddc:
  iVar68 = (**(code **)(*param_1 + 0x870))(param_1);
  if (iVar68 == 1) {
    lVar22 = *(long *)PTR_DAT_027107a8 + 0x108;
    pcVar18 = "Set_State_Battle_DoubleBattle";
  }
  else if ((char)*plVar24 == '\0') {
    iVar68 = (**(code **)(*param_1 + 0x868))(param_1);
    lVar22 = *(long *)PTR_DAT_027107a8 + 0x108;
    if (iVar68 == 0) {
      pcVar18 = "Set_State_Battle_Wild";
    }
    else {
      pcVar18 = "Set_State_Battle_Trainer";
    }
  }
  else {
    lVar22 = *(long *)PTR_DAT_027107a8 + 0x108;
    pcVar18 = "Set_State_Battle_GymLeader";
  }
  FUN_0010d170(&local_130,pcVar18);
  FUN_006cf0c0(&local_100,&local_130);
  FUN_008962c0(lVar22,&local_100);
  if (local_e8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = (undefined1 *)0x0;
  }
  if (local_130 != 0) {
    (**(code **)(*(long *)(local_130 + 0x48) + 0x18))();
    local_130 = 0;
  }
  uVar12 = FUN_0106aec0(*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0xd0));
  *(undefined4 *)(param_1 + 0x3fd) = uVar12;
  FUN_00a79d60(param_1);
  if (plVar21 != (long *)0x0) {
    (**(code **)(plVar21[9] + 0x18))(plVar21 + 9);
  }
  return;
code_r0x00a84860:
  plVar15 = (long *)*plVar15;
  goto joined_r0x00a84854;
}


