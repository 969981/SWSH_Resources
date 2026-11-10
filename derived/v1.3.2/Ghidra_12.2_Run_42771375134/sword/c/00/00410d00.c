/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00410d00; name: FUN_00410d00
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00412214) */
/* WARNING: Removing unreachable block (ram,0x00411360) */
/* WARNING: Type propagation algorithm not settling */

void FUN_00410d00(long *param_1,int param_2,long *param_3,long *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  undefined1 auVar7 [16];
  int iVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  byte bVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  uint uVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long lVar29;
  long *plVar30;
  long lVar31;
  byte bVar32;
  undefined4 uVar33;
  int *piVar34;
  long *plVar35;
  undefined8 *puVar36;
  double dVar37;
  double dVar38;
  undefined8 *local_3d8;
  undefined8 *local_3d0;
  undefined8 *local_3c8;
  int local_3b4;
  long local_3b0;
  long *local_3a0;
  undefined8 *local_380;
  undefined4 local_378;
  undefined4 local_374;
  undefined8 *local_370;
  undefined4 local_368;
  undefined8 local_360;
  undefined4 uStack_358;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  int local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined1 auStack_228 [4];
  int local_224;
  long local_220;
  int local_218;
  undefined1 auStack_214 [4];
  undefined1 auStack_210 [8];
  undefined4 local_208;
  undefined1 local_204;
  undefined4 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  byte local_1e8;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  byte bStack_1cc;
  undefined8 local_1c8;
  undefined5 uStack_1c0;
  undefined3 local_1bb;
  undefined4 uStack_1b8;
  byte bStack_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  byte local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined1 auStack_190 [264];
  ulong local_88 [2];
  int local_78;
  char local_66;
  
  lVar31 = *(long *)(param_1[0xc] + 8);
  lVar14 = FUN_0040b100();
  FUN_00418860(auStack_190,param_1,0);
  if (local_88[0] == 0) {
    FUN_00409430(*param_4);
    *param_4 = 0;
    goto LAB_004121d0;
  }
  plVar26 = (long *)param_1[0x15];
  if (plVar26 == (long *)0x0) {
    plVar26 = (long *)0x0;
    plVar30 = (long *)0x0;
    plVar23 = (long *)param_1[0x14];
    plVar19 = (long *)*plVar23;
  }
  else {
    plVar19 = param_1 + 0x13;
    plVar24 = (long *)*plVar19;
    plVar23 = plVar24;
    if ((plVar24 != (long *)0x0) && (plVar26 != plVar24)) {
      do {
        plVar23 = (long *)*plVar23;
      } while (plVar23 != (long *)0x0 && plVar26 != plVar23);
    }
    if (plVar23 == (long *)0x0) {
      plVar26 = (long *)0x0;
LAB_00410e34:
      plVar30 = (long *)0x0;
    }
    else {
      plVar26 = (long *)*plVar23;
      if (plVar26 == (long *)0x0) goto LAB_00410e34;
      plVar30 = (long *)0x0;
      plVar25 = (long *)0x0;
      while( true ) {
        plVar28 = (long *)*plVar26;
        plVar27 = plVar19;
        if (plVar24 != plVar26) {
          plVar27 = plVar23;
        }
        *plVar27 = (long)plVar28;
        if ((long *)param_1[0x12] == plVar26) {
          param_1[0x12] = (long)plVar23;
          *plVar26 = 0;
        }
        else {
          *plVar26 = 0;
        }
        plVar24 = plVar26;
        if (plVar30 != (long *)0x0) {
          *plVar25 = (long)plVar26;
          plVar24 = plVar30;
        }
        plVar30 = plVar24;
        if (plVar28 == (long *)0x0) break;
        plVar24 = (long *)*plVar19;
        plVar25 = plVar26;
        plVar26 = plVar28;
      }
    }
    (**(code **)(*param_1 + 0xa0))(param_1,auStack_190);
    plVar23 = (long *)param_1[0x14];
    plVar19 = (long *)*plVar23;
  }
  lVar31 = lVar31 - lVar14;
  if (plVar19 != (long *)0x0) {
    plVar24 = plVar23;
    do {
      plVar25 = plVar19;
      uVar15 = (**(code **)(*(long *)plVar24[1] + 0xb8))();
      if (((uVar15 & 1) == 0) ||
         ((*(byte *)(plVar25[1] + 0x5a) & 3) != 0 && (*(byte *)(plVar25[1] + 0x5a) & 0x10) == 0)) {
        plVar23 = plVar25;
      }
      plVar19 = (long *)*plVar25;
      plVar24 = plVar25;
    } while ((long *)*plVar25 != (long *)0x0);
  }
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x128) != '\0')) {
    lVar14 = (**(code **)(*(long *)plVar23[1] + 0xb0))();
    if (lVar14 == 0) {
      if (param_2 != 0) goto LAB_00410ee0;
    }
    else if (*(int *)(lVar14 + 0x10) != param_2) goto LAB_00410ee0;
  }
  else {
LAB_00410ee0:
    uVar15 = (**(code **)(*(long *)plVar23[1] + 0xb8))();
    if ((uVar15 & 1) != 0) {
      local_78 = local_78 + 1;
      plVar19 = param_1 + 0x13;
      plVar24 = (long *)*plVar19;
      if ((plVar24 != (long *)0x0) && (plVar24 != plVar23)) {
        do {
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0 && plVar24 != plVar23);
      }
      local_360 = plVar24;
      plVar25 = (long *)FUN_00419050(auStack_190);
      if (plVar24 != plVar25) {
        FUN_00418fe0(auStack_190,&local_360);
        (**(code **)(*(long *)local_360[1] + 0x98))((long *)local_360[1],auStack_190,0);
      }
      local_78 = local_78 + -1;
      puVar36 = (undefined8 *)0x0;
      local_3d8 = (undefined8 *)0x0;
      local_3d0 = (undefined8 *)0x0;
      local_380 = (undefined8 *)0x0;
      local_198 = 0;
      local_19c = 0;
      local_208 = 0;
      local_204 = 0;
      local_200 = 0;
      local_3b4 = -1;
      local_3a0 = (long *)0x0;
      bVar9 = true;
      local_3c8 = (undefined8 *)0x0;
LAB_00410fc0:
      do {
        lVar14 = FUN_00412b00(param_1,auStack_190,*param_4,&local_19c,auStack_210);
        iVar11 = *(int *)(lVar14 + 0x58);
        if (iVar11 != local_3b4) {
          if (puVar36 == (undefined8 *)0x0) {
            local_3c8 = (undefined8 *)0x0;
            bVar18 = *(byte *)(local_88[0] + 0x44);
          }
          else if (local_380 == (undefined8 *)0x0) {
            uVar33 = *(undefined4 *)PTR_DAT_02712a90;
            lVar16 = puVar36[1];
            puVar36[1] = 0;
            if ((lVar16 != 0) && (FUN_00408b50(), puVar36[1] != 0)) {
              FUN_00408b50();
              puVar36[1] = 0;
            }
            FUN_00404870(uVar33,local_3c8);
            local_3d8 = (undefined8 *)0x0;
            local_3d0 = (undefined8 *)0x0;
            local_3c8 = (undefined8 *)0x0;
            local_380 = (undefined8 *)0x0;
            puVar36 = (undefined8 *)0x0;
            bVar18 = *(byte *)(local_88[0] + 0x44);
          }
          else {
            *(byte *)(puVar36 + 10) = *(byte *)(puVar36 + 10) & 0xfc;
            FUN_00409430(puVar36[1]);
            uVar33 = *(undefined4 *)PTR_DAT_02712a90;
            lVar16 = puVar36[1];
            puVar36[1] = 0;
            if ((lVar16 != 0) && (FUN_00408b50(), puVar36[1] != 0)) {
              FUN_00408b50();
              puVar36[1] = 0;
            }
            FUN_00404870(uVar33,local_3c8);
            uVar33 = *(undefined4 *)PTR_DAT_02712a90;
            lVar16 = local_380[1];
            local_380[1] = 0;
            if ((lVar16 != 0) && (FUN_00408b50(), local_380[1] != 0)) {
              FUN_00408b50();
              local_380[1] = 0;
            }
            FUN_00404870(uVar33,local_3d0);
            local_3d8 = (undefined8 *)0x0;
            local_3d0 = (undefined8 *)0x0;
            local_380 = (undefined8 *)0x0;
            bVar18 = *(byte *)(local_88[0] + 0x44);
          }
          if ((bVar18 >> 2 & 1) != 0) {
LAB_00412068:
            if (bVar9) goto LAB_00411e60;
            goto LAB_00412164;
          }
          if ((*(undefined4 **)(lVar14 + 0x50) == (undefined4 *)0x0) ||
             (plVar24 = (long *)FUN_00435260(*(undefined8 *)PTR_DAT_02712ae8,
                                             **(undefined4 **)(lVar14 + 0x50),0),
             plVar24 == (long *)0x0)) {
LAB_0041116c:
            lVar16 = *param_4;
            local_3c8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
            if (local_3c8 == (undefined8 *)0x0) {
              local_3c8 = (undefined8 *)0x0;
              puVar36 = (undefined8 *)0x0;
              goto LAB_00412068;
            }
            *local_3c8 = 0;
            local_3c8[1] = lVar16;
            if (lVar16 != 0) {
LAB_00411190:
              *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            }
LAB_0041119c:
            local_3c8[8] = 0x400000000;
            local_3a0 = (long *)0x0;
            local_3c8[2] = 0;
            *(undefined1 *)(local_3c8 + 3) = 0;
            *(undefined1 *)(local_3c8 + 9) = 0;
            *(byte *)(local_3c8 + 10) = *(byte *)(local_3c8 + 10) & 0xf8;
          }
          else {
            lVar16 = param_1[0xc];
            local_3a0 = (long *)(**(code **)(*plVar24 + 0x260))
                                          (plVar24,param_1,*(undefined8 *)(lVar16 + 0x30),
                                           lVar16 + 0x18,*(undefined1 *)(lVar16 + 0x38));
            (**(code **)(*plVar24 + 0x18))(plVar24);
            if (local_3a0 == (long *)0x0) goto LAB_0041116c;
            local_3c8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
            if (local_3c8 == (undefined8 *)0x0) {
              local_3c8 = (undefined8 *)0x0;
            }
            else {
              *local_3c8 = 0;
              local_3c8[1] = local_3a0;
              *(int *)(local_3a0 + 9) = (int)local_3a0[9] + 1;
              local_3c8[8] = 0x400000000;
              local_3c8[2] = 0;
              *(undefined1 *)(local_3c8 + 3) = 0;
              *(undefined1 *)(local_3c8 + 9) = 0;
              *(byte *)(local_3c8 + 10) = *(byte *)(local_3c8 + 10) & 0xf8;
            }
            lVar16 = *param_4;
            local_3d8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
            if (local_3d8 == (undefined8 *)0x0) {
              if (local_3c8 != (undefined8 *)0x0) {
                *(byte *)(local_3c8 + 10) = *(byte *)(local_3c8 + 10) & 0xfc;
                FUN_00409430(local_3c8[1]);
                uVar33 = *(undefined4 *)PTR_DAT_02712a90;
                lVar16 = local_3c8[1];
                local_3c8[1] = 0;
                if ((lVar16 != 0) && (FUN_00408b50(), local_3c8[1] != 0)) {
                  FUN_00408b50();
                  local_3c8[1] = 0;
                }
                goto LAB_00411c54;
              }
              FUN_00409430(local_3a0);
LAB_00411c74:
              lVar16 = *param_4;
              local_3c8 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x58);
              if (local_3c8 != (undefined8 *)0x0) {
                *local_3c8 = 0;
                local_3c8[1] = lVar16;
                if (lVar16 != 0) {
                  local_3d8 = (undefined8 *)0x0;
                  local_3d0 = (undefined8 *)0x0;
                  local_380 = (undefined8 *)0x0;
                  goto LAB_00411190;
                }
                local_3d8 = (undefined8 *)0x0;
                local_3d0 = (undefined8 *)0x0;
                local_380 = (undefined8 *)0x0;
                goto LAB_0041119c;
              }
              local_3d8 = (undefined8 *)0x0;
              local_380 = (undefined8 *)0x0;
              local_3c8 = (undefined8 *)0x0;
              puVar36 = (undefined8 *)0x0;
              if (!bVar9) goto LAB_00412164;
              goto LAB_00411e60;
            }
            *local_3d8 = 0;
            local_3d8[1] = lVar16;
            if (lVar16 != 0) {
              *(int *)(lVar16 + 0x48) = *(int *)(lVar16 + 0x48) + 1;
            }
            local_3d8[2] = 0;
            *(undefined1 *)(local_3d8 + 3) = 0;
            local_3d8[8] = 0x400000000;
            *(undefined1 *)(local_3d8 + 9) = 0;
            *(byte *)(local_3d8 + 10) = *(byte *)(local_3d8 + 10) & 0xf8;
            if (local_3c8 == (undefined8 *)0x0) {
              FUN_00409430(local_3a0);
              uVar33 = *(undefined4 *)PTR_DAT_02712a90;
              lVar16 = local_3d8[1];
              local_3d8[1] = 0;
              local_3c8 = local_3d8;
              if ((lVar16 != 0) && (FUN_00408b50(), local_3d8[1] != 0)) {
                FUN_00408b50();
                local_3d8[1] = 0;
              }
LAB_00411c54:
              FUN_00404870(uVar33,local_3c8);
              goto LAB_00411c74;
            }
            local_3d0 = local_3d8;
            local_380 = local_3d8;
          }
          local_1a0 = *(byte *)(lVar14 + 0x30);
          local_1a8 = *(ulong *)(lVar14 + 0x28);
          local_1b0 = *(undefined8 *)(lVar14 + 0x20);
          uStack_1b8 = (undefined4)((ulong)*(undefined8 *)(lVar14 + 0x41) >> 0x18);
          bStack_1b4 = (byte)((ulong)*(undefined8 *)(lVar14 + 0x41) >> 0x38);
          uVar20 = *(undefined8 *)(lVar14 + 0x3c);
          uStack_1c0 = (undefined5)uVar20;
          local_1bb = (undefined3)((ulong)uVar20 >> 0x28);
          local_1c8 = *(undefined8 *)(lVar14 + 0x34);
          lVar16 = *(long *)(lVar14 + 0x50);
          if (lVar16 == 0) {
            local_1d8 = (undefined4)uVar20;
            uStack_1d4 = (undefined4)((ulong)uVar20 >> 0x20);
            cVar6 = (char)param_3[1];
            local_1e8 = local_1a0;
            local_1f0 = local_1a8;
            local_1f8 = local_1b0;
            local_1e0 = local_1c8;
            uStack_1d0 = uStack_1b8;
            bStack_1cc = bStack_1b4;
          }
          else {
            local_1d8 = *(undefined4 *)(lVar16 + 0xc);
            local_1e0 = *(undefined8 *)(lVar16 + 4);
            uStack_1d4 = 0;
            bStack_1cc = bStack_1cc & 0xe0 | (*(byte *)(lVar16 + 0x1c) & 1) << 3;
            local_1f8 = *(undefined8 *)(lVar16 + 0x10);
            local_1f0 = (ulong)*(uint *)(lVar16 + 0x18);
            local_1e8 = local_1e8 & 0xc0 | (*(byte *)(lVar16 + 0x1c) >> 1 & 1) << 5 | 7;
            cVar6 = (char)param_3[1];
          }
          if (cVar6 != '\0') {
            bStack_1b4 = bStack_1b4 & 0xf8 | *(byte *)((long)param_3 + 0xc) & 7;
          }
          puVar21 = (undefined4 *)*param_3;
          if (puVar21 == (undefined4 *)0x0) {
            local_208 = 0;
            local_204 = 0;
          }
          else {
            local_204 = *(undefined1 *)(puVar21 + 1);
            local_208 = *puVar21;
          }
          local_200 = *(undefined4 *)(lVar14 + 0x44);
          puVar36 = local_3c8;
          local_3b4 = iVar11;
        }
        iVar11 = (**(code **)(*(long *)*param_4 + 0x90))
                           ((long *)*param_4,&local_1c8,&local_208,&local_218,auStack_214,0,0);
      } while (iVar11 == 2);
      if (iVar11 != 0) {
        local_230 = 0;
        FUN_00418830(&local_360,1);
        if (local_380 == (undefined8 *)0x0) {
          local_3b0 = 0;
          local_224 = local_218;
          auVar7 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)(int)local_1b0)) *
                   SEXT816(0x20c49ba5e353f7cf);
          iVar11 = ((int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f)) - (int)local_1a8;
          if (iVar11 <= local_218) {
            iVar11 = local_218;
          }
          lVar14 = lVar31 + iVar11;
        }
        else {
          local_370 = (undefined8 *)((ulong)local_370 & 0xffffff0000000000);
          local_368 = 0;
          (**(code **)(*local_3a0 + 0x90))
                    (local_3a0,&local_1e0,&local_370,&local_224,auStack_228,0,0);
          iVar13 = local_218;
          iVar11 = local_224;
          lVar14 = FUN_0040b030(local_3a0,0);
          if (lVar14 == 0) {
            lVar14 = 0;
          }
          else {
            iVar12 = FUN_0040ead0();
            lVar14 = -(long)iVar12;
          }
          auVar7 = SEXT816((long)((ulong)*(uint *)PTR_DAT_02712b38 * (long)(int)local_1b0)) *
                   SEXT816(0x20c49ba5e353f7cf);
          iVar12 = ((int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f)) - (int)local_1a8;
          if (iVar12 <= iVar11) {
            iVar12 = iVar11;
          }
          auVar7 = SEXT816((long)((long)(int)local_1f8 * (ulong)*(uint *)PTR_DAT_02712b38)) *
                   SEXT816(0x20c49ba5e353f7cf);
          iVar8 = ((int)(auVar7._8_8_ >> 7) - (auVar7._12_4_ >> 0x1f)) - (int)local_1f0;
          iVar11 = iVar8;
          if (iVar8 <= iVar13) {
            iVar11 = iVar13;
          }
          lVar16 = lVar14 + lVar31 + (long)iVar11;
          lVar14 = lVar31 + iVar12;
          if (lVar31 + iVar12 <= lVar16) {
            lVar14 = lVar16;
          }
          if (iVar8 <= local_218) {
            iVar8 = local_218;
          }
          local_3b0 = lVar31 + iVar8;
        }
        local_378 = 0;
        bVar18 = local_1a0;
        do {
          bVar32 = bVar18 & 0x1f;
          bVar10 = true;
          if ((bStack_1b4 & 7) != 1) {
            if ((bStack_1b4 >> 4 & 1) == 0) {
              bVar10 = false;
            }
            else {
              bVar10 = (bStack_1b4 & 7 | 1) == 3;
            }
          }
          local_374 = local_1a8._4_4_;
          iVar11 = FUN_00418a30(auStack_190,lVar14,bVar32,&local_374,bVar10 ^ 1,1,&local_220);
          if (iVar11 == 3) {
            if (local_66 == '\0') {
              iVar11 = 3;
            }
            else {
              plVar25 = (long *)*plVar19;
              plVar24 = plVar25;
              if ((plVar25 != (long *)0x0) && (plVar23 != plVar25)) {
                do {
                  plVar24 = (long *)*plVar24;
                } while (plVar24 != (long *)0x0 && plVar23 != plVar24);
              }
              if (plVar24 != (long *)0x0) {
                plVar27 = (long *)*plVar24;
                plVar28 = plVar30;
                plVar35 = plVar26;
                if ((long *)*plVar24 != (long *)0x0) {
                  while( true ) {
                    plVar26 = plVar27;
                    plVar27 = (long *)*plVar26;
                    plVar30 = plVar19;
                    if (plVar25 != plVar26) {
                      plVar30 = plVar24;
                    }
                    *plVar30 = (long)plVar27;
                    if ((long *)param_1[0x12] == plVar26) {
                      param_1[0x12] = (long)plVar24;
                      *plVar26 = 0;
                    }
                    else {
                      *plVar26 = 0;
                    }
                    plVar30 = plVar26;
                    if (plVar28 != (long *)0x0) {
                      *plVar35 = (long)plVar26;
                      plVar30 = plVar28;
                    }
                    if (plVar27 == (long *)0x0) break;
                    plVar25 = (long *)*plVar19;
                    plVar28 = plVar30;
                    plVar35 = plVar26;
                  }
                  bVar32 = local_1a0 & 0x1f;
                  bVar18 = local_1a0;
                }
              }
              (**(code **)(*param_1 + 0xa0))(param_1,auStack_190);
              bVar10 = true;
              if ((bStack_1b4 & 7) != 1) {
                if ((bStack_1b4 >> 4 & 1) == 0) {
                  bVar10 = false;
                }
                else {
                  bVar10 = (bStack_1b4 & 7 | 1) == 3;
                }
              }
              iVar11 = FUN_00418a30(auStack_190,lVar14,bVar32,&local_374,bVar10 ^ 1,1,&local_220);
            }
          }
          local_260 = 0;
          local_240 = 0;
          local_248 = 0;
          local_258 = 0;
          uStack_250 = 0;
          local_238 = 0x1000001;
          if ((local_380 != (undefined8 *)0x0) && (iVar11 == 1)) {
            *(long *)(puVar36[1] + 0x68) = local_220;
            local_248 = 1;
            local_370 = puVar36;
            FUN_00418fe0(&local_360,&local_370);
            (**(code **)(*(long *)local_370[1] + 0x98))((long *)local_370[1],&local_360,0);
            local_248 = local_248 + -1;
            iVar11 = FUN_00418a30(&local_360,local_3b0,local_1e8 & 0x1f,&local_378,1,1,&local_230);
          }
          lVar14 = local_220;
          bVar32 = bStack_1b4 & 7;
          if (bVar32 != 1) {
            if ((bStack_1b4 >> 4 & 1) != 0) {
              bVar10 = (bVar32 | 1) == 3;
              goto joined_r0x0041181c;
            }
LAB_0041189c:
            if (iVar11 == 1) goto LAB_004118a4;
            (**(code **)(*param_1 + 0x98))(param_1,auStack_190,0);
            bVar10 = false;
            local_3b4 = -1;
            goto LAB_00411e3c;
          }
          bVar10 = true;
joined_r0x0041181c:
          if (((iVar11 != 1) || (!bVar10)) || (*param_3 != 0)) goto LAB_0041189c;
          if (*(long *)(local_88[0] + 0x18) == 0) goto LAB_00411894;
          if (bVar32 == 1) {
            lVar16 = FUN_00419150(auStack_190,0);
            local_208 = FUN_00419200(local_88,lVar14 - lVar16);
            local_204 = 0;
            (**(code **)(*(long *)*param_4 + 0x90))
                      ((long *)*param_4,&local_1c8,&local_208,&local_218,auStack_214,0,1);
            iVar13 = local_224;
            iVar11 = local_218;
          }
          else {
            (**(code **)(*(long *)*param_4 + 0x90))
                      ((long *)*param_4,&local_1c8,&local_208,&local_218,auStack_214,local_374,1);
            iVar13 = local_224;
            iVar11 = local_218;
          }
          local_218 = iVar11;
          if (local_380 == (undefined8 *)0x0) {
            local_224 = iVar11;
          }
          else {
            local_224 = iVar13;
            lVar14 = FUN_0040b030(local_3a0,0);
            iVar12 = 0;
            if (lVar14 != 0) {
              iVar12 = FUN_0040ead0();
            }
            iVar12 = iVar11 - iVar12;
            iVar11 = iVar13;
            if (iVar13 <= iVar12) {
              iVar11 = iVar12;
            }
          }
          if ((long)iVar11 <= local_220 - lVar31) goto LAB_00411894;
          lVar14 = lVar31 + iVar11;
        } while( true );
      }
      *param_4 = 0;
      goto LAB_00411e50;
    }
  }
  plVar24 = param_1 + 0x13;
  plVar25 = (long *)*plVar24;
  plVar19 = plVar25;
  if ((plVar25 != (long *)0x0) && (plVar25 != plVar23)) {
    do {
      plVar19 = (long *)*plVar19;
    } while (plVar19 != (long *)0x0 && plVar19 != plVar23);
  }
  if (plVar19 != (long *)0x0) {
    plVar23 = (long *)*plVar19;
    plVar27 = plVar30;
    if ((long *)*plVar19 != (long *)0x0) {
      while( true ) {
        plVar28 = plVar23;
        plVar23 = (long *)*plVar28;
        plVar30 = plVar24;
        if (plVar25 != plVar28) {
          plVar30 = plVar19;
        }
        *plVar30 = (long)plVar23;
        if ((long *)param_1[0x12] == plVar28) {
          param_1[0x12] = (long)plVar19;
          *plVar28 = 0;
        }
        else {
          *plVar28 = 0;
        }
        plVar30 = plVar28;
        if (plVar27 != (long *)0x0) {
          *plVar26 = (long)plVar28;
          plVar30 = plVar27;
        }
        if (plVar23 == (long *)0x0) break;
        plVar25 = (long *)*plVar24;
        plVar27 = plVar30;
        plVar26 = plVar28;
      }
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1,auStack_190);
  FUN_00409430(*param_4);
  *param_4 = 0;
  uVar15 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xb8))();
  puVar21 = (undefined4 *)PTR_DAT_02712a90;
  if ((uVar15 & 1) != 0) {
    lVar14 = param_1[0x12];
    if ((*(byte *)(lVar14 + 0x50) & 6) == 4) {
      dVar38 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
      dVar38 = ((double)((int)lVar31 - *(int *)(lVar14 + 0x38)) * DAT_01cd51e8) / dVar38;
      dVar37 = 0.5;
      if (dVar38 <= 0.0) {
        dVar37 = -0.5;
      }
      local_360 = (long *)CONCAT44(*(undefined4 *)(lVar14 + 0x44),(int)(dVar37 + dVar38));
      uStack_358 = 0;
      FUN_004091c0(*(undefined8 *)(lVar14 + 8),&local_360);
      bVar18 = *(byte *)(lVar14 + 0x50);
    }
    else {
      bVar18 = *(byte *)(lVar14 + 0x50) & 0xfd;
      *(byte *)(lVar14 + 0x50) = bVar18;
    }
    *(byte *)(lVar14 + 0x50) = bVar18 & 0xfb;
    *(undefined1 *)(lVar14 + 0x18) = 0;
    puVar21 = (undefined4 *)PTR_DAT_02712a90;
  }
  goto joined_r0x00412170;
LAB_00411894:
  iVar11 = 1;
LAB_004118a4:
  local_78 = local_78 + 1;
  plVar23 = (long *)FUN_00419050(auStack_190);
  local_78 = local_78 + -1;
  plVar25 = (long *)*plVar19;
  plVar24 = plVar25;
  if ((plVar25 != (long *)0x0) && (plVar25 != plVar23)) {
    do {
      plVar24 = (long *)*plVar24;
    } while (plVar24 != (long *)0x0 && plVar24 != plVar23);
  }
  if (plVar24 != (long *)0x0) {
    plVar27 = (long *)*plVar24;
    plVar28 = plVar30;
    plVar35 = plVar26;
    if ((long *)*plVar24 != (long *)0x0) {
      while( true ) {
        plVar26 = plVar27;
        plVar27 = (long *)*plVar26;
        plVar30 = plVar19;
        if (plVar25 != plVar26) {
          plVar30 = plVar24;
        }
        *plVar30 = (long)plVar27;
        if ((long *)param_1[0x12] == plVar26) {
          param_1[0x12] = (long)plVar24;
          *plVar26 = 0;
        }
        else {
          *plVar26 = 0;
        }
        plVar30 = plVar26;
        if (plVar28 != (long *)0x0) {
          *plVar35 = (long)plVar26;
          plVar30 = plVar28;
        }
        if (plVar27 == (long *)0x0) break;
        plVar25 = (long *)*plVar19;
        plVar28 = plVar30;
        plVar35 = plVar26;
      }
    }
  }
  (**(code **)(*param_1 + 0xa0))(param_1,auStack_190);
  if ((*param_3 == 0) && (*(char *)(param_1[0xf] + 0x128) != '\0')) {
    lVar14 = (**(code **)(*(long *)plVar23[1] + 0xb0))();
    if (lVar14 == 0) {
      if (param_2 == 0) goto LAB_004119bc;
    }
    else if (*(int *)(lVar14 + 0x10) == param_2) {
LAB_004119bc:
      bVar10 = true;
      goto LAB_00411e3c;
    }
  }
  param_1[0x15] = (long)plVar23;
  local_370 = (undefined8 *)0x0;
  FUN_004188e0(auStack_190,&local_370);
  if (local_370 != (undefined8 *)0x0) {
    iVar13 = *(int *)(local_370 + 2);
    piVar34 = (int *)param_1[0x16];
    uVar4 = *(uint *)(param_1 + 0x17);
    piVar17 = piVar34;
    if (uVar4 == 0) {
LAB_00411a60:
      if (piVar17 == piVar34 + (ulong)uVar4 * 3) goto LAB_00411ab8;
      piVar17 = piVar17 + 1;
      lVar14 = local_220;
joined_r0x00411a78:
      iVar13 = 0;
      if (local_88[0] != 0) {
        iVar13 = 0;
        if (*(long *)(local_88[0] + 0x18) != 0) {
          iVar13 = *(int *)(*(long *)(local_88[0] + 0x18) + 0x98);
        }
      }
      *piVar17 = iVar13;
      local_220 = lVar14;
      if (*(long *)(local_88[0] + 0x18) == 0) {
        iVar13 = 0;
      }
      else {
        lVar16 = FUN_00419150(auStack_190,0);
        iVar13 = FUN_00419200(local_88,lVar14 - lVar16);
      }
      piVar17[1] = iVar13;
    }
    else {
      lVar14 = (ulong)uVar4 * 0xc;
      do {
        if (*piVar17 == iVar13) goto LAB_00411a60;
        lVar14 = lVar14 + -0xc;
        piVar17 = piVar17 + 3;
      } while (lVar14 != 0);
LAB_00411ab8:
      uVar22 = *(uint *)((long)param_1 + 0xbc);
      if (uVar22 <= uVar4) {
        uVar22 = uVar22 + 4;
        piVar34 = (int *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar22 * 0xc);
        if (piVar34 == (int *)0x0) goto LAB_00411dc4;
        piVar17 = (int *)param_1[0x16];
        if ((piVar17 != (int *)0x0) && (piVar17 != piVar34)) {
          uVar5 = *(uint *)(param_1 + 0x17);
          if (uVar5 != 0) {
            piVar34[2] = piVar17[2];
            *(undefined8 *)piVar34 = *(undefined8 *)piVar17;
            if (uVar5 != 1) {
              uVar3 = uVar5 + 3 & 3;
              if ((ulong)uVar5 - 2 < 3) {
                lVar16 = 1;
              }
              else {
                lVar14 = 0x30;
                lVar16 = 1;
                do {
                  lVar29 = param_1[0x16];
                  puVar1 = (undefined8 *)((long)piVar34 + lVar14);
                  *(undefined4 *)((long)puVar1 + -0x1c) = *(undefined4 *)(lVar29 + lVar14 + -0x1c);
                  *(undefined8 *)((long)puVar1 + -0x24) = *(undefined8 *)(lVar29 + lVar14 + -0x24);
                  lVar29 = param_1[0x16];
                  *(undefined4 *)(puVar1 + -2) = *(undefined4 *)(lVar29 + lVar14 + -0x10);
                  puVar1[-3] = *(undefined8 *)(lVar29 + lVar14 + -0x18);
                  lVar29 = param_1[0x16];
                  *(undefined4 *)((long)puVar1 + -4) = *(undefined4 *)(lVar29 + lVar14 + -4);
                  *(undefined8 *)((long)puVar1 + -0xc) = *(undefined8 *)(lVar29 + lVar14 + -0xc);
                  puVar2 = (undefined8 *)(param_1[0x16] + lVar14);
                  lVar14 = lVar14 + 0x30;
                  *puVar1 = *puVar2;
                  lVar16 = lVar16 + 4;
                  *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(puVar2 + 1);
                } while ((ulong)uVar5 - (ulong)uVar3 != lVar16);
              }
              if (uVar3 != 0) {
                lVar16 = lVar16 * 0xc;
                lVar14 = -(ulong)uVar3;
                do {
                  puVar1 = (undefined8 *)(param_1[0x16] + lVar16);
                  puVar2 = (undefined8 *)((long)piVar34 + lVar16);
                  lVar16 = lVar16 + 0xc;
                  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar1 + 1);
                  lVar14 = lVar14 + 1;
                  *puVar2 = *puVar1;
                } while (lVar14 != 0);
              }
            }
            piVar17 = (int *)param_1[0x16];
          }
          FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,piVar17);
        }
        param_1[0x16] = (long)piVar34;
        *(uint *)((long)param_1 + 0xbc) = uVar22;
      }
      if (uVar4 < uVar22) {
        uVar4 = *(uint *)(param_1 + 0x17);
        *(uint *)(param_1 + 0x17) = uVar4 + 1;
        if (piVar34 + (ulong)uVar4 * 3 != (int *)0x0) {
          piVar34[(ulong)uVar4 * 3] = iVar13;
          piVar17 = piVar34 + (ulong)uVar4 * 3 + 1;
          lVar14 = local_220;
          goto joined_r0x00411a78;
        }
      }
    }
  }
LAB_00411dc4:
  FUN_00412be0(param_1,lVar31,puVar36,&local_1b0,&local_1e0,auStack_190,local_224,local_220,0,
               &local_198);
  if (local_380 != (undefined8 *)0x0) {
    FUN_00412be0(param_1,lVar31,local_380,&local_1f8,&local_1c8,&local_360,local_218,local_230,1,
                 &local_198);
  }
  bVar10 = false;
  bVar9 = false;
LAB_00411e3c:
  FUN_004188d0(&local_360);
  if (iVar11 == 1 || bVar10) goto LAB_00411e50;
  goto LAB_00410fc0;
LAB_00411e50:
  if (bVar9) {
LAB_00411e60:
    if (puVar36 != (undefined8 *)0x0) {
      if (local_380 == (undefined8 *)0x0) {
        uVar33 = *(undefined4 *)PTR_DAT_02712a90;
        lVar14 = puVar36[1];
        puVar36[1] = 0;
        if ((lVar14 != 0) && (FUN_00408b50(), puVar36[1] != 0)) {
          FUN_00408b50();
          puVar36[1] = 0;
        }
      }
      else {
        *(byte *)(puVar36 + 10) = *(byte *)(puVar36 + 10) & 0xfc;
        FUN_00409430(puVar36[1]);
        uVar33 = *(undefined4 *)PTR_DAT_02712a90;
        lVar14 = puVar36[1];
        puVar36[1] = 0;
        if ((lVar14 != 0) && (FUN_00408b50(), puVar36[1] != 0)) {
          FUN_00408b50();
          puVar36[1] = 0;
        }
        FUN_00404870(uVar33,local_3c8);
        uVar33 = *(undefined4 *)PTR_DAT_02712a90;
        lVar14 = local_380[1];
        local_380[1] = 0;
        if ((lVar14 != 0) && (FUN_00408b50(), local_380[1] != 0)) {
          FUN_00408b50();
          local_380[1] = 0;
        }
        local_3c8 = local_3d8;
      }
      FUN_00404870(uVar33,local_3c8);
    }
    if (*param_4 != 0) {
      FUN_00409430();
      *param_4 = 0;
    }
    uVar15 = (**(code **)(**(long **)(param_1[0x12] + 8) + 0xb8))();
    if ((uVar15 & 1) != 0) {
      lVar14 = param_1[0x12];
      if ((*(byte *)(lVar14 + 0x50) & 6) == 4) {
        dVar38 = (double)NEON_ucvtf((ulong)*(uint *)PTR_DAT_02712b38);
        dVar38 = ((double)((int)lVar31 - *(int *)(lVar14 + 0x38)) * DAT_01cd51e8) / dVar38;
        dVar37 = 0.5;
        if (dVar38 <= 0.0) {
          dVar37 = -0.5;
        }
        local_360 = (long *)CONCAT44(*(undefined4 *)(lVar14 + 0x44),(int)(dVar37 + dVar38));
        uStack_358 = 0;
        FUN_004091c0(*(undefined8 *)(lVar14 + 8),&local_360);
        bVar18 = *(byte *)(lVar14 + 0x50);
      }
      else {
        bVar18 = *(byte *)(lVar14 + 0x50) & 0xfd;
        *(byte *)(lVar14 + 0x50) = bVar18;
      }
      *(byte *)(lVar14 + 0x50) = bVar18 & 0xfb;
      *(undefined1 *)(lVar14 + 0x18) = 0;
    }
  }
LAB_00412164:
  FUN_0040c4d0(param_1[0xc],&local_198);
  puVar21 = (undefined4 *)PTR_DAT_02712a90;
joined_r0x00412170:
  while (plVar30 != (long *)0x0) {
    plVar26 = (long *)*plVar30;
    *(byte *)(plVar30 + 10) = *(byte *)(plVar30 + 10) & 0xfc;
    FUN_00409430(plVar30[1]);
    uVar33 = *puVar21;
    lVar31 = plVar30[1];
    plVar30[1] = 0;
    if ((lVar31 != 0) && (FUN_00408b50(), plVar30[1] != 0)) {
      FUN_00408b50();
      plVar30[1] = 0;
    }
    FUN_00404870(uVar33,plVar30);
    plVar30 = plVar26;
  }
LAB_004121d0:
  FUN_004188d0(auStack_190);
  return;
}


