/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01324b80; name: FUN_01324b80
 */


/* WARNING: Removing unreachable block (ram,0x013256d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01324b80(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined1 (*pauVar20) [16];
  undefined8 uVar21;
  undefined *puVar22;
  ulong *puVar23;
  ulong uVar24;
  ulong uVar25;
  LightEventType *pLVar26;
  undefined8 *puVar27;
  long lVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  byte bVar32;
  undefined1 uVar33;
  undefined1 extraout_b0;
  byte bVar34;
  undefined1 uVar35;
  undefined1 extraout_var;
  byte bVar36;
  undefined1 uVar37;
  undefined1 extraout_var_00;
  byte bVar38;
  undefined1 uVar39;
  undefined1 extraout_var_01;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  byte bVar53;
  undefined1 uVar54;
  byte bVar55;
  undefined1 uVar56;
  float fVar57;
  int iVar58;
  undefined1 auVar59 [12];
  float fVar69;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  int iVar70;
  int iVar71;
  int iVar72;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar73 [12];
  int iVar86;
  int iVar87;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  float fVar88;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar74 [12];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  int iVar89;
  float fVar90;
  float fVar93;
  float fVar110;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  int iVar91;
  float fVar92;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar111;
  undefined1 auVar109 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined8 uVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined8 uVar123;
  undefined1 auVar124 [16];
  undefined8 uVar125;
  undefined8 uVar126;
  undefined1 auVar127 [16];
  undefined8 uVar128;
  undefined8 uVar129;
  float fVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined8 uVar133;
  undefined8 uVar134;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined1 local_d0 [8];
  code *pcStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [96];
  
  lVar13 = FUN_01313050(param_2);
  puVar8 = PTR_DAT_02715078;
  uVar11 = 0;
  if (0x67c18a105c508619 < lVar13) {
    if (lVar13 == 0x67c18a105c50861a) goto LAB_01324da4;
    if (lVar13 != 0x7c08eae870e235e0) goto LAB_01325950;
    lVar13 = *(long *)(param_2 + 0x68);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar1 = (int *)(lVar13 + 0x54);
      puVar22 = PTR_DAT_02715080;
      iVar58 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar13 + 0x58);
          if ((*puVar8 & 1) == 0) {
            iVar70 = __cxa_guard_acquire(puVar8);
            puVar22 = PTR_DAT_02715080;
            if (iVar70 != 0) {
              uVar15 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar15;
              __cxa_guard_release(puVar8);
              puVar22 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01325680;
            if (plVar14 == (long *)puVar22) break;
            plVar14 = (long *)*plVar14;
          }
          iVar70 = *piVar1;
          if (iVar70 != iVar58) break;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar58 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x60);
            if (lVar13 != 0) {
              lVar28 = *(long *)(param_1 + 0x310);
              (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
              if (lVar28 == lVar13 + -0x50) goto LAB_01325688;
              goto LAB_0132594c;
            }
            goto LAB_01325680;
          }
          iVar58 = iVar70;
          if (iVar70 == 0) goto LAB_01325680;
        }
        ClearExclusiveLocal();
        iVar58 = iVar70;
      } while (iVar70 != 0);
    }
LAB_01325680:
    if (*(long *)(param_1 + 0x310) == 0) {
LAB_01325688:
      pfVar17 = (float *)FUN_012dcaa0(param_2);
      lVar13 = nn::os::GetCurrentThread();
      plVar14 = (long *)(param_1 + 0x430);
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
            while (*plVar14 == 0) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *plVar14 = lVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_013256f0;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_013256f0:
      pLVar26 = (LightEventType *)(param_1 + 0x424);
      cVar4 = *(char *)(param_1 + 0x390);
      do {
        cVar2 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = 0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      nn::os::SignalLightEvent(pLVar26);
      if (cVar4 == '\0') {
        puVar27 = (undefined8 *)FUN_012dcaa0(param_1);
      }
      else {
        puVar27 = (undefined8 *)PTR_DAT_02715088;
      }
      fVar30 = *pfVar17 - (float)*puVar27;
      fVar110 = pfVar17[1] - (float)((ulong)*puVar27 >> 0x20);
      fVar92 = pfVar17[2] - (float)puVar27[1];
      fVar29 = pfVar17[3] - (float)((ulong)puVar27[1] >> 0x20);
      auVar104._0_4_ = fVar30 * fVar30;
      auVar104._4_4_ = fVar110 * fVar110;
      auVar104._8_4_ = fVar92 * fVar92;
      auVar104._12_4_ = fVar29 * fVar29;
      auVar75 = NEON_ext(auVar104,auVar104,8,1);
      fVar57 = auVar75._0_4_ + auVar104._0_4_;
      fVar69 = auVar75._4_4_ + auVar104._4_4_;
      fVar90 = fVar57 + fVar69;
      fVar57 = fVar57 + fVar69;
      auVar67._8_8_ = CONCAT44(fVar57,fVar90);
      auVar67._0_8_ = CONCAT44(fVar57,fVar90);
      auVar75 = NEON_frsqrte(auVar67,4);
      auVar106._0_4_ = auVar75._0_4_ * fVar90;
      auVar106._4_4_ = auVar75._4_4_ * fVar57;
      auVar106._8_4_ = auVar75._8_4_ * fVar90;
      auVar106._12_4_ = auVar75._12_4_ * fVar57;
      auVar95 = NEON_frsqrts(auVar75,auVar106,4);
      auVar85._0_4_ = auVar75._0_4_ * auVar95._0_4_;
      auVar85._4_4_ = auVar75._4_4_ * auVar95._4_4_;
      auVar85._8_4_ = auVar75._8_4_ * auVar95._8_4_;
      auVar85._12_4_ = auVar75._12_4_ * auVar95._12_4_;
      auVar107._0_4_ = fVar90 * auVar85._0_4_;
      auVar107._4_4_ = fVar57 * auVar85._4_4_;
      auVar107._8_4_ = fVar90 * auVar85._8_4_;
      auVar107._12_4_ = fVar57 * auVar85._12_4_;
      iVar58 = -(uint)(fVar90 == 0.0);
      iVar70 = -(uint)(fVar57 == 0.0);
      iVar71 = -(uint)(fVar90 == 0.0);
      iVar72 = -(uint)(fVar57 == 0.0);
      auVar75 = NEON_frsqrts(auVar85,auVar107,4);
      fVar30 = fVar30 * auVar85._0_4_ * auVar75._0_4_;
      fVar110 = fVar110 * auVar85._4_4_ * auVar75._4_4_;
      fVar92 = fVar92 * auVar85._8_4_ * auVar75._8_4_;
      fVar29 = fVar29 * auVar85._12_4_ * auVar75._12_4_;
      fVar90 = *(float *)(param_1 + 0x360);
      fVar57 = *(float *)(param_1 + 0x364);
      fVar69 = *(float *)(param_1 + 0x368);
      fVar88 = *(float *)(param_1 + 0x36c);
      auVar108._0_4_ = fVar90 * fVar90;
      auVar108._4_4_ = fVar57 * fVar57;
      auVar108._8_4_ = fVar69 * fVar69;
      auVar108._12_4_ = fVar88 * fVar88;
      auVar75 = NEON_ext(auVar108,auVar108,8,1);
      fVar93 = auVar75._0_4_ + auVar108._0_4_;
      fVar111 = auVar75._4_4_ + auVar108._4_4_;
      fVar31 = fVar93 + fVar111;
      fVar93 = fVar93 + fVar111;
      auVar109._8_8_ = CONCAT44(fVar93,fVar31);
      auVar109._0_8_ = CONCAT44(fVar93,fVar31);
      auVar75 = NEON_frsqrte(auVar109,4);
      auVar121._0_4_ = auVar75._0_4_ * fVar31;
      auVar121._4_4_ = auVar75._4_4_ * fVar93;
      auVar121._8_4_ = auVar75._8_4_ * fVar31;
      auVar121._12_4_ = auVar75._12_4_ * fVar93;
      auVar95 = NEON_frsqrts(auVar75,auVar121,4);
      auVar114._0_4_ = auVar75._0_4_ * auVar95._0_4_;
      auVar114._4_4_ = auVar75._4_4_ * auVar95._4_4_;
      auVar114._8_4_ = auVar75._8_4_ * auVar95._8_4_;
      auVar114._12_4_ = auVar75._12_4_ * auVar95._12_4_;
      auVar122._0_4_ = fVar31 * auVar114._0_4_;
      auVar122._4_4_ = fVar93 * auVar114._4_4_;
      auVar122._8_4_ = fVar31 * auVar114._8_4_;
      auVar122._12_4_ = fVar93 * auVar114._12_4_;
      auVar75 = NEON_frsqrts(auVar114,auVar122,4);
      fVar90 = fVar90 * auVar114._0_4_ * auVar75._0_4_;
      fVar57 = fVar57 * auVar114._4_4_ * auVar75._4_4_;
      fVar69 = fVar69 * auVar114._8_4_ * auVar75._8_4_;
      fVar88 = fVar88 * auVar114._12_4_ * auVar75._12_4_;
      iVar91 = -(uint)(fVar31 == 0.0);
      iVar86 = -(uint)(fVar93 == 0.0);
      iVar87 = -(uint)(fVar31 == 0.0);
      iVar89 = -(uint)(fVar93 == 0.0);
      fVar90 = (float)CONCAT13((byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                               CONCAT12((byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar91 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar90 >> 8) &
                                                  ~(byte)((uint)iVar91 >> 8),
                                                  SUB41(fVar90,0) & ~(byte)iVar91)));
      auVar59._0_8_ =
           CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar86 >> 0x18),
                    CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar86 >> 0x10),
                             CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar86 >> 8),
                                      CONCAT14(SUB41(fVar57,0) & ~(byte)iVar86,fVar90))));
      auVar59[8] = SUB41(fVar69,0) & ~(byte)iVar87;
      auVar59[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar87 >> 8);
      auVar59[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar87 >> 0x10);
      auVar59[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar87 >> 0x18);
      auVar68[0xc] = SUB41(fVar88,0) & ~(byte)iVar89;
      auVar68._0_12_ = auVar59;
      auVar68[0xd] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar89 >> 8);
      auVar68[0xe] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar89 >> 0x10);
      auVar68[0xf] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar89 >> 0x18);
      fVar90 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                               CONCAT12((byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar30 >> 8) &
                                                  ~(byte)((uint)iVar58 >> 8),
                                                  SUB41(fVar30,0) & ~(byte)iVar58))) * fVar90;
      fVar30 = (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                               CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                        ~(byte)((uint)iVar70 >> 0x10),
                                        CONCAT11((byte)((uint)fVar110 >> 8) &
                                                 ~(byte)((uint)iVar70 >> 8),
                                                 SUB41(fVar110,0) & ~(byte)iVar70))) *
               (float)((ulong)auVar59._0_8_ >> 0x20);
      uVar33 = (undefined1)((uint)fVar30 >> 8);
      uVar35 = (undefined1)((uint)fVar30 >> 0x10);
      uVar37 = (undefined1)((uint)fVar30 >> 0x18);
      fVar110 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                                CONCAT12((byte)((uint)fVar92 >> 0x10) &
                                         ~(byte)((uint)iVar71 >> 0x10),
                                         CONCAT11((byte)((uint)fVar92 >> 8) &
                                                  ~(byte)((uint)iVar71 >> 8),
                                                  SUB41(fVar92,0) & ~(byte)iVar71))) * auVar59._8_4_
      ;
      uVar39 = (undefined1)((uint)fVar110 >> 8);
      uVar47 = (undefined1)((uint)fVar110 >> 0x10);
      uVar49 = (undefined1)((uint)fVar110 >> 0x18);
      fVar92 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                               CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar29 >> 8) &
                                                  ~(byte)((uint)iVar72 >> 8),
                                                  SUB41(fVar29,0) & ~(byte)iVar72))) *
               auVar68._12_4_;
      uVar52 = (undefined1)((uint)fVar92 >> 8);
      uVar54 = (undefined1)((uint)fVar92 >> 0x10);
      uVar56 = (undefined1)((uint)fVar92 >> 0x18);
      auVar75[4] = SUB41(fVar30,0);
      auVar75._0_4_ = fVar90;
      auVar75[5] = uVar33;
      auVar75[6] = uVar35;
      auVar75[7] = uVar37;
      auVar75[8] = SUB41(fVar110,0);
      auVar75[9] = uVar39;
      auVar75[10] = uVar47;
      auVar75[0xb] = uVar49;
      auVar75[0xc] = SUB41(fVar92,0);
      auVar75[0xd] = uVar52;
      auVar75[0xe] = uVar54;
      auVar75[0xf] = uVar56;
      auVar95[4] = SUB41(fVar30,0);
      auVar95._0_4_ = fVar90;
      auVar95[5] = uVar33;
      auVar95[6] = uVar35;
      auVar95[7] = uVar37;
      auVar95[8] = SUB41(fVar110,0);
      auVar95[9] = uVar39;
      auVar95[10] = uVar47;
      auVar95[0xb] = uVar49;
      auVar95[0xc] = SUB41(fVar92,0);
      auVar95[0xd] = uVar52;
      auVar95[0xe] = uVar54;
      auVar95[0xf] = uVar56;
      auVar75 = NEON_ext(auVar75,auVar95,8,1);
      if (DAT_01d4bfe0 <= auVar75._0_4_ + fVar90 + auVar75._4_4_ + fVar30) {
        lVar13 = nn::os::GetCurrentThread();
        do {
          if (*plVar14 != 0) {
            do {
              ClearExclusiveLocal();
              nn::os::WaitLightEvent(pLVar26);
              while (*plVar14 == 0) {
                cVar4 = '\x01';
                bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                if (bVar10) {
                  *plVar14 = lVar13;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01325808;
              }
            } while( true );
          }
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar10) {
            *plVar14 = lVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01325808:
        cVar4 = *(char *)(param_1 + 0x390);
        do {
          cVar2 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar10) {
            *plVar14 = 0;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        nn::os::SignalLightEvent(pLVar26);
        if (cVar4 == '\0') {
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = (undefined1  [8])0x0;
          pcStack_c8 = (code *)0x0;
          FUN_01324190(param_1,local_d0);
          pcVar9 = pcStack_c8;
          if (pcStack_c8 != (code *)0x0) {
            local_c0 = 0;
            uStack_b8 = 0;
            local_d0 = (undefined1  [8])0x0;
            pcStack_c8 = (code *)0x0;
            (*pcVar9)(auStack_b0);
          }
          local_f0 = 0xa728b2e131b010a6;
          local_e8 = "Play_Camp_Get_Ball";
          local_e0 = 0x12;
          local_d8 = 0;
          FUN_012d6d40(&local_f0);
          if (local_d8 != 0) {
            (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
            local_d8 = 0;
          }
          lVar13 = *(long *)PTR_DAT_02710840;
          puVar23 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
          uVar19 = *puVar23;
          uVar24 = puVar23[1];
          do {
            uVar25 = uVar19 ^ uVar24;
            iVar70 = (int)uVar24;
            iVar58 = (int)uVar19;
            uVar24 = uVar25 >> 0x1b | uVar25 << 0x25;
            uVar19 = uVar25 ^ (uVar19 >> 0x28 | uVar19 << 0x18) ^ uVar25 << 0x10;
            uVar25 = (ulong)(uint)(iVar58 + iVar70) & 3;
          } while (uVar25 == 3);
          *puVar23 = uVar19;
          puVar23[1] = uVar24;
          local_e8 = (char *)CONCAT44(local_e8._4_4_,*(undefined4 *)(&DAT_0216c11c + uVar25 * 4));
          local_f0 = CONCAT44(local_f0._4_4_,*(undefined4 *)(&DAT_0216c11c + uVar25 * 4));
          if (*(uint *)(param_1 + 0x350) < 7) {
            local_f8 = *(undefined8 *)(&DAT_0216c130 + (long)(int)*(uint *)(param_1 + 0x350) * 8);
          }
          else {
            local_f8 = 0xea8a6846daf5f4d1;
          }
          uVar12 = FUN_010247a0(lVar13 + 0x390,&local_f8);
          FUN_010239f0(0,lVar13 + 0x390,uVar12,&local_f0,0);
        }
      }
    }
LAB_0132594c:
    uVar11 = 0;
    goto LAB_01325950;
  }
  if (lVar13 == -0x3ce1071a438d1840) {
LAB_01324da4:
    lVar13 = *(long *)(param_2 + 0x68);
    if ((lVar13 != 0) && (*(int *)(lVar13 + 0x54) != 0)) {
      piVar1 = (int *)(lVar13 + 0x54);
      puVar22 = PTR_DAT_02715080;
      iVar58 = *(int *)(lVar13 + 0x54);
      do {
        while( true ) {
          plVar14 = *(long **)(lVar13 + 0x58);
          if ((*puVar8 & 1) == 0) {
            iVar70 = __cxa_guard_acquire(puVar8);
            puVar22 = PTR_DAT_02715080;
            if (iVar70 != 0) {
              uVar15 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar15;
              __cxa_guard_release(puVar8);
              puVar22 = PTR_DAT_02715080;
            }
          }
          while( true ) {
            if (plVar14 == (long *)0x0) goto LAB_01325154;
            if (plVar14 == (long *)puVar22) break;
            plVar14 = (long *)*plVar14;
          }
          iVar70 = *piVar1;
          if (iVar70 != iVar58) break;
          cVar4 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar10) {
            *piVar1 = iVar58 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') {
            lVar13 = *(long *)(lVar13 + 0x60);
            if (lVar13 != 0) {
              lVar28 = *(long *)(param_1 + 0x310);
              (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
              if (lVar28 == lVar13 + -0x50) goto LAB_0132594c;
              goto LAB_0132515c;
            }
            goto LAB_01325154;
          }
          iVar58 = iVar70;
          if (iVar70 == 0) goto LAB_01325154;
        }
        ClearExclusiveLocal();
        iVar58 = iVar70;
      } while (iVar70 != 0);
    }
LAB_01325154:
    if (*(long *)(param_1 + 0x310) == 0) goto LAB_0132594c;
LAB_0132515c:
    puVar27 = (undefined8 *)FUN_012dcaa0(param_1);
    pfVar17 = (float *)FUN_012dcaa0(param_2);
    fVar30 = (float)*puVar27 - *pfVar17;
    fVar90 = (float)((ulong)*puVar27 >> 0x20) - pfVar17[1];
    fVar110 = (float)puVar27[1] - pfVar17[2];
    fVar92 = (float)((ulong)puVar27[1] >> 0x20) - pfVar17[3];
    lVar13 = *(long *)(param_1 + 0x310);
    auVar62._0_4_ = fVar30 * fVar30;
    auVar62._4_4_ = fVar90 * fVar90;
    auVar62._8_4_ = fVar110 * fVar110;
    auVar62._12_4_ = fVar92 * fVar92;
    auVar75 = NEON_ext(auVar62,auVar62,8,1);
    fVar57 = auVar75._0_4_ + auVar62._0_4_;
    fVar69 = auVar75._4_4_ + auVar62._4_4_;
    fVar29 = fVar57 + fVar69;
    fVar57 = fVar57 + fVar69;
    auVar63._8_8_ = CONCAT44(fVar57,fVar29);
    auVar63._0_8_ = CONCAT44(fVar57,fVar29);
    auVar75 = NEON_frsqrte(auVar63,4);
    auVar97._0_4_ = auVar75._0_4_ * fVar29;
    auVar97._4_4_ = auVar75._4_4_ * fVar57;
    auVar97._8_4_ = auVar75._8_4_ * fVar29;
    auVar97._12_4_ = auVar75._12_4_ * fVar57;
    auVar95 = NEON_frsqrts(auVar75,auVar97,4);
    auVar77._0_4_ = auVar75._0_4_ * auVar95._0_4_;
    auVar77._4_4_ = auVar75._4_4_ * auVar95._4_4_;
    auVar77._8_4_ = auVar75._8_4_ * auVar95._8_4_;
    auVar77._12_4_ = auVar75._12_4_ * auVar95._12_4_;
    auVar98._0_4_ = fVar29 * auVar77._0_4_;
    auVar98._4_4_ = fVar57 * auVar77._4_4_;
    auVar98._8_4_ = fVar29 * auVar77._8_4_;
    auVar98._12_4_ = fVar57 * auVar77._12_4_;
    iVar58 = -(uint)(fVar29 == 0.0);
    iVar70 = -(uint)(fVar57 == 0.0);
    iVar71 = -(uint)(fVar29 == 0.0);
    iVar72 = -(uint)(fVar57 == 0.0);
    auVar75 = NEON_frsqrts(auVar77,auVar98,4);
    fVar30 = fVar30 * auVar77._0_4_ * auVar75._0_4_;
    fVar90 = fVar90 * auVar77._4_4_ * auVar75._4_4_;
    fVar110 = fVar110 * auVar77._8_4_ * auVar75._8_4_;
    fVar92 = fVar92 * auVar77._12_4_ * auVar75._12_4_;
    fVar29 = (float)_DAT_02a6ded0 - *(float *)(lVar13 + 0xb0);
    fVar57 = (float)((ulong)_DAT_02a6ded0 >> 0x20) - *(float *)(lVar13 + 0xb4);
    fVar69 = (float)uRam0000000002a6ded8 - *(float *)(lVar13 + 0xb8);
    fVar88 = (float)((ulong)uRam0000000002a6ded8 >> 0x20) - *(float *)(lVar13 + 0xbc);
    bVar32 = SUB41(fVar30,0) & ~(byte)iVar58;
    bVar34 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar58 >> 8);
    bVar36 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
    bVar38 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
    bVar40 = SUB41(fVar90,0) & ~(byte)iVar70;
    bVar41 = (byte)((uint)fVar90 >> 8) & ~(byte)((uint)iVar70 >> 8);
    bVar42 = (byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
    bVar43 = (byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
    bVar44 = SUB41(fVar110,0) & ~(byte)iVar71;
    bVar45 = (byte)((uint)fVar110 >> 8) & ~(byte)((uint)iVar71 >> 8);
    bVar46 = (byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    bVar48 = (byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    bVar50 = SUB41(fVar92,0) & ~(byte)iVar72;
    bVar51 = (byte)((uint)fVar92 >> 8) & ~(byte)((uint)iVar72 >> 8);
    bVar53 = (byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    bVar55 = (byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    auVar99._0_4_ = fVar29 * fVar29;
    auVar99._4_4_ = fVar57 * fVar57;
    auVar99._8_4_ = fVar69 * fVar69;
    auVar99._12_4_ = fVar88 * fVar88;
    auVar75 = NEON_ext(auVar99,auVar99,8,1);
    fVar90 = auVar75._0_4_ + auVar99._0_4_;
    fVar110 = auVar75._4_4_ + auVar99._4_4_;
    fVar30 = fVar90 + fVar110;
    fVar90 = fVar90 + fVar110;
    auVar100._8_8_ = CONCAT44(fVar90,fVar30);
    auVar100._0_8_ = CONCAT44(fVar90,fVar30);
    auVar75 = NEON_frsqrte(auVar100,4);
    iVar58 = -(uint)(fVar30 == 0.0);
    iVar70 = -(uint)(fVar90 == 0.0);
    iVar71 = -(uint)(fVar30 == 0.0);
    iVar72 = -(uint)(fVar90 == 0.0);
    auVar116._0_4_ = auVar75._0_4_ * fVar30;
    auVar116._4_4_ = auVar75._4_4_ * fVar90;
    auVar116._8_4_ = auVar75._8_4_ * fVar30;
    auVar116._12_4_ = auVar75._12_4_ * fVar90;
    auVar95 = NEON_frsqrts(auVar75,auVar116,4);
    auVar112._0_4_ = auVar75._0_4_ * auVar95._0_4_;
    auVar112._4_4_ = auVar75._4_4_ * auVar95._4_4_;
    auVar112._8_4_ = auVar75._8_4_ * auVar95._8_4_;
    auVar112._12_4_ = auVar75._12_4_ * auVar95._12_4_;
    auVar117._0_4_ = fVar30 * auVar112._0_4_;
    auVar117._4_4_ = fVar90 * auVar112._4_4_;
    auVar117._8_4_ = fVar30 * auVar112._8_4_;
    auVar117._12_4_ = fVar90 * auVar112._12_4_;
    auVar101._0_4_ =
         (float)CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar34,bVar32))) *
         (float)CONCAT13(bVar38,CONCAT12(bVar36,CONCAT11(bVar34,bVar32)));
    auVar101._4_4_ =
         (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40))) *
         (float)CONCAT13(bVar43,CONCAT12(bVar42,CONCAT11(bVar41,bVar40)));
    auVar101._8_4_ =
         (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar45,bVar44))) *
         (float)CONCAT13(bVar48,CONCAT12(bVar46,CONCAT11(bVar45,bVar44)));
    auVar101._12_4_ =
         (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar50))) *
         (float)CONCAT13(bVar55,CONCAT12(bVar53,CONCAT11(bVar51,bVar50)));
    auVar75 = NEON_frsqrts(auVar112,auVar117,4);
    fVar29 = fVar29 * auVar112._0_4_ * auVar75._0_4_;
    fVar57 = fVar57 * auVar112._4_4_ * auVar75._4_4_;
    fVar69 = fVar69 * auVar112._8_4_ * auVar75._8_4_;
    fVar88 = fVar88 * auVar112._12_4_ * auVar75._12_4_;
    auVar75 = NEON_ext(auVar101,auVar101,8,1);
    iVar91 = -(uint)(auVar75._0_4_ + auVar101._0_4_ + auVar75._4_4_ + auVar101._4_4_ == 0.0);
    fVar30 = (float)CONCAT13((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                             CONCAT12((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10),
                                      CONCAT11((byte)((uint)fVar29 >> 8) &
                                               ~(byte)((uint)iVar58 >> 8),
                                               SUB41(fVar29,0) & ~(byte)iVar58)));
    auVar73._0_8_ =
         CONCAT17((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                  CONCAT16((byte)((uint)fVar57 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                           CONCAT15((byte)((uint)fVar57 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                    CONCAT14(SUB41(fVar57,0) & ~(byte)iVar70,fVar30))));
    auVar73[8] = SUB41(fVar69,0) & ~(byte)iVar71;
    auVar73[9] = (byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar71 >> 8);
    auVar73[10] = (byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
    auVar73[0xb] = (byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
    auVar78[0xc] = SUB41(fVar88,0) & ~(byte)iVar72;
    auVar78._0_12_ = auVar73;
    auVar78[0xd] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar72 >> 8);
    auVar78[0xe] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
    auVar78[0xf] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
    auVar64._0_4_ = 0.0 - fVar30;
    fVar90 = (float)((ulong)auVar73._0_8_ >> 0x20);
    auVar64._4_4_ = 0.0 - fVar90;
    auVar64._8_4_ = 0.0 - auVar73._8_4_;
    auVar64._12_4_ = 0.0 - auVar78._12_4_;
    auVar131._4_4_ = iVar91;
    auVar131._0_4_ = iVar91;
    auVar131._8_4_ = iVar91;
    auVar131._12_4_ = iVar91;
    auVar5[1] = bVar34;
    auVar5[0] = bVar32;
    auVar5[2] = bVar36;
    auVar5[3] = bVar38;
    auVar5[4] = bVar40;
    auVar5[5] = bVar41;
    auVar5[6] = bVar42;
    auVar5[7] = bVar43;
    auVar5[8] = bVar44;
    auVar5[9] = bVar45;
    auVar5[10] = bVar46;
    auVar5[0xb] = bVar48;
    auVar5[0xc] = bVar50;
    auVar5[0xd] = bVar51;
    auVar5[0xe] = bVar53;
    auVar5[0xf] = bVar55;
    auVar132[1] = bVar34;
    auVar132[0] = bVar32;
    auVar132[2] = bVar36;
    auVar132[3] = bVar38;
    auVar132[4] = bVar40;
    auVar132[5] = bVar41;
    auVar132[6] = bVar42;
    auVar132[7] = bVar43;
    auVar132[8] = bVar44;
    auVar132[9] = bVar45;
    auVar132[10] = bVar46;
    auVar132[0xb] = bVar48;
    auVar132[0xc] = bVar50;
    auVar132[0xd] = bVar51;
    auVar132[0xe] = bVar53;
    auVar132[0xf] = bVar55;
    auVar132 = auVar132 ^ (auVar5 ^ auVar64) & auVar131;
    fVar29 = auVar132._0_4_;
    fVar30 = fVar30 * fVar29;
    fVar57 = auVar132._4_4_;
    fVar90 = fVar90 * fVar57;
    uVar33 = (undefined1)((uint)fVar90 >> 8);
    uVar35 = (undefined1)((uint)fVar90 >> 0x10);
    uVar37 = (undefined1)((uint)fVar90 >> 0x18);
    fVar110 = auVar73._8_4_ * auVar132._8_4_;
    uVar39 = (undefined1)((uint)fVar110 >> 8);
    uVar47 = (undefined1)((uint)fVar110 >> 0x10);
    uVar49 = (undefined1)((uint)fVar110 >> 0x18);
    fVar92 = auVar78._12_4_ * auVar132._12_4_;
    uVar52 = (undefined1)((uint)fVar92 >> 8);
    uVar54 = (undefined1)((uint)fVar92 >> 0x10);
    uVar56 = (undefined1)((uint)fVar92 >> 0x18);
    auVar6[4] = SUB41(fVar90,0);
    auVar6._0_4_ = fVar30;
    auVar6[5] = uVar33;
    auVar6[6] = uVar35;
    auVar6[7] = uVar37;
    auVar6[8] = SUB41(fVar110,0);
    auVar6[9] = uVar39;
    auVar6[10] = uVar47;
    auVar6[0xb] = uVar49;
    auVar6[0xc] = SUB41(fVar92,0);
    auVar6[0xd] = uVar52;
    auVar6[0xe] = uVar54;
    auVar6[0xf] = uVar56;
    auVar7[4] = SUB41(fVar90,0);
    auVar7._0_4_ = fVar30;
    auVar7[5] = uVar33;
    auVar7[6] = uVar35;
    auVar7[7] = uVar37;
    auVar7[8] = SUB41(fVar110,0);
    auVar7[9] = uVar39;
    auVar7[10] = uVar47;
    auVar7[0xb] = uVar49;
    auVar7[0xc] = SUB41(fVar92,0);
    auVar7[0xd] = uVar52;
    auVar7[0xe] = uVar54;
    auVar7[0xf] = uVar56;
    auVar75 = NEON_ext(auVar6,auVar7,8,1);
    local_190 = auVar132._0_8_;
    uStack_188 = auVar132._8_8_;
    if (0.0 < auVar75._0_4_ + fVar30 + auVar75._4_4_ + fVar90) {
      auVar113._8_8_ = _UNK_01d4b588;
      auVar113._0_8_ = _DAT_01d4b580;
      uVar123 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5418);
      uVar125 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5188);
      uVar21 = a64_TBL(ZEXT816(0),auVar113,DAT_01cd5188);
      uVar128 = a64_TBL(ZEXT816(0),auVar113,DAT_01cd5158);
      uVar126 = a64_TBL(ZEXT816(0),auVar113,DAT_01cd50f8);
      uVar115 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd5158);
      uVar15 = a64_TBL(ZEXT816(0),auVar78,DAT_01cd50f8);
      uVar129 = a64_TBL(ZEXT816(0),auVar113,DAT_01cd5418);
      fVar92 = (float)uVar123 * (float)uVar126 - (float)uVar15 * (float)uVar129;
      fVar69 = (float)((ulong)uVar123 >> 0x20) * (float)((ulong)uVar126 >> 0x20) -
               (float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar129 >> 0x20);
      fVar88 = (float)uVar125 * (float)uVar128 - (float)uVar115 * (float)uVar21;
      fVar30 = (float)((ulong)uVar125 >> 0x20) * (float)((ulong)uVar128 >> 0x20) -
               (float)((ulong)uVar115 >> 0x20) * (float)((ulong)uVar21 >> 0x20);
      auVar79._0_4_ = fVar92 * fVar92;
      auVar79._4_4_ = fVar69 * fVar69;
      auVar79._8_4_ = fVar88 * fVar88;
      auVar79._12_4_ = fVar30 * fVar30;
      auVar75 = NEON_ext(auVar79,auVar79,8,1);
      fVar90 = auVar75._0_4_ + auVar79._0_4_;
      fVar110 = auVar75._4_4_ + auVar79._4_4_;
      fVar30 = fVar90 + fVar110;
      fVar90 = fVar90 + fVar110;
      auVar80._8_8_ = CONCAT44(fVar90,fVar30);
      auVar80._0_8_ = CONCAT44(fVar90,fVar30);
      auVar75 = NEON_frsqrte(auVar80,4);
      auVar127._0_4_ = auVar75._0_4_ * fVar30;
      auVar127._4_4_ = auVar75._4_4_ * fVar90;
      auVar127._8_4_ = auVar75._8_4_ * fVar30;
      auVar127._12_4_ = auVar75._12_4_ * fVar90;
      auVar95 = NEON_frsqrts(auVar75,auVar127,4);
      auVar118._0_4_ = auVar75._0_4_ * auVar95._0_4_;
      auVar118._4_4_ = auVar75._4_4_ * auVar95._4_4_;
      auVar118._8_4_ = auVar75._8_4_ * auVar95._8_4_;
      auVar118._12_4_ = auVar75._12_4_ * auVar95._12_4_;
      auVar124._0_4_ = fVar30 * auVar118._0_4_;
      auVar124._4_4_ = fVar90 * auVar118._4_4_;
      auVar124._8_4_ = fVar30 * auVar118._8_4_;
      auVar124._12_4_ = fVar90 * auVar118._12_4_;
      iVar58 = -(uint)(fVar30 == 0.0);
      iVar70 = -(uint)(fVar90 == 0.0);
      iVar71 = -(uint)(fVar30 == 0.0);
      auVar75 = NEON_frsqrts(auVar118,auVar124,4);
      fVar92 = fVar92 * auVar118._0_4_ * auVar75._0_4_;
      fVar69 = fVar69 * auVar118._4_4_ * auVar75._4_4_;
      fVar88 = fVar88 * auVar118._8_4_ * auVar75._8_4_;
      fVar30 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18),
                               CONCAT12((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar92 >> 8) &
                                                  ~(byte)((uint)iVar58 >> 8),
                                                  SUB41(fVar92,0) & ~(byte)iVar58)));
      auVar74._0_8_ =
           CONCAT17((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                    CONCAT16((byte)((uint)fVar69 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                             CONCAT15((byte)((uint)fVar69 >> 8) & ~(byte)((uint)iVar70 >> 8),
                                      CONCAT14(SUB41(fVar69,0) & ~(byte)iVar70,fVar30))));
      auVar74[8] = SUB41(fVar88,0) & ~(byte)iVar71;
      auVar74[9] = (byte)((uint)fVar88 >> 8) & ~(byte)((uint)iVar71 >> 8);
      auVar74[10] = (byte)((uint)fVar88 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
      auVar74[0xb] = (byte)((uint)fVar88 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
      fVar90 = DAT_01d4c05c -
               *(float *)PTR_Float2Pi_02715150 *
               (float)(int)(*(float *)PTR_Float1Divided2Pi_02715148 * DAT_01d4c05c + 0.5);
      if (fVar90 <= *(float *)PTR_FloatPiDivided2_02715158) {
        if (fVar90 < -*(float *)PTR_FloatPiDivided2_02715158) {
          fVar110 = -*(float *)PTR_FloatPi_02715160;
          goto LAB_01325378;
        }
        fVar110 = 1.0;
      }
      else {
        fVar110 = *(float *)PTR_FloatPi_02715160;
LAB_01325378:
        fVar90 = fVar110 - fVar90;
        fVar110 = -1.0;
      }
      fVar92 = fVar90 * fVar90;
      fVar90 = fVar90 * (fVar92 * (fVar92 * (*(float *)(PTR_SinCoefficients_02715168 + 0xc) +
                                            fVar92 * (fVar92 * (*(float *)(
                                                  PTR_SinCoefficients_02715168 + 4) -
                                                  *(float *)PTR_SinCoefficients_02715168 * fVar92) -
                                                  *(float *)(PTR_SinCoefficients_02715168 + 8))) -
                                  *(float *)(PTR_SinCoefficients_02715168 + 0x10)) + 1.0);
      uVar115 = a64_TBL(ZEXT816(0),auVar132,DAT_01cd50f8);
      uVar123 = a64_TBL(ZEXT816(0),auVar132,DAT_01cd5418);
      fVar110 = fVar110 * (fVar92 * (fVar92 * (*(float *)(PTR_CosCoefficients_02715170 + 0xc) +
                                              fVar92 * (fVar92 * (*(float *)(
                                                  PTR_CosCoefficients_02715170 + 4) -
                                                  fVar92 * *(float *)PTR_CosCoefficients_02715170) -
                                                  *(float *)(PTR_CosCoefficients_02715170 + 8))) -
                                    *(float *)(PTR_CosCoefficients_02715170 + 0x10)) + 1.0);
      auVar102._0_4_ = fVar30 * fVar90;
      auVar102._4_4_ = (float)((ulong)auVar74._0_8_ >> 0x20) * fVar90;
      auVar102._8_4_ = auVar74._8_4_ * fVar90;
      auVar102._12_4_ = fVar110;
      fVar30 = auVar102._0_4_ * (float)_DAT_01d4ae80;
      fVar92 = auVar102._4_4_ * (float)((ulong)_DAT_01d4ae80 >> 0x20);
      auVar119._0_8_ = CONCAT44(fVar92,fVar30);
      auVar119._8_4_ = auVar102._8_4_ * (float)_UNK_01d4ae88;
      auVar119._12_4_ = fVar110 * (float)((ulong)_UNK_01d4ae88 >> 0x20);
      uVar15 = a64_TBL(ZEXT816(0),auVar132,DAT_01cd4f90);
      uVar125 = a64_TBL(ZEXT816(0),auVar119,DAT_01cd4f90);
      uVar129 = a64_TBL(ZEXT816(0),auVar119,DAT_01cd5120);
      uVar133 = a64_TBL(ZEXT816(0),auVar119,DAT_01cd5418);
      fVar90 = (float)((ulong)uVar15 >> 0x20);
      fVar130 = (float)((ulong)uVar115 >> 0x20);
      uVar128 = a64_TBL(ZEXT816(0),auVar119,DAT_01cd50f8);
      uVar134 = a64_TBL(ZEXT816(0),auVar119,DAT_01cd5270);
      auVar120._8_8_ = auVar119._0_8_;
      auVar120._0_8_ = auVar119._0_8_;
      uVar21 = a64_TBL(ZEXT816(0),auVar120,DAT_01cd50b0);
      fVar88 = (float)((ulong)uVar123 >> 0x20);
      fVar69 = (float)_DAT_01d4ae90;
      fVar31 = (float)((ulong)_DAT_01d4ae90 >> 0x20);
      fVar93 = (float)_UNK_01d4ae98;
      fVar111 = (float)((ulong)_UNK_01d4ae98 >> 0x20);
      uVar126 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd4f90);
      fVar30 = ((float)uVar15 * fVar30 + fVar69 * fVar29 * (float)uVar125 +
               fVar69 * (float)uVar123 * (float)uVar128) - (float)uVar115 * (float)uVar133;
      fVar110 = (fVar90 * fVar92 + fVar31 * fVar57 * (float)((ulong)uVar125 >> 0x20) +
                fVar31 * fVar88 * (float)((ulong)uVar128 >> 0x20)) -
                fVar130 * (float)((ulong)uVar133 >> 0x20);
      auVar81._0_8_ = CONCAT44(fVar110,fVar30);
      auVar81._8_4_ =
           ((float)uVar15 * auVar119._8_4_ + fVar93 * (float)uVar115 * (float)uVar129 +
           fVar93 * fVar29 * (float)uVar21) - (float)uVar123 * (float)uVar134;
      auVar81._12_4_ =
           (fVar90 * auVar119._12_4_ + fVar111 * fVar130 * (float)((ulong)uVar129 >> 0x20) +
           fVar111 * fVar57 * (float)((ulong)uVar21 >> 0x20)) -
           fVar88 * (float)((ulong)uVar134 >> 0x20);
      uVar128 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd50f8);
      uVar125 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd4f90);
      uVar133 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5120);
      uVar21 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd50f8);
      fVar90 = (float)((ulong)uVar126 >> 0x20);
      fVar57 = (float)((ulong)uVar128 >> 0x20);
      uVar129 = a64_TBL(ZEXT816(0),auVar102,DAT_01cd5418);
      uVar15 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5418);
      uVar123 = a64_TBL(ZEXT816(0),auVar81,DAT_01cd5270);
      auVar82._8_8_ = auVar81._0_8_;
      auVar82._0_8_ = auVar81._0_8_;
      uVar115 = a64_TBL(ZEXT816(0),auVar82,DAT_01cd50b0);
      fVar29 = (float)((ulong)uVar129 >> 0x20);
      fVar30 = ((float)uVar126 * fVar30 + fVar69 * auVar102._0_4_ * (float)uVar125 +
               fVar69 * (float)uVar129 * (float)uVar21) - (float)uVar128 * (float)uVar15;
      fVar110 = (fVar90 * fVar110 + fVar31 * auVar102._4_4_ * (float)((ulong)uVar125 >> 0x20) +
                fVar31 * fVar29 * (float)((ulong)uVar21 >> 0x20)) -
                fVar57 * (float)((ulong)uVar15 >> 0x20);
      fVar92 = ((float)uVar126 * auVar81._8_4_ + fVar93 * (float)uVar128 * (float)uVar133 +
               fVar93 * auVar102._0_4_ * (float)uVar115) - (float)uVar129 * (float)uVar123;
      fVar90 = (fVar90 * auVar81._12_4_ + fVar111 * fVar57 * (float)((ulong)uVar133 >> 0x20) +
               fVar111 * auVar102._4_4_ * (float)((ulong)uVar115 >> 0x20)) -
               fVar29 * (float)((ulong)uVar123 >> 0x20);
      uStack_188 = CONCAT17((byte)((uint)fVar90 >> 0x18) & (byte)((ulong)DAT_01d4ab58 >> 0x38),
                            CONCAT16((byte)((uint)fVar90 >> 0x10) &
                                     (byte)((ulong)DAT_01d4ab58 >> 0x30),
                                     CONCAT15((byte)((uint)fVar90 >> 8) &
                                              (byte)((ulong)DAT_01d4ab58 >> 0x28),
                                              CONCAT14(SUB41(fVar90,0) &
                                                       (byte)((ulong)DAT_01d4ab58 >> 0x20),
                                                       CONCAT13((byte)((uint)fVar92 >> 0x18) &
                                                                (byte)((ulong)DAT_01d4ab58 >> 0x18),
                                                                CONCAT12((byte)((uint)fVar92 >> 0x10
                                                                               ) & (byte)((ulong)
                                                  DAT_01d4ab58 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar92 >> 8) &
                                                           (byte)((ulong)DAT_01d4ab58 >> 8),
                                                           SUB41(fVar92,0) & (byte)DAT_01d4ab58)))))
                                    ));
      local_190 = CONCAT17((byte)((uint)fVar110 >> 0x18) & (byte)((ulong)DAT_01d4ab50 >> 0x38),
                           CONCAT16((byte)((uint)fVar110 >> 0x10) &
                                    (byte)((ulong)DAT_01d4ab50 >> 0x30),
                                    CONCAT15((byte)((uint)fVar110 >> 8) &
                                             (byte)((ulong)DAT_01d4ab50 >> 0x28),
                                             CONCAT14(SUB41(fVar110,0) &
                                                      (byte)((ulong)DAT_01d4ab50 >> 0x20),
                                                      CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                               (byte)((ulong)DAT_01d4ab50 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar30 >> 0x10)
                                                                        & (byte)((ulong)DAT_01d4ab50
                                                                                >> 0x10),
                                                                        CONCAT11((byte)((uint)fVar30
                                                                                       >> 8) &
                                                                                 (byte)((ulong)
                                                  DAT_01d4ab50 >> 8),
                                                  SUB41(fVar30,0) & (byte)DAT_01d4ab50)))))));
    }
    lVar13 = FUN_01313070(param_2);
    fVar90 = *(float *)(lVar13 + 0x20);
    pfVar17 = (float *)FUN_012dc700(param_2);
    fVar30 = *pfVar17;
    pauVar20 = (undefined1 (*) [16])FUN_012dcaa0(param_2);
    uVar33 = 0;
    uVar35 = 0;
    uVar37 = 0;
    uVar39 = 0;
    if (*(int *)(param_1 + 0x350) != 7) {
      FUN_012dd3b0(*(undefined8 *)(param_1 + (long)*(int *)(param_1 + 0x350) * 8 + 0x318));
      uVar33 = extraout_b0;
      uVar35 = extraout_var;
      uVar37 = extraout_var_00;
      uVar39 = extraout_var_01;
    }
    fVar30 = fVar90 * fVar30 + (float)CONCAT13(uVar39,CONCAT12(uVar37,CONCAT11(uVar35,uVar33)));
    auVar75 = *pauVar20;
    fVar90 = auVar75._0_4_ + (float)local_190 * fVar30;
    fVar110 = auVar75._4_4_ + local_190._4_4_ * fVar30;
    fVar92 = auVar75._8_4_ + (float)uStack_188 * fVar30;
    fVar30 = auVar75._12_4_ + uStack_188._4_4_ * fVar30;
    uVar33 = (undefined1)((uint)fVar30 >> 8);
    uVar35 = (undefined1)((uint)fVar30 >> 0x10);
    uVar37 = (undefined1)((uint)fVar30 >> 0x18);
    pcStack_c8 = (code *)CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(SUB41(fVar30,0),
                                                                                  fVar92))));
    local_d0 = (undefined1  [8])
               CONCAT17((char)((uint)fVar110 >> 0x18),
                        CONCAT16((char)((uint)fVar110 >> 0x10),
                                 CONCAT15((char)((uint)fVar110 >> 8),
                                          CONCAT14(SUB41(fVar110,0),fVar90))));
    lVar13 = FUN_012dcaa0(param_1);
    uVar12 = *(undefined4 *)(lVar13 + 4);
    local_d0 = (undefined1  [8])
               CONCAT17((char)((uint)uVar12 >> 0x18),
                        CONCAT16((char)((uint)uVar12 >> 0x10),
                                 CONCAT15((char)((uint)uVar12 >> 8),CONCAT14((char)uVar12,fVar90))))
    ;
    pcStack_c8 = (code *)CONCAT17(uVar37,CONCAT16(uVar35,CONCAT15(uVar33,CONCAT14(SUB41(fVar30,0),
                                                                                  fVar92))));
    FUN_012dc9c0(param_1,local_d0);
    auVar75 = *(undefined1 (*) [16])(param_1 + 0x360);
    puVar27 = (undefined8 *)FUN_012dcaa0(param_1);
    pfVar17 = (float *)FUN_012dcaa0(param_2);
    fVar30 = (float)*puVar27 - *pfVar17;
    fVar90 = (float)((ulong)*puVar27 >> 0x20) - pfVar17[1];
    fVar110 = (float)puVar27[1] - pfVar17[2];
    fVar92 = (float)((ulong)puVar27[1] >> 0x20) - pfVar17[3];
    uVar11 = 0;
    auVar65._0_4_ = fVar30 * fVar30;
    auVar65._4_4_ = fVar90 * fVar90;
    auVar65._8_4_ = fVar110 * fVar110;
    auVar65._12_4_ = fVar92 * fVar92;
    auVar95 = NEON_ext(auVar65,auVar65,8,1);
    fVar29 = auVar95._0_4_ + auVar65._0_4_;
    fVar57 = auVar95._4_4_ + auVar65._4_4_;
    fVar90 = fVar29 + fVar57;
    fVar29 = fVar29 + fVar57;
    auVar66._8_8_ = CONCAT44(fVar29,fVar90);
    auVar66._0_8_ = CONCAT44(fVar29,fVar90);
    auVar95 = NEON_frsqrte(auVar66,4);
    auVar103._0_4_ = auVar95._0_4_ * fVar90;
    auVar103._4_4_ = auVar95._4_4_ * fVar29;
    auVar103._8_4_ = auVar95._8_4_ * fVar90;
    auVar103._12_4_ = auVar95._12_4_ * fVar29;
    auVar104 = NEON_frsqrts(auVar95,auVar103,4);
    auVar83._0_4_ = auVar95._0_4_ * auVar104._0_4_;
    auVar83._4_4_ = auVar95._4_4_ * auVar104._4_4_;
    auVar83._8_4_ = auVar95._8_4_ * auVar104._8_4_;
    auVar83._12_4_ = auVar95._12_4_ * auVar104._12_4_;
    auVar105._0_4_ = fVar90 * auVar83._0_4_;
    auVar105._4_4_ = fVar29 * auVar83._4_4_;
    auVar105._8_4_ = fVar90 * auVar83._8_4_;
    auVar105._12_4_ = fVar29 * auVar83._12_4_;
    iVar58 = -(uint)(fVar90 == 0.0);
    iVar70 = -(uint)(fVar90 == 0.0);
    iVar71 = -(uint)(fVar29 == 0.0);
    auVar95 = NEON_frsqrts(auVar83,auVar105,4);
    fVar30 = fVar30 * auVar83._0_4_ * auVar95._0_4_;
    fVar110 = fVar110 * auVar83._8_4_ * auVar95._8_4_;
    fVar92 = fVar92 * auVar83._12_4_ * auVar95._12_4_;
    auVar84._0_4_ = auVar75._0_4_ * auVar75._0_4_;
    auVar84._4_4_ = 0;
    auVar84._8_4_ = auVar75._8_4_ * auVar75._8_4_;
    auVar84._12_4_ = 0;
    auVar95 = NEON_ext(auVar84,auVar84,8,1);
    local_190._4_1_ = auVar75[4];
    local_190._5_1_ = auVar75[5];
    local_190._6_1_ = auVar75[6];
    local_190._7_1_ = auVar75[7];
    fVar29 = SQRT(auVar95._0_4_ + auVar84._0_4_ + auVar95._4_4_ + 0.0);
    fVar90 = (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18),
                             CONCAT12((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10),
                                      CONCAT11((byte)((uint)fVar92 >> 8) &
                                               ~(byte)((uint)iVar71 >> 8),
                                               SUB41(fVar92,0) & ~(byte)iVar71))) * fVar29;
    *(ulong *)(param_1 + 0x368) =
         CONCAT17((char)((uint)fVar90 >> 0x18),
                  CONCAT16((char)((uint)fVar90 >> 0x10),
                           CONCAT15((char)((uint)fVar90 >> 8),
                                    CONCAT14(SUB41(fVar90,0),
                                             (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                             ~(byte)((uint)iVar70 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar110 >> 0x10)
                                                                      & ~(byte)((uint)iVar70 >> 0x10
                                                                               ),
                                                                      CONCAT11((byte)((uint)fVar110
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar70
                                                                                      >> 8),
                                                                               SUB41(fVar110,0) &
                                                                               ~(byte)iVar70))) *
                                             fVar29))));
    *(ulong *)(param_1 + 0x360) =
         CONCAT17(local_190._7_1_,
                  CONCAT16(local_190._6_1_,
                           CONCAT15(local_190._5_1_,
                                    CONCAT14(local_190._4_1_,
                                             (float)CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                             ~(byte)((uint)iVar58 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                                      ~(byte)((uint)iVar58 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar30
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar58
                                                                                      >> 8),
                                                                               SUB41(fVar30,0) &
                                                                               ~(byte)iVar58))) *
                                             fVar29))));
    goto LAB_01325950;
  }
  if (lVar13 != -0xcf39e19ba64fe02) goto LAB_01325950;
  if ((*(long *)(param_2 + 0x68) != 0) &&
     (puVar27 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar27 != (undefined8 *)0x0)) {
    plVar14 = (long *)(**(code **)*puVar27)(puVar27);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar58 = __cxa_guard_acquire(PTR_DAT_02715078), iVar58 != 0)) {
      uVar15 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar15;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      if (plVar14 == (long *)PTR_DAT_02715080) {
        puVar27 = puVar27 + -10;
        goto LAB_01324c54;
      }
    }
  }
  puVar27 = (undefined8 *)0x0;
LAB_01324c54:
  uVar15 = FUN_00d3fd50(puVar27,local_d0);
  if ((*(long *)(param_2 + 0x68) == 0) ||
     (puVar27 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar27 == (undefined8 *)0x0)) {
    lVar13 = FUN_012ec070(0,local_d0);
    if (lVar13 != 0) goto LAB_01324e78;
LAB_01324fd8:
    local_100 = *(long *)(param_1 + 0x310);
  }
  else {
    puVar16 = (undefined8 *)(**(code **)*puVar27)(puVar27);
    if (((*PTR_DAT_02715078 & 1) == 0) &&
       (iVar58 = __cxa_guard_acquire(PTR_DAT_02715078), iVar58 != 0)) {
      uVar21 = FUN_00a87090();
      *(undefined8 *)PTR_DAT_02715080 = uVar21;
      __cxa_guard_release(PTR_DAT_02715078);
    }
    puVar18 = (undefined8 *)0x0;
    if (puVar16 != (undefined8 *)0x0) {
      do {
        if (puVar16 == (undefined8 *)PTR_DAT_02715080) {
          puVar18 = puVar27 + -10;
          goto LAB_01324fcc;
        }
        puVar16 = (undefined8 *)*puVar16;
      } while (puVar16 != (undefined8 *)0x0);
      puVar18 = (undefined8 *)0x0;
    }
LAB_01324fcc:
    lVar13 = FUN_012ec070(puVar18,local_d0);
    if (lVar13 == 0) goto LAB_01324fd8;
LAB_01324e78:
    FUN_01322320(local_d0);
    if ((local_d0 == (undefined1  [8])0x0) || (*(int *)((long)local_d0 + 0x54) == 0)) {
      lVar13 = nn::os::GetCurrentThread();
      plVar14 = (long *)(param_1 + 0x430);
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
            while (*plVar14 == 0) {
              cVar4 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar10) {
                *plVar14 = lVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_01324eec;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = lVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_01324eec:
      if (*(long *)(param_1 + 0x398) == 0) {
        bVar10 = true;
      }
      else {
        bVar10 = *(int *)(*(long *)(param_1 + 0x398) + 0x54) == 0;
      }
      do {
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar3) {
          *plVar14 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
    }
    else {
      bVar10 = false;
    }
    if (local_d0 != (undefined1  [8])0x0) {
      (**(code **)(*(long *)((long)local_d0 + 0x48) + 0x18))();
      local_d0 = (undefined1  [8])0x0;
    }
    if (!bVar10) goto LAB_01324fd8;
    puVar27 = (undefined8 *)FUN_012dcaa0(param_1);
    pfVar17 = (float *)FUN_012dcaa0(param_2);
    fVar30 = (float)*puVar27 - *pfVar17;
    fVar90 = (float)((ulong)*puVar27 >> 0x20) - pfVar17[1];
    fVar110 = (float)puVar27[1] - pfVar17[2];
    fVar92 = (float)((ulong)puVar27[1] >> 0x20) - pfVar17[3];
    auVar60._0_4_ = fVar30 * fVar30;
    auVar60._4_4_ = fVar90 * fVar90;
    auVar60._8_4_ = fVar110 * fVar110;
    auVar60._12_4_ = fVar92 * fVar92;
    auVar75 = NEON_ext(auVar60,auVar60,8,1);
    fVar57 = auVar75._0_4_ + auVar60._0_4_;
    fVar69 = auVar75._4_4_ + auVar60._4_4_;
    fVar29 = fVar57 + fVar69;
    fVar57 = fVar57 + fVar69;
    auVar61._8_8_ = CONCAT44(fVar57,fVar29);
    auVar61._0_8_ = CONCAT44(fVar57,fVar29);
    auVar75 = NEON_frsqrte(auVar61,4);
    auVar94._0_4_ = auVar75._0_4_ * fVar29;
    auVar94._4_4_ = auVar75._4_4_ * fVar57;
    auVar94._8_4_ = auVar75._8_4_ * fVar29;
    auVar94._12_4_ = auVar75._12_4_ * fVar57;
    auVar95 = NEON_frsqrts(auVar75,auVar94,4);
    auVar76._0_4_ = auVar75._0_4_ * auVar95._0_4_;
    auVar76._4_4_ = auVar75._4_4_ * auVar95._4_4_;
    auVar76._8_4_ = auVar75._8_4_ * auVar95._8_4_;
    auVar76._12_4_ = auVar75._12_4_ * auVar95._12_4_;
    auVar96._0_4_ = fVar29 * auVar76._0_4_;
    auVar96._4_4_ = fVar57 * auVar76._4_4_;
    auVar96._8_4_ = fVar29 * auVar76._8_4_;
    auVar96._12_4_ = fVar57 * auVar76._12_4_;
    iVar58 = -(uint)(fVar29 == 0.0);
    iVar70 = -(uint)(fVar57 == 0.0);
    iVar71 = -(uint)(fVar29 == 0.0);
    iVar72 = -(uint)(fVar57 == 0.0);
    auVar95 = NEON_frsqrts(auVar76,auVar96,4);
    auVar75 = NEON_fmov(0x41a00000,4);
    fVar30 = fVar30 * auVar76._0_4_ * auVar95._0_4_ * auVar75._0_4_;
    fVar90 = fVar90 * auVar76._4_4_ * auVar95._4_4_ * auVar75._4_4_;
    fVar110 = fVar110 * auVar76._8_4_ * auVar95._8_4_ * auVar75._8_4_;
    fVar92 = fVar92 * auVar76._12_4_ * auVar95._12_4_ * auVar75._12_4_;
    fVar90 = *(float *)(param_1 + 0x364) +
             (float)CONCAT13((byte)((uint)fVar90 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18),
                             CONCAT12((byte)((uint)fVar90 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10),
                                      CONCAT11((byte)((uint)fVar90 >> 8) &
                                               ~(byte)((uint)iVar70 >> 8),
                                               SUB41(fVar90,0) & ~(byte)iVar70)));
    fVar92 = *(float *)(param_1 + 0x36c) +
             (float)CONCAT13((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18),
                             CONCAT12((byte)((uint)fVar92 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10),
                                      CONCAT11((byte)((uint)fVar92 >> 8) &
                                               ~(byte)((uint)iVar72 >> 8),
                                               SUB41(fVar92,0) & ~(byte)iVar72)));
    *(ulong *)(param_1 + 0x368) =
         CONCAT17((char)((uint)fVar92 >> 0x18),
                  CONCAT16((char)((uint)fVar92 >> 0x10),
                           CONCAT15((char)((uint)fVar92 >> 8),
                                    CONCAT14(SUB41(fVar92,0),
                                             *(float *)(param_1 + 0x368) +
                                             (float)CONCAT13((byte)((uint)fVar110 >> 0x18) &
                                                             ~(byte)((uint)iVar71 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar110 >> 0x10)
                                                                      & ~(byte)((uint)iVar71 >> 0x10
                                                                               ),
                                                                      CONCAT11((byte)((uint)fVar110
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar71
                                                                                      >> 8),
                                                                               SUB41(fVar110,0) &
                                                                               ~(byte)iVar71)))))));
    *(ulong *)(param_1 + 0x360) =
         CONCAT17((char)((uint)fVar90 >> 0x18),
                  CONCAT16((char)((uint)fVar90 >> 0x10),
                           CONCAT15((char)((uint)fVar90 >> 8),
                                    CONCAT14(SUB41(fVar90,0),
                                             *(float *)(param_1 + 0x360) +
                                             (float)CONCAT13((byte)((uint)fVar30 >> 0x18) &
                                                             ~(byte)((uint)iVar58 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                                                      ~(byte)((uint)iVar58 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar30
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar58
                                                                                      >> 8),
                                                                               SUB41(fVar30,0) &
                                                                               ~(byte)iVar58)))))));
    local_100 = *(long *)(param_1 + 0x310);
  }
  if (local_100 != 0) {
    (**(code **)(*(long *)(local_100 + 0x48) + 0x10))();
  }
  uVar19 = FUN_012e7640(uVar15,&local_100);
  if ((uVar19 & 1) == 0) {
LAB_013250e4:
    if (local_100 != 0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = 0;
    }
  }
  else {
    lVar13 = nn::os::GetCurrentThread();
    plVar14 = (long *)(param_1 + 0x430);
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x424));
          while (*plVar14 == 0) {
            cVar4 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar10) {
              *plVar14 = lVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01325048;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01325048:
    if (*(long *)(param_1 + 0x398) == 0) {
      do {
        cVar4 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar10) {
          *plVar14 = 0;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
      goto LAB_013250e4;
    }
    iVar58 = *(int *)(*(long *)(param_1 + 0x398) + 0x54);
    do {
      cVar4 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar10) {
        *plVar14 = 0;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x424));
    if (iVar58 == 0) goto LAB_013250e4;
    uVar19 = FUN_01323e80(param_1);
    if (local_100 != 0) {
      (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
      local_100 = 0;
    }
    if ((uVar19 & 1) == 0) {
      local_170 = 0;
      uStack_168 = 0;
      local_180 = 0;
      local_178 = (code *)0x0;
      FUN_01324190(param_1,&local_180);
      pcVar9 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar9)(auStack_160);
        uVar11 = 0;
        goto LAB_01325950;
      }
      goto LAB_0132594c;
    }
  }
  _local_d0 = FUN_0130fa00(param_1);
  local_f0 = 0x701b88277b0a01ea;
  local_e8 = (char *)0x0;
  uVar11 = FUN_012ecf40(local_d0,&local_f0);
LAB_01325950:
  return uVar11 & 1;
}


