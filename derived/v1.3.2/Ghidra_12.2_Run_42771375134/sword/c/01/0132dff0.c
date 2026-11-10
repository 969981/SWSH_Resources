/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132dff0; name: FUN_0132dff0
 */


/* WARNING: Removing unreachable block (ram,0x0132ec4c) */

void FUN_0132dff0(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  byte local_88 [8];
  long local_80;
  long local_78;
  long *local_70;
  long local_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  
  lVar9 = *(long *)(param_1 + 0x68);
  lVar12 = *(long *)PTR_DAT_02710848;
  lVar11 = *(long *)(lVar9 + 0x70);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar9 + 0x78);
  if (lVar9 != 0) {
    plVar10 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
  }
  puVar6 = PTR_DAT_02710860;
  plVar10 = *(long **)(param_1 + 8);
  local_70 = plVar10;
  local_68 = lVar11;
  lStack_60 = lVar9;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar10 + 0x10))(plVar10,0x150,8);
    if (lVar11 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_01305a30(lVar11,local_70,&local_68);
    *(long **)(lVar11 + 8) = plVar10;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x150;
    *(undefined8 *)(lVar11 + 0x20) = 8;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    plVar10 = (long *)(param_1 + 0x358);
    if (*(long *)(param_1 + 0x358) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x358) + 0x48) + 0x18))();
      *plVar10 = 0;
    }
    plVar2 = local_70;
    *plVar10 = lVar11;
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar9 + 0x80) < 0x10) {
      *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar2;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar2 + 0x10))(plVar2,0x88,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar2 + 0xb8))(plVar2);
      }
      FUN_01322ce0(lVar11,local_70);
      *(long **)(lVar11 + 8) = plVar2;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x88;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(long *)(param_1 + 0x360) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x360) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x360) = 0;
      }
      *(long *)(param_1 + 0x360) = lVar11;
      FUN_0132ee10(&local_b0,local_70,&local_68);
      if (*(long *)(param_1 + 0x380) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x380) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x380) = 0;
      }
      *(long *)(param_1 + 0x380) = local_b0;
      FUN_0132f100(&local_b0,local_70);
      if (*(long *)(param_1 + 0x388) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x388) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x388) = 0;
      }
      *(long *)(param_1 + 0x388) = local_b0;
      FUN_0132f350(&local_b0,local_70);
      if (*(long *)(param_1 + 0x390) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x390) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x390) = 0;
      }
      *(long *)(param_1 + 0x390) = local_b0;
      FUN_0132f5a0(&local_b0,local_70);
      if (*(long *)(param_1 + 0x398) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x398) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x398) = 0;
      }
      plVar2 = local_70;
      *(long *)(param_1 + 0x398) = local_b0;
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
      if (*(ulong *)(lVar9 + 0x80) < 0x10) {
        *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar2;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        lVar11 = (**(code **)(*plVar2 + 0x10))(plVar2,0x70,8);
        if (lVar11 == 0) {
          (**(code **)(*plVar2 + 0xb8))(plVar2);
        }
        FUN_01369e00(lVar11,local_70);
        *(long **)(lVar11 + 8) = plVar2;
        *(long *)(lVar11 + 0x10) = lVar11;
        *(undefined8 *)(lVar11 + 0x18) = 0x70;
        *(undefined8 *)(lVar11 + 0x20) = 8;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x368) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x368) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x368) = 0;
        }
        *(long *)(param_1 + 0x368) = lVar11;
        lVar9 = FUN_013309c0(&local_b0,local_70,plVar10,(undefined8 *)(param_1 + 0x360));
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x370) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x370) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x370) = 0;
        }
        *(long *)(param_1 + 0x370) = lVar9;
        lVar9 = FUN_01330af0(&local_b0,local_70,&local_70,plVar10);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        if (*(long *)(param_1 + 0x3a0) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x3a0) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x3a0) = 0;
        }
        *(long *)(param_1 + 0x3a0) = lVar9;
        lVar9 = *(long *)(param_1 + 0x3f8);
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        local_88[0] = FUN_01329820(lVar9);
        local_88[0] = local_88[0] & 1;
        local_80 = *(long *)(param_1 + 0x358);
        if (local_80 != 0) {
          (**(code **)(*(long *)(local_80 + 0x48) + 0x10))();
        }
        local_78 = *(long *)(param_1 + 0x3a0);
        if (local_78 != 0) {
          (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
        }
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
        }
        plVar2 = local_70;
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (*(ulong *)(lVar9 + 0x80) < 0x10) {
          *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar2;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          lVar11 = (**(code **)(*plVar2 + 0x10))(plVar2,0x468,8);
          if (lVar11 == 0) {
            (**(code **)(*plVar2 + 0xb8))(plVar2);
          }
          FUN_012ed140(lVar11,local_88);
          *(long **)(lVar11 + 8) = plVar2;
          *(long *)(lVar11 + 0x10) = lVar11;
          *(undefined8 *)(lVar11 + 0x18) = 0x468;
          *(undefined8 *)(lVar11 + 0x20) = 8;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x3a8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x3a8) = 0;
          }
          *(long *)(param_1 + 0x3a8) = lVar11;
          FUN_0132f810(&local_b0,local_70);
          if (*(long *)(param_1 + 0x3b0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x3b0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x3b0) = 0;
          }
          *(long *)(param_1 + 0x3b0) = local_b0;
          FUN_0132fa60(&local_b0,local_70);
          if (*(long *)(param_1 + 0x3b8) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x3b8) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x3b8) = 0;
          }
          *(long *)(param_1 + 0x3b8) = local_b0;
          lVar9 = FUN_01330db0(&local_b0,local_70);
          if (lVar9 != 0) {
            (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
          }
          if (*(long *)(param_1 + 0x3c0) != 0) {
            (**(code **)(*(long *)(*(long *)(param_1 + 0x3c0) + 0x48) + 0x18))();
            *(undefined8 *)(param_1 + 0x3c0) = 0;
          }
          plVar2 = local_70;
          *(long *)(param_1 + 0x3c0) = lVar9;
          lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
          if (*(ulong *)(lVar9 + 0x80) < 0x10) {
            *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar2;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
            lVar11 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b0,0x10);
            if (lVar11 == 0) {
              (**(code **)(*plVar2 + 0xb8))(plVar2);
            }
            FUN_0070c3a0(lVar11,0xc800);
            *(long **)(lVar11 + 8) = plVar2;
            *(long *)(lVar11 + 0x10) = lVar11;
            *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
            *(undefined8 *)(lVar11 + 0x20) = 0x10;
            *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
            if (lVar11 != 0) {
              lVar9 = *(long *)(lVar11 + 0x58);
              if (*(long *)(lVar9 + 0x58) == 0) {
                uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x60))();
                *(undefined8 *)(lVar9 + 0x58) = uVar7;
              }
              piVar1 = (int *)(lVar9 + 0x54);
              do {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = *piVar1 + 1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
            }
            plVar8 = *(long **)(param_1 + 0x350);
            plVar2 = (long *)(param_1 + 0x350);
            if (plVar8 != (long *)0x0) {
              lVar9 = plVar8[0xb];
              piVar1 = (int *)(lVar9 + 0x54);
              do {
                iVar3 = *piVar1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar3 + -1;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar3 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x60) = 0;
                (**(code **)(*plVar8 + 0x18))();
              }
              *plVar2 = 0;
            }
            plVar8 = local_70;
            *plVar2 = lVar11;
            lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
            if (*(ulong *)(lVar9 + 0x80) < 0x10) {
              *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
              lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1a0,0x10);
              if (lVar11 == 0) {
                (**(code **)(*plVar8 + 0xb8))(plVar8);
              }
              FUN_01332ef0(lVar11,local_70);
              *(long **)(lVar11 + 8) = plVar8;
              *(long *)(lVar11 + 0x10) = lVar11;
              *(undefined8 *)(lVar11 + 0x18) = 0x1a0;
              *(undefined8 *)(lVar11 + 0x20) = 0x10;
              *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
              if (lVar11 != 0) {
                (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x3c8) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x3c8) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x3c8) = 0;
              }
              *(long *)(param_1 + 0x3c8) = lVar11;
              lVar9 = FUN_01331cd0(&local_b0,local_70,plVar10);
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x3d0) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x3d0) = 0;
              }
              *(long *)(param_1 + 0x3d0) = lVar9;
              lVar9 = FUN_01331dc0(&local_b0,local_70);
              if (lVar9 != 0) {
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
              }
              if (*(long *)(param_1 + 0x3d8) != 0) {
                (**(code **)(*(long *)(*(long *)(param_1 + 0x3d8) + 0x48) + 0x18))();
                *(undefined8 *)(param_1 + 0x3d8) = 0;
              }
              plVar8 = local_70;
              *(long *)(param_1 + 0x3d8) = lVar9;
              lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
              if (*(ulong *)(lVar9 + 0x80) < 0x10) {
                *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar8;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0xf0,0x10);
                if (lVar11 == 0) {
                  (**(code **)(*plVar8 + 0xb8))(plVar8);
                }
                FUN_01335c00(lVar11,local_70);
                *(long **)(lVar11 + 8) = plVar8;
                *(long *)(lVar11 + 0x10) = lVar11;
                *(undefined8 *)(lVar11 + 0x18) = 0xf0;
                *(undefined8 *)(lVar11 + 0x20) = 0x10;
                *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
                if (lVar11 != 0) {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x3e0) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x3e0) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x3e0) = 0;
                }
                *(long *)(param_1 + 0x3e0) = lVar11;
                FUN_0132fcb0(&local_b0,local_70);
                if (*(long *)(param_1 + 0x3f0) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x3f0) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x3f0) = 0;
                }
                *(long *)(param_1 + 0x3f0) = local_b0;
                lVar9 = *(long *)(lVar12 + 0x88);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                FUN_010672e0(&local_b0,lVar9,0);
                if (*(long *)(param_1 + 0x340) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x340) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x340) = 0;
                }
                lVar11 = local_b0;
                local_b0 = 0;
                *(long *)(param_1 + 0x340) = lVar11;
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                }
                lVar9 = *(long *)(lVar12 + 0x90);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                lVar11 = *(long *)(*(long *)(lVar9 + 0x60) + 0x108);
                if (lVar11 != 0) {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x348) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x348) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x348) = 0;
                }
                *(long *)(param_1 + 0x348) = lVar11;
                (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
                lVar9 = FUN_0103a6b0(&local_b0,local_70);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x400) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x400) = 0;
                }
                *(long *)(param_1 + 0x400) = lVar9;
                lVar9 = FUN_0103a6b0(&local_b0,local_70);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x408) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x408) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x408) = 0;
                }
                *(long *)(param_1 + 0x408) = lVar9;
                local_98 = 0;
                local_90 = 0;
                local_b0 = 0;
                local_a8 = 0;
                local_a0 = 0;
                lVar9 = *(long *)(param_1 + 0x340);
                if (lVar9 == 0) {
                  lVar11 = *(long *)(param_1 + 0x348);
                  local_a8 = lVar9;
                }
                else {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                  if (local_a8 != 0) {
                    plVar8 = (long *)(local_a8 + 0x48);
                    local_a8 = lVar9;
                    (**(code **)(*plVar8 + 0x18))();
                    lVar9 = local_a8;
                  }
                  local_a8 = lVar9;
                  lVar11 = *(long *)(param_1 + 0x348);
                }
                if (lVar11 != 0) {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
                }
                if (local_a0 != 0) {
                  plVar8 = (long *)(local_a0 + 0x48);
                  local_a0 = lVar11;
                  (**(code **)(*plVar8 + 0x18))();
                  lVar11 = local_a0;
                }
                local_a0 = lVar11;
                lVar9 = FUN_01331f80(auStack_58,local_70);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (local_b0 != 0) {
                  (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
                }
                lVar11 = local_98;
                local_98 = 0;
                local_b0 = lVar9;
                if (lVar11 != 0) {
                  (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
                }
                lVar9 = local_90;
                local_90 = 0;
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
                }
                lVar9 = FUN_01332060(auStack_58,local_70,&local_b0);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x378) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x378) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x378) = 0;
                }
                *(long *)(param_1 + 0x378) = lVar9;
                lVar9 = FUN_01332860(auStack_58,local_70);
                if (lVar9 != 0) {
                  (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
                }
                if (*(long *)(param_1 + 0x620) != 0) {
                  (**(code **)(*(long *)(*(long *)(param_1 + 0x620) + 0x48) + 0x18))();
                  *(undefined8 *)(param_1 + 0x620) = 0;
                }
                local_b8 = *(long *)(param_1 + 0x350);
                *(long *)(param_1 + 0x620) = lVar9;
                if (local_b8 != 0) {
                  (**(code **)(*(long *)(local_b8 + 0x48) + 0x10))();
                }
                FUN_01025970(&local_b8,&local_68);
                if (local_b8 != 0) {
                  (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
                  local_b8 = 0;
                }
                lVar9 = FUN_01306110(*plVar10);
                lVar11 = nn::os::GetCurrentThread();
                plVar8 = (long *)(lVar9 + 0x158);
                do {
                  if (*plVar8 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x14c));
                      while (*plVar8 == 0) {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                        if (bVar5) {
                          *plVar8 = lVar11;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        if (cVar4 == '\0') goto LAB_0132ebf0;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar5) {
                    *plVar8 = lVar11;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
LAB_0132ebf0:
                FUN_006d1640(lVar9,0,*(undefined8 *)(*plVar2 + 0x170));
                lVar11 = FUN_01306120(*plVar10);
                lVar12 = nn::os::GetCurrentThread();
                plVar10 = (long *)(lVar11 + 0x158);
                do {
                  if (*plVar10 != 0) {
                    ClearExclusiveLocal();
                    do {
                      nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0x14c));
                      while (*plVar10 == 0) {
                        cVar4 = '\x01';
                        bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                        if (bVar5) {
                          *plVar10 = lVar12;
                          cVar4 = ExclusiveMonitorsStatus();
                        }
                        if (cVar4 == '\0') goto LAB_0132ec6c;
                      }
                      ClearExclusiveLocal();
                    } while( true );
                  }
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar5) {
                    *plVar10 = lVar12;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
LAB_0132ec6c:
                FUN_006d1640(lVar11,0,*(undefined8 *)(*plVar2 + 0x178));
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
                  if (bVar5) {
                    *plVar10 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0x14c));
                do {
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
                  if (bVar5) {
                    *plVar8 = 0;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x14c));
                FUN_0136d9b0(*(undefined8 *)(param_1 + 0x3d8));
                FUN_012c3040(*(undefined8 *)(param_1 + 0x380),plVar2);
                FUN_0103c820(*(undefined8 *)(param_1 + 0x400),0xb99078a3aed24049);
                FUN_0103c820(*(undefined8 *)(param_1 + 0x408),0x669f64813dc33129);
                uVar7 = *(undefined8 *)(param_1 + 0x3e0);
                local_c0 = *(long *)(param_1 + 0x3a0);
                if (local_c0 != 0) {
                  (**(code **)(*(long *)(local_c0 + 0x48) + 0x10))();
                }
                FUN_01336070(uVar7,&local_c0);
                if (local_c0 != 0) {
                  (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
                  local_c0 = 0;
                }
                if (local_90 != 0) {
                  (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
                  local_90 = 0;
                }
                if (local_98 != 0) {
                  (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
                  local_98 = 0;
                }
                if (local_a0 != 0) {
                  (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
                  local_a0 = 0;
                }
                if (local_a8 != 0) {
                  (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
                  local_a8 = 0;
                }
                if (local_b0 != 0) {
                  (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
                  local_b0 = 0;
                }
                if (local_78 != 0) {
                  (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
                  local_78 = 0;
                }
                if (local_80 != 0) {
                  (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
                }
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


