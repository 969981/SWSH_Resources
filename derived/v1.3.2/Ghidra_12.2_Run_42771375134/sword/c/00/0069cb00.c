/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0069cb00; name: FUN_0069cb00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0069cb00(long param_1)

{
  unkbyte9 *pVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined2 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined *puVar40;
  undefined *puVar41;
  ulong uVar42;
  undefined8 *puVar43;
  long *plVar44;
  long lVar45;
  float fVar46;
  float fVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar63;
  float fVar64;
  undefined8 uVar65;
  byte bVar71;
  byte bVar72;
  int iVar76;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  byte bVar73;
  int iVar74;
  float fVar75;
  int iVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined8 uVar91;
  float fVar92;
  float fVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  undefined8 uVar98;
  undefined8 uVar99;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  if ((*(char *)(param_1 + 0x400) == '\0') && (*(char *)(param_1 + 0x401) == '\0')) {
    return;
  }
  local_38 = 8;
  FUN_0069f1a0(*(undefined8 *)(param_1 + 0x1b0),&local_38);
  puVar40 = PTR_DAT_02715088;
  uVar25 = *(undefined8 *)(param_1 + 0x428);
  uVar11 = *(undefined8 *)(param_1 + 0x420);
  lVar45 = param_1 + 0x410;
  uVar65 = *(undefined8 *)(param_1 + 0x438);
  uVar12 = *(undefined8 *)(param_1 + 0x430);
  FUN_0075e300(lVar45,PTR_DAT_02715088);
  local_50 = 0;
  uStack_48 = 0;
  FUN_0075e320(lVar45,&local_50);
  FUN_0075e340(lVar45,puVar40);
  puVar5 = *(undefined8 **)(param_1 + 0x1d8);
  for (puVar4 = *(undefined8 **)(param_1 + 0x1d0); puVar4 != puVar5; puVar4 = puVar4 + 1) {
    uVar42 = FUN_006b50f0(*puVar4,*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x440))
    ;
    if ((uVar42 & 1) != 0) {
      puVar43 = (undefined8 *)FUN_0069f570(*(undefined8 *)(param_1 + 0x1b0));
      fVar90 = (float)((ulong)*(undefined8 *)(param_1 + 0x410) >> 0x20) +
               (float)((ulong)*puVar43 >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x418) >> 0x20) +
               (float)((ulong)puVar43[1] >> 0x20);
      uStack_48 = CONCAT17((char)((uint)fVar14 >> 0x18),
                           CONCAT16((char)((uint)fVar14 >> 0x10),
                                    CONCAT15((char)((uint)fVar14 >> 8),
                                             CONCAT14(SUB41(fVar14,0),
                                                      (float)*(undefined8 *)(param_1 + 0x418) +
                                                      (float)puVar43[1]))));
      local_50 = CONCAT17((char)((uint)fVar90 >> 0x18),
                          CONCAT16((char)((uint)fVar90 >> 0x10),
                                   CONCAT15((char)((uint)fVar90 >> 8),
                                            CONCAT14(SUB41(fVar90,0),
                                                     (float)*(undefined8 *)(param_1 + 0x410) +
                                                     (float)*puVar43))));
      FUN_0075e300(lVar45,&local_50);
      fVar90 = (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20) +
               (float)((ulong)puVar43[2] >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x428) >> 0x20) +
               (float)((ulong)puVar43[3] >> 0x20);
      uStack_48 = CONCAT17((char)((uint)fVar14 >> 0x18),
                           CONCAT16((char)((uint)fVar14 >> 0x10),
                                    CONCAT15((char)((uint)fVar14 >> 8),
                                             CONCAT14(SUB41(fVar14,0),
                                                      (float)*(undefined8 *)(param_1 + 0x428) +
                                                      (float)puVar43[3]))));
      local_50 = CONCAT17((char)((uint)fVar90 >> 0x18),
                          CONCAT16((char)((uint)fVar90 >> 0x10),
                                   CONCAT15((char)((uint)fVar90 >> 8),
                                            CONCAT14(SUB41(fVar90,0),
                                                     (float)*(undefined8 *)(param_1 + 0x420) +
                                                     (float)puVar43[2]))));
      FUN_0075e320(lVar45,&local_50);
      fVar90 = (float)((ulong)*(undefined8 *)(param_1 + 0x430) >> 0x20) +
               (float)((ulong)puVar43[4] >> 0x20);
      fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x438) >> 0x20) +
               (float)((ulong)puVar43[5] >> 0x20);
      uStack_48 = CONCAT17((char)((uint)fVar14 >> 0x18),
                           CONCAT16((char)((uint)fVar14 >> 0x10),
                                    CONCAT15((char)((uint)fVar14 >> 8),
                                             CONCAT14(SUB41(fVar14,0),
                                                      (float)*(undefined8 *)(param_1 + 0x438) +
                                                      (float)puVar43[5]))));
      local_50 = CONCAT17((char)((uint)fVar90 >> 0x18),
                          CONCAT16((char)((uint)fVar90 >> 0x10),
                                   CONCAT15((char)((uint)fVar90 >> 8),
                                            CONCAT14(SUB41(fVar90,0),
                                                     (float)*(undefined8 *)(param_1 + 0x430) +
                                                     (float)puVar43[4]))));
      FUN_0075e340(lVar45,&local_50);
    }
  }
  fVar14 = (float)*(undefined8 *)(param_1 + 0x420);
  fVar47 = fVar14 * fVar14;
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x420) >> 0x20);
  fVar90 = fVar13 * fVar13;
  uVar52 = (undefined1)((uint)fVar90 >> 8);
  uVar53 = (undefined1)((uint)fVar90 >> 0x10);
  uVar54 = (undefined1)((uint)fVar90 >> 0x18);
  fVar75 = (float)*(undefined8 *)(param_1 + 0x428);
  fVar46 = fVar75 * fVar75;
  uVar55 = (undefined1)((uint)fVar46 >> 8);
  uVar56 = (undefined1)((uint)fVar46 >> 0x10);
  uVar57 = (undefined1)((uint)fVar46 >> 0x18);
  fVar64 = (float)((ulong)*(undefined8 *)(param_1 + 0x428) >> 0x20);
  fVar78 = fVar64 * fVar64;
  uVar58 = (undefined1)((uint)fVar78 >> 8);
  uVar59 = (undefined1)((uint)fVar78 >> 0x10);
  uVar60 = (undefined1)((uint)fVar78 >> 0x18);
  auVar61[4] = SUB41(fVar90,0);
  auVar61._0_4_ = fVar47;
  auVar61[5] = uVar52;
  auVar61[6] = uVar53;
  auVar61[7] = uVar54;
  auVar61[8] = SUB41(fVar46,0);
  auVar61[9] = uVar55;
  auVar61[10] = uVar56;
  auVar61[0xb] = uVar57;
  auVar61[0xc] = SUB41(fVar78,0);
  auVar61[0xd] = uVar58;
  auVar61[0xe] = uVar59;
  auVar61[0xf] = uVar60;
  auVar67[4] = SUB41(fVar90,0);
  auVar67._0_4_ = fVar47;
  auVar67[5] = uVar52;
  auVar67[6] = uVar53;
  auVar67[7] = uVar54;
  auVar67[8] = SUB41(fVar46,0);
  auVar67[9] = uVar55;
  auVar67[10] = uVar56;
  auVar67[0xb] = uVar57;
  auVar67[0xc] = SUB41(fVar78,0);
  auVar67[0xd] = uVar58;
  auVar67[0xe] = uVar59;
  auVar67[0xf] = uVar60;
  auVar61 = NEON_ext(auVar61,auVar67,8,1);
  fVar47 = auVar61._0_4_ + fVar47;
  fVar90 = auVar61._4_4_ + fVar90;
  fVar46 = fVar47 + fVar90;
  fVar47 = fVar47 + fVar90;
  bVar49 = (byte)((uint)fVar46 >> 8);
  bVar50 = (byte)((uint)fVar46 >> 0x10);
  bVar51 = (byte)((uint)fVar46 >> 0x18);
  uVar52 = SUB41(fVar47,0);
  uVar53 = (undefined1)((uint)fVar47 >> 8);
  uVar54 = (undefined1)((uint)fVar47 >> 0x10);
  uVar55 = (undefined1)((uint)fVar47 >> 0x18);
  auVar15[4] = uVar52;
  auVar15._0_4_ = fVar46;
  auVar15[5] = uVar53;
  auVar15[6] = uVar54;
  auVar15[7] = uVar55;
  auVar15[8] = SUB41(fVar46,0);
  auVar15[9] = bVar49;
  auVar15[10] = bVar50;
  auVar15[0xb] = bVar51;
  auVar15[0xc] = uVar52;
  auVar15[0xd] = uVar53;
  auVar15[0xe] = uVar54;
  auVar15[0xf] = uVar55;
  auVar61 = NEON_frsqrte(auVar15,4);
  auVar66._0_4_ = auVar61._0_4_ * fVar46;
  auVar66._4_4_ = auVar61._4_4_ * fVar47;
  auVar66._8_4_ = auVar61._8_4_ * fVar46;
  uVar16 = (undefined2)(CONCAT15(uVar53,CONCAT14(uVar52,fVar46)) >> 0x20);
  auVar66._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar16));
  fVar90 = *(float *)PTR_FloatQuaternionEpsilon_02715060;
  auVar67 = NEON_frsqrts(auVar61,auVar66,4);
  auVar62._0_4_ = auVar61._0_4_ * auVar67._0_4_;
  auVar62._4_4_ = auVar61._4_4_ * auVar67._4_4_;
  auVar62._8_4_ = auVar61._8_4_ * auVar67._8_4_;
  auVar62._12_4_ = auVar61._12_4_ * auVar67._12_4_;
  auVar68._0_4_ = fVar46 * auVar62._0_4_;
  auVar68._4_4_ = fVar47 * auVar62._4_4_;
  auVar68._8_4_ = fVar46 * auVar62._8_4_;
  auVar68._12_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar54,uVar16)) * auVar62._12_4_;
  auVar61 = NEON_frsqrts(auVar62,auVar68,4);
  iVar63 = -(uint)(fVar46 < fVar90);
  iVar74 = -(uint)(fVar47 < fVar90);
  iVar76 = -(uint)(fVar46 < fVar90);
  iVar77 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar54,uVar16)) < fVar90);
  fVar14 = fVar14 * auVar62._0_4_ * auVar61._0_4_;
  fVar13 = fVar13 * auVar62._4_4_ * auVar61._4_4_;
  fVar75 = fVar75 * auVar62._8_4_ * auVar61._8_4_;
  fVar64 = fVar64 * auVar62._12_4_ * auVar61._12_4_;
  bVar71 = (byte)((uint)iVar63 >> 8);
  bVar72 = (byte)((uint)iVar63 >> 0x10);
  bVar73 = (byte)((uint)iVar63 >> 0x18);
  uStack_48 = CONCAT17((byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar77 >> 0x18),
                       CONCAT16((byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar77 >> 0x10),
                                CONCAT15((byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar77 >> 8),
                                         CONCAT14(SUB41(fVar64,0) & ~(byte)iVar77,
                                                  CONCAT13((byte)((uint)fVar75 >> 0x18) &
                                                           ~(byte)((uint)iVar76 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar75 >> 0x10) &
                                                                    ~(byte)((uint)iVar76 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar75 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar76 >>
                                                                                    8),
                                                                             SUB41(fVar75,0) &
                                                                             ~(byte)iVar76)))))));
  local_50 = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                      CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                               CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar74 >> 8),
                                        CONCAT14(SUB41(fVar13,0) & ~(byte)iVar74,
                                                 CONCAT13((byte)((uint)fVar14 >> 0x18) & ~bVar73,
                                                          CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                   ~bVar72,CONCAT11((byte)((uint)
                                                  fVar14 >> 8) & ~bVar71,
                                                  SUB41(fVar14,0) & ~(byte)iVar63)))))));
  bVar48 = SUB41(fVar46,0) & ~(byte)iVar63;
  bVar49 = bVar49 & ~bVar71;
  bVar50 = bVar50 & ~bVar72;
  bVar51 = bVar51 & ~bVar73;
  if (NAN((float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48)))) ||
      (float)CONCAT13(bVar51,CONCAT12(bVar50,CONCAT11(bVar49,bVar48))) != 0.0) {
    FUN_0075e320(lVar45,&local_50);
  }
  puVar41 = PTR_DAT_02715080;
  puVar40 = PTR_DAT_02715078;
  lVar45 = *(long *)(param_1 + 0x68);
  if (lVar45 != 0) {
    if (*(int *)(lVar45 + 0x54) == 0) {
LAB_0069cd34:
      cVar6 = *(char *)(param_1 + 0x400);
      goto joined_r0x0069cd4c;
    }
    piVar2 = (int *)(lVar45 + 0x54);
    iVar63 = *(int *)(lVar45 + 0x54);
    do {
      while( true ) {
        plVar44 = *(long **)(lVar45 + 0x58);
        if (((*puVar40 & 1) == 0) && (iVar74 = __cxa_guard_acquire(puVar40), iVar74 != 0)) {
          uVar91 = FUN_00a87090();
          *(undefined8 *)puVar41 = uVar91;
          __cxa_guard_release(puVar40);
        }
        while( true ) {
          if (plVar44 == (long *)0x0) goto LAB_0069cd34;
          if (plVar44 == (long *)puVar41) break;
          plVar44 = (long *)*plVar44;
        }
        iVar74 = *piVar2;
        if (iVar74 == iVar63) break;
        ClearExclusiveLocal();
        iVar63 = iVar74;
        if (iVar74 == 0) goto LAB_0069cd48;
      }
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar63 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
      if (cVar6 == '\0') {
        lVar3 = 0;
        if (*(long *)(lVar45 + 0x60) != 0) {
          lVar3 = *(long *)(lVar45 + 0x60) + -0x50;
        }
        cVar6 = *(char *)(param_1 + 0x400);
        goto joined_r0x0069cf08;
      }
      iVar63 = iVar74;
    } while (iVar74 != 0);
  }
LAB_0069cd48:
  cVar6 = *(char *)(param_1 + 0x400);
joined_r0x0069cd4c:
  lVar3 = 0;
joined_r0x0069cf08:
  if (cVar6 != '\0') {
    fVar90 = (float)((ulong)uVar11 >> 0x20) + (float)((ulong)*(undefined8 *)(lVar3 + 0xa0) >> 0x20);
    fVar14 = (float)((ulong)uVar25 >> 0x20) + (float)((ulong)*(undefined8 *)(lVar3 + 0xa8) >> 0x20);
    *(undefined1 *)(lVar3 + 0xc0) = 1;
    *(ulong *)(lVar3 + 0xa8) =
         CONCAT17((char)((uint)fVar14 >> 0x18),
                  CONCAT16((char)((uint)fVar14 >> 0x10),
                           CONCAT15((char)((uint)fVar14 >> 8),
                                    CONCAT14(SUB41(fVar14,0),
                                             (float)uVar25 + (float)*(undefined8 *)(lVar3 + 0xa8))))
                 );
    *(ulong *)(lVar3 + 0xa0) =
         CONCAT17((char)((uint)fVar90 >> 0x18),
                  CONCAT16((char)((uint)fVar90 >> 0x10),
                           CONCAT15((char)((uint)fVar90 >> 8),
                                    CONCAT14(SUB41(fVar90,0),
                                             (float)uVar11 + (float)*(undefined8 *)(lVar3 + 0xa0))))
                 );
  }
  if (*(char *)(param_1 + 0x401) == '\0') {
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    fVar88 = (float)uVar12 * (float)*(undefined8 *)(lVar3 + 0xd0);
    fVar85 = (float)((ulong)uVar12 >> 0x20) * (float)((ulong)*(undefined8 *)(lVar3 + 0xd0) >> 0x20);
    fVar90 = (float)uVar65 * (float)*(undefined8 *)(lVar3 + 0xd8);
    uVar52 = SUB41(fVar85,0);
    uVar53 = (undefined1)((uint)fVar85 >> 8);
    uVar54 = (undefined1)((uint)fVar85 >> 0x10);
    uVar55 = (undefined1)((uint)fVar85 >> 0x18);
    pVar1 = (unkbyte9 *)(lVar3 + 0xa0);
    uVar11 = *(undefined8 *)(lVar3 + 0xa8);
    uVar60 = (undefined1)((ulong)uVar11 >> 8);
    uVar79 = (undefined1)((ulong)uVar11 >> 0x10);
    uVar80 = (undefined1)((ulong)uVar11 >> 0x18);
    uVar81 = (undefined1)((ulong)uVar11 >> 0x20);
    uVar82 = (undefined1)((ulong)uVar11 >> 0x28);
    uVar83 = (undefined1)((ulong)uVar11 >> 0x30);
    uVar84 = (undefined1)((ulong)uVar11 >> 0x38);
    uVar56 = SUB41(fVar90,0);
    uVar57 = (undefined1)((uint)fVar90 >> 8);
    uVar58 = (undefined1)((uint)fVar90 >> 0x10);
    uVar59 = (undefined1)((uint)fVar90 >> 0x18);
    fVar14 = (float)*(undefined8 *)pVar1;
    fVar90 = fVar14 * (float)_DAT_01d4ae80;
    fVar13 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar75 = fVar13 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    auVar69._0_8_ = CONCAT44(fVar75,fVar90);
    auVar69._8_4_ = (float)uVar11 * (float)_UNK_01d4ae88;
    auVar69._12_4_ = (float)((ulong)uVar11 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    uVar94 = a64_TBL(ZEXT816(0),auVar69,DAT_01cd4f90);
    uVar95 = a64_TBL(ZEXT816(0),auVar69,DAT_01cd5120);
    uVar99 = a64_TBL(ZEXT816(0),auVar69,DAT_01cd5418);
    uVar25 = a64_TBL(ZEXT816(0),auVar69,DAT_01cd5270);
    uVar97 = a64_TBL(ZEXT816(0),auVar69,DAT_01cd50f8);
    auVar8[4] = uVar52;
    auVar8._0_4_ = fVar88;
    auVar8[5] = uVar53;
    auVar8[6] = uVar54;
    auVar8[7] = uVar55;
    auVar8[8] = uVar56;
    auVar8[9] = uVar57;
    auVar8[10] = uVar58;
    auVar8[0xb] = uVar59;
    auVar8._12_4_ = 0;
    uVar96 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd50f8);
    auVar9[4] = uVar52;
    auVar9._0_4_ = fVar88;
    auVar9[5] = uVar53;
    auVar9[6] = uVar54;
    auVar9[7] = uVar55;
    auVar9[8] = uVar56;
    auVar9[9] = uVar57;
    auVar9[10] = uVar58;
    auVar9[0xb] = uVar59;
    auVar9._12_4_ = 0;
    uVar91 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd4f90);
    auVar10[4] = uVar52;
    auVar10._0_4_ = fVar88;
    auVar10[5] = uVar53;
    auVar10[6] = uVar54;
    auVar10[7] = uVar55;
    auVar10[8] = uVar56;
    auVar10[9] = uVar57;
    auVar10[10] = uVar58;
    auVar10[0xb] = uVar59;
    auVar10._12_4_ = 0;
    uVar11 = a64_TBL(ZEXT816(0),auVar10,DAT_01cd5418);
    fVar92 = (float)((ulong)uVar91 >> 0x20);
    auVar70._8_8_ = auVar69._0_8_;
    auVar70._0_8_ = auVar69._0_8_;
    uVar65 = a64_TBL(ZEXT816(0),auVar70,DAT_01cd50b0);
    fVar89 = (float)((ulong)uVar96 >> 0x20);
    auVar17[9] = uVar60;
    auVar17._0_9_ = *pVar1;
    auVar17[10] = uVar79;
    auVar17[0xb] = uVar80;
    auVar17[0xc] = uVar81;
    auVar17[0xd] = uVar82;
    auVar17[0xe] = uVar83;
    auVar17[0xf] = uVar84;
    uVar12 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd5418);
    fVar64 = (float)_DAT_01d4ae90;
    fVar47 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar46 = (float)_UNK_01d4ae98;
    fVar78 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    fVar93 = (float)((ulong)uVar11 >> 0x20);
    auVar18[9] = uVar60;
    auVar18._0_9_ = *pVar1;
    auVar18[10] = uVar79;
    auVar18[0xb] = uVar80;
    auVar18[0xc] = uVar81;
    auVar18[0xd] = uVar82;
    auVar18[0xe] = uVar83;
    auVar18[0xf] = uVar84;
    uVar98 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd50f8);
    fVar86 = (fVar90 * (float)uVar91 + fVar64 * fVar88 * (float)uVar94 +
             fVar64 * (float)uVar11 * (float)uVar97) - (float)uVar96 * (float)uVar99;
    fVar87 = (fVar75 * fVar92 + fVar47 * fVar85 * (float)((ulong)uVar94 >> 0x20) +
             fVar47 * fVar93 * (float)((ulong)uVar97 >> 0x20)) -
             fVar89 * (float)((ulong)uVar99 >> 0x20);
    fVar88 = (auVar69._8_4_ * (float)uVar91 + fVar46 * (float)uVar96 * (float)uVar95 +
             fVar46 * fVar88 * (float)uVar65) - (float)uVar11 * (float)uVar25;
    fVar85 = (auVar69._12_4_ * fVar92 + fVar78 * fVar89 * (float)((ulong)uVar95 >> 0x20) +
             fVar78 * fVar85 * (float)((ulong)uVar65 >> 0x20)) -
             fVar93 * (float)((ulong)uVar25 >> 0x20);
    auVar20._4_4_ = fVar87;
    auVar20._0_4_ = fVar86;
    auVar20._8_4_ = fVar88;
    auVar20._12_4_ = fVar85;
    uVar91 = a64_TBL(ZEXT816(0),auVar20,DAT_01cd5120);
    auVar21._4_4_ = fVar87;
    auVar21._0_4_ = fVar86;
    auVar21._8_4_ = fVar88;
    auVar21._12_4_ = fVar85;
    uVar65 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd50f8);
    auVar19[9] = uVar60;
    auVar19._0_9_ = *pVar1;
    auVar19[10] = uVar79;
    auVar19[0xb] = uVar80;
    auVar19[0xc] = uVar81;
    auVar19[0xd] = uVar82;
    auVar19[0xe] = uVar83;
    auVar19[0xf] = uVar84;
    uVar25 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd4f90);
    auVar22._4_4_ = fVar87;
    auVar22._0_4_ = fVar86;
    auVar22._8_4_ = fVar88;
    auVar22._12_4_ = fVar85;
    uVar11 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd4f90);
    auVar26._4_4_ = fVar87;
    auVar26._0_4_ = fVar86;
    auVar26._8_4_ = fVar86;
    auVar26._12_4_ = fVar87;
    uVar94 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
    fVar75 = (float)((ulong)uVar25 >> 0x20);
    auVar23._4_4_ = fVar87;
    auVar23._0_4_ = fVar86;
    auVar23._8_4_ = fVar88;
    auVar23._12_4_ = fVar85;
    uVar96 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    fVar89 = (float)((ulong)uVar98 >> 0x20);
    auVar24._4_4_ = fVar87;
    auVar24._0_4_ = fVar86;
    auVar24._8_4_ = fVar88;
    auVar24._12_4_ = fVar85;
    uVar95 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
    fVar90 = (float)((ulong)uVar12 >> 0x20);
    bVar49 = (byte)DAT_01d4ab58;
    uVar33 = (ulong)DAT_01d4ab58 >> 8;
    uVar34 = (ulong)DAT_01d4ab58 >> 0x10;
    uVar35 = (ulong)DAT_01d4ab58 >> 0x18;
    uVar36 = (ulong)DAT_01d4ab58 >> 0x20;
    uVar37 = (ulong)DAT_01d4ab58 >> 0x28;
    uVar38 = (ulong)DAT_01d4ab58 >> 0x30;
    uVar39 = (ulong)DAT_01d4ab58 >> 0x38;
    bVar48 = (byte)DAT_01d4ab50;
    uVar42 = (ulong)DAT_01d4ab50 >> 8;
    uVar27 = (ulong)DAT_01d4ab50 >> 0x10;
    uVar28 = (ulong)DAT_01d4ab50 >> 0x18;
    uVar29 = (ulong)DAT_01d4ab50 >> 0x20;
    uVar30 = (ulong)DAT_01d4ab50 >> 0x28;
    uVar31 = (ulong)DAT_01d4ab50 >> 0x30;
    uVar32 = (ulong)DAT_01d4ab50 >> 0x38;
    *(undefined1 *)(lVar3 + 0xc0) = 1;
    fVar64 = ((float)uVar25 * fVar86 + fVar64 * fVar14 * (float)uVar11 +
             fVar64 * (float)uVar12 * (float)uVar65) - (float)uVar98 * (float)uVar96;
    fVar47 = (fVar75 * fVar87 + fVar47 * fVar13 * (float)((ulong)uVar11 >> 0x20) +
             fVar47 * fVar90 * (float)((ulong)uVar65 >> 0x20)) -
             fVar89 * (float)((ulong)uVar96 >> 0x20);
    fVar46 = ((float)uVar25 * fVar88 + fVar46 * (float)uVar98 * (float)uVar91 +
             fVar46 * fVar14 * (float)uVar94) - (float)uVar12 * (float)uVar95;
    fVar14 = (fVar75 * fVar85 + fVar78 * fVar89 * (float)((ulong)uVar91 >> 0x20) +
             fVar78 * fVar13 * (float)((ulong)uVar94 >> 0x20)) -
             fVar90 * (float)((ulong)uVar95 >> 0x20);
    fVar90 = (float)((ulong)*(undefined8 *)(lVar3 + 0xb0) >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar47 >> 0x18) & (byte)uVar32,
                             CONCAT12((byte)((uint)fVar47 >> 0x10) & (byte)uVar31,
                                      CONCAT11((byte)((uint)fVar47 >> 8) & (byte)uVar30,
                                               SUB41(fVar47,0) & (byte)uVar29)));
    fVar14 = (float)((ulong)*(undefined8 *)(lVar3 + 0xb8) >> 0x20) +
             (float)CONCAT13((byte)((uint)fVar14 >> 0x18) & (byte)uVar39,
                             CONCAT12((byte)((uint)fVar14 >> 0x10) & (byte)uVar38,
                                      CONCAT11((byte)((uint)fVar14 >> 8) & (byte)uVar37,
                                               SUB41(fVar14,0) & (byte)uVar36)));
    *(ulong *)(lVar3 + 0xb8) =
         CONCAT17((char)((uint)fVar14 >> 0x18),
                  CONCAT16((char)((uint)fVar14 >> 0x10),
                           CONCAT15((char)((uint)fVar14 >> 8),
                                    CONCAT14(SUB41(fVar14,0),
                                             (float)*(undefined8 *)(lVar3 + 0xb8) +
                                             (float)CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                                             (byte)uVar35,
                                                             CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                                                      (byte)uVar34,
                                                                      CONCAT11((byte)((uint)fVar46
                                                                                     >> 8) &
                                                                               (byte)uVar33,
                                                                               SUB41(fVar46,0) &
                                                                               bVar49)))))));
    *(ulong *)(lVar3 + 0xb0) =
         CONCAT17((char)((uint)fVar90 >> 0x18),
                  CONCAT16((char)((uint)fVar90 >> 0x10),
                           CONCAT15((char)((uint)fVar90 >> 8),
                                    CONCAT14(SUB41(fVar90,0),
                                             (float)*(undefined8 *)(lVar3 + 0xb0) +
                                             (float)CONCAT13((byte)((uint)fVar64 >> 0x18) &
                                                             (byte)uVar28,
                                                             CONCAT12((byte)((uint)fVar64 >> 0x10) &
                                                                      (byte)uVar27,
                                                                      CONCAT11((byte)((uint)fVar64
                                                                                     >> 8) &
                                                                               (byte)uVar42,
                                                                               SUB41(fVar64,0) &
                                                                               bVar48)))))));
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  return;
}


