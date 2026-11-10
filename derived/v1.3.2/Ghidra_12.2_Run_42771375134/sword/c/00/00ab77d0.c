/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ab77d0; name: FUN_00ab77d0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ab77d0(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint *puVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8 [4];
  undefined1 *local_1c8;
  code *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  long local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 *local_190;
  code *local_188;
  code *local_180;
  undefined1 *local_178;
  long local_170 [12];
  undefined1 *local_110;
  code *pcStack_108;
  code *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined4 local_e8;
  
  puVar8 = PTR_DAT_02719550;
  puVar7 = PTR_DAT_02719548;
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    lVar18 = *(long *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x80) = 9;
    puVar8 = PTR_DAT_02719550;
    puVar7 = PTR_DAT_02719548;
    uVar2 = _DAT_000004c4;
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        plVar24 = *(long **)(lVar18 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          uVar2 = _DAT_000004c4;
          if (plVar24 == (long *)0x0) goto joined_r0x00ab816c;
          if (plVar24 == (long *)puVar8) break;
          plVar24 = (long *)*plVar24;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar18 = *(long *)(lVar18 + 0x60);
            uVar2 = _DAT_000004c4;
            if (lVar18 != 0) {
              uVar2 = *(uint *)(lVar18 + 0x474);
              (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar14;
        uVar2 = _DAT_000004c4;
      } while (iVar14 != 0);
    }
joined_r0x00ab816c:
    if (uVar2 == 1) {
      lVar18 = *(long *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0x80) = 1;
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
        plVar24 = (long *)0x0;
      }
      else {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          puVar19 = *(undefined8 **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          plVar24 = (long *)0x0;
          if (puVar19 == (undefined8 *)0x0) break;
          while (puVar19 != (undefined8 *)puVar8) {
            puVar19 = (undefined8 *)*puVar19;
            if (puVar19 == (undefined8 *)0x0) {
              plVar24 = (long *)0x0;
              goto LAB_00ab8248;
            }
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              plVar24 = (long *)0x0;
              if (*(long *)(lVar18 + 0x60) != 0) {
                plVar24 = (long *)(*(long *)(lVar18 + 0x60) + -0x50);
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          plVar24 = (long *)0x0;
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00ab8248:
      (**(code **)(*plVar24 + 0x220))(&local_110,plVar24);
      if (plVar24 != (long *)0x0) {
        (**(code **)(plVar24[9] + 0x18))(plVar24 + 9);
      }
      FUN_012b4040(&local_1c8);
      uVar15 = FUN_00a765e0(*(undefined8 *)(param_1 + 0x88),&local_110,&local_1c8);
      if ((uVar15 & 1) != 0) {
        local_180 = (code *)0xf;
        local_190 = (undefined1 *)0xf79ff91cd5f9e904;
        local_188 = (code *)0x1ce190f;
        FUN_012b4250(local_1e8,&local_1c8,&local_190);
        iVar11 = FUN_012b4420(local_1e8,0);
        if (iVar11 != -1) {
          local_180 = (code *)0xf;
          local_190 = (undefined1 *)0xf79ff91cd5f9e904;
          local_188 = (code *)0x1ce190f;
          FUN_012b4250(local_1e8,&local_1c8,&local_190);
          uVar12 = FUN_012b4420(local_1e8,0);
          *(undefined4 *)(param_1 + 0xd4) = uVar12;
        }
        local_180 = (code *)&DAT_0000000f;
        local_190 = (undefined1 *)0x5391290286a65012;
        local_188 = (code *)0x1cdad00;
        FUN_012b4250(local_1e8,&local_1c8,&local_190);
        fVar33 = (float)FUN_012b4630(0,local_1e8);
        if (fVar33 != -1.0) {
          local_180 = (code *)&DAT_0000000f;
          local_190 = (undefined1 *)0x5391290286a65012;
          local_188 = (code *)0x1cdad00;
          FUN_012b4250(local_1e8,&local_1c8,&local_190);
          iVar11 = FUN_012b4420(local_1e8,0);
          puVar8 = PTR_DAT_02719550;
          puVar7 = PTR_DAT_02719548;
          lVar18 = *(long *)(param_1 + 0xa0);
          if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
            piVar1 = (int *)(lVar18 + 0x54);
            iVar14 = *(int *)(lVar18 + 0x54);
            do {
              plVar24 = *(long **)(lVar18 + 0x58);
              if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
                uVar16 = FUN_00a8c390();
                *(undefined8 *)puVar8 = uVar16;
                __cxa_guard_release(puVar7);
              }
              while( true ) {
                if (plVar24 == (long *)0x0) goto LAB_00ab9020;
                if (plVar24 == (long *)puVar8) break;
                plVar24 = (long *)*plVar24;
              }
              iVar13 = *piVar1;
              if (iVar13 == iVar14) {
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar4) {
                  *piVar1 = iVar14 + 1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
                if (cVar3 == '\0') {
                  lVar18 = *(long *)(lVar18 + 0x60);
                  if (lVar18 != 0) {
                    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(lVar18 + 0x498);
                    (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                    lVar18 = *(long *)(param_1 + 0xa0);
                    puVar7 = PTR_DAT_02719548;
                    puVar8 = PTR_DAT_02719550;
                    goto joined_r0x00ab9018;
                  }
                  break;
                }
              }
              else {
                ClearExclusiveLocal();
              }
              iVar14 = iVar13;
            } while (iVar13 != 0);
          }
LAB_00ab9020:
          *(undefined4 *)(param_1 + 0xd8) = _DAT_000004e8;
          lVar18 = *(long *)(param_1 + 0xa0);
          puVar7 = PTR_DAT_02719548;
          puVar8 = PTR_DAT_02719550;
joined_r0x00ab9018:
          PTR_DAT_02719548 = puVar7;
          PTR_DAT_02719550 = puVar8;
          if (lVar18 != 0) {
            if (*(int *)(lVar18 + 0x54) != 0) {
              piVar1 = (int *)(lVar18 + 0x54);
              iVar14 = *(int *)(lVar18 + 0x54);
              do {
                plVar24 = *(long **)(lVar18 + 0x58);
                if (((*puVar7 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire((float)iVar11,puVar7), iVar13 != 0)) {
                  uVar16 = FUN_00a8c390();
                  *(undefined8 *)puVar8 = uVar16;
                  __cxa_guard_release(puVar7);
                }
                while( true ) {
                  if (plVar24 == (long *)0x0) goto LAB_00ab9100;
                  if (plVar24 == (long *)puVar8) break;
                  plVar24 = (long *)*plVar24;
                }
                iVar13 = *piVar1;
                if (iVar13 == iVar14) {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar14 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                  if (cVar3 == '\0') {
                    lVar18 = *(long *)(lVar18 + 0x60);
                    if (lVar18 != 0) {
                      FUN_00ad17b0(lVar18 + -0x50);
                      (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                      lVar18 = *(long *)(param_1 + 0xa0);
                      goto joined_r0x00ab90f8;
                    }
                    break;
                  }
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar14 = iVar13;
              } while (iVar13 != 0);
            }
          }
LAB_00ab9100:
          FUN_00ad17b0(0);
        }
      }
      lVar18 = *(long *)(param_1 + 0xa0);
joined_r0x00ab90f8:
      if (lVar18 == 0) goto LAB_00ab91a4;
LAB_00ab9110:
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if (*(int *)(lVar18 + 0x54) == 0) goto LAB_00ab91a4;
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        puVar19 = *(undefined8 **)(lVar18 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        lVar23 = 0;
        if (puVar19 == (undefined8 *)0x0) break;
        while (puVar19 != (undefined8 *)puVar8) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            lVar23 = 0;
            goto LAB_00ab91a8;
          }
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = 0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar23 = 0;
        iVar11 = iVar14;
      } while (iVar14 != 0);
    }
    else {
      if ((uVar2 | 1) != 3) {
        uVar12 = 3;
        goto LAB_00ab8414;
      }
      *(undefined4 *)(param_1 + 0x80) = 7;
      lVar18 = *(long *)(param_1 + 0xa0);
      if (lVar18 != 0) goto LAB_00ab9110;
LAB_00ab91a4:
      lVar23 = 0;
    }
LAB_00ab91a8:
    local_110 = (undefined1 *)0xe62a26a2f676ff7;
    pcStack_108 = (code *)0x1d00c00;
    local_100 = (code *)0x12;
    local_f8 = (undefined1 *)0x0;
    FUN_00ad3010(lVar23,&local_110,0);
    if (local_f8 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
      local_f8 = (undefined1 *)0x0;
    }
    if (lVar23 != 0) {
      (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
    }
    goto LAB_00ab920c;
  case 1:
    lVar18 = *(long *)(param_1 + 0xa0);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
      lVar23 = 0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        puVar19 = *(undefined8 **)(lVar18 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        lVar23 = 0;
        if (puVar19 == (undefined8 *)0x0) break;
        while (puVar19 != (undefined8 *)puVar8) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            lVar23 = 0;
            goto LAB_00ab7d5c;
          }
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = 0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar23 = 0;
        iVar11 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00ab7d5c:
    FUN_00ad1e50(&local_110,lVar23);
    local_190 = (undefined1 *)CONCAT71(local_190._1_7_,1);
    local_190 = (undefined1 *)((ulong)local_190 & 0xffffffff);
    local_1c8 = (undefined1 *)FUN_0069c990(local_110,&local_190);
    if (local_110 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = (undefined1 *)0x0;
    }
    if (lVar23 != 0) {
      (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
    }
    plVar24 = (long *)FUN_006b92e0(&local_1c8);
    if (*plVar24 == 0x1f75085853683afa) {
      plVar24 = (long *)FUN_006b92e0(&local_1c8);
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if (*plVar24 == 0x1f75085853683afa) {
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab89cc;
              if (plVar24 == (long *)puVar8) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  lVar17 = *(long *)(lVar18 + 0x388);
                  lVar23 = *(long *)(lVar18 + 0x380);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                  lVar31 = *(long *)(param_1 + 0x128);
                  lVar28 = *(long *)(param_1 + 0x120);
                  lVar18 = *(long *)(param_1 + 0xa0);
                  pbVar6 = PTR_DAT_02719548;
                  puVar19 = (undefined8 *)PTR_DAT_02719550;
                  goto joined_r0x00ab89c4;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab89cc:
        lVar31 = *(long *)(param_1 + 0x128);
        lVar28 = *(long *)(param_1 + 0x120);
        lVar18 = *(long *)(param_1 + 0xa0);
        lVar23 = _DAT_000003d0;
        lVar17 = _DAT_000003d8;
        pbVar6 = PTR_DAT_02719548;
        puVar19 = (undefined8 *)PTR_DAT_02719550;
joined_r0x00ab89c4:
        PTR_DAT_02719548 = pbVar6;
        PTR_DAT_02719550 = (undefined *)puVar19;
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
LAB_00ab8a78:
          local_170[0] = 0;
        }
        else {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*pbVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar6), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *puVar19 = uVar16;
              __cxa_guard_release(pbVar6);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab8a78;
              if (plVar24 == puVar19) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                local_170[0] = 0;
                if (*(long *)(lVar18 + 0x60) != 0) {
                  local_170[0] = *(long *)(lVar18 + 0x60) + -0x50;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            local_170[0] = 0;
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
        local_190 = &LAB_00ac5560;
        local_188 = FUN_00ac5580;
        local_180 = FUN_00ac55c0;
        local_178 = &LAB_00ac55e0;
        plVar21 = *(long **)(param_1 + 0x90);
        plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0xc0,0x10);
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ab9dac;
        *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar21;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        local_100 = (code *)0x0;
        local_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        pcStack_108 = (code *)0x0;
        if (local_180 != (code *)0x0) {
          (*local_180)(local_170,&local_f0);
          local_100 = local_180;
          local_f8 = local_178;
          local_110 = local_190;
          pcStack_108 = local_188;
        }
        puVar7 = PTR_DAT_027198e8;
        uVar12 = *(undefined4 *)(param_1 + 0xb8);
        plVar24[3] = 0;
        *plVar24 = (long)(puVar7 + 0x10);
        plVar24[2] = 0;
        plVar24[4] = 0;
        plVar24[5] = 0;
        if (local_100 != (code *)0x0) {
          (*local_100)(&local_f0,plVar24 + 6);
          plVar24[5] = (long)local_f8;
          plVar24[3] = (long)pcStack_108;
          plVar24[4] = (long)local_100;
          plVar24[2] = (long)local_110;
        }
        pcVar10 = pcStack_108;
        *(undefined4 *)(plVar24 + 0x17) = 0;
        plVar24[0x13] = lVar17;
        plVar24[0x12] = lVar23;
        *(undefined4 *)(plVar24 + 0x16) = 0;
        *(undefined4 *)((long)plVar24 + 0xb4) = uVar12;
        plVar24[0x15] = lVar31;
        plVar24[0x14] = lVar28;
        if (pcStack_108 != (code *)0x0) {
          local_100 = (code *)0x0;
          local_f8 = (undefined1 *)0x0;
          local_110 = (undefined1 *)0x0;
          pcStack_108 = (code *)0x0;
          (*pcVar10)(&local_f0);
        }
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        puVar19 = *(undefined8 **)(param_1 + 0xe0);
        *(long **)(param_1 + 0xe0) = plVar24;
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19);
          (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
                    (*(long **)(param_1 + 0xe8),puVar19,*(undefined8 *)(param_1 + 0xf0),
                     *(undefined8 *)(param_1 + 0xf8));
        }
        pcVar10 = local_188;
        *(long **)(param_1 + 0xe8) = plVar21;
        *(undefined8 *)(param_1 + 0xf0) = 0xc0;
        *(undefined8 *)(param_1 + 0xf8) = 0x10;
        *(undefined4 *)(param_1 + 0x80) = 2;
        *(undefined4 *)(param_1 + 0xc0) = 0;
        if (local_188 != (code *)0x0) {
          local_180 = (code *)0x0;
          local_178 = (undefined1 *)0x0;
          local_190 = (undefined1 *)0x0;
          local_188 = (code *)0x0;
          (*pcVar10)(local_170);
        }
      }
      goto switchD_00ab781c_caseD_2;
    }
    break;
  case 2:
switchD_00ab781c_caseD_2:
    lVar18 = *(long *)(param_1 + 0xe0);
    if (lVar18 != 0) {
      iVar14 = *(int *)(lVar18 + 0xb4);
      iVar11 = iVar14;
      if (*(int *)(lVar18 + 0xb8) + 1 <= iVar14) {
        iVar11 = *(int *)(lVar18 + 0xb8) + 1;
      }
      *(int *)(lVar18 + 0xb8) = iVar11;
      puVar7 = PTR_PTR_02718e90;
      if (iVar14 == 0) {
        fVar33 = 1.0;
      }
      else {
        fVar33 = (float)iVar11 / (float)iVar14;
      }
      uVar29 = *(undefined8 *)(lVar18 + 0x98);
      uVar16 = *(undefined8 *)(lVar18 + 0x90);
      lVar23 = (ulong)*(uint *)(lVar18 + 0xb0) * 8;
      uVar30 = *(undefined8 *)(lVar18 + 0xa8);
      uVar27 = *(undefined8 *)(lVar18 + 0xa0);
      fVar25 = (float)(**(code **)(PTR_PTR_02718e90 + lVar23))(fVar33);
      fVar32 = (float)((ulong)uVar16 >> 0x20);
      fVar26 = (float)(**(code **)(puVar7 + lVar23))(fVar33);
      fVar5 = (float)uVar29;
      fVar33 = (float)(**(code **)(puVar7 + lVar23))(fVar33,uVar27,uVar16);
      local_110 = (undefined1 *)
                  CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * fVar26,
                           (float)uVar16 + ((float)uVar27 - (float)uVar16) * fVar25);
      pcStack_108 = (code *)(ulong)(uint)(fVar5 + ((float)uVar30 - fVar5) * fVar33);
      (**(code **)(lVar18 + 0x10))(lVar18 + 0x30,&local_110);
      puVar19 = *(undefined8 **)(param_1 + 0xe0);
      if (*(int *)(puVar19 + 0x17) < *(int *)((long)puVar19 + 0xb4)) break;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      if (puVar19 != (undefined8 *)0x0) {
        (**(code **)*puVar19)(puVar19);
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
                  (*(long **)(param_1 + 0xe8),puVar19,*(undefined8 *)(param_1 + 0xf0),
                   *(undefined8 *)(param_1 + 0xf8));
      }
    }
    puVar8 = PTR_DAT_02719550;
    puVar7 = PTR_DAT_02719548;
    if (*(int *)(param_1 + 0xd4) < 1) {
      lVar18 = *(long *)(param_1 + 0xa0);
      *(undefined4 *)(param_1 + 0x80) = 6;
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
        lVar23 = 0;
      }
      else {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          puVar19 = *(undefined8 **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          lVar23 = 0;
          if (puVar19 == (undefined8 *)0x0) break;
          while (puVar19 != (undefined8 *)puVar8) {
            puVar19 = (undefined8 *)*puVar19;
            if (puVar19 == (undefined8 *)0x0) {
              lVar23 = 0;
              goto LAB_00ab8ec0;
            }
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar23 = 0;
              if (*(long *)(lVar18 + 0x60) != 0) {
                lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar23 = 0;
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00ab8ec0:
      local_110 = (undefined1 *)0x7289906d587d8b91;
      pcStack_108 = (code *)0x1cfd55c;
      local_100 = (code *)&DAT_0000000f;
      local_f8 = (undefined1 *)0x0;
      FUN_00ad3010(lVar23,&local_110,0);
      if (local_f8 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = (undefined1 *)0x0;
      }
      if (lVar23 != 0) {
        (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
      }
      goto LAB_00ab8964;
    }
    if (*(int *)(param_1 + 0xd0) == 0) {
      lVar18 = *(long *)(param_1 + 0xa0);
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
        lVar23 = 0;
      }
      else {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          puVar19 = *(undefined8 **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          lVar23 = 0;
          if (puVar19 == (undefined8 *)0x0) break;
          while (puVar19 != (undefined8 *)puVar8) {
            puVar19 = (undefined8 *)*puVar19;
            if (puVar19 == (undefined8 *)0x0) {
              lVar23 = 0;
              goto LAB_00ab8f2c;
            }
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar23 = 0;
              if (*(long *)(lVar18 + 0x60) != 0) {
                lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar23 = 0;
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00ab8f2c:
      local_110 = (undefined1 *)0x7289906d587d8b91;
      pcStack_108 = (code *)0x1cfd55c;
      local_100 = (code *)&DAT_0000000f;
      local_f8 = (undefined1 *)0x0;
      FUN_00ad3010(lVar23,&local_110,0);
      if (local_f8 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = (undefined1 *)0x0;
      }
      if (lVar23 != 0) {
        (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
      }
    }
    iVar11 = *(int *)(param_1 + 0xd0) + 1;
    *(int *)(param_1 + 0xd0) = iVar11;
    if (*(int *)(param_1 + 0xd4) <= iVar11) {
      *(undefined4 *)(param_1 + 0x80) = 6;
      FUN_00ab9db0(param_1);
    }
    goto LAB_00ab920c;
  case 3:
    if (0x6e < *(int *)(param_1 + 0xc0)) {
      lVar18 = *(long *)(param_1 + 0xa0);
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          plVar24 = *(long **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_00ab85c0;
            if (plVar24 == (long *)puVar8) break;
            plVar24 = (long *)*plVar24;
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar18 = *(long *)(lVar18 + 0x60);
              if (lVar18 != 0) {
                lVar17 = *(long *)(lVar18 + 0x388);
                lVar23 = *(long *)(lVar18 + 0x380);
                (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                lVar31 = *(long *)(param_1 + 0x128);
                lVar28 = *(long *)(param_1 + 0x120);
                lVar18 = *(long *)(param_1 + 0xa0);
                pbVar6 = PTR_DAT_02719548;
                puVar19 = (undefined8 *)PTR_DAT_02719550;
                goto joined_r0x00ab85b8;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00ab85c0:
      lVar31 = *(long *)(param_1 + 0x128);
      lVar28 = *(long *)(param_1 + 0x120);
      lVar18 = *(long *)(param_1 + 0xa0);
      lVar23 = _DAT_000003d0;
      lVar17 = _DAT_000003d8;
      pbVar6 = PTR_DAT_02719548;
      puVar19 = (undefined8 *)PTR_DAT_02719550;
joined_r0x00ab85b8:
      PTR_DAT_02719548 = pbVar6;
      PTR_DAT_02719550 = (undefined *)puVar19;
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
LAB_00ab866c:
        local_170[0] = 0;
      }
      else {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          plVar24 = *(long **)(lVar18 + 0x58);
          if (((*pbVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar6), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *puVar19 = uVar16;
            __cxa_guard_release(pbVar6);
          }
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_00ab866c;
            if (plVar24 == puVar19) break;
            plVar24 = (long *)*plVar24;
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              local_170[0] = 0;
              if (*(long *)(lVar18 + 0x60) != 0) {
                local_170[0] = *(long *)(lVar18 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          local_170[0] = 0;
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
      local_190 = &LAB_00ac55f0;
      local_188 = FUN_00ac5610;
      local_180 = FUN_00ac5650;
      local_178 = &LAB_00ac5670;
      plVar21 = *(long **)(param_1 + 0x90);
      plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0xc0,0x10);
      lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ab9dac;
      *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar21;
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
      local_100 = (code *)0x0;
      local_f8 = (undefined1 *)0x0;
      local_110 = (undefined1 *)0x0;
      pcStack_108 = (code *)0x0;
      if (local_180 != (code *)0x0) {
        (*local_180)(local_170,&local_f0);
        local_100 = local_180;
        local_f8 = local_178;
        local_110 = local_190;
        pcStack_108 = local_188;
      }
      puVar7 = PTR_DAT_027198e8;
      uVar12 = *(undefined4 *)(param_1 + 0xb8);
      plVar24[3] = 0;
      *plVar24 = (long)(puVar7 + 0x10);
      plVar24[2] = 0;
      plVar24[4] = 0;
      plVar24[5] = 0;
      if (local_100 != (code *)0x0) {
        (*local_100)(&local_f0,plVar24 + 6);
        plVar24[5] = (long)local_f8;
        plVar24[3] = (long)pcStack_108;
        plVar24[4] = (long)local_100;
        plVar24[2] = (long)local_110;
      }
      pcVar10 = pcStack_108;
      *(undefined4 *)(plVar24 + 0x17) = 0;
      plVar24[0x13] = lVar17;
      plVar24[0x12] = lVar23;
      *(undefined4 *)(plVar24 + 0x16) = 0;
      *(undefined4 *)((long)plVar24 + 0xb4) = uVar12;
      plVar24[0x15] = lVar31;
      plVar24[0x14] = lVar28;
      if (pcStack_108 != (code *)0x0) {
        local_100 = (code *)0x0;
        local_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        pcStack_108 = (code *)0x0;
        (*pcVar10)(&local_f0);
      }
      *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
      puVar19 = *(undefined8 **)(param_1 + 0xe0);
      *(long **)(param_1 + 0xe0) = plVar24;
      if (puVar19 != (undefined8 *)0x0) {
        (**(code **)*puVar19)(puVar19);
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
                  (*(long **)(param_1 + 0xe8),puVar19,*(undefined8 *)(param_1 + 0xf0),
                   *(undefined8 *)(param_1 + 0xf8));
      }
      pcVar10 = local_188;
      *(long **)(param_1 + 0xe8) = plVar21;
      *(undefined8 *)(param_1 + 0xf0) = 0xc0;
      *(undefined8 *)(param_1 + 0xf8) = 0x10;
      *(undefined4 *)(param_1 + 0x80) = 2;
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (local_188 != (code *)0x0) {
        local_180 = (code *)0x0;
        local_178 = (undefined1 *)0x0;
        local_190 = (undefined1 *)0x0;
        local_188 = (code *)0x0;
        (*pcVar10)(local_170);
      }
      goto switchD_00ab781c_caseD_4;
    }
    break;
  case 4:
switchD_00ab781c_caseD_4:
    lVar18 = *(long *)(param_1 + 0xe0);
    if (lVar18 != 0) {
      iVar14 = *(int *)(lVar18 + 0xb4);
      iVar11 = iVar14;
      if (*(int *)(lVar18 + 0xb8) + 1 <= iVar14) {
        iVar11 = *(int *)(lVar18 + 0xb8) + 1;
      }
      *(int *)(lVar18 + 0xb8) = iVar11;
      puVar7 = PTR_PTR_02718e90;
      if (iVar14 == 0) {
        fVar33 = 1.0;
      }
      else {
        fVar33 = (float)iVar11 / (float)iVar14;
      }
      uVar29 = *(undefined8 *)(lVar18 + 0x98);
      uVar16 = *(undefined8 *)(lVar18 + 0x90);
      lVar23 = (ulong)*(uint *)(lVar18 + 0xb0) * 8;
      uVar30 = *(undefined8 *)(lVar18 + 0xa8);
      uVar27 = *(undefined8 *)(lVar18 + 0xa0);
      fVar25 = (float)(**(code **)(PTR_PTR_02718e90 + lVar23))(fVar33);
      fVar32 = (float)((ulong)uVar16 >> 0x20);
      fVar26 = (float)(**(code **)(puVar7 + lVar23))(fVar33);
      fVar5 = (float)uVar29;
      fVar33 = (float)(**(code **)(puVar7 + lVar23))(fVar33,uVar27,uVar16);
      local_110 = (undefined1 *)
                  CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * fVar26,
                           (float)uVar16 + ((float)uVar27 - (float)uVar16) * fVar25);
      pcStack_108 = (code *)(ulong)(uint)(fVar5 + ((float)uVar30 - fVar5) * fVar33);
      (**(code **)(lVar18 + 0x10))(lVar18 + 0x30,&local_110);
      puVar19 = *(undefined8 **)(param_1 + 0xe0);
      if (*(int *)(puVar19 + 0x17) < *(int *)((long)puVar19 + 0xb4)) break;
      *(undefined8 *)(param_1 + 0xe0) = 0;
      if (puVar19 != (undefined8 *)0x0) {
        (**(code **)*puVar19)(puVar19);
        (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
                  (*(long **)(param_1 + 0xe8),puVar19,*(undefined8 *)(param_1 + 0xf0),
                   *(undefined8 *)(param_1 + 0xf8));
      }
    }
    *(undefined4 *)(param_1 + 0x80) = 5;
LAB_00ab8964:
    FUN_00ab9db0(param_1);
LAB_00ab920c:
    *(undefined4 *)(param_1 + 0xc0) = 0;
    break;
  case 5:
    if (0x6e < *(int *)(param_1 + 0xc0)) {
      uVar12 = 6;
LAB_00ab8414:
      *(undefined4 *)(param_1 + 0x80) = uVar12;
      goto LAB_00ab920c;
    }
    break;
  case 6:
  case 7:
    lVar18 = *(long *)(param_1 + 0xa0);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
      lVar23 = 0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        while( true ) {
          puVar19 = *(undefined8 **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          lVar23 = 0;
          if (puVar19 == (undefined8 *)0x0) goto LAB_00ab78cc;
          while (puVar19 != (undefined8 *)puVar8) {
            puVar19 = (undefined8 *)*puVar19;
            if (puVar19 == (undefined8 *)0x0) {
              lVar23 = 0;
              goto LAB_00ab78cc;
            }
          }
          iVar14 = *piVar1;
          if (iVar14 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = 0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
            }
            goto LAB_00ab78cc;
          }
          lVar23 = 0;
          iVar11 = iVar14;
          if (iVar14 == 0) goto LAB_00ab78cc;
        }
        ClearExclusiveLocal();
        lVar23 = 0;
        iVar11 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00ab78cc:
    FUN_00ad1e50(&local_110,lVar23);
    local_1c8 = (undefined1 *)CONCAT71(local_1c8._1_7_,1);
    local_1c8 = (undefined1 *)((ulong)local_1c8 & 0xffffffff);
    local_190 = (undefined1 *)FUN_0069c990(local_110,&local_1c8);
    if (local_110 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = (undefined1 *)0x0;
    }
    if (lVar23 != 0) {
      (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
    }
    plVar24 = (long *)FUN_006b92e0(&local_190);
    if (*plVar24 == -0x36d3a400db7ba287) {
      *(undefined4 *)(param_1 + 0x80) = 8;
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if (-1.0 < *(float *)(param_1 + 0xd8)) {
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab8458;
              if (plVar24 == (long *)puVar8) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  FUN_00ad17b0(*(undefined4 *)(param_1 + 0xd8),lVar18 + -0x50);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                  goto LAB_00ab8464;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab8458:
        FUN_00ad17b0(*(undefined4 *)(param_1 + 0xd8),0);
LAB_00ab8464:
        *(undefined4 *)(param_1 + 0xd8) = 0xbf800000;
      }
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      lVar18 = *(long *)(param_1 + 0xa0);
      if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
        lVar23 = 0;
      }
      else {
        piVar1 = (int *)(lVar18 + 0x54);
        iVar11 = *(int *)(lVar18 + 0x54);
        do {
          puVar19 = *(undefined8 **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          lVar23 = 0;
          if (puVar19 == (undefined8 *)0x0) break;
          while (puVar19 != (undefined8 *)puVar8) {
            puVar19 = (undefined8 *)*puVar19;
            if (puVar19 == (undefined8 *)0x0) {
              lVar23 = 0;
              goto LAB_00ab850c;
            }
          }
          iVar14 = *piVar1;
          if (iVar14 == iVar11) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar11 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar23 = 0;
              if (*(long *)(lVar18 + 0x60) != 0) {
                lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar23 = 0;
          iVar11 = iVar14;
        } while (iVar14 != 0);
      }
LAB_00ab850c:
      local_110 = (undefined1 *)0x3d3d95c9c94f145c;
      pcStack_108 = (code *)0x1d28cba;
      local_100 = (code *)&DAT_0000000e;
      local_f8 = (undefined1 *)0x0;
      FUN_00ad3010(lVar23,&local_110,0);
      if (local_f8 != (undefined1 *)0x0) {
        (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
        local_f8 = (undefined1 *)0x0;
      }
      if (lVar23 != 0) {
        (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
      }
      *(undefined4 *)(param_1 + 0xcc) = 0;
    }
    break;
  case 8:
    lVar18 = *(long *)(param_1 + 0xa0);
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
      lVar23 = 0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        puVar19 = *(undefined8 **)(lVar18 + 0x58);
        if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
          uVar16 = FUN_00a8c390();
          *(undefined8 *)puVar8 = uVar16;
          __cxa_guard_release(puVar7);
        }
        lVar23 = 0;
        if (puVar19 == (undefined8 *)0x0) break;
        while (puVar19 != (undefined8 *)puVar8) {
          puVar19 = (undefined8 *)*puVar19;
          if (puVar19 == (undefined8 *)0x0) {
            lVar23 = 0;
            goto LAB_00ab7e84;
          }
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar23 = 0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        lVar23 = 0;
        iVar11 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00ab7e84:
    FUN_00ad1e50(&local_110,lVar23);
    local_190 = (undefined1 *)CONCAT71(local_190._1_7_,1);
    local_190 = (undefined1 *)((ulong)local_190 & 0xffffffff);
    local_198 = FUN_0069c990(local_110,&local_190);
    if (local_110 != (undefined1 *)0x0) {
      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
      local_110 = (undefined1 *)0x0;
    }
    if (lVar23 != 0) {
      (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
    }
    plVar24 = (long *)FUN_006b92e0(&local_198);
    if (*plVar24 == -0x36d3a400db7ba287) {
      lVar18 = *(long *)(param_1 + 0x100);
      if (lVar18 != 0) {
        iVar14 = *(int *)(lVar18 + 0xb4);
        iVar11 = iVar14;
        if (*(int *)(lVar18 + 0xb8) + 1 <= iVar14) {
          iVar11 = *(int *)(lVar18 + 0xb8) + 1;
        }
        *(int *)(lVar18 + 0xb8) = iVar11;
        puVar7 = PTR_PTR_02718e90;
        if (iVar14 == 0) {
          fVar33 = 1.0;
        }
        else {
          fVar33 = (float)iVar11 / (float)iVar14;
        }
        uVar29 = *(undefined8 *)(lVar18 + 0x98);
        uVar16 = *(undefined8 *)(lVar18 + 0x90);
        lVar23 = (ulong)*(uint *)(lVar18 + 0xb0) * 8;
        uVar30 = *(undefined8 *)(lVar18 + 0xa8);
        uVar27 = *(undefined8 *)(lVar18 + 0xa0);
        fVar25 = (float)(**(code **)(PTR_PTR_02718e90 + lVar23))(fVar33);
        fVar32 = (float)((ulong)uVar16 >> 0x20);
        fVar26 = (float)(**(code **)(puVar7 + lVar23))(fVar33);
        fVar5 = (float)uVar29;
        fVar33 = (float)(**(code **)(puVar7 + lVar23))(fVar33,uVar27,uVar16);
        local_110 = (undefined1 *)
                    CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * fVar26,
                             (float)uVar16 + ((float)uVar27 - (float)uVar16) * fVar25);
        pcStack_108 = (code *)(ulong)(uint)(fVar5 + ((float)uVar30 - fVar5) * fVar33);
        (**(code **)(lVar18 + 0x10))(lVar18 + 0x30,&local_110);
        puVar19 = *(undefined8 **)(param_1 + 0x100);
        *(undefined8 *)(param_1 + 0x100) = 0;
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19);
          (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
                    (*(long **)(param_1 + 0x108),puVar19,*(undefined8 *)(param_1 + 0x110),
                     *(undefined8 *)(param_1 + 0x118));
        }
      }
      if (*(long *)(param_1 + 0xa8) != 0) {
        FUN_00adca50();
        lVar18 = *(long *)(param_1 + 0xa8);
        *(undefined8 *)(param_1 + 0xa8) = 0;
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
        }
      }
      if (*(long *)(param_1 + 0xb0) != 0) {
        FUN_00adca50();
        lVar18 = *(long *)(param_1 + 0xb0);
        *(undefined8 *)(param_1 + 0xb0) = 0;
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
        }
      }
      *(undefined4 *)(param_1 + 0x80) = 9;
    }
    else if (*(int *)(param_1 + 0xcc) < *(int *)(param_1 + 0xbc)) {
      iVar11 = *(int *)(param_1 + 0xcc) + 1;
      *(int *)(param_1 + 0xcc) = iVar11;
      puVar8 = PTR_DAT_02719550;
      puVar7 = PTR_DAT_02719548;
      if (iVar11 == *(int *)(param_1 + 0xbc)) {
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab9500;
              if (plVar24 == (long *)puVar8) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  FUN_00ad2ed0(lVar18 + -0x50,1,0xe,1);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                  lVar18 = *(long *)(param_1 + 0xa0);
                  pbVar6 = PTR_DAT_02719548;
                  puVar19 = (undefined8 *)PTR_DAT_02719550;
                  goto joined_r0x00ab94f8;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab9500:
        FUN_00ad2ed0(0,1,0xe,1);
        lVar18 = *(long *)(param_1 + 0xa0);
        pbVar6 = PTR_DAT_02719548;
        puVar19 = (undefined8 *)PTR_DAT_02719550;
joined_r0x00ab94f8:
        PTR_DAT_02719548 = pbVar6;
        PTR_DAT_02719550 = (undefined *)puVar19;
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
          lVar23 = 0;
        }
        else {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            puVar20 = *(undefined8 **)(lVar18 + 0x58);
            if (((*pbVar6 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar6), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *puVar19 = uVar16;
              __cxa_guard_release(pbVar6);
            }
            lVar23 = 0;
            if (puVar20 == (undefined8 *)0x0) break;
            while (puVar20 != puVar19) {
              puVar20 = (undefined8 *)*puVar20;
              if (puVar20 == (undefined8 *)0x0) {
                lVar23 = 0;
                goto LAB_00ab95b4;
              }
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar23 = 0;
                if (*(long *)(lVar18 + 0x60) != 0) {
                  lVar23 = *(long *)(lVar18 + 0x60) + -0x50;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            lVar23 = 0;
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab95b4:
        FUN_0010d170(&local_1c8,"Waist");
        FUN_006cf0c0(&local_110,&local_1c8);
        FUN_0010d170(local_1e8,&DAT_01cd70a6);
        FUN_006cf0c0(&local_190,local_1e8);
        FUN_00ad8be0(lVar23,&local_110,&local_190,2);
        if (local_178 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
          local_178 = (undefined1 *)0x0;
        }
        if (local_1e8[0] != 0) {
          (**(code **)(*(long *)(local_1e8[0] + 0x48) + 0x18))();
          local_1e8[0] = 0;
        }
        if (local_f8 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
          local_f8 = (undefined1 *)0x0;
        }
        if (local_1c8 != (undefined1 *)0x0) {
          (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
          local_1c8 = (undefined1 *)0x0;
        }
        if (lVar23 != 0) {
          (**(code **)(*(long *)(lVar23 + 0x48) + 0x18))((long *)(lVar23 + 0x48));
        }
        local_110 = (undefined1 *)0x75ab00ef886bed08;
        FUN_00a82270(*(undefined8 *)(param_1 + 0x88),&local_110);
        puVar8 = PTR_DAT_02719550;
        puVar7 = PTR_DAT_02719548;
        local_1a0 = 0;
        local_1c8 = (undefined1 *)0x0;
        local_1c0 = (code *)0xcbf29ce484222645;
        local_1a8 = 0;
        local_1b8 = (code *)&DAT_01d38550;
        local_1b0 = (undefined1 *)0x0;
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
          plVar24 = (long *)0x0;
        }
        else {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            puVar19 = *(undefined8 **)(lVar18 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            plVar24 = (long *)0x0;
            if (puVar19 == (undefined8 *)0x0) break;
            while (puVar19 != (undefined8 *)puVar8) {
              puVar19 = (undefined8 *)*puVar19;
              if (puVar19 == (undefined8 *)0x0) {
                plVar24 = (long *)0x0;
                goto LAB_00ab975c;
              }
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                plVar24 = (long *)0x0;
                if (*(long *)(lVar18 + 0x60) != 0) {
                  plVar24 = (long *)(*(long *)(lVar18 + 0x60) + -0x50);
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            plVar24 = (long *)0x0;
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab975c:
        (**(code **)(*plVar24 + 0x220))(local_1e8,plVar24);
        if (plVar24 != (long *)0x0) {
          (**(code **)(plVar24[9] + 0x18))(plVar24 + 9);
        }
        if ((int)local_1e8[0] == 0x382) {
          FUN_00aba220(&local_110,"bin/battle/waza/particle/eg_land/eg_land_shout_wind01_crw.ptcl");
          if ((local_1b0 != (undefined1 *)0x0) && (local_1c8 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
          }
          local_1c8 = (undefined1 *)0x0;
          local_1c0 = (code *)0xcbf29ce484222645;
          local_1b8 = (code *)&DAT_01d38550;
          local_1b0 = (undefined1 *)0x0;
          if (local_1a8 != 0) {
            (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
          }
          local_1a8 = local_f0;
          local_1c0 = pcStack_108;
          local_1b8 = local_100;
          local_f0 = 0;
          local_1b0 = local_f8;
          local_1a0 = local_e8;
          if (local_f8 == (undefined1 *)0x0) {
            local_1c8 = local_110;
          }
          else {
            if (local_1c8 != (undefined1 *)0x0) {
              (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
            }
            local_1c8 = local_110;
          }
          local_110 = (undefined1 *)0x0;
          pcStack_108 = (code *)0xcbf29ce484222645;
          local_100 = (code *)&DAT_01d38550;
          local_f8 = (undefined1 *)0x0;
          if (local_f0 != 0) {
            (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
            local_f0 = 0;
          }
          lVar18 = FUN_00d6efe0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x508),&local_1c8);
          if (lVar18 == 0) goto LAB_00ab9864;
        }
        else {
LAB_00ab9864:
          FUN_00a74810(&local_110,"bin/battle/waza/particle/eg_land/eg_land_shout_wind01.ptcl");
          if ((local_1b0 != (undefined1 *)0x0) && (local_1c8 != (undefined1 *)0x0)) {
            (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
          }
          local_1c8 = (undefined1 *)0x0;
          local_1c0 = (code *)0xcbf29ce484222645;
          local_1b8 = (code *)&DAT_01d38550;
          local_1b0 = (undefined1 *)0x0;
          if (local_1a8 != 0) {
            (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
          }
          local_1a8 = local_f0;
          local_1c0 = pcStack_108;
          local_1b8 = local_100;
          local_f0 = 0;
          local_1b0 = local_f8;
          local_1a0 = local_e8;
          if (local_f8 == (undefined1 *)0x0) {
            local_1c8 = local_110;
          }
          else {
            if (local_1c8 != (undefined1 *)0x0) {
              (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
            }
            local_1c8 = local_110;
          }
          local_110 = (undefined1 *)0x0;
          pcStack_108 = (code *)0xcbf29ce484222645;
          local_100 = (code *)&DAT_01d38550;
          local_f8 = (undefined1 *)0x0;
          if (local_f0 != 0) {
            (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
            local_f0 = 0;
          }
          lVar18 = FUN_00d6efe0(*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x508),&local_1c8);
        }
        local_1f8 = 0;
        uStack_1f0 = 0;
        FUN_00a66750(*(undefined8 *)(param_1 + 0x88),&local_1f8);
        puVar7 = PTR_DAT_02710860;
        plVar24 = *(long **)(param_1 + 0x90);
        puVar22 = *(uint **)(*(long *)(*(long *)PTR_DAT_027108b8 + 0x388) + 400);
        uVar2 = *puVar22;
        lVar23 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar23 + 0x80)) {
LAB_00ab9dac:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar23 + *(ulong *)(lVar23 + 0x80) * 8) = plVar24;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + 1;
        lVar17 = (**(code **)(*plVar24 + 0x10))(plVar24,0x4d0,0x10);
        if (lVar17 == 0) {
          (**(code **)(*plVar24 + 0xb8))(plVar24);
        }
        FUN_00adc840(lVar17,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                     &local_1f8,(long)puVar22 + (ulong)uVar2);
        *(long **)(lVar17 + 8) = plVar24;
        *(long *)(lVar17 + 0x10) = lVar17;
        *(undefined8 *)(lVar17 + 0x18) = 0x4d0;
        *(undefined8 *)(lVar17 + 0x20) = 0x10;
        *(long *)(lVar23 + 0x80) = *(long *)(lVar23 + 0x80) + -1;
        if (lVar17 != 0) {
          (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0xb0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0xb0) = 0;
        }
        *(long *)(param_1 + 0xb0) = lVar17;
        FUN_00adc890(lVar17,lVar18,0,1,0);
        puVar9 = PTR_DAT_02719550;
        puVar8 = PTR_DAT_02719548;
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar9 = uVar16;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab9b24;
              if (plVar24 == (long *)puVar9) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  lVar17 = *(long *)(lVar18 + 0x388);
                  lVar23 = *(long *)(lVar18 + 0x380);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
                  goto LAB_00ab9b2c;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab9b24:
        lVar23 = _DAT_000003d0;
        lVar17 = _DAT_000003d8;
LAB_00ab9b2c:
        lVar18 = *(long *)(param_1 + 0xb0);
        *(long *)(lVar18 + 0x3d8) = lVar17;
        *(long *)(lVar18 + 0x3d0) = lVar23;
        uVar16 = _DAT_01d49ed0;
        lVar18 = *(long *)(param_1 + 0xb0);
        *(undefined8 *)(lVar18 + 0x408) = _UNK_01d49ed8;
        *(undefined8 *)(lVar18 + 0x400) = uVar16;
        local_170[0] = *(long *)(param_1 + 0xb0);
        local_190 = &LAB_00ac5700;
        local_188 = FUN_00ac5720;
        local_180 = FUN_00ac5730;
        local_178 = &LAB_00ac5740;
        plVar21 = *(long **)(param_1 + 0x90);
        plVar24 = (long *)(**(code **)(*plVar21 + 0x10))(plVar21,0xc0,0x10);
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (0xf < *(ulong *)(lVar18 + 0x80)) goto LAB_00ab9dac;
        *(long **)(lVar18 + *(ulong *)(lVar18 + 0x80) * 8) = plVar21;
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + 1;
        local_100 = (code *)0x0;
        local_f8 = (undefined1 *)0x0;
        local_110 = (undefined1 *)0x0;
        pcStack_108 = (code *)0x0;
        if (local_180 != (code *)0x0) {
          (*local_180)(local_170,&local_f0);
          local_100 = local_180;
          local_f8 = local_178;
          local_110 = local_190;
          pcStack_108 = local_188;
        }
        puVar7 = PTR_DAT_027198e8;
        plVar24[3] = 0;
        *plVar24 = (long)(puVar7 + 0x10);
        plVar24[2] = 0;
        plVar24[4] = 0;
        plVar24[5] = 0;
        if (local_100 != (code *)0x0) {
          (*local_100)(&local_f0,plVar24 + 6);
          plVar24[5] = (long)local_f8;
          plVar24[3] = (long)pcStack_108;
          plVar24[4] = (long)local_100;
          plVar24[2] = (long)local_110;
        }
        pcVar10 = pcStack_108;
        lVar17 = _UNK_01d49e18;
        lVar23 = _DAT_01d49e10;
        plVar24[0x16] = 0xa000000009;
        *(undefined4 *)(plVar24 + 0x17) = 0;
        plVar24[0x13] = lVar17;
        plVar24[0x12] = lVar23;
        plVar24[0x15] = lVar17;
        plVar24[0x14] = lVar23;
        if (pcStack_108 != (code *)0x0) {
          local_100 = (code *)0x0;
          local_f8 = (undefined1 *)0x0;
          local_110 = (undefined1 *)0x0;
          pcStack_108 = (code *)0x0;
          (*pcVar10)(&local_f0);
        }
        *(long *)(lVar18 + 0x80) = *(long *)(lVar18 + 0x80) + -1;
        puVar19 = *(undefined8 **)(param_1 + 0x100);
        *(long **)(param_1 + 0x100) = plVar24;
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19);
          (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
                    (*(long **)(param_1 + 0x108),puVar19,*(undefined8 *)(param_1 + 0x110),
                     *(undefined8 *)(param_1 + 0x118));
        }
        pcVar10 = local_188;
        *(long **)(param_1 + 0x108) = plVar21;
        *(undefined8 *)(param_1 + 0x110) = 0xc0;
        *(undefined8 *)(param_1 + 0x118) = 0x10;
        if (local_188 != (code *)0x0) {
          local_180 = (code *)0x0;
          local_178 = (undefined1 *)0x0;
          local_190 = (undefined1 *)0x0;
          local_188 = (code *)0x0;
          (*pcVar10)(local_170);
        }
        if ((local_1b0 != (undefined1 *)0x0) && (local_1c8 != (undefined1 *)0x0)) {
          (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
        }
        local_1c8 = (undefined1 *)0x0;
        local_1c0 = (code *)0xcbf29ce484222645;
        local_1b8 = (code *)&DAT_01d38550;
        local_1b0 = (undefined1 *)0x0;
        if (local_1a8 != 0) {
          (**(code **)(*(long *)(local_1a8 + 0x48) + 0x18))();
          local_1a8 = 0;
        }
      }
    }
    break;
  case 9:
    if ((((99 < *(int *)(param_1 + 0xc0)) && (*(long *)(param_1 + 0xa8) == 0)) &&
        (*(long *)(param_1 + 0xb0) == 0)) &&
       ((*(long *)(param_1 + 0xe0) == 0 && (*(long *)(param_1 + 0x100) == 0)))) {
      if (-1.0 < *(float *)(param_1 + 0xd8)) {
        lVar18 = *(long *)(param_1 + 0xa0);
        if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
          piVar1 = (int *)(lVar18 + 0x54);
          iVar11 = *(int *)(lVar18 + 0x54);
          do {
            plVar24 = *(long **)(lVar18 + 0x58);
            if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
              uVar16 = FUN_00a8c390();
              *(undefined8 *)puVar8 = uVar16;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar24 == (long *)0x0) goto LAB_00ab9d94;
              if (plVar24 == (long *)puVar8) break;
              plVar24 = (long *)*plVar24;
            }
            iVar14 = *piVar1;
            if (iVar14 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar18 = *(long *)(lVar18 + 0x60);
                if (lVar18 != 0) {
                  FUN_00ad17b0(*(undefined4 *)(param_1 + 0xd8),lVar18 + -0x50);
                  (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                  goto LAB_00ab9da0;
                }
                break;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar14;
          } while (iVar14 != 0);
        }
LAB_00ab9d94:
        FUN_00ad17b0(*(undefined4 *)(param_1 + 0xd8),0);
      }
LAB_00ab9da0:
      FUN_015f5e80(param_1);
    }
  }
  iVar11 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = iVar11 + 1;
  if (iVar11 < 100) {
    if (3 < iVar11) {
      *(undefined4 *)(param_1 + 0xc0) = 100;
      lVar18 = *(long *)(param_1 + 0x100);
      goto joined_r0x00ab9364;
    }
  }
  else if (*(int *)(param_1 + 0xc4) <= iVar11 + 1) {
    lVar18 = *(long *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0x80) = 9;
    puVar8 = PTR_DAT_02719550;
    puVar7 = PTR_DAT_02719548;
    if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar11 = *(int *)(lVar18 + 0x54);
      do {
        while( true ) {
          plVar24 = *(long **)(lVar18 + 0x58);
          if (((*puVar7 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar7), iVar14 != 0)) {
            uVar16 = FUN_00a8c390();
            *(undefined8 *)puVar8 = uVar16;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar24 == (long *)0x0) goto LAB_00ab9324;
            if (plVar24 == (long *)puVar8) break;
            plVar24 = (long *)*plVar24;
          }
          iVar14 = *piVar1;
          if (iVar14 != iVar11) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar18 = *(long *)(lVar18 + 0x60);
            if (lVar18 != 0) {
              *(undefined8 *)(lVar18 + 0x388) = *(undefined8 *)(param_1 + 0x128);
              *(undefined8 *)(lVar18 + 0x380) = *(undefined8 *)(param_1 + 0x120);
              (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
              lVar18 = *(long *)(param_1 + 0xa8);
              goto joined_r0x00ab931c;
            }
            goto LAB_00ab9324;
          }
          iVar11 = iVar14;
          if (iVar14 == 0) goto LAB_00ab9324;
        }
        ClearExclusiveLocal();
        iVar11 = iVar14;
      } while (iVar14 != 0);
    }
LAB_00ab9324:
    _DAT_000003d8 = *(long *)(param_1 + 0x128);
    _DAT_000003d0 = *(long *)(param_1 + 0x120);
    lVar18 = *(long *)(param_1 + 0xa8);
joined_r0x00ab931c:
    if (lVar18 != 0) {
      FUN_00adca50();
      lVar18 = *(long *)(param_1 + 0xa8);
      *(undefined8 *)(param_1 + 0xa8) = 0;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
      }
    }
  }
  lVar18 = *(long *)(param_1 + 0x100);
joined_r0x00ab9364:
  if (lVar18 != 0) {
    iVar14 = *(int *)(lVar18 + 0xb4);
    iVar11 = iVar14;
    if (*(int *)(lVar18 + 0xb8) + 1 <= iVar14) {
      iVar11 = *(int *)(lVar18 + 0xb8) + 1;
    }
    *(int *)(lVar18 + 0xb8) = iVar11;
    puVar7 = PTR_PTR_02718e90;
    if (iVar14 == 0) {
      fVar33 = 1.0;
    }
    else {
      fVar33 = (float)iVar11 / (float)iVar14;
    }
    uVar29 = *(undefined8 *)(lVar18 + 0x98);
    uVar16 = *(undefined8 *)(lVar18 + 0x90);
    lVar23 = (ulong)*(uint *)(lVar18 + 0xb0) * 8;
    uVar30 = *(undefined8 *)(lVar18 + 0xa8);
    uVar27 = *(undefined8 *)(lVar18 + 0xa0);
    fVar25 = (float)(**(code **)(PTR_PTR_02718e90 + lVar23))(fVar33);
    fVar32 = (float)((ulong)uVar16 >> 0x20);
    fVar26 = (float)(**(code **)(puVar7 + lVar23))(fVar33);
    fVar5 = (float)uVar29;
    fVar33 = (float)(**(code **)(puVar7 + lVar23))(fVar33,uVar27,uVar16);
    local_110 = (undefined1 *)
                CONCAT44(fVar32 + ((float)((ulong)uVar27 >> 0x20) - fVar32) * fVar26,
                         (float)uVar16 + ((float)uVar27 - (float)uVar16) * fVar25);
    pcStack_108 = (code *)(ulong)(uint)(fVar5 + ((float)uVar30 - fVar5) * fVar33);
    (**(code **)(lVar18 + 0x10))(lVar18 + 0x30,&local_110);
    puVar19 = *(undefined8 **)(param_1 + 0x100);
    if ((*(int *)((long)puVar19 + 0xb4) <= *(int *)(puVar19 + 0x17)) &&
       (*(undefined8 *)(param_1 + 0x100) = 0, puVar19 != (undefined8 *)0x0)) {
      (**(code **)*puVar19)(puVar19);
      (**(code **)(**(long **)(param_1 + 0x108) + 0x18))
                (*(long **)(param_1 + 0x108),puVar19,*(undefined8 *)(param_1 + 0x110),
                 *(undefined8 *)(param_1 + 0x118));
    }
  }
  return;
}


