/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d33cb0; name: FUN_00d33cb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d33cb0(long param_1)

{
  unkbyte9 *pVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined2 uVar14;
  int iVar15;
  ulong uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long lVar31;
  int iVar32;
  int iVar36;
  int iVar37;
  undefined1 auVar33 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar59 [12];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar57;
  undefined8 uVar58;
  float fVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined8 uVar70;
  undefined1 auVar71 [12];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar79;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar80;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  undefined4 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined8 uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  long local_48;
  long local_28;
  
  FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
  FUN_00d326e0(&local_28);
  if (local_28 == 0) {
    FUN_00d1a660(param_1,*(undefined4 *)(param_1 + 0x348));
    FUN_00d32850(&local_48);
    if (local_48 == 0) {
      plVar30 = (long *)0x0;
      lVar31 = 0;
    }
    else {
      plVar30 = *(long **)(local_48 + 0x490);
      if (plVar30 != (long *)0x0) {
        lVar31 = plVar30[0xb];
        if (*(long *)(lVar31 + 0x58) == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar31 + 0x60))();
          *(undefined8 *)(lVar31 + 0x58) = uVar28;
        }
        piVar2 = (int *)(lVar31 + 0x54);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar31 = 0;
        if (local_48 == 0) goto joined_r0x00d3412c;
      }
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
      lVar31 = local_48;
    }
  }
  else {
    plVar30 = *(long **)(local_28 + 0x490);
    lVar31 = local_48;
    if (plVar30 != (long *)0x0) {
      lVar31 = plVar30[0xb];
      if (*(long *)(lVar31 + 0x58) == 0) {
        uVar28 = (**(code **)**(undefined8 **)(lVar31 + 0x60))();
        *(undefined8 *)(lVar31 + 0x58) = uVar28;
      }
      piVar2 = (int *)(lVar31 + 0x54);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        lVar31 = local_48;
      } while (cVar3 != '\0');
    }
  }
joined_r0x00d3412c:
  local_48 = lVar31;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  uVar58 = DAT_01cd5418;
  uVar28 = DAT_01cd5250;
  if (plVar30 != (long *)0x0) {
    if (*(char *)(param_1 + 0x34c) == '\0') {
      if (*(long *)(param_1 + 0x90) == 0) {
        local_28 = 0;
      }
      else {
        FUN_00d1a020(&local_28);
      }
      plVar29 = (long *)FUN_00d11ca0(local_28 + 0xf8,param_1 + 0x60);
      lVar31 = *plVar29;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      pVar1 = (unkbyte9 *)(param_1 + 0x350);
      uVar28 = *(undefined8 *)(param_1 + 0x358);
      uVar38 = (undefined1)((ulong)uVar28 >> 8);
      uVar39 = (undefined1)((ulong)uVar28 >> 0x10);
      uVar40 = (undefined1)((ulong)uVar28 >> 0x18);
      uVar41 = (undefined1)((ulong)uVar28 >> 0x20);
      uVar42 = (undefined1)((ulong)uVar28 >> 0x28);
      uVar43 = (undefined1)((ulong)uVar28 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar28 >> 0x38);
      auVar5 = *(undefined1 (*) [16])(plVar30 + 0x14);
      auVar61[9] = uVar38;
      auVar61._0_9_ = *pVar1;
      auVar61[10] = uVar39;
      auVar61[0xb] = uVar40;
      auVar61[0xc] = uVar41;
      auVar61[0xd] = uVar42;
      auVar61[0xe] = uVar43;
      auVar61[0xf] = uVar46;
      uVar48 = a64_TBL(ZEXT816(0),auVar61,DAT_01cd4f90);
      uVar58 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5120);
      auVar84[9] = uVar38;
      auVar84._0_9_ = *pVar1;
      auVar84[10] = uVar39;
      auVar84[0xb] = uVar40;
      auVar84[0xc] = uVar41;
      auVar84[0xd] = uVar42;
      auVar84[0xe] = uVar43;
      auVar84[0xf] = uVar46;
      uVar91 = a64_TBL(ZEXT816(0),auVar84,DAT_01cd5418);
      auVar13[9] = uVar38;
      auVar13._0_9_ = *pVar1;
      auVar13[10] = uVar39;
      auVar13[0xb] = uVar40;
      auVar13[0xc] = uVar41;
      auVar13[0xd] = uVar42;
      auVar13[0xe] = uVar43;
      auVar13[0xf] = uVar46;
      uVar79 = a64_TBL(ZEXT816(0),auVar13,DAT_01cd50f8);
      uVar70 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd4f90);
      uVar92 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd50f8);
      uVar28 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5418);
      fVar54 = (float)*(undefined8 *)pVar1;
      fVar55 = (float)((ulong)*(undefined8 *)pVar1 >> 0x20);
      fVar56 = (float)((ulong)uVar79 >> 0x20);
      uVar96 = a64_TBL(ZEXT816(0),auVar5,DAT_01cd5270);
      fVar57 = (float)((ulong)uVar48 >> 0x20);
      auVar68._0_8_ = auVar5._0_8_;
      auVar68._8_8_ = auVar68._0_8_;
      uVar80 = a64_TBL(ZEXT816(0),auVar68,DAT_01cd50b0);
      fVar47 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar88 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      fVar89 = (float)((ulong)uVar91 >> 0x20);
      auVar35._0_4_ =
           (auVar5._0_4_ * (float)uVar48 + (float)_DAT_01d4ae90 * fVar54 * (float)uVar70 +
           (float)_DAT_01d4ae90 * (float)uVar91 * (float)uVar92) - (float)uVar79 * (float)uVar28;
      auVar35._4_4_ =
           (auVar5._4_4_ * fVar57 + fVar47 * fVar55 * (float)((ulong)uVar70 >> 0x20) +
           fVar47 * fVar89 * (float)((ulong)uVar92 >> 0x20)) -
           fVar56 * (float)((ulong)uVar28 >> 0x20);
      auVar35._8_4_ =
           (auVar5._8_4_ * (float)uVar48 + (float)_UNK_01d4ae98 * (float)uVar79 * (float)uVar58 +
           (float)_UNK_01d4ae98 * fVar54 * (float)uVar80) - (float)uVar91 * (float)uVar96;
      auVar35._12_4_ =
           (auVar5._12_4_ * fVar57 + fVar88 * fVar56 * (float)((ulong)uVar58 >> 0x20) +
           fVar88 * fVar55 * (float)((ulong)uVar80 >> 0x20)) -
           fVar89 * (float)((ulong)uVar96 >> 0x20);
    }
    else {
      auVar61 = *(undefined1 (*) [16])(plVar30[0x35] + 0x110);
      fVar47 = (float)CONCAT13(auVar61[3] & (byte)((ulong)DAT_01d4ab50 >> 0x18),
                               CONCAT12(auVar61[2] & (byte)((ulong)DAT_01d4ab50 >> 0x10),
                                        CONCAT11(auVar61[1] & (byte)((ulong)DAT_01d4ab50 >> 8),
                                                 auVar61[0] & (byte)DAT_01d4ab50)));
      auVar71._0_8_ =
           CONCAT17(auVar61[7] & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                    CONCAT16(auVar61[6] & (byte)((ulong)DAT_01d4ab50 >> 0x30),
                             CONCAT15(auVar61[5] & (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                      CONCAT14(auVar61[4] & (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                               fVar47))));
      auVar71[8] = auVar61[8] & (byte)DAT_01d4ab58;
      auVar71[9] = auVar61[9] & (byte)((ulong)DAT_01d4ab58 >> 8);
      auVar71[10] = auVar61[10] & (byte)((ulong)DAT_01d4ab58 >> 0x10);
      auVar71[0xb] = auVar61[0xb] & (byte)((ulong)DAT_01d4ab58 >> 0x18);
      auVar72[0xc] = auVar61[0xc] & (byte)((ulong)DAT_01d4ab58 >> 0x20);
      auVar72._0_12_ = auVar71;
      auVar72[0xd] = auVar61[0xd] & (byte)((ulong)DAT_01d4ab58 >> 0x28);
      auVar72[0xe] = auVar61[0xe] & (byte)((ulong)DAT_01d4ab58 >> 0x30);
      auVar72[0xf] = auVar61[0xf] & (byte)((ulong)DAT_01d4ab58 >> 0x38);
      uVar96 = NEON_ext(auVar71._0_8_,auVar71._0_8_,4,1);
      uVar48 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5188);
      fVar57 = (float)uVar96 * (float)uVar96;
      fVar54 = (float)((ulong)uVar96 >> 0x20);
      fVar54 = fVar54 * fVar54;
      fVar55 = (float)uVar48;
      fVar56 = (float)((ulong)uVar48 >> 0x20);
      uVar96 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5048);
      fVar89 = (float)((ulong)uVar96 >> 0x20);
      uVar48 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5158);
      fVar99 = (float)uVar48;
      fVar100 = (float)((ulong)uVar48 >> 0x20);
      fVar88 = (float)uVar96 * (float)uVar96;
      fVar89 = fVar89 * fVar89;
      uVar96 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd5418);
      auVar81._0_4_ = (float)_DAT_01d4a130 - (fVar88 + fVar88 + fVar57 + fVar57);
      auVar81._4_4_ = (float)((ulong)_DAT_01d4a130 >> 0x20) - (fVar89 + fVar89 + fVar54 + fVar54);
      auVar81._8_4_ =
           (float)_UNK_01d4a138 -
           (fVar99 * fVar99 + fVar99 * fVar99 + fVar55 * fVar55 + fVar55 * fVar55);
      auVar81._12_4_ =
           (float)((ulong)_UNK_01d4a138 >> 0x20) -
           (fVar100 * fVar100 + fVar100 * fVar100 + fVar56 * fVar56 + fVar56 * fVar56);
      fVar47 = (float)uVar96 * fVar47;
      fVar54 = (float)((ulong)uVar96 >> 0x20) * (float)((ulong)auVar71._0_8_ >> 0x20);
      fVar55 = fVar55 * auVar71._8_4_;
      fVar56 = fVar56 * auVar72._12_4_;
      fVar47 = fVar47 + fVar47;
      fVar54 = fVar54 + fVar54;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      uVar96 = a64_TBL(ZEXT816(0),auVar72,DAT_01cd50f8);
      fVar69 = auVar61._12_4_;
      fVar57 = (float)uVar96 * fVar69;
      fVar88 = (float)((ulong)uVar96 >> 0x20) * fVar69;
      fVar57 = fVar57 + fVar57;
      fVar88 = fVar88 + fVar88;
      fVar89 = fVar99 * fVar69 + fVar99 * fVar69;
      fVar69 = fVar100 * fVar69 + fVar100 * fVar69;
      fVar99 = fVar47 + fVar57;
      fVar100 = fVar54 + fVar88;
      fVar101 = fVar55 + fVar89;
      fVar102 = fVar56 + fVar69;
      fVar47 = fVar47 - fVar57;
      fVar54 = fVar54 - fVar88;
      fVar55 = fVar55 - fVar89;
      fVar56 = fVar56 - fVar69;
      auVar23._4_4_ = fVar100;
      auVar23._0_4_ = fVar99;
      auVar23._8_4_ = fVar101;
      auVar23._12_4_ = fVar102;
      auVar25._4_4_ = fVar54;
      auVar25._0_4_ = fVar47;
      auVar25._8_4_ = fVar55;
      auVar25._12_4_ = fVar56;
      uVar96 = a64_TBL(ZEXT816(0),auVar23,auVar25,DAT_01cd5250);
      auVar24._4_4_ = fVar100;
      auVar24._0_4_ = fVar99;
      auVar24._8_4_ = fVar101;
      auVar24._12_4_ = fVar102;
      auVar26._4_4_ = fVar54;
      auVar26._0_4_ = fVar47;
      auVar26._8_4_ = fVar55;
      auVar26._12_4_ = fVar56;
      uVar48 = a64_TBL(ZEXT816(0),auVar24,auVar26,DAT_01cd51f8);
      uVar90 = (undefined4)((ulong)uVar48 >> 0x20);
      auVar20._8_4_ = (int)uVar48;
      auVar20._0_8_ = uVar96;
      auVar20._12_4_ = uVar90;
      auVar60._0_8_ = a64_TBL(ZEXT816(0),auVar81,auVar20,DAT_01cd50d8);
      auVar21._8_4_ = (int)uVar48;
      auVar21._0_8_ = uVar96;
      auVar21._12_4_ = uVar90;
      uVar96 = a64_TBL(ZEXT816(0),auVar81,auVar21,DAT_01cd4fb8);
      auVar82._8_8_ = _UNK_01d4b588;
      auVar82._0_8_ = _DAT_01d4b580;
      uVar48 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5418);
      fVar47 = (float)((ulong)uVar48 >> 0x20);
      auVar60._8_8_ = uVar96;
      uVar91 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5188);
      fVar89 = (float)((ulong)uVar91 >> 0x20);
      uVar70 = a64_TBL(ZEXT816(0),auVar60,DAT_01cd50f8);
      uVar92 = a64_TBL(ZEXT816(0),auVar60,DAT_01cd5158);
      uVar93 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd50f8);
      uVar79 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd5158);
      uVar80 = a64_TBL(ZEXT816(0),auVar60,DAT_01cd5418);
      uVar96 = a64_TBL(ZEXT816(0),auVar60,DAT_01cd5188);
      fVar88 = (float)((ulong)uVar93 >> 0x20);
      fVar69 = (float)((ulong)uVar79 >> 0x20);
      auVar73._0_4_ = (float)uVar48 * (float)uVar70 - (float)uVar93 * (float)uVar80;
      auVar73._4_4_ =
           fVar47 * (float)((ulong)uVar70 >> 0x20) - fVar88 * (float)((ulong)uVar80 >> 0x20);
      auVar73._8_4_ = (float)uVar91 * (float)uVar92 - (float)uVar79 * (float)uVar96;
      auVar73._12_4_ =
           fVar89 * (float)((ulong)uVar92 >> 0x20) - fVar69 * (float)((ulong)uVar96 >> 0x20);
      uVar92 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5418);
      uVar70 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5188);
      uVar80 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd50f8);
      uVar96 = a64_TBL(ZEXT816(0),auVar73,DAT_01cd5158);
      fVar54 = auVar73._0_4_ * auVar73._0_4_;
      fVar55 = auVar73._4_4_ * auVar73._4_4_;
      uVar38 = (undefined1)((uint)fVar55 >> 8);
      uVar39 = (undefined1)((uint)fVar55 >> 0x10);
      uVar40 = (undefined1)((uint)fVar55 >> 0x18);
      fVar56 = auVar73._8_4_ * auVar73._8_4_;
      uVar41 = (undefined1)((uint)fVar56 >> 8);
      uVar42 = (undefined1)((uint)fVar56 >> 0x10);
      uVar43 = (undefined1)((uint)fVar56 >> 0x18);
      fVar57 = auVar73._12_4_ * auVar73._12_4_;
      uVar46 = (undefined1)((uint)fVar57 >> 8);
      uVar44 = (undefined1)((uint)fVar57 >> 0x10);
      uVar45 = (undefined1)((uint)fVar57 >> 0x18);
      auVar5[4] = SUB41(fVar55,0);
      auVar5._0_4_ = fVar54;
      auVar5[5] = uVar38;
      auVar5[6] = uVar39;
      auVar5[7] = uVar40;
      auVar5[8] = SUB41(fVar56,0);
      auVar5[9] = uVar41;
      auVar5[10] = uVar42;
      auVar5[0xb] = uVar43;
      auVar5[0xc] = SUB41(fVar57,0);
      auVar5[0xd] = uVar46;
      auVar5[0xe] = uVar44;
      auVar5[0xf] = uVar45;
      auVar6[4] = SUB41(fVar55,0);
      auVar6._0_4_ = fVar54;
      auVar6[5] = uVar38;
      auVar6[6] = uVar39;
      auVar6[7] = uVar40;
      auVar6[8] = SUB41(fVar56,0);
      auVar6[9] = uVar41;
      auVar6[10] = uVar42;
      auVar6[0xb] = uVar43;
      auVar6[0xc] = SUB41(fVar57,0);
      auVar6[0xd] = uVar46;
      auVar6[0xe] = uVar44;
      auVar6[0xf] = uVar45;
      auVar61 = NEON_ext(auVar5,auVar6,8,1);
      fVar54 = auVar61._0_4_ + fVar54;
      fVar55 = auVar61._4_4_ + fVar55;
      fVar57 = (float)uVar93 * (float)uVar92 - (float)uVar80 * (float)uVar48;
      fVar47 = fVar88 * (float)((ulong)uVar92 >> 0x20) - (float)((ulong)uVar80 >> 0x20) * fVar47;
      fVar88 = (float)uVar79 * (float)uVar70 - (float)uVar96 * (float)uVar91;
      fVar89 = fVar69 * (float)((ulong)uVar70 >> 0x20) - (float)((ulong)uVar96 >> 0x20) * fVar89;
      fVar56 = fVar54 + fVar55;
      fVar54 = fVar54 + fVar55;
      uVar38 = SUB41(fVar54,0);
      uVar39 = (undefined1)((uint)fVar54 >> 8);
      uVar40 = (undefined1)((uint)fVar54 >> 0x10);
      uVar41 = (undefined1)((uint)fVar54 >> 0x18);
      auVar49._0_4_ = fVar57 * fVar57;
      auVar49._4_4_ = fVar47 * fVar47;
      auVar49._8_4_ = fVar88 * fVar88;
      auVar49._12_4_ = fVar89 * fVar89;
      auVar7[4] = uVar38;
      auVar7._0_4_ = fVar56;
      auVar7[5] = uVar39;
      auVar7[6] = uVar40;
      auVar7[7] = uVar41;
      auVar7[8] = SUB41(fVar56,0);
      auVar7[9] = (char)((uint)fVar56 >> 8);
      auVar7[10] = (char)((uint)fVar56 >> 0x10);
      auVar7[0xb] = (char)((uint)fVar56 >> 0x18);
      auVar7[0xc] = uVar38;
      auVar7[0xd] = uVar39;
      auVar7[0xe] = uVar40;
      auVar7[0xf] = uVar41;
      auVar61 = NEON_frsqrte(auVar7,4);
      auVar83._0_4_ = auVar61._0_4_ * fVar56;
      auVar83._4_4_ = auVar61._4_4_ * fVar54;
      auVar83._8_4_ = auVar61._8_4_ * fVar56;
      uVar14 = (undefined2)(CONCAT15(uVar39,CONCAT14(uVar38,fVar56)) >> 0x20);
      auVar83._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14));
      auVar84 = NEON_frsqrts(auVar61,auVar83,4);
      auVar62._0_4_ = auVar61._0_4_ * auVar84._0_4_;
      auVar62._4_4_ = auVar61._4_4_ * auVar84._4_4_;
      auVar62._8_4_ = auVar61._8_4_ * auVar84._8_4_;
      auVar62._12_4_ = auVar61._12_4_ * auVar84._12_4_;
      auVar85._0_4_ = fVar56 * auVar62._0_4_;
      auVar85._4_4_ = fVar54 * auVar62._4_4_;
      auVar85._8_4_ = fVar56 * auVar62._8_4_;
      auVar85._12_4_ = (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14)) * auVar62._12_4_;
      iVar15 = -(uint)(fVar56 == 0.0);
      iVar17 = -(uint)(fVar54 == 0.0);
      iVar18 = -(uint)(fVar56 == 0.0);
      iVar19 = -(uint)((float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14)) == 0.0);
      auVar61 = NEON_frsqrts(auVar62,auVar85,4);
      auVar86._0_8_ =
           CONCAT44(auVar73._4_4_ * auVar62._4_4_ * auVar61._4_4_,
                    auVar73._0_4_ * auVar62._0_4_ * auVar61._0_4_);
      auVar86._8_4_ = auVar73._8_4_ * auVar62._8_4_ * auVar61._8_4_;
      auVar86._12_4_ = auVar73._12_4_ * auVar62._12_4_ * auVar61._12_4_;
      auVar61 = NEON_ext(auVar49,auVar49,8,1);
      fVar55 = auVar61._0_4_ + auVar49._0_4_;
      fVar56 = auVar61._4_4_ + auVar49._4_4_;
      fVar54 = fVar55 + fVar56;
      fVar55 = fVar55 + fVar56;
      auVar50._8_8_ = CONCAT44(fVar55,fVar54);
      auVar50._0_8_ = CONCAT44(fVar55,fVar54);
      auVar61 = NEON_frsqrte(auVar50,4);
      auVar74._0_4_ = auVar61._0_4_ * fVar54;
      auVar74._4_4_ = auVar61._4_4_ * fVar55;
      auVar74._8_4_ = auVar61._8_4_ * fVar54;
      auVar74._12_4_ = auVar61._12_4_ * fVar55;
      auVar84 = NEON_frsqrts(auVar61,auVar74,4);
      auVar63._0_4_ = auVar61._0_4_ * auVar84._0_4_;
      auVar63._4_4_ = auVar61._4_4_ * auVar84._4_4_;
      auVar63._8_4_ = auVar61._8_4_ * auVar84._8_4_;
      auVar63._12_4_ = auVar61._12_4_ * auVar84._12_4_;
      auVar75._0_4_ = fVar54 * auVar63._0_4_;
      auVar75._4_4_ = fVar55 * auVar63._4_4_;
      auVar75._8_4_ = fVar54 * auVar63._8_4_;
      auVar75._12_4_ = fVar55 * auVar63._12_4_;
      auVar61 = NEON_frsqrts(auVar63,auVar75,4);
      auVar59._0_4_ = fVar57 * auVar63._0_4_ * auVar61._0_4_;
      auVar59._4_4_ = fVar47 * auVar63._4_4_ * auVar61._4_4_;
      auVar59._8_4_ = fVar88 * auVar63._8_4_ * auVar61._8_4_;
      iVar32 = -(uint)(fVar54 == 0.0);
      iVar36 = -(uint)(fVar55 == 0.0);
      iVar37 = -(uint)(fVar54 == 0.0);
      auVar51._0_8_ =
           CONCAT17(~(byte)((uint)iVar17 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar17 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar17 >> 8),
                                      CONCAT14(~(byte)iVar17,
                                               CONCAT13(~(byte)((uint)iVar15 >> 0x18),
                                                        CONCAT12(~(byte)((uint)iVar15 >> 0x10),
                                                                 CONCAT11(~(byte)((uint)iVar15 >> 8)
                                                                          ,~(byte)iVar15)))))));
      auVar51[8] = ~(byte)iVar18;
      auVar51[9] = ~(byte)((uint)iVar18 >> 8);
      auVar51[10] = ~(byte)((uint)iVar18 >> 0x10);
      auVar51[0xb] = ~(byte)((uint)iVar18 >> 0x18);
      auVar51[0xc] = ~(byte)iVar19;
      auVar51[0xd] = ~(byte)((uint)iVar19 >> 8);
      auVar51[0xe] = ~(byte)((uint)iVar19 >> 0x10);
      auVar51[0xf] = ~(byte)((uint)iVar19 >> 0x18);
      if (*(long *)(param_1 + 0x90) == 0) {
        local_28 = 0;
      }
      else {
        uStack_68 = SUB41(auVar59._8_4_,0);
        uStack_67 = (undefined1)((uint)auVar59._8_4_ >> 8);
        uStack_66 = (undefined1)((uint)auVar59._8_4_ >> 0x10);
        uStack_65 = (undefined1)((uint)auVar59._8_4_ >> 0x18);
        uStack_6c = SUB41(auVar59._4_4_,0);
        uStack_6b = (undefined1)((uint)auVar59._4_4_ >> 8);
        uStack_6a = (undefined1)((uint)auVar59._4_4_ >> 0x10);
        uStack_69 = (undefined1)((uint)auVar59._4_4_ >> 0x18);
        FUN_00d1a020(&local_28);
        auVar51._8_8_ = auVar51._8_8_;
        auVar59[4] = uStack_6c;
        auVar59[5] = uStack_6b;
        auVar59[6] = uStack_6a;
        auVar59[7] = uStack_69;
        auVar59[8] = uStack_68;
        auVar59[9] = uStack_67;
        auVar59[10] = uStack_66;
        auVar59[0xb] = uStack_65;
        auVar86._8_8_ = auVar86._8_8_;
      }
      auVar33._0_8_ =
           CONCAT17(auVar59[7] & ~(byte)((uint)iVar36 >> 0x18),
                    CONCAT16(auVar59[6] & ~(byte)((uint)iVar36 >> 0x10),
                             CONCAT15(auVar59[5] & ~(byte)((uint)iVar36 >> 8),
                                      CONCAT14(auVar59[4] & ~(byte)iVar36,
                                               CONCAT13(auVar59[3] & ~(byte)((uint)iVar32 >> 0x18),
                                                        CONCAT12(auVar59[2] &
                                                                 ~(byte)((uint)iVar32 >> 0x10),
                                                                 CONCAT11(auVar59[1] &
                                                                          ~(byte)((uint)iVar32 >> 8)
                                                                          ,auVar59[0] &
                                                                           ~(byte)iVar32)))))));
      auVar33[8] = auVar59[8] & ~(byte)iVar37;
      auVar33[9] = auVar59[9] & ~(byte)((uint)iVar37 >> 8);
      auVar33[10] = auVar59[10] & ~(byte)((uint)iVar37 >> 0x10);
      auVar33[0xb] = auVar59[0xb] & ~(byte)((uint)iVar37 >> 0x18);
      plVar29 = (long *)FUN_00d11ca0(local_28 + 0xf8,param_1 + 0x60);
      lVar31 = *plVar29;
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      auVar61 = NEON_fmov(0x3f800000,4);
      fVar54 = (float)CONCAT13(auVar86[3] & auVar51[3],
                               CONCAT12(auVar86[2] & auVar51[2],
                                        CONCAT11(auVar86[1] & auVar51[1],auVar86[0] & auVar51[0])));
      uVar96 = CONCAT17(auVar86[7] & auVar51[7],
                        CONCAT16(auVar86[6] & auVar51[6],
                                 CONCAT15(auVar86[5] & auVar51[5],
                                          CONCAT14(auVar86[4] & auVar51[4],fVar54))));
      auVar27[8] = auVar86[8] & auVar51[8];
      auVar27._0_8_ = uVar96;
      auVar27[9] = auVar86[9] & auVar51[9];
      auVar27[10] = auVar86[10] & auVar51[10];
      auVar27[0xb] = auVar86[0xb] & auVar51[0xb];
      auVar27[0xc] = auVar86[0xc] & auVar51[0xc];
      auVar27[0xd] = auVar86[0xd] & auVar51[0xd];
      auVar27[0xe] = auVar86[0xe] & auVar51[0xe];
      auVar27[0xf] = auVar86[0xf] & auVar51[0xf];
      fVar47 = auVar33._8_4_;
      uVar96 = NEON_ext(uVar96,auVar33._0_8_,4,1);
      fVar88 = (float)((ulong)auVar33._0_8_ >> 0x20);
      auVar84 = NEON_ext(auVar27,auVar27,8,1);
      fVar55 = (float)_DAT_01d4ab60 * fVar54 + (float)_DAT_01d4b9d0 * auVar61._0_4_ +
               (float)_DAT_01d4b2f0 * fVar47 + auVar61._0_4_;
      fVar56 = (float)((ulong)_DAT_01d4ab60 >> 0x20) * fVar54 +
               (float)((ulong)_DAT_01d4b9d0 >> 0x20) * auVar61._4_4_ +
               (float)((ulong)_DAT_01d4b2f0 >> 0x20) * fVar47 + auVar61._4_4_;
      fVar57 = (float)_UNK_01d4ab68 * fVar54 + (float)_UNK_01d4b9d8 * auVar61._8_4_ +
               (float)_UNK_01d4b2f8 * fVar47 + auVar61._8_4_;
      fVar47 = (float)((ulong)_UNK_01d4ab68 >> 0x20) * fVar54 +
               (float)((ulong)_UNK_01d4b9d8 >> 0x20) * auVar61._12_4_ +
               (float)((ulong)_UNK_01d4b2f8 >> 0x20) * fVar47 + auVar61._12_4_;
      auVar64._0_4_ = (float)uVar96 + 0.0;
      fVar54 = (float)((ulong)uVar96 >> 0x20);
      auVar64._4_4_ = fVar54 + auVar84._0_4_;
      auVar64._8_4_ = fVar88 + 0.0;
      auVar64._12_4_ = 0;
      auVar76._0_4_ = (float)uVar96 - 0.0;
      auVar76._4_4_ = fVar54 - auVar84._0_4_;
      auVar76._8_4_ = 0.0 - fVar88;
      auVar76._12_4_ = 0;
      uVar16 = a64_TBL(ZEXT816(0),auVar64,auVar76,DAT_01cd5420);
      uVar48 = a64_TBL(ZEXT816(0),auVar64,auVar76,DAT_01cd51d0);
      uVar96 = a64_TBL(ZEXT816(0),auVar64,auVar76,DAT_01cd50b8);
      auVar87._8_8_ = uVar48;
      auVar87._0_8_ = uVar16 & 0xffffffff00000000;
      uVar48 = a64_TBL(ZEXT816(0),auVar64,auVar76,uVar28);
      auVar52._0_8_ = a64_TBL(ZEXT816(0),auVar64,auVar76,uVar58);
      auVar95._4_12_ = auVar87._4_12_;
      auVar95._0_4_ = fVar55;
      uVar28 = a64_TBL(ZEXT816(0),auVar64,auVar76,DAT_01cd5190);
      uVar58 = a64_TBL(ZEXT816(0),auVar64,auVar76,DAT_01cd4f98);
      auVar77._4_4_ = fVar56;
      auVar77._0_4_ = fVar56;
      auVar77._8_4_ = fVar56;
      auVar77._12_4_ = fVar56;
      auVar52._12_4_ = (undefined4)((ulong)uVar96 >> 0x20);
      auVar52._8_4_ = fVar57;
      auVar98._4_4_ = fVar55;
      auVar98._0_4_ = fVar55;
      auVar98._8_4_ = fVar55;
      auVar98._12_4_ = fVar55;
      auVar94._0_8_ = CONCAT44(-(uint)(fVar55 <= fVar56),-(uint)(fVar55 <= fVar56));
      auVar94._8_4_ = -(uint)(fVar55 <= fVar56);
      auVar94._12_4_ = -(uint)(fVar55 <= fVar56);
      auVar97._8_8_ = auVar94._8_8_;
      auVar97._0_8_ = auVar94._0_8_;
      auVar8[4] = SUB41(fVar56,0);
      auVar8._0_4_ = (int)uVar16;
      auVar8[5] = (char)((uint)fVar56 >> 8);
      auVar8[6] = (char)((uint)fVar56 >> 0x10);
      auVar8[7] = (char)((uint)fVar56 >> 0x18);
      auVar8[8] = (char)uVar48;
      auVar8[9] = (char)((ulong)uVar48 >> 8);
      auVar8[10] = (char)((ulong)uVar48 >> 0x10);
      auVar8[0xb] = (char)((ulong)uVar48 >> 0x18);
      auVar8[0xc] = (char)((ulong)uVar48 >> 0x20);
      auVar8[0xd] = (char)((ulong)uVar48 >> 0x28);
      auVar8[0xe] = (char)((ulong)uVar48 >> 0x30);
      auVar8[0xf] = (char)((ulong)uVar48 >> 0x38);
      auVar95 = auVar95 ^ (auVar95 ^ auVar8) & auVar94;
      uVar38 = SUB41(fVar57,0);
      uVar39 = (undefined1)((uint)fVar57 >> 8);
      uVar40 = (undefined1)((uint)fVar57 >> 0x10);
      uVar41 = (undefined1)((uint)fVar57 >> 0x18);
      auVar98 = auVar98 ^ (auVar98 ^ auVar77) & auVar97;
      auVar65._0_8_ = CONCAT44(-(uint)(auVar98._4_4_ <= fVar57),-(uint)(auVar98._0_4_ <= fVar57));
      auVar65._8_4_ = -(uint)(auVar98._8_4_ <= fVar57);
      auVar65._12_4_ = -(uint)(auVar98._12_4_ <= fVar57);
      auVar78._8_8_ = auVar65._8_8_;
      auVar78._0_8_ = auVar65._0_8_;
      auVar95 = auVar95 ^ (auVar95 ^ auVar52) & auVar65;
      auVar9[4] = uVar38;
      auVar9._0_4_ = fVar57;
      auVar9[5] = uVar39;
      auVar9[6] = uVar40;
      auVar9[7] = uVar41;
      auVar9[8] = uVar38;
      auVar9[9] = uVar39;
      auVar9[10] = uVar40;
      auVar9[0xb] = uVar41;
      auVar9[0xc] = uVar38;
      auVar9[0xd] = uVar39;
      auVar9[0xe] = uVar40;
      auVar9[0xf] = uVar41;
      auVar98 = auVar98 ^ (auVar98 ^ auVar9) & auVar78;
      auVar34._0_4_ = -(uint)(auVar98._0_4_ <= fVar47);
      auVar34._4_4_ = -(uint)(auVar98._4_4_ <= fVar47);
      auVar34._8_4_ = -(uint)(auVar98._8_4_ <= fVar47);
      auVar34._12_4_ = -(uint)(auVar98._12_4_ <= fVar47);
      auVar22._8_4_ = (int)uVar58;
      auVar22._0_8_ = uVar28;
      auVar22._12_4_ = fVar47;
      auVar95 = auVar95 ^ (auVar95 ^ auVar22) & auVar34;
      fVar47 = auVar95._0_4_;
      fVar54 = fVar47 * fVar47;
      fVar88 = auVar95._4_4_;
      fVar55 = fVar88 * fVar88;
      uVar38 = (undefined1)((uint)fVar55 >> 8);
      uVar39 = (undefined1)((uint)fVar55 >> 0x10);
      uVar40 = (undefined1)((uint)fVar55 >> 0x18);
      fVar89 = auVar95._8_4_;
      fVar56 = fVar89 * fVar89;
      uVar41 = (undefined1)((uint)fVar56 >> 8);
      uVar42 = (undefined1)((uint)fVar56 >> 0x10);
      uVar43 = (undefined1)((uint)fVar56 >> 0x18);
      fVar69 = auVar95._12_4_;
      fVar57 = fVar69 * fVar69;
      uVar46 = (undefined1)((uint)fVar57 >> 8);
      uVar44 = (undefined1)((uint)fVar57 >> 0x10);
      uVar45 = (undefined1)((uint)fVar57 >> 0x18);
      auVar10[4] = SUB41(fVar55,0);
      auVar10._0_4_ = fVar54;
      auVar10[5] = uVar38;
      auVar10[6] = uVar39;
      auVar10[7] = uVar40;
      auVar10[8] = SUB41(fVar56,0);
      auVar10[9] = uVar41;
      auVar10[10] = uVar42;
      auVar10[0xb] = uVar43;
      auVar10[0xc] = SUB41(fVar57,0);
      auVar10[0xd] = uVar46;
      auVar10[0xe] = uVar44;
      auVar10[0xf] = uVar45;
      auVar11[4] = SUB41(fVar55,0);
      auVar11._0_4_ = fVar54;
      auVar11[5] = uVar38;
      auVar11[6] = uVar39;
      auVar11[7] = uVar40;
      auVar11[8] = SUB41(fVar56,0);
      auVar11[9] = uVar41;
      auVar11[10] = uVar42;
      auVar11[0xb] = uVar43;
      auVar11[0xc] = SUB41(fVar57,0);
      auVar11[0xd] = uVar46;
      auVar11[0xe] = uVar44;
      auVar11[0xf] = uVar45;
      auVar61 = NEON_ext(auVar10,auVar11,8,1);
      fVar54 = auVar61._0_4_ + fVar54;
      fVar55 = auVar61._4_4_ + fVar55;
      fVar56 = fVar54 + fVar55;
      fVar54 = fVar54 + fVar55;
      uVar38 = SUB41(fVar54,0);
      uVar39 = (undefined1)((uint)fVar54 >> 8);
      uVar40 = (undefined1)((uint)fVar54 >> 0x10);
      uVar41 = (undefined1)((uint)fVar54 >> 0x18);
      auVar12[4] = uVar38;
      auVar12._0_4_ = fVar56;
      auVar12[5] = uVar39;
      auVar12[6] = uVar40;
      auVar12[7] = uVar41;
      auVar12[8] = SUB41(fVar56,0);
      auVar12[9] = (char)((uint)fVar56 >> 8);
      auVar12[10] = (char)((uint)fVar56 >> 0x10);
      auVar12[0xb] = (char)((uint)fVar56 >> 0x18);
      auVar12[0xc] = uVar38;
      auVar12[0xd] = uVar39;
      auVar12[0xe] = uVar40;
      auVar12[0xf] = uVar41;
      auVar61 = NEON_frsqrte(auVar12,4);
      auVar66._0_4_ = auVar61._0_4_ * fVar56;
      auVar66._4_4_ = auVar61._4_4_ * fVar54;
      auVar66._8_4_ = auVar61._8_4_ * fVar56;
      uVar14 = (undefined2)(CONCAT15(uVar39,CONCAT14(uVar38,fVar56)) >> 0x20);
      auVar66._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14));
      auVar84 = NEON_frsqrts(auVar61,auVar66,4);
      auVar53._0_4_ = auVar61._0_4_ * auVar84._0_4_;
      auVar53._4_4_ = auVar61._4_4_ * auVar84._4_4_;
      auVar53._8_4_ = auVar61._8_4_ * auVar84._8_4_;
      auVar53._12_4_ = auVar61._12_4_ * auVar84._12_4_;
      auVar67._0_4_ = fVar56 * auVar53._0_4_;
      auVar67._4_4_ = fVar54 * auVar53._4_4_;
      auVar67._8_4_ = fVar56 * auVar53._8_4_;
      auVar67._12_4_ = (float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14)) * auVar53._12_4_;
      iVar15 = -(uint)(fVar56 == 0.0);
      iVar17 = -(uint)(fVar54 == 0.0);
      iVar18 = -(uint)(fVar56 == 0.0);
      iVar19 = -(uint)((float)CONCAT13(uVar41,CONCAT12(uVar40,uVar14)) == 0.0);
      auVar61 = NEON_frsqrts(auVar53,auVar67,4);
      fVar47 = auVar53._0_4_ * auVar61._0_4_ * fVar47;
      fVar88 = auVar53._4_4_ * auVar61._4_4_ * fVar88;
      fVar89 = auVar53._8_4_ * auVar61._8_4_ * fVar89;
      fVar69 = auVar53._12_4_ * auVar61._12_4_ * fVar69;
      auVar35[0] = SUB41(fVar47,0) & ~(byte)iVar15;
      auVar35[1] = (byte)((uint)fVar47 >> 8) & ~(byte)((uint)iVar15 >> 8);
      auVar35[2] = (byte)((uint)fVar47 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
      auVar35[3] = (byte)((uint)fVar47 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
      auVar35[4] = SUB41(fVar88,0) & ~(byte)iVar17;
      auVar35[5] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar17 >> 8);
      auVar35[6] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
      auVar35[7] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
      auVar35[8] = SUB41(fVar89,0) & ~(byte)iVar18;
      auVar35[9] = (byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar18 >> 8);
      auVar35[10] = (byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
      auVar35[0xb] = (byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
      auVar35[0xc] = SUB41(fVar69,0) & ~(byte)iVar19;
      auVar35[0xd] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar19 >> 8);
      auVar35[0xe] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
      auVar35[0xf] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
    }
    *(long *)(lVar31 + 0x158) = auVar35._8_8_;
    *(long *)(lVar31 + 0x150) = auVar35._0_8_;
    lVar31 = plVar30[0xb];
    piVar2 = (int *)(lVar31 + 0x54);
    do {
      iVar15 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar31 + 0x60) = 0;
      (**(code **)(*plVar30 + 0x18))(plVar30);
    }
  }
  return;
}


