/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd9ef0; name: FUN_00fd9ef0
 */


void FUN_00fd9ef0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long local_68;
  
  FUN_00ff5da0();
  puVar1 = PTR_DAT_02723038;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x58);
  param_1[10] = (long)(puVar1 + 0x98);
  param_1[0xc] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x1c] = (long)(PTR_DAT_02723040 + 0x10);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  plVar7 = param_1 + 0x1e;
  *plVar7 = 0;
  plVar4 = (long *)param_1[1];
  param_1[0x1f] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar5 = *(long *)(param_2 + 0x548);
  lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x150,8);
  puVar1 = PTR_DAT_02710860;
  lVar3 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar3 + 0x80) < 0x10) {
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    local_68 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN_00fe1cd0(lVar2,plVar4,&local_68);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    plVar6 = (long *)param_1[0x3a];
    param_1[0x3a] = lVar2;
    if (plVar6 != (long *)0x0) {
      *plVar6 = (long)(PTR_DAT_02723048 + 0x10);
      if (plVar6[4] != 0) {
        (**(code **)(*(long *)(plVar6[4] + 0x48) + 0x18))();
        plVar6[4] = 0;
      }
      if (plVar6[2] != 0) {
        (**(code **)(*(long *)(plVar6[2] + 0x48) + 0x18))();
        plVar6[2] = 0;
      }
      (**(code **)(*(long *)param_1[0x3b] + 0x18))
                ((long *)param_1[0x3b],plVar6,param_1[0x3c],param_1[0x3d]);
    }
    param_1[0x3b] = (long)plVar4;
    param_1[0x3c] = 0x150;
    param_1[0x3d] = 8;
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x78,8);
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (*(ulong *)(lVar3 + 0x80) < 0x10) {
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      local_68 = lVar5;
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      FUN_00fd7e80(lVar2,plVar4,&local_68);
      if (local_68 != 0) {
        (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
        local_68 = 0;
      }
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      lVar3 = *plVar7;
      *plVar7 = lVar2;
      if (lVar3 != 0) {
        FUN_00fd8e10(lVar3);
        (**(code **)(*(long *)param_1[0x1f] + 0x18))
                  ((long *)param_1[0x1f],lVar3,param_1[0x20],param_1[0x21]);
        lVar2 = param_1[0x1e];
      }
      param_1[0x1f] = (long)plVar4;
      param_1[0x20] = 0x78;
      param_1[0x21] = 8;
      *(long **)(lVar2 + 0x28) = param_1 + 0xc;
      lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (*(ulong *)(lVar3 + 0x80) < 0x10) {
        *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        local_68 = lVar5;
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        FUN_00fdded0(lVar2,plVar4,&local_68);
        if (local_68 != 0) {
          (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
          local_68 = 0;
        }
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        plVar7 = (long *)param_1[0x22];
        param_1[0x22] = lVar2;
        if (plVar7 != (long *)0x0) {
          *plVar7 = (long)(PTR_DAT_02723050 + 0x10);
          if (plVar7[3] != 0) {
            (**(code **)(*(long *)(plVar7[3] + 0x48) + 0x18))();
            plVar7[3] = 0;
          }
          if (plVar7[2] != 0) {
            (**(code **)(*(long *)(plVar7[2] + 0x48) + 0x18))();
            plVar7[2] = 0;
          }
          (**(code **)(*(long *)param_1[0x23] + 0x18))
                    ((long *)param_1[0x23],plVar7,param_1[0x24],param_1[0x25]);
        }
        param_1[0x23] = (long)plVar4;
        param_1[0x24] = 0x28;
        param_1[0x25] = 8;
        lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x20,8);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (*(ulong *)(lVar3 + 0x80) < 0x10) {
          *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
          local_68 = lVar5;
          if (lVar5 != 0) {
            (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
          }
          FUN_00fdd0e0(lVar2,&local_68);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
          plVar7 = (long *)param_1[0x36];
          param_1[0x36] = lVar2;
          if (plVar7 != (long *)0x0) {
            *plVar7 = (long)(PTR_DAT_02723058 + 0x10);
            if (plVar7[1] != 0) {
              (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
              plVar7[1] = 0;
            }
            (**(code **)(*(long *)param_1[0x37] + 0x18))
                      ((long *)param_1[0x37],plVar7,param_1[0x38],param_1[0x39]);
          }
          param_1[0x37] = (long)plVar4;
          param_1[0x38] = 0x20;
          param_1[0x39] = 8;
          lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x20,8);
          lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
          if (*(ulong *)(lVar3 + 0x80) < 0x10) {
            *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
            local_68 = lVar5;
            if (lVar5 != 0) {
              (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
            }
            FUN_00fdf460(lVar2,&local_68);
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
            plVar7 = (long *)param_1[0x26];
            param_1[0x26] = lVar2;
            if (plVar7 != (long *)0x0) {
              *plVar7 = (long)(PTR_DAT_02723060 + 0x10);
              if (plVar7[2] != 0) {
                (**(code **)(*(long *)(plVar7[2] + 0x48) + 0x18))();
                plVar7[2] = 0;
              }
              if (plVar7[1] != 0) {
                (**(code **)(*(long *)(plVar7[1] + 0x48) + 0x18))();
                plVar7[1] = 0;
              }
              (**(code **)(*(long *)param_1[0x27] + 0x18))
                        ((long *)param_1[0x27],plVar7,param_1[0x28],param_1[0x29]);
            }
            param_1[0x27] = (long)plVar4;
            param_1[0x28] = 0x20;
            param_1[0x29] = 8;
            lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
            lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
            if (*(ulong *)(lVar3 + 0x80) < 0x10) {
              *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
              local_68 = lVar5;
              if (lVar5 != 0) {
                (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
              }
              FUN_00fd70e0(lVar2,plVar4,&local_68);
              if (local_68 != 0) {
                (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                local_68 = 0;
              }
              *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
              plVar7 = (long *)param_1[0x2a];
              param_1[0x2a] = lVar2;
              if (plVar7 != (long *)0x0) {
                *plVar7 = (long)(PTR_DAT_02722fd8 + 0x10);
                if (plVar7[3] != 0) {
                  (**(code **)(*(long *)(plVar7[3] + 0x48) + 0x18))();
                  plVar7[3] = 0;
                }
                if (plVar7[2] != 0) {
                  (**(code **)(*(long *)(plVar7[2] + 0x48) + 0x18))();
                  plVar7[2] = 0;
                }
                (**(code **)(*(long *)param_1[0x2b] + 0x18))
                          ((long *)param_1[0x2b],plVar7,param_1[0x2c],param_1[0x2d]);
              }
              param_1[0x2b] = (long)plVar4;
              param_1[0x2c] = 0x28;
              param_1[0x2d] = 8;
              lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
              lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
              if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                local_68 = lVar5;
                if (lVar5 != 0) {
                  (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
                }
                FUN_00fde540(lVar2,plVar4,&local_68);
                if (local_68 != 0) {
                  (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
                  local_68 = 0;
                }
                *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                plVar7 = (long *)param_1[0x2e];
                param_1[0x2e] = lVar2;
                if (plVar7 != (long *)0x0) {
                  *plVar7 = (long)(PTR_DAT_02723068 + 0x10);
                  if (plVar7[3] != 0) {
                    (**(code **)(*(long *)(plVar7[3] + 0x48) + 0x18))();
                    plVar7[3] = 0;
                  }
                  if (plVar7[2] != 0) {
                    (**(code **)(*(long *)(plVar7[2] + 0x48) + 0x18))();
                    plVar7[2] = 0;
                  }
                  (**(code **)(*(long *)param_1[0x2f] + 0x18))
                            ((long *)param_1[0x2f],plVar7,param_1[0x30],param_1[0x31]);
                }
                param_1[0x2f] = (long)plVar4;
                param_1[0x30] = 0x28;
                param_1[0x31] = 8;
                lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0x28,8);
                lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
                if (*(ulong *)(lVar3 + 0x80) < 0x10) {
                  *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
                  FUN_00fdfac0(lVar2,plVar4);
                  *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
                  lVar3 = param_1[0x32];
                  param_1[0x32] = lVar2;
                  if (lVar3 != 0) {
                    (**(code **)(*(long *)param_1[0x33] + 0x18))
                              ((long *)param_1[0x33],lVar3,param_1[0x34],param_1[0x35]);
                  }
                  param_1[0x33] = (long)plVar4;
                  param_1[0x34] = 0x28;
                  param_1[0x35] = 8;
                  return;
                }
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


