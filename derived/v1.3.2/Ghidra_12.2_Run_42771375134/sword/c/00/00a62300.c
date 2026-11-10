/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a62300; name: FUN_00a62300
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a62300(long param_1)

{
  unkbyte9 *pVar1;
  undefined1 (*pauVar2) [12];
  float *pfVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  int iVar37;
  undefined8 uVar38;
  int iVar39;
  ulong uVar40;
  long *plVar41;
  long *plVar42;
  long lVar43;
  undefined8 *puVar44;
  long lVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined4 uVar82;
  float fVar83;
  undefined8 uVar84;
  float fVar85;
  float fVar86;
  undefined8 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  undefined8 uVar96;
  undefined8 uVar97;
  long local_118 [4];
  undefined1 *puStack_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  float local_80;
  long local_58;
  
  lVar45 = *(long *)PTR_DAT_02710848;
  plVar42 = *(long **)(param_1 + 0xb8);
  lVar43 = *(long *)(lVar45 + 0x88);
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
  }
  FUN_010672e0(local_118 + 3,lVar43,0);
  if (*(long *)(param_1 + 0x3f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  lVar36 = local_118[3];
  local_118[3] = 0;
  *(long *)(param_1 + 0x3f8) = lVar36;
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
  }
  lVar43 = *(long *)(lVar45 + 0x88);
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
  }
  FUN_010672e0(local_118 + 3,lVar43,1);
  if (*(long *)(param_1 + 0x400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  lVar36 = local_118[3];
  local_118[3] = 0;
  *(long *)(param_1 + 0x400) = lVar36;
  if (lVar43 != 0) {
    (**(code **)(*(long *)(lVar43 + 0x48) + 0x18))((long *)(lVar43 + 0x48));
  }
  local_118[0] = *(long *)(*(long *)PTR_DAT_027194e8 + 0x50);
  if (local_118[0] == 0) {
    lVar43 = 0;
  }
  else {
    (**(code **)(*(long *)(local_118[0] + 0x48) + 0x10))();
    lVar43 = local_118[0];
  }
  local_f0 = 0;
  local_118[3] = -0x340d631b7bddd9bb;
  puStack_f8 = &DAT_01d38550;
  local_e8 = 0;
  local_d8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_90 = 0;
  local_84 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_a8 = _UNK_01d4b588;
  local_b0 = _DAT_01d4b580;
  local_a0 = 0;
  uStack_98 = 0;
  local_8c = 0;
  local_e0 = 2;
  fVar86 = *(float *)PTR_FloatDegree180_027194f0;
  fVar85 = *(float *)PTR_FloatPi_02715160 / fVar86;
  local_80 = fVar85 * 0.0;
  if ((lVar43 == 0) || (*(int *)(lVar43 + 0x54) == 0)) {
    fVar73 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
    uVar40 = (ulong)-(DAT_02a55364 * (fVar73 / fVar86));
    pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar40 >> 0x18 & 0xff) * 0x10);
    fVar73 = (float)((uint)uVar40 & 0xffffff) * DAT_01d4bc78;
    fVar76 = pfVar3[1] + pfVar3[3] * fVar73;
    fVar10 = *pfVar3 + pfVar3[2] * fVar73;
    fVar73 = (float)((ulong)_DAT_02a55350 >> 0x20);
    fVar75 = fVar73 + DAT_01d4c47c;
    fVar12 = (float)((ulong)uRam0000000002a55358 >> 0x20);
    fVar74 = fVar12 + 0.0;
    local_e0 = CONCAT44(*(undefined4 *)PTR_DAT_02719518,2);
    fVar13 = (float)_DAT_02a55350 + (fVar10 * DAT_01d4c6e8 - fVar76 * DAT_01d4c420);
    uVar46 = SUB41(fVar13,0);
    uVar47 = (undefined1)((uint)fVar13 >> 8);
    uVar48 = (undefined1)((uint)fVar13 >> 0x10);
    uVar49 = (undefined1)((uint)fVar13 >> 0x18);
    fVar73 = fVar73 + 30.0;
    uVar50 = SUB41(fVar73,0);
    uVar51 = (undefined1)((uint)fVar73 >> 8);
    uVar52 = (undefined1)((uint)fVar73 >> 0x10);
    uVar53 = (undefined1)((uint)fVar73 >> 0x18);
    fVar73 = (float)uRam0000000002a55358 + fVar76 * DAT_01d4c6e8 + fVar10 * DAT_01d4c420;
    uVar54 = SUB41(fVar73,0);
    uVar55 = (undefined1)((uint)fVar73 >> 8);
    uVar56 = (undefined1)((uint)fVar73 >> 0x10);
    uVar57 = (undefined1)((uint)fVar73 >> 0x18);
    fVar12 = fVar12 + 0.0;
    uVar58 = SUB41(fVar12,0);
    uVar59 = (undefined1)((uint)fVar12 >> 8);
    uVar60 = (undefined1)((uint)fVar12 >> 0x10);
    uVar61 = (undefined1)((uint)fVar12 >> 0x18);
    uStack_98 = CONCAT17((char)((uint)fVar74 >> 0x18),
                         CONCAT16((char)((uint)fVar74 >> 0x10),
                                  CONCAT15((char)((uint)fVar74 >> 8),
                                           CONCAT14(SUB41(fVar74,0),
                                                    (float)uRam0000000002a55358 +
                                                    (fVar10 * DAT_01d4bb10 - fVar76 * DAT_01d4c57c))
                                          )));
    local_a0 = CONCAT17((char)((uint)fVar75 >> 0x18),
                        CONCAT16((char)((uint)fVar75 >> 0x10),
                                 CONCAT15((char)((uint)fVar75 >> 8),
                                          CONCAT14(SUB41(fVar75,0),
                                                   (float)_DAT_02a55350 +
                                                   (fVar76 * DAT_01d4c580 - fVar10 * DAT_01d4c57c)))
                                ));
    local_d8 = CONCAT44(fVar85 * *(float *)PTR_DAT_02719510,*(undefined4 *)PTR_DAT_02719508);
  }
  else {
    FUN_00a658b0(&local_58,local_118);
    puVar35 = PTR_DAT_02719500;
    puVar34 = PTR_DAT_027194f8;
    puVar33 = PTR_DAT_02715080;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0;
    uVar61 = 0;
    if ((*(long *)(local_58 + 0x3a8) != 0) && (*(int *)(*(long *)(local_58 + 0x3a8) + 0x54) != 0)) {
      lVar43 = *(long *)(local_58 + 0x3a8);
      if ((lVar43 != 0) && (*(int *)(lVar43 + 0x54) != 0)) {
        piVar4 = (int *)(lVar43 + 0x54);
        iVar39 = *(int *)(lVar43 + 0x54);
        do {
          while( true ) {
            plVar41 = *(long **)(lVar43 + 0x58);
            if (((*puVar34 & 1) == 0) && (iVar37 = __cxa_guard_acquire(puVar34), iVar37 != 0)) {
              if (((*PTR_DAT_02715078 & 1) == 0) &&
                 (iVar37 = __cxa_guard_acquire(PTR_DAT_02715078), iVar37 != 0)) {
                uVar38 = FUN_00a87090();
                *(undefined8 *)puVar33 = uVar38;
                __cxa_guard_release(PTR_DAT_02715078);
              }
              *(undefined **)puVar35 = puVar33;
              __cxa_guard_release(puVar34);
            }
            while( true ) {
              if (plVar41 == (long *)0x0) goto LAB_00a62744;
              if (plVar41 == (long *)puVar35) break;
              plVar41 = (long *)*plVar41;
            }
            iVar37 = *piVar4;
            if (iVar37 == iVar39) break;
            ClearExclusiveLocal();
            iVar39 = iVar37;
            if (iVar37 == 0) goto LAB_00a62744;
          }
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar6) {
            *piVar4 = iVar39 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar43 = *(long *)(lVar43 + 0x60);
            if (lVar43 != 0) {
              uVar11 = *(undefined8 *)(lVar43 + 0x68);
              uVar38 = *(undefined8 *)(lVar43 + 0x60);
              (**(code **)(*(long *)(lVar43 + -8) + 0x18))();
              uVar54 = (undefined1)uVar11;
              uVar55 = (undefined1)((ulong)uVar11 >> 8);
              uVar56 = (undefined1)((ulong)uVar11 >> 0x10);
              uVar57 = (undefined1)((ulong)uVar11 >> 0x18);
              uVar58 = (undefined1)((ulong)uVar11 >> 0x20);
              uVar59 = (undefined1)((ulong)uVar11 >> 0x28);
              uVar60 = (undefined1)((ulong)uVar11 >> 0x30);
              uVar61 = (undefined1)((ulong)uVar11 >> 0x38);
              uVar46 = (undefined1)uVar38;
              uVar47 = (undefined1)((ulong)uVar38 >> 8);
              uVar48 = (undefined1)((ulong)uVar38 >> 0x10);
              uVar49 = (undefined1)((ulong)uVar38 >> 0x18);
              uVar50 = (undefined1)((ulong)uVar38 >> 0x20);
              uVar51 = (undefined1)((ulong)uVar38 >> 0x28);
              uVar52 = (undefined1)((ulong)uVar38 >> 0x30);
              uVar53 = (undefined1)((ulong)uVar38 >> 0x38);
              goto LAB_00a6274c;
            }
            break;
          }
          iVar39 = iVar37;
        } while (iVar37 != 0);
      }
LAB_00a62744:
      uVar54 = (undefined1)_DAT_000000b8;
      uVar55 = (undefined1)((ulong)_DAT_000000b8 >> 8);
      uVar56 = (undefined1)((ulong)_DAT_000000b8 >> 0x10);
      uVar57 = (undefined1)((ulong)_DAT_000000b8 >> 0x18);
      uVar58 = (undefined1)((ulong)_DAT_000000b8 >> 0x20);
      uVar59 = (undefined1)((ulong)_DAT_000000b8 >> 0x28);
      uVar60 = (undefined1)((ulong)_DAT_000000b8 >> 0x30);
      uVar61 = (undefined1)((ulong)_DAT_000000b8 >> 0x38);
      uVar46 = (undefined1)_DAT_000000b0;
      uVar47 = (undefined1)((ulong)_DAT_000000b0 >> 8);
      uVar48 = (undefined1)((ulong)_DAT_000000b0 >> 0x10);
      uVar49 = (undefined1)((ulong)_DAT_000000b0 >> 0x18);
      uVar50 = (undefined1)((ulong)_DAT_000000b0 >> 0x20);
      uVar51 = (undefined1)((ulong)_DAT_000000b0 >> 0x28);
      uVar52 = (undefined1)((ulong)_DAT_000000b0 >> 0x30);
      uVar53 = (undefined1)((ulong)_DAT_000000b0 >> 0x38);
    }
LAB_00a6274c:
    fVar12 = (float)CONCAT13(uVar57,CONCAT12(uVar56,CONCAT11(uVar55,uVar54)));
    fVar73 = (float)CONCAT13(uVar49,CONCAT12(uVar48,CONCAT11(uVar47,uVar46)));
    FUN_00a658b0(local_118 + 2,local_118);
    uVar11 = *(undefined8 *)(local_118[2] + 0x3c8);
    uVar38 = *(undefined8 *)(local_118[2] + 0x3c0);
    if (local_118[2] != 0) {
      (**(code **)(*(long *)(local_118[2] + 0x48) + 0x18))();
      local_118[2] = 0;
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    FUN_00a658b0(&local_58,local_118);
    lVar43 = local_58;
    FUN_00a658b0(local_118 + 2,local_118);
    pVar1 = (unkbyte9 *)(lVar43 + 0xa0);
    uVar20 = *(undefined8 *)(lVar43 + 0xa8);
    uVar46 = (undefined1)((ulong)uVar20 >> 8);
    uVar47 = (undefined1)((ulong)uVar20 >> 0x10);
    uVar48 = (undefined1)((ulong)uVar20 >> 0x18);
    uVar49 = (undefined1)((ulong)uVar20 >> 0x20);
    uVar54 = (undefined1)((ulong)uVar20 >> 0x28);
    uVar55 = (undefined1)((ulong)uVar20 >> 0x30);
    uVar56 = (undefined1)((ulong)uVar20 >> 0x38);
    fVar10 = (float)*(undefined8 *)pVar1;
    fVar74 = fVar10 * (float)_DAT_01d4ae80;
    fVar13 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
    fVar76 = fVar13 * (float)((ulong)_DAT_01d4ae80 >> 0x20);
    fVar78 = (float)uVar20 * (float)_UNK_01d4ae88;
    fVar79 = (float)((ulong)uVar20 >> 0x20) * (float)((ulong)_UNK_01d4ae88 >> 0x20);
    pauVar2 = (undefined1 (*) [12])(local_118[2] + 0x3b0);
    uVar82 = (undefined4)((ulong)*(undefined8 *)(local_118[2] + 0x3b8) >> 0x20);
    fVar80 = (float)*(undefined8 *)*pauVar2;
    fVar81 = (float)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
    auVar29._12_4_ = uVar82;
    auVar29._0_12_ = *pauVar2;
    uVar87 = a64_TBL(ZEXT816(0),auVar29,DAT_01cd5418);
    auVar30._12_4_ = uVar82;
    auVar30._0_12_ = *pauVar2;
    uVar20 = a64_TBL(ZEXT816(0),auVar30,DAT_01cd4f90);
    auVar31._12_4_ = uVar82;
    auVar31._0_12_ = *pauVar2;
    uVar84 = a64_TBL(ZEXT816(0),auVar31,DAT_01cd50f8);
    auVar21._4_4_ = fVar76;
    auVar21._0_4_ = fVar74;
    auVar21._8_4_ = fVar78;
    auVar21._12_4_ = fVar79;
    uVar95 = a64_TBL(ZEXT816(0),auVar21,DAT_01cd5120);
    auVar22._4_4_ = fVar76;
    auVar22._0_4_ = fVar74;
    auVar22._8_4_ = fVar78;
    auVar22._12_4_ = fVar79;
    uVar93 = a64_TBL(ZEXT816(0),auVar22,DAT_01cd4f90);
    auVar23._4_4_ = fVar76;
    auVar23._0_4_ = fVar74;
    auVar23._8_4_ = fVar78;
    auVar23._12_4_ = fVar79;
    uVar96 = a64_TBL(ZEXT816(0),auVar23,DAT_01cd5418);
    fVar83 = (float)((ulong)uVar84 >> 0x20);
    auVar24._4_4_ = fVar76;
    auVar24._0_4_ = fVar74;
    auVar24._8_4_ = fVar78;
    auVar24._12_4_ = fVar79;
    uVar97 = a64_TBL(ZEXT816(0),auVar24,DAT_01cd5270);
    fVar75 = (float)((ulong)uVar20 >> 0x20);
    auVar25._4_4_ = fVar76;
    auVar25._0_4_ = fVar74;
    auVar25._8_4_ = fVar78;
    auVar25._12_4_ = fVar79;
    uVar94 = a64_TBL(ZEXT816(0),auVar25,DAT_01cd50f8);
    auVar26._4_4_ = fVar76;
    auVar26._0_4_ = fVar74;
    auVar26._8_4_ = fVar74;
    auVar26._12_4_ = fVar76;
    uVar27 = a64_TBL(ZEXT816(0),auVar26,DAT_01cd50b0);
    fVar89 = (float)((ulong)uVar87 >> 0x20);
    fVar88 = (float)_DAT_01d4ae90;
    fVar90 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
    fVar91 = (float)_UNK_01d4ae98;
    fVar92 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
    auVar7[9] = uVar46;
    auVar7._0_9_ = *pVar1;
    auVar7[10] = uVar47;
    auVar7[0xb] = uVar48;
    auVar7[0xc] = uVar49;
    auVar7[0xd] = uVar54;
    auVar7[0xe] = uVar55;
    auVar7[0xf] = uVar56;
    uVar28 = a64_TBL(ZEXT816(0),auVar7,DAT_01cd4f90);
    fVar77 = (float)((ulong)uVar28 >> 0x20);
    fVar74 = (fVar74 * (float)uVar20 + fVar88 * fVar80 * (float)uVar93 +
             fVar88 * (float)uVar87 * (float)uVar94) - (float)uVar84 * (float)uVar96;
    fVar76 = (fVar76 * fVar75 + fVar90 * fVar81 * (float)((ulong)uVar93 >> 0x20) +
             fVar90 * fVar89 * (float)((ulong)uVar94 >> 0x20)) -
             fVar83 * (float)((ulong)uVar96 >> 0x20);
    uVar57 = SUB41(fVar76,0);
    uVar62 = (undefined1)((uint)fVar76 >> 8);
    uVar63 = (undefined1)((uint)fVar76 >> 0x10);
    uVar64 = (undefined1)((uint)fVar76 >> 0x18);
    fVar78 = (fVar78 * (float)uVar20 + fVar91 * (float)uVar84 * (float)uVar95 +
             fVar91 * fVar80 * (float)uVar27) - (float)uVar87 * (float)uVar97;
    uVar65 = SUB41(fVar78,0);
    uVar66 = (undefined1)((uint)fVar78 >> 8);
    uVar67 = (undefined1)((uint)fVar78 >> 0x10);
    uVar68 = (undefined1)((uint)fVar78 >> 0x18);
    fVar79 = (fVar79 * fVar75 + fVar92 * fVar83 * (float)((ulong)uVar95 >> 0x20) +
             fVar92 * fVar81 * (float)((ulong)uVar27 >> 0x20)) -
             fVar89 * (float)((ulong)uVar97 >> 0x20);
    uVar69 = SUB41(fVar79,0);
    uVar70 = (undefined1)((uint)fVar79 >> 8);
    uVar71 = (undefined1)((uint)fVar79 >> 0x10);
    uVar72 = (undefined1)((uint)fVar79 >> 0x18);
    auVar8[9] = uVar46;
    auVar8._0_9_ = *pVar1;
    auVar8[10] = uVar47;
    auVar8[0xb] = uVar48;
    auVar8[0xc] = uVar49;
    auVar8[0xd] = uVar54;
    auVar8[0xe] = uVar55;
    auVar8[0xf] = uVar56;
    uVar96 = a64_TBL(ZEXT816(0),auVar8,DAT_01cd5418);
    auVar9[9] = uVar46;
    auVar9._0_9_ = *pVar1;
    auVar9[10] = uVar47;
    auVar9[0xb] = uVar48;
    auVar9[0xc] = uVar49;
    auVar9[0xd] = uVar54;
    auVar9[0xe] = uVar55;
    auVar9[0xf] = uVar56;
    uVar87 = a64_TBL(ZEXT816(0),auVar9,DAT_01cd50f8);
    auVar14[4] = uVar57;
    auVar14._0_4_ = fVar74;
    auVar14[5] = uVar62;
    auVar14[6] = uVar63;
    auVar14[7] = uVar64;
    auVar14[8] = uVar65;
    auVar14[9] = uVar66;
    auVar14[10] = uVar67;
    auVar14[0xb] = uVar68;
    auVar14[0xc] = uVar69;
    auVar14[0xd] = uVar70;
    auVar14[0xe] = uVar71;
    auVar14[0xf] = uVar72;
    uVar94 = a64_TBL(ZEXT816(0),auVar14,DAT_01cd4f90);
    auVar15[4] = uVar57;
    auVar15._0_4_ = fVar74;
    auVar15[5] = uVar62;
    auVar15[6] = uVar63;
    auVar15[7] = uVar64;
    auVar15[8] = uVar65;
    auVar15[9] = uVar66;
    auVar15[10] = uVar67;
    auVar15[0xb] = uVar68;
    auVar15[0xc] = uVar69;
    auVar15[0xd] = uVar70;
    auVar15[0xe] = uVar71;
    auVar15[0xf] = uVar72;
    uVar93 = a64_TBL(ZEXT816(0),auVar15,DAT_01cd5120);
    fVar75 = (float)((ulong)uVar87 >> 0x20);
    auVar16[4] = uVar57;
    auVar16._0_4_ = fVar74;
    auVar16[5] = uVar62;
    auVar16[6] = uVar63;
    auVar16[7] = uVar64;
    auVar16[8] = uVar65;
    auVar16[9] = uVar66;
    auVar16[10] = uVar67;
    auVar16[0xb] = uVar68;
    auVar16[0xc] = uVar69;
    auVar16[0xd] = uVar70;
    auVar16[0xe] = uVar71;
    auVar16[0xf] = uVar72;
    uVar20 = a64_TBL(ZEXT816(0),auVar16,DAT_01cd5418);
    auVar17[4] = uVar57;
    auVar17._0_4_ = fVar74;
    auVar17[5] = uVar62;
    auVar17[6] = uVar63;
    auVar17[7] = uVar64;
    auVar17[8] = uVar65;
    auVar17[9] = uVar66;
    auVar17[10] = uVar67;
    auVar17[0xb] = uVar68;
    auVar17[0xc] = uVar69;
    auVar17[0xd] = uVar70;
    auVar17[0xe] = uVar71;
    auVar17[0xf] = uVar72;
    uVar95 = a64_TBL(ZEXT816(0),auVar17,DAT_01cd50f8);
    auVar18[4] = uVar57;
    auVar18._0_4_ = fVar74;
    auVar18[5] = uVar62;
    auVar18[6] = uVar63;
    auVar18[7] = uVar64;
    auVar18[8] = uVar65;
    auVar18[9] = uVar66;
    auVar18[10] = uVar67;
    auVar18[0xb] = uVar68;
    auVar18[0xc] = uVar69;
    auVar18[0xd] = uVar70;
    auVar18[0xe] = uVar71;
    auVar18[0xf] = uVar72;
    uVar27 = a64_TBL(ZEXT816(0),auVar18,DAT_01cd5270);
    auVar19[4] = uVar57;
    auVar19._0_4_ = fVar74;
    auVar19[5] = uVar62;
    auVar19[6] = uVar63;
    auVar19[7] = uVar64;
    auVar19[8] = SUB41(fVar74,0);
    auVar19[9] = (char)((uint)fVar74 >> 8);
    auVar19[10] = (char)((uint)fVar74 >> 0x10);
    auVar19[0xb] = (char)((uint)fVar74 >> 0x18);
    auVar19[0xc] = uVar57;
    auVar19[0xd] = uVar62;
    auVar19[0xe] = uVar63;
    auVar19[0xf] = uVar64;
    uVar84 = a64_TBL(ZEXT816(0),auVar19,DAT_01cd50b0);
    if (local_118[2] != 0) {
      (**(code **)(*(long *)(local_118[2] + 0x48) + 0x18))();
      local_118[2] = 0;
    }
    fVar83 = (float)((ulong)uVar96 >> 0x20);
    fVar80 = fVar73 + (float)uVar38;
    fVar73 = (float)(CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,fVar73)))) >>
                    0x20) + (float)((ulong)uVar38 >> 0x20);
    fVar81 = fVar12 + (float)uVar11;
    fVar12 = (float)(CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(uVar58,fVar12)))) >>
                    0x20) + (float)((ulong)uVar11 >> 0x20);
    uVar11 = CONCAT17((char)((uint)fVar12 >> 0x18),
                      CONCAT16((char)((uint)fVar12 >> 0x10),
                               CONCAT15((char)((uint)fVar12 >> 8),CONCAT14(SUB41(fVar12,0),fVar81)))
                     );
    uVar38 = CONCAT17((char)((uint)fVar73 >> 0x18),
                      CONCAT16((char)((uint)fVar73 >> 0x10),
                               CONCAT15((char)((uint)fVar73 >> 8),CONCAT14(SUB41(fVar73,0),fVar80)))
                     );
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_a0 = uVar38;
    uStack_98 = uVar11;
    FUN_00a658b0(&local_58,local_118);
    local_d8 = CONCAT44(local_d8._4_4_,
                        *(undefined4 *)(*(long *)(*(long *)(local_58 + 0x3a0) + 0xa0) + 0xcc));
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    uVar32 = DAT_01d4ab58;
    uVar97 = DAT_01d4ab50;
    fVar73 = ((float)uVar28 * fVar74 + fVar88 * fVar10 * (float)uVar94 +
             fVar88 * (float)uVar96 * (float)uVar95) - (float)uVar87 * (float)uVar20;
    fVar12 = (fVar77 * fVar76 + fVar90 * fVar13 * (float)((ulong)uVar94 >> 0x20) +
             fVar90 * fVar83 * (float)((ulong)uVar95 >> 0x20)) -
             fVar75 * (float)((ulong)uVar20 >> 0x20);
    fVar10 = ((float)uVar28 * fVar78 + fVar91 * (float)uVar87 * (float)uVar93 +
             fVar91 * fVar10 * (float)uVar84) - (float)uVar96 * (float)uVar27;
    fVar13 = (fVar77 * fVar79 + fVar92 * fVar75 * (float)((ulong)uVar93 >> 0x20) +
             fVar92 * fVar13 * (float)((ulong)uVar84 >> 0x20)) -
             fVar83 * (float)((ulong)uVar27 >> 0x20);
    FUN_00a658b0(&local_58,local_118);
    local_d8 = CONCAT44(*(undefined4 *)(local_58 + 0x3dc),(undefined4)local_d8);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    fVar10 = (float)CONCAT13((byte)((uint)fVar10 >> 0x18) & (byte)((ulong)uVar32 >> 0x18),
                             CONCAT12((byte)((uint)fVar10 >> 0x10) & (byte)((ulong)uVar32 >> 0x10),
                                      CONCAT11((byte)((uint)fVar10 >> 8) &
                                               (byte)((ulong)uVar32 >> 8),
                                               SUB41(fVar10,0) & (byte)uVar32)));
    fVar73 = (float)CONCAT13((byte)((uint)fVar73 >> 0x18) & (byte)((ulong)uVar97 >> 0x18),
                             CONCAT12((byte)((uint)fVar73 >> 0x10) & (byte)((ulong)uVar97 >> 0x10),
                                      CONCAT11((byte)((uint)fVar73 >> 8) &
                                               (byte)((ulong)uVar97 >> 8),
                                               SUB41(fVar73,0) & (byte)uVar97)));
    FUN_00a658b0(&local_58,local_118);
    local_e0 = CONCAT44(*(undefined4 *)(*(long *)(*(long *)(local_58 + 0x3a0) + 0xa0) + 200),
                        (undefined4)local_e0);
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    fVar80 = fVar80 + fVar73;
    uVar46 = SUB41(fVar80,0);
    uVar47 = (undefined1)((uint)fVar80 >> 8);
    uVar48 = (undefined1)((uint)fVar80 >> 0x10);
    uVar49 = (undefined1)((uint)fVar80 >> 0x18);
    fVar73 = (float)((ulong)uVar38 >> 0x20) +
             (float)(CONCAT17((byte)((uint)fVar12 >> 0x18) & (byte)((ulong)uVar97 >> 0x38),
                              CONCAT16((byte)((uint)fVar12 >> 0x10) & (byte)((ulong)uVar97 >> 0x30),
                                       CONCAT15((byte)((uint)fVar12 >> 8) &
                                                (byte)((ulong)uVar97 >> 0x28),
                                                CONCAT14(SUB41(fVar12,0) &
                                                         (byte)((ulong)uVar97 >> 0x20),fVar73)))) >>
                    0x20);
    uVar50 = SUB41(fVar73,0);
    uVar51 = (undefined1)((uint)fVar73 >> 8);
    uVar52 = (undefined1)((uint)fVar73 >> 0x10);
    uVar53 = (undefined1)((uint)fVar73 >> 0x18);
    fVar81 = fVar81 + fVar10;
    uVar54 = SUB41(fVar81,0);
    uVar55 = (undefined1)((uint)fVar81 >> 8);
    uVar56 = (undefined1)((uint)fVar81 >> 0x10);
    uVar57 = (undefined1)((uint)fVar81 >> 0x18);
    fVar73 = (float)((ulong)uVar11 >> 0x20) +
             (float)(CONCAT17((byte)((uint)fVar13 >> 0x18) & (byte)((ulong)uVar32 >> 0x38),
                              CONCAT16((byte)((uint)fVar13 >> 0x10) & (byte)((ulong)uVar32 >> 0x30),
                                       CONCAT15((byte)((uint)fVar13 >> 8) &
                                                (byte)((ulong)uVar32 >> 0x28),
                                                CONCAT14(SUB41(fVar13,0) &
                                                         (byte)((ulong)uVar32 >> 0x20),fVar10)))) >>
                    0x20);
    uVar58 = SUB41(fVar73,0);
    uVar59 = (undefined1)((uint)fVar73 >> 8);
    uVar60 = (undefined1)((uint)fVar73 >> 0x10);
    uVar61 = (undefined1)((uint)fVar73 >> 0x18);
  }
  uStack_b8 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(uVar58,CONCAT13(uVar57,
                                                  CONCAT12(uVar56,CONCAT11(uVar55,uVar54)))))));
  local_c0 = CONCAT17(uVar53,CONCAT16(uVar52,CONCAT15(uVar51,CONCAT14(uVar50,CONCAT13(uVar49,
                                                  CONCAT12(uVar48,CONCAT11(uVar47,uVar46)))))));
  uVar38 = (**(code **)(*plVar42 + 0x10))(plVar42,0x760,0x10);
  puVar33 = PTR_DAT_02710860;
  lVar43 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar43 + 0x80) < 0x10) {
    *(long **)(lVar43 + *(ulong *)(lVar43 + 0x80) * 8) = plVar42;
    *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + 1;
    FUN_00a8ffd0(uVar38,param_1,plVar42,local_118 + 3,0);
    *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + -1;
    puVar44 = *(undefined8 **)(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x4a8) = uVar38;
    if (puVar44 != (undefined8 *)0x0) {
      (**(code **)*puVar44)(puVar44);
      (**(code **)(**(long **)(param_1 + 0x4b0) + 0x18))
                (*(long **)(param_1 + 0x4b0),puVar44,*(undefined8 *)(param_1 + 0x4b8),
                 *(undefined8 *)(param_1 + 0x4c0));
    }
    *(long **)(param_1 + 0x4b0) = plVar42;
    *(undefined8 *)(param_1 + 0x4b8) = 0x760;
    *(undefined8 *)(param_1 + 0x4c0) = 0x10;
    uVar38 = (**(code **)(*plVar42 + 0x10))(plVar42,0x760,0x10);
    lVar43 = nn::os::GetTlsValue(*(undefined4 *)puVar33);
    if (*(ulong *)(lVar43 + 0x80) < 0x10) {
      *(long **)(lVar43 + *(ulong *)(lVar43 + 0x80) * 8) = plVar42;
      *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + 1;
      FUN_00a8ffd0(uVar38,param_1,plVar42,local_118 + 3,1);
      *(long *)(lVar43 + 0x80) = *(long *)(lVar43 + 0x80) + -1;
      puVar44 = *(undefined8 **)(param_1 + 0x4c8);
      *(undefined8 *)(param_1 + 0x4c8) = uVar38;
      if (puVar44 != (undefined8 *)0x0) {
        (**(code **)*puVar44)(puVar44);
        (**(code **)(**(long **)(param_1 + 0x4d0) + 0x18))
                  (*(long **)(param_1 + 0x4d0),puVar44,*(undefined8 *)(param_1 + 0x4d8),
                   *(undefined8 *)(param_1 + 0x4e0));
      }
      *(long **)(param_1 + 0x4d0) = plVar42;
      *(undefined8 *)(param_1 + 0x4d8) = 0x760;
      *(undefined8 *)(param_1 + 0x4e0) = 0x10;
      if (local_e8 != 0) {
        (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
        local_e8 = 0;
      }
      if (local_118[0] != 0) {
        (**(code **)(*(long *)(local_118[0] + 0x48) + 0x18))();
      }
      local_118[0] = 0;
      local_118[1] = 0;
      lVar43 = *(long *)(lVar45 + 0x60);
      if (lVar43 == 0) {
        FUN_0101cb00(0,local_118);
      }
      else {
        plVar41 = (long *)(lVar43 + 0x48);
        (**(code **)(*plVar41 + 0x10))(plVar41);
        FUN_0101cb00(lVar43,local_118);
        (**(code **)(*plVar41 + 0x18))(plVar41);
      }
      FUN_01064460(local_118 + 3,plVar42,0);
      if (*(long *)(param_1 + 0x498) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x498) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x498) = 0;
      }
      *(long *)(param_1 + 0x498) = local_118[3];
      *(undefined4 *)(local_118[3] + 0x140) = 0x46;
      FUN_01051350(local_118 + 3,local_118,plVar42,PTR_DAT_02719520);
      plVar42 = *(long **)(param_1 + 0x4a0);
      if (plVar42 != (long *)0x0) {
        lVar43 = plVar42[0xb];
        piVar4 = (int *)(lVar43 + 0x54);
        do {
          iVar39 = *piVar4;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar6) {
            *piVar4 = iVar39 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar39 + -1 == 0) {
          *(undefined8 *)(lVar43 + 0x60) = 0;
          (**(code **)(*plVar42 + 0x18))();
        }
        *(undefined8 *)(param_1 + 0x4a0) = 0;
      }
      *(long *)(param_1 + 0x4a0) = local_118[3];
      fVar73 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_02715d18);
      uVar40 = (ulong)-(DAT_02a55364 * (fVar73 / fVar86));
      lVar43 = *(long *)(local_118[3] + 0x1a8);
      pfVar3 = (float *)(PTR_SinCosSampleTable_02715d20 + (uVar40 >> 0x18 & 0xff) * 0x10);
      fVar86 = (float)((uint)uVar40 & 0xffffff) * DAT_01d4bc78;
      fVar75 = (*pfVar3 + pfVar3[2] * fVar86) * 0.0;
      fVar74 = (pfVar3[1] + pfVar3[3] * fVar86) * 0.0;
      fVar10 = (float)_DAT_02a55350;
      fVar73 = (float)((ulong)_DAT_02a55350 >> 0x20);
      fVar13 = (float)uRam0000000002a55358;
      fVar12 = (float)((ulong)uRam0000000002a55358 >> 0x20);
      *(ulong *)(lVar43 + 0xf8) = CONCAT44(fVar12 + 0.0,fVar13 + fVar74 + fVar75);
      *(ulong *)(lVar43 + 0xf0) = CONCAT44(fVar73 + 0.0,fVar10 + (fVar75 - fVar74));
      fVar75 = pfVar3[1] + fVar86 * pfVar3[3];
      fVar86 = *pfVar3 + fVar86 * pfVar3[2];
      fVar74 = fVar75 * DAT_01d4c404;
      fVar73 = fVar73 + 0.0;
      fVar12 = fVar12 + 0.0;
      lVar43 = *(long *)(*(long *)(param_1 + 0x4a0) + 0x1a8);
      *(ulong *)(lVar43 + 0xe8) =
           CONCAT17((char)((uint)fVar12 >> 0x18),
                    CONCAT16((char)((uint)fVar12 >> 0x10),
                             CONCAT15((char)((uint)fVar12 >> 8),
                                      CONCAT14(SUB41(fVar12,0),
                                               fVar13 + fVar75 * 0.0 + fVar86 * DAT_01d4c404))));
      *(ulong *)(lVar43 + 0xe0) =
           CONCAT17((char)((uint)fVar73 >> 0x18),
                    CONCAT16((char)((uint)fVar73 >> 0x10),
                             CONCAT15((char)((uint)fVar73 >> 8),
                                      CONCAT14(SUB41(fVar73,0),fVar10 + (fVar86 * 0.0 - fVar74)))));
      *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x4a0) + 0x1a8) + 0xa0) + 200) =
           *(undefined4 *)PTR_DAT_02719518;
      *(undefined4 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x4a0) + 0x1a8) + 0xa0) + 0xcc) =
           *(undefined4 *)PTR_DAT_02719508;
      *(float *)(*(long *)(*(long *)(*(long *)(param_1 + 0x4a0) + 0x1a8) + 0xa0) + 0xd0) =
           fVar85 * *(float *)PTR_DAT_02719510;
      FUN_0070cf00(*(undefined8 *)(param_1 + 0x4a0),*(undefined8 *)(param_1 + 0x498));
      uVar38 = *(undefined8 *)(param_1 + 0x498);
      FUN_006cf0a0(local_118 + 3,PTR_DAT_02715928);
      lVar43 = FUN_007029e0(uVar38,local_118 + 3);
      if (local_e8 != 0) {
        (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
        local_e8 = 0;
      }
      if (lVar43 == 0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      *(undefined1 *)(lVar43 + 0x1ac) = 1;
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x408) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x408) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x3f8);
      *(long *)(param_1 + 0x408) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x408),0x10);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x410) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x410) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x410) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x3f8);
      *(long *)(param_1 + 0x410) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x410),0x50);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x420) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x420) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x420) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x3f8);
      *(long *)(param_1 + 0x420) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x420),0x50);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x418) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x418) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x418) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x498);
      *(long *)(param_1 + 0x418) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x418),0x50);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x428) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x428) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x428) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x498);
      *(long *)(param_1 + 0x428) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x428),0x50);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x430) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x430) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x430) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x400);
      *(long *)(param_1 + 0x430) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x430),0x10);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x438) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x438) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x438) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x400);
      *(long *)(param_1 + 0x438) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x438),0x50);
      lVar43 = FUN_00a89d20(local_118 + 3,*(undefined8 *)(param_1 + 0xb8));
      if (lVar43 != 0) {
        (**(code **)(*(long *)(lVar43 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x440) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x440) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x440) = 0;
      }
      lVar45 = *(long *)(param_1 + 0x400);
      *(long *)(param_1 + 0x440) = lVar43;
      if (lVar45 == 0) {
        FUN_0078b230(lVar43,0);
      }
      else {
        plVar42 = (long *)(lVar45 + 0x48);
        (**(code **)(*plVar42 + 0x10))(plVar42);
        FUN_0078b230(lVar43,lVar45);
        (**(code **)(*plVar42 + 0x18))(plVar42);
      }
      FUN_0078abf0(*(undefined8 *)(param_1 + 0x440),0x50);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


