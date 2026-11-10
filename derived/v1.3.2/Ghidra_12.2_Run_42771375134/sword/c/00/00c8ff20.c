/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8ff20; name: FUN_00c8ff20
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c8ff20(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *puVar21;
  long local_b0;
  long *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined2 local_88;
  undefined1 local_86;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(int *)((long)param_1 + 0x3a4) == 5) {
LAB_00c90934:
    uVar12 = 1;
  }
  else {
    if (*(int *)((long)param_1 + 0x3a4) == 3) {
      uVar16 = 1;
      lVar17 = 0x2e3;
      do {
        FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar17));
        FUN_00c825f0(&local_a8);
        if (local_a8 != (long *)0x0) {
          uVar9 = (**(code **)(*local_a8 + 0x80))(local_a8,local_a8[0xd]);
          uVar16 = uVar16 & uVar9;
          if (local_a8 != (long *)0x0) {
            (**(code **)(local_a8[9] + 0x18))();
            local_a8 = (long *)0x0;
          }
        }
        puVar7 = PTR_DAT_0271c488;
        puVar6 = PTR_DAT_027150b0;
        puVar5 = PTR_DAT_02715080;
        lVar17 = lVar17 + 0xc;
      } while (lVar17 != 0x3a3);
      if (uVar16 != 0) {
        lVar17 = 0;
        do {
          uVar12 = FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar17 * 0xc + 0x2e3))
          ;
          FUN_00c825f0(&local_68);
          uVar16 = *(uint *)((long)param_1 + lVar17 * 4 + 0x5b0);
          if (uVar16 == 0) {
LAB_00c90778:
            if (local_68 != (long *)0x0) {
              (**(code **)(local_68[9] + 0x18))();
              local_68 = (long *)0x0;
            }
          }
          else {
            FUN_00c826e0(uVar12);
            plVar20 = local_68;
            if ((uVar16 | 2) != 3) goto LAB_00c90778;
            if (local_68 != (long *)0x0) {
              plVar13 = (long *)(**(code **)local_68[10])(local_68 + 10);
              if (((*PTR_DAT_0271c490 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar10 != 0)) {
                uVar12 = FUN_00c95940();
                *(undefined8 *)puVar7 = uVar12;
                __cxa_guard_release(PTR_DAT_0271c490);
              }
              for (; plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
                if (plVar13 == (long *)puVar7) {
                  (**(code **)(plVar20[9] + 0x10))(plVar20 + 9);
                  bVar4 = false;
                  lVar18 = *(long *)(param_1[0x23] + 0x68);
                  goto joined_r0x00c900e0;
                }
              }
              plVar20 = (long *)0x0;
              bVar4 = true;
              lVar18 = *(long *)(param_1[0x23] + 0x68);
joined_r0x00c900e0:
              if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
                plVar13 = (long *)0x0;
              }
              else {
                piVar1 = (int *)(lVar18 + 0x54);
                iVar10 = *(int *)(lVar18 + 0x54);
                do {
                  while( true ) {
                    puVar21 = *(undefined8 **)(lVar18 + 0x58);
                    if (((*PTR_DAT_02715078 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_02715078), iVar11 != 0)) {
                      uVar12 = FUN_00a87090();
                      *(undefined8 *)puVar5 = uVar12;
                      __cxa_guard_release(PTR_DAT_02715078);
                    }
                    plVar13 = (long *)0x0;
                    if (puVar21 == (undefined8 *)0x0) goto LAB_00c901ac;
                    while (puVar21 != (undefined8 *)puVar5) {
                      puVar21 = (undefined8 *)*puVar21;
                      if (puVar21 == (undefined8 *)0x0) {
                        plVar13 = (long *)0x0;
                        goto LAB_00c901ac;
                      }
                    }
                    iVar11 = *piVar1;
                    if (iVar11 != iVar10) break;
                    cVar2 = '\x01';
                    bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar8) {
                      *piVar1 = iVar10 + 1;
                      cVar2 = ExclusiveMonitorsStatus();
                    }
                    if (cVar2 == '\0') {
                      plVar13 = (long *)0x0;
                      if (*(long *)(lVar18 + 0x60) != 0) {
                        plVar13 = (long *)(*(long *)(lVar18 + 0x60) + -0x50);
                      }
                      goto LAB_00c901ac;
                    }
                    plVar13 = (long *)0x0;
                    iVar10 = iVar11;
                    if (iVar11 == 0) goto LAB_00c901ac;
                  }
                  ClearExclusiveLocal();
                  plVar13 = (long *)0x0;
                  iVar10 = iVar11;
                } while (iVar11 != 0);
              }
LAB_00c901ac:
              (**(code **)(*plVar13 + 0x10))(&local_a8,plVar13);
              local_70 = local_a8;
              local_a8 = (long *)0x0;
              FUN_00c9c390(plVar20,&local_70,param_1[0x23]);
              if (local_70 != (long *)0x0) {
                (**(code **)(local_70[9] + 0x18))();
                local_70 = (long *)0x0;
              }
              if (local_a8 != (long *)0x0) {
                (**(code **)(local_a8[9] + 0x18))();
                local_a8 = (long *)0x0;
              }
              if (plVar13 != (long *)0x0) {
                (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
              }
              plVar13 = (long *)FUN_00c7cc60(param_1[0x14],0x20);
              uVar16 = (uint)lVar17;
              if (param_1[0x19] == *plVar13) {
                if (((0xf < (uVar16 & 0x7fffffff)) || ((1 << (ulong)(uVar16 & 0x1f) & 0x9082U) == 0)
                    ) && (2 < uVar16 - 3)) goto LAB_00c90310;
                FUN_00c9c090(plVar20,local_68[0xd],0);
                if (uVar16 - 3 < 3) goto LAB_00c902fc;
                bVar8 = false;
joined_r0x00c90288:
                if (lVar17 == 0xf) goto LAB_00c90320;
              }
              else {
                if (2 < uVar16 - 3) {
LAB_00c90310:
                  bVar8 = uVar16 - 3 < 3;
                  goto joined_r0x00c90288;
                }
                if ((param_1[0x1d] != 0) && (*(int *)(param_1[0x1d] + 0x54) != 0)) {
                  FUN_00c738a0(&local_a8,param_1[0x1d]);
                  uVar12 = (**(code **)(*local_a8 + 0x98))();
                  if (local_a8 != (long *)0x0) {
                    (**(code **)(local_a8[9] + 0x18))();
                    local_a8 = (long *)0x0;
                  }
                  FUN_00c9c090(plVar20,local_68[0xd],uVar12);
                }
LAB_00c902fc:
                bVar8 = true;
LAB_00c90320:
                (**(code **)(*plVar20 + 0xd0))(&local_a8,plVar20);
                plVar13 = local_a8;
                if (local_a8 != (long *)0x0) {
                  if (*(int *)((long)local_a8 + 0x54) != 0) {
                    if ((local_a8 != (long *)0x0) && (*(int *)((long)local_a8 + 0x54) != 0)) {
                      piVar1 = (int *)((long)local_a8 + 0x54);
                      iVar10 = *(int *)((long)local_a8 + 0x54);
                      do {
                        while( true ) {
                          plVar19 = (long *)plVar13[0xb];
                          if (((*PTR_DAT_027150a8 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar11 != 0)) {
                            uVar12 = FUN_00706e40();
                            *(undefined8 *)puVar6 = uVar12;
                            __cxa_guard_release(PTR_DAT_027150a8);
                          }
                          while( true ) {
                            if (plVar19 == (long *)0x0) goto LAB_00c90430;
                            if (plVar19 == (long *)puVar6) break;
                            plVar19 = (long *)*plVar19;
                          }
                          iVar11 = *piVar1;
                          if (iVar11 != iVar10) break;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar3) {
                            *piVar1 = iVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') {
                            lVar18 = plVar13[0xc];
                            if (lVar18 != 0) {
                              FUN_0069c570(lVar18 + -0x50,0);
                              (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                              plVar13 = local_a8;
                              goto joined_r0x00c90428;
                            }
                            goto LAB_00c90430;
                          }
                          iVar10 = iVar11;
                          if (iVar11 == 0) goto LAB_00c90430;
                        }
                        ClearExclusiveLocal();
                        iVar10 = iVar11;
                      } while (iVar11 != 0);
                    }
LAB_00c90430:
                    FUN_0069c570(0,0);
                    plVar13 = local_a8;
joined_r0x00c90428:
                    local_a8 = plVar13;
                    if ((plVar13 != (long *)0x0) && (*(int *)((long)plVar13 + 0x54) != 0)) {
                      piVar1 = (int *)((long)plVar13 + 0x54);
                      iVar10 = *(int *)((long)plVar13 + 0x54);
                      do {
                        while( true ) {
                          plVar19 = (long *)plVar13[0xb];
                          if (((*PTR_DAT_027150a8 & 1) == 0) &&
                             (iVar11 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar11 != 0)) {
                            uVar12 = FUN_00706e40();
                            *(undefined8 *)puVar6 = uVar12;
                            __cxa_guard_release(PTR_DAT_027150a8);
                          }
                          while( true ) {
                            if (plVar19 == (long *)0x0) goto LAB_00c90504;
                            if (plVar19 == (long *)puVar6) break;
                            plVar19 = (long *)*plVar19;
                          }
                          iVar11 = *piVar1;
                          if (iVar11 != iVar10) break;
                          cVar2 = '\x01';
                          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar3) {
                            *piVar1 = iVar10 + 1;
                            cVar2 = ExclusiveMonitorsStatus();
                          }
                          if (cVar2 == '\0') {
                            lVar18 = plVar13[0xc];
                            if (lVar18 != 0) {
                              FUN_0069c580(lVar18 + -0x50,0);
                              (**(code **)(*(long *)(lVar18 + -8) + 0x18))((long *)(lVar18 + -8));
                              goto LAB_00c90518;
                            }
                            goto LAB_00c90504;
                          }
                          iVar10 = iVar11;
                          if (iVar11 == 0) goto LAB_00c90504;
                        }
                        ClearExclusiveLocal();
                        iVar10 = iVar11;
                      } while (iVar11 != 0);
                    }
LAB_00c90504:
                    FUN_0069c580(0,0);
                  }
LAB_00c90518:
                  if (local_a8 != (long *)0x0) {
                    (**(code **)(local_a8[9] + 0x18))();
                    local_a8 = (long *)0x0;
                  }
                }
              }
              uVar9 = uVar16 & 0x7fffffff;
              if (0xf < uVar9) goto LAB_00c9067c;
              if ((1 << (ulong)(uVar16 & 0x1f) & 0x9082U) == 0) {
                if (uVar9 == 3) {
                  (**(code **)(*plVar20 + 0xd0))(&local_a8,plVar20);
                  if (local_a8 != (long *)0x0) {
                    plVar13 = local_80;
                    plVar19 = local_78;
                    if (*(int *)((long)local_a8 + 0x54) != 0) {
                      lVar18 = (**(code **)(*param_1 + 0x168))(param_1);
                      plVar13 = local_80;
                      plVar19 = local_78;
                      if (lVar18 != 0) {
                        local_80 = local_a8;
                        if (local_a8 != (long *)0x0) {
                          (**(code **)(local_a8[9] + 0x10))();
                        }
                        FUN_00c77360(lVar18,&local_80);
                        plVar13 = (long *)0x0;
                        plVar19 = local_78;
                        if (local_80 != (long *)0x0) {
                          (**(code **)(local_80[9] + 0x18))();
                          local_80 = (long *)0x0;
                          plVar13 = local_80;
                          plVar19 = local_78;
                        }
                      }
                    }
                    goto joined_r0x00c90668;
                  }
                }
                else if ((uVar9 == 5) &&
                        ((**(code **)(*plVar20 + 0xd0))(&local_a8,plVar20), local_a8 != (long *)0x0)
                        ) {
                  plVar13 = local_80;
                  plVar19 = local_78;
                  if (*(int *)((long)local_a8 + 0x54) != 0) {
                    lVar18 = (**(code **)(*param_1 + 0x168))(param_1);
                    plVar13 = local_80;
                    plVar19 = local_78;
                    if (lVar18 != 0) {
                      local_78 = local_a8;
                      if (local_a8 != (long *)0x0) {
                        (**(code **)(local_a8[9] + 0x10))();
                      }
                      FUN_00c77260(lVar18,&local_78);
                      plVar13 = local_80;
                      plVar19 = (long *)0x0;
                      if (local_78 != (long *)0x0) {
                        (**(code **)(local_78[9] + 0x18))();
                        local_78 = (long *)0x0;
                        plVar13 = local_80;
                        plVar19 = local_78;
                      }
                    }
                  }
joined_r0x00c90668:
                  local_78 = plVar19;
                  local_80 = plVar13;
                  if (local_a8 != (long *)0x0) {
                    (**(code **)(local_a8[9] + 0x18))();
                    local_a8 = (long *)0x0;
                  }
                }
LAB_00c9067c:
                if (bVar8) goto LAB_00c90680;
              }
              else {
LAB_00c90680:
                local_88 = 0x101;
                local_86 = 1;
                local_98 = 0;
                uStack_90 = 0;
                local_a8 = (long *)0x0;
                uStack_a0 = 0;
                FUN_00c75950(plVar20,&local_a8);
                local_86 = 0;
                (**(code **)(*param_1 + 0xd8))(&local_b0,param_1);
                if ((local_b0 == 0) ||
                   (puVar21 = *(undefined8 **)(local_b0 + 0x60), puVar21 == (undefined8 *)0x0)) {
                  FUN_01061030(0,&local_a8);
                }
                else {
                  puVar14 = (undefined8 *)(**(code **)*puVar21)(puVar21);
                  if (((*PTR_DAT_0271c1e8 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_0271c1e8), iVar10 != 0)) {
                    uVar12 = FUN_00706e40();
                    *(undefined8 *)PTR_DAT_0271c1f0 = uVar12;
                    __cxa_guard_release(PTR_DAT_0271c1e8);
                  }
                  puVar15 = (undefined8 *)0x0;
                  if (puVar14 != (undefined8 *)0x0) {
                    do {
                      if (puVar14 == (undefined8 *)PTR_DAT_0271c1f0) {
                        puVar15 = puVar21 + -10;
                        goto LAB_00c90728;
                      }
                      puVar14 = (undefined8 *)*puVar14;
                    } while (puVar14 != (undefined8 *)0x0);
                    puVar15 = (undefined8 *)0x0;
                  }
LAB_00c90728:
                  FUN_01061030(puVar15,&local_a8);
                }
                if (local_b0 != 0) {
                  (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
                  local_b0 = 0;
                }
                if (local_a8 != (long *)0x0) {
                  (**(code **)(local_a8[9] + 0x18))();
                  local_a8 = (long *)0x0;
                }
              }
              if (!bVar4) {
                (**(code **)(plVar20[9] + 0x18))(plVar20 + 9);
              }
              goto LAB_00c90778;
            }
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x10);
        param_1[0xbd] = 0;
        param_1[0xbc] = 0;
        param_1[0xbb] = 0;
        param_1[0xba] = 0;
        param_1[0xb9] = 0;
        param_1[0xb8] = 0;
        param_1[0xb7] = 0;
        param_1[0xb6] = 0;
        if ((int)param_1[0x10] == 1) {
          plVar13 = (long *)param_1[0x11];
          plVar20 = plVar13 + 9;
          if (plVar13 == (long *)0x0) {
            lVar17 = 0;
            do {
              if (lVar17 != 0) {
                FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar17 + 0x2e3));
                FUN_00c825a0(&local_a8);
                if (local_a8 != (long *)0x0) {
                  local_68 = (long *)0x0;
                  (**(code **)(*local_a8 + 0xe0))(local_a8,&local_68);
                  if (local_68 != (long *)0x0) {
                    (**(code **)(local_68[9] + 0x18))();
                    local_68 = (long *)0x0;
                  }
                  if (local_a8 != (long *)0x0) {
                    (**(code **)(local_a8[9] + 0x18))();
                    local_a8 = (long *)0x0;
                  }
                }
              }
              lVar17 = lVar17 + 0xc;
            } while (lVar17 != 0xc0);
          }
          else {
            (**(code **)(*plVar20 + 0x10))(plVar20);
            lVar17 = 0;
            do {
              if (lVar17 != 0) {
                FUN_00c834c0(param_1[0x4e],*(undefined1 *)((long)param_1 + lVar17 + 0x2e3));
                FUN_00c825a0(&local_a8);
                plVar19 = local_a8;
                if (local_a8 != (long *)0x0) {
                  local_68 = plVar13;
                  (**(code **)(plVar13[9] + 0x10))(plVar20);
                  (**(code **)(*plVar19 + 0xe0))(plVar19,&local_68);
                  if (local_68 != (long *)0x0) {
                    (**(code **)(local_68[9] + 0x18))();
                    local_68 = (long *)0x0;
                  }
                  if (local_a8 != (long *)0x0) {
                    (**(code **)(local_a8[9] + 0x18))();
                    local_a8 = (long *)0x0;
                  }
                }
              }
              lVar17 = lVar17 + 0xc;
            } while (lVar17 != 0xc0);
          }
          if (plVar13 != (long *)0x0) {
            (**(code **)(*plVar20 + 0x18))(plVar20);
          }
        }
        FUN_00c91500(param_1);
        FUN_00c93380(param_1,(long)param_1 + 0x1d9);
        FUN_00c92e90(param_1);
        if ((code *)param_1[0xc4] != (code *)0x0) {
          (*(code *)param_1[0xc4])(param_1 + 200);
        }
        *(undefined4 *)((long)param_1 + 0x3a4) = 5;
        goto LAB_00c90934;
      }
    }
    uVar12 = 0;
  }
  return uVar12;
}


