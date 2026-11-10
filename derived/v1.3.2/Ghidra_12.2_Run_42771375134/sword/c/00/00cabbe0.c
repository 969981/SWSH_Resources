/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cabbe0; name: FUN_00cabbe0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00cabbe0(long *param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  long *plVar17;
  undefined8 *puVar18;
  long lVar19;
  long local_1f0;
  long local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if (*(char *)((long)param_1 + 0xbc) != '\0') {
    if (*(char *)((long)param_1 + 0xbd) == '\0') {
      if (*(char *)((long)param_1 + 0xbe) == '\0') {
        uVar14 = *(undefined8 *)(*(long *)PTR_DAT_027108e0 + 0x28);
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        local_e8 = (undefined *)0x0;
        FUN_00cb3260(param_1,&local_f0);
        puVar4 = PTR_DAT_0271c2b8;
        puVar3 = PTR_DAT_02719748;
        uVar10 = *(uint *)(param_1 + 0x17);
        uVar15 = *(uint *)(param_1 + 0xc);
        if ((int)uVar10 <= (int)uVar15) {
LAB_00cabea4:
          do {
            if (0 < (int)uVar10) {
              local_150 = *(long *)puVar3;
              local_148 = local_150;
              local_140 = local_150;
              local_138 = local_150;
              uVar13 = FUN_00cb4390(param_1,&local_150,uVar10 - 1);
              local_78 = 0;
              uStack_70 = 0;
              local_88 = 0;
              uStack_80 = 0;
              local_98 = 0;
              local_90 = 0;
              local_a8 = 0;
              local_a0 = 0;
              if ((uVar13 & 1) == 0) {
                bVar8 = true;
                lVar11 = param_1[0x18];
                if (lVar11 != 0) goto LAB_00cabffc;
LAB_00cabe70:
                lVar11 = param_1[0x19];
              }
              else {
                FUN_00ca6310(param_1,&local_a8,&local_150,&local_f0);
                uVar10 = 1;
                FUN_00cb10a0(&local_190,param_1,3,1,local_a8,local_98);
                lVar11 = local_190;
                if (local_190 != 0) {
                  if (*(int *)(local_190 + 0x54) == 0) {
                    uVar10 = 1;
                  }
                  else {
                    if ((local_190 == 0) || (*(int *)(local_190 + 0x54) == 0)) {
LAB_00cabfbc:
                      plVar17 = (long *)0x0;
                    }
                    else {
                      piVar1 = (int *)(local_190 + 0x54);
                      iVar16 = *(int *)(local_190 + 0x54);
                      do {
                        plVar17 = *(long **)(lVar11 + 0x58);
                        if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
                           (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar9 != 0)) {
                          uVar12 = FUN_00c72b60();
                          *(undefined8 *)puVar4 = uVar12;
                          __cxa_guard_release(PTR_DAT_0271c2b0);
                        }
                        while( true ) {
                          if (plVar17 == (long *)0x0) goto LAB_00cabfbc;
                          if (plVar17 == (long *)puVar4) break;
                          plVar17 = (long *)*plVar17;
                        }
                        iVar9 = *piVar1;
                        if (iVar9 == iVar16) {
                          cVar2 = '\x01';
                          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar8) {
                            *piVar1 = iVar16 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') {
                            lVar11 = *(long *)(lVar11 + 0x60);
                            plVar17 = (long *)0x0;
                            if (lVar11 != 0) {
                              plVar17 = (long *)(lVar11 + -0x50);
                            }
                            break;
                          }
                        }
                        else {
                          ClearExclusiveLocal();
                        }
                        plVar17 = (long *)0x0;
                        iVar16 = iVar9;
                      } while (iVar9 != 0);
                    }
                    uVar10 = (**(code **)(*plVar17 + 0x58))(plVar17);
                    if (plVar17 != (long *)0x0) {
                      (**(code **)(plVar17[9] + 0x18))(plVar17 + 9);
                    }
                    uVar10 = uVar10 & 1;
                  }
                }
                local_1d8 = local_e8;
                FUN_00ca6310(param_1,&local_a8,&local_150,&local_1d8);
                if (local_90 != 0) {
                  FUN_00cb1690(&local_110,param_1,4,1,local_a0);
                  lVar11 = local_110;
                  if (local_110 != 0) {
                    if (*(int *)(local_110 + 0x54) != 0) {
                      if ((local_110 == 0) || (*(int *)(local_110 + 0x54) == 0)) {
                        plVar17 = (long *)0x0;
                      }
                      else {
                        piVar1 = (int *)(local_110 + 0x54);
                        iVar16 = *(int *)(local_110 + 0x54);
                        do {
                          puVar18 = *(undefined8 **)(lVar11 + 0x58);
                          if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
                             (iVar9 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar9 != 0)) {
                            uVar12 = FUN_00c72b60();
                            *(undefined8 *)puVar4 = uVar12;
                            __cxa_guard_release(PTR_DAT_0271c2b0);
                          }
                          plVar17 = (long *)0x0;
                          if (puVar18 == (undefined8 *)0x0) break;
                          while (puVar18 != (undefined8 *)puVar4) {
                            puVar18 = (undefined8 *)*puVar18;
                            if (puVar18 == (undefined8 *)0x0) {
                              plVar17 = (long *)0x0;
                              goto LAB_00cabe00;
                            }
                          }
                          iVar9 = *piVar1;
                          if (iVar9 == iVar16) {
                            cVar2 = '\x01';
                            bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                            if (bVar8) {
                              *piVar1 = iVar16 + 1;
                              cVar2 = ExclusiveMonitorsStatus();
                            }
                            if (cVar2 == '\0') {
                              lVar11 = *(long *)(lVar11 + 0x60);
                              plVar17 = (long *)0x0;
                              if (lVar11 != 0) {
                                plVar17 = (long *)(lVar11 + -0x50);
                              }
                              break;
                            }
                          }
                          else {
                            ClearExclusiveLocal();
                          }
                          plVar17 = (long *)0x0;
                          iVar16 = iVar9;
                        } while (iVar9 != 0);
                      }
LAB_00cabe00:
                      uVar13 = (**(code **)(*plVar17 + 0x58))(plVar17);
                      if (plVar17 != (long *)0x0) {
                        (**(code **)(plVar17[9] + 0x18))(plVar17 + 9);
                      }
                      if ((uVar13 & 1) == 0) {
                        uVar10 = 0;
                      }
                    }
                    if (local_110 != 0) {
                      (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
                      local_110 = 0;
                    }
                  }
                }
                if (local_190 != 0) {
                  (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
                  local_190 = 0;
                }
                bVar8 = uVar10 != 0;
                lVar11 = param_1[0x18];
                if (lVar11 == 0) goto LAB_00cabe70;
LAB_00cabffc:
                if (*(int *)(lVar11 + 0x54) == 0) goto LAB_00cabe70;
                lVar11 = param_1[0x18];
                if (lVar11 == 0) {
                  bVar8 = (bool)(bVar8 & _DAT_000000f8 == 0);
                  lVar11 = param_1[0x19];
                }
                else {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
                  FUN_00c72c50(&local_190,lVar11);
                  lVar19 = *(long *)(local_190 + 0xf8);
                  if (local_190 != 0) {
                    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
                    local_190 = 0;
                  }
                  bVar8 = (bool)(bVar8 & lVar19 == 0);
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
                  lVar11 = param_1[0x19];
                }
              }
              if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
                lVar19 = param_1[0x19];
                lVar11 = _DAT_000000f8;
                if (lVar19 != 0) {
                  (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
                  FUN_00c72c50(&local_190,lVar19);
                  lVar11 = *(long *)(local_190 + 0xf8);
                  if (local_190 != 0) {
                    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
                    local_190 = 0;
                  }
                  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
                }
                bVar8 = (bool)(bVar8 & lVar11 == 0);
              }
              if (!bVar8) {
                return;
              }
              FUN_00cb4510(param_1);
              uVar10 = *(uint *)(param_1 + 0x17);
              uVar15 = *(uint *)(param_1 + 0xc);
              if (uVar10 == uVar15) {
                *(undefined1 *)((long)param_1 + 0xbd) = 1;
                return;
              }
            }
            if ((int)uVar15 <= (int)uVar10) {
LAB_00cac168:
              if ((int)uVar15 < (int)uVar10) {
                return;
              }
              goto LAB_00cabea4;
            }
            if (0x27f < uVar10) goto LAB_00cac6f0;
            if ((*(ulong *)((long)param_1 +
                           ((ulong)(long)(int)uVar10 >> 3 & 0x1ffffffffffffff8) + 0x68) &
                1L << ((long)(int)uVar10 & 0x3fU)) != 0) {
              uVar10 = uVar10 + 1;
              *(uint *)(param_1 + 0x17) = uVar10;
              goto LAB_00cac168;
            }
            local_110 = *(long *)puVar3;
            lStack_108 = local_110;
            local_100 = local_110;
            lStack_f8 = local_110;
            uVar13 = FUN_00cb4390(param_1,&local_110);
            if ((uVar13 & 1) != 0) {
              local_120 = 0;
              uStack_118 = 0;
              local_130 = 0;
              uStack_128 = 0;
              local_140 = 0;
              local_138 = 0;
              local_150 = 0;
              local_148 = 0;
              local_160 = 0;
              local_158 = 0;
              local_170 = 0;
              local_168 = 0;
              local_180 = 0;
              local_178 = 0;
              local_190 = 0;
              local_188 = 0;
              FUN_00ca6310(param_1,&local_150,&local_110,&local_f0);
              FUN_00cb10a0(&local_198,param_1,3,1,local_150,local_140);
              if ((local_198 == 0) || (*(int *)(local_198 + 0x54) == 0)) {
                local_1c8 = 0;
                local_1c0 = 0;
                local_1b8 = 0;
                local_1b0 = 0;
                local_1d8 = PTR_DAT_0271c248 + 0x10;
                local_1d0 = 3;
                local_1a8 = 0;
                local_1a0 = 0;
                local_78 = 0;
                uStack_70 = 0;
                local_88 = 0;
                uStack_80 = 0;
                local_98 = 0;
                local_90 = 0;
                local_a8 = 0;
                local_a0 = 0;
                FUN_00ca6310(param_1,&local_a8,&local_110,&local_f0);
                (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
                lVar7 = local_98;
                lVar19 = local_a8;
                lVar11 = local_b0;
                local_1d0 = 3;
                local_1c0 = 1;
                local_1c8 = uVar14;
                if (local_b0 != 0) {
                  (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
                }
                lVar5 = local_1b8;
                local_1b8 = lVar11;
                if (lVar5 != 0) {
                  (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
                }
                local_1b0 = lVar19;
                local_1a8 = lVar7;
                local_1a0 = 0;
                if (lVar11 != 0) {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
                }
                FUN_00caf180(&local_a8,param_1,&local_1d8,0);
                lVar11 = local_a8;
                local_1d8 = PTR_DAT_0271c260 + 0x10;
                if (local_1b8 != 0) {
                  (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
                  local_1b8 = 0;
                }
              }
              else {
                lVar11 = 0;
              }
              local_1e0 = local_e8;
              FUN_00ca6310(param_1,&local_150,&local_110,&local_1e0);
              if (local_138 != 0) {
                FUN_00cb1690(&local_a8,param_1,4,1,local_148);
                lVar19 = local_a8;
                if ((local_a8 == 0) || (*(int *)(local_a8 + 0x54) == 0)) {
                  local_1c8 = 0;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1d8 = PTR_DAT_0271c250 + 0x10;
                  local_1d0 = 4;
                  local_1a8 = 0;
                  local_1a0 = 0;
                  local_78 = 0;
                  uStack_70 = 0;
                  local_88 = 0;
                  uStack_80 = 0;
                  local_98 = 0;
                  local_90 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  FUN_00ca6310(param_1,&local_a8,&local_110,&local_1e0);
                  lVar7 = local_90;
                  if (local_90 != 0) {
                    (**(code **)(*param_1 + 0x10))(&local_b0,param_1);
                    lVar5 = local_a0;
                    local_1d0 = 4;
                    local_1c0 = 1;
                    local_1c8 = uVar14;
                    if (local_b0 != 0) {
                      (**(code **)(*(long *)(local_b0 + 0x48) + 0x10))();
                    }
                    lVar6 = local_1b8;
                    local_1b8 = local_b0;
                    if (lVar6 != 0) {
                      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
                    }
                    local_1b0 = lVar5;
                    local_1a8 = lVar7;
                    local_1a0 = 0;
                    if (local_b0 != 0) {
                      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))((long *)(local_b0 + 0x48));
                    }
                  }
                  FUN_00caf180(&local_a8,param_1,&local_1d8,0);
                  if (lVar19 != 0) {
                    plVar17 = (long *)(lVar19 + 0x48);
                    (**(code **)(*plVar17 + 0x18))(plVar17);
                  }
                  lVar19 = local_a8;
                  if (local_a8 != 0) {
                    (**(code **)(*(long *)(local_a8 + 0x48) + 0x10))();
                  }
                  lVar7 = local_188;
                  local_188 = lVar19;
                  if (lVar7 != 0) {
                    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
                  }
                  local_1d8 = PTR_DAT_0271c260 + 0x10;
                  if (local_1b8 != 0) {
                    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
                    local_1b8 = 0;
                  }
                  if (lVar19 == 0) goto LAB_00cac4d0;
                }
                (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
              }
LAB_00cac4d0:
              if (lVar11 != 0) {
                plVar17 = (long *)(lVar11 + 0x48);
                (**(code **)(*plVar17 + 0x10))(plVar17);
                if (*(int *)(lVar11 + 0x54) != 0) {
                  local_1e8 = lVar11;
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar17);
                  FUN_00c9a590(param_1,1,&local_1e8,param_1 + 0x3c,0);
                  if (local_1e8 != 0) {
                    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
                    local_1e8 = 0;
                  }
                }
              }
              lVar19 = local_188;
              if (local_188 != 0) {
                plVar17 = (long *)(local_188 + 0x48);
                (**(code **)(*plVar17 + 0x10))(plVar17);
                if (*(int *)(lVar19 + 0x54) != 0) {
                  local_1f0 = lVar19;
                  (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))(plVar17);
                  FUN_00c9a590(param_1,1,&local_1f0,param_1 + 0x3c,0);
                  if (local_1f0 != 0) {
                    (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
                    local_1f0 = 0;
                  }
                }
                (**(code **)(*plVar17 + 0x18))(plVar17);
              }
              if (lVar11 != 0) {
                (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
              }
              uVar10 = *(uint *)(param_1 + 0x17);
              if (uVar10 < 0x280) {
                uVar13 = (ulong)(long)(int)uVar10 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)((long)param_1 + uVar13 + 0x68) =
                     *(ulong *)((long)param_1 + uVar13 + 0x68) | 1L << ((long)(int)uVar10 & 0x3fU);
                *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
                if (local_198 != 0) {
                  (**(code **)(*(long *)(local_198 + 0x48) + 0x18))();
                  local_198 = 0;
                }
                if (local_158 != 0) {
                  (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
                  local_158 = 0;
                }
                if (local_160 != 0) {
                  (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
                  local_160 = 0;
                }
                if (local_168 != 0) {
                  (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
                  local_168 = 0;
                }
                if (local_170 != 0) {
                  (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
                  local_170 = 0;
                }
                if (local_178 != 0) {
                  (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
                  local_178 = 0;
                }
                if (local_180 != 0) {
                  (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
                  local_180 = 0;
                }
                if (local_188 != 0) {
                  (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
                  local_188 = 0;
                }
                if (local_190 != 0) {
                  (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
                  local_190 = 0;
                }
                if (lVar11 == 0) {
                  return;
                }
                (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
                return;
              }
LAB_00cac6f0:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar10 = *(uint *)(param_1 + 0x17);
            if (0x27f < uVar10) goto LAB_00cac6f0;
            uVar13 = (ulong)(long)(int)uVar10 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)((long)param_1 + uVar13 + 0x68) =
                 *(ulong *)((long)param_1 + uVar13 + 0x68) | 1L << ((long)(int)uVar10 & 0x3fU);
            uVar15 = *(uint *)(param_1 + 0xc);
            uVar10 = (int)param_1[0x17] + 1;
            *(uint *)(param_1 + 0x17) = uVar10;
            if ((int)uVar15 < (int)uVar10) {
              return;
            }
          } while( true );
        }
      }
    }
    else if ((char)param_1[0x3e] == '\0') {
      if (param_1[0x1b] == 0) {
        param_1[0x1b] = 0;
      }
      else {
        FUN_006e2100(param_1[0x1b],param_1 + 0x1a);
        lVar11 = param_1[0x1b];
        param_1[0x1b] = 0;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
      }
      *(undefined1 *)(param_1 + 0x3e) = 1;
    }
  }
  return;
}


