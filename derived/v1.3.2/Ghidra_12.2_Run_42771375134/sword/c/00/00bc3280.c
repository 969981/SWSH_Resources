/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc3280; name: FUN_00bc3280
 */


void FUN_00bc3280(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 local_80;
  int local_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  
  param_1 = param_1 + 0x100;
  uVar1 = FUN_00ffdc80(param_1,"poke_panel");
  uVar2 = FUN_016b7980();
  iVar9 = (int)((ulong)uVar2 >> 0x20);
  iVar7 = (int)uVar2;
  if (param_2 == 0) {
    if (0 < iVar9) {
      iVar8 = 0;
      do {
        if (0 < iVar7) {
          if (iVar8 - 2U < 5) {
            iVar10 = 0;
            do {
              if (5 < iVar10 - 1U) {
                local_78 = iVar10;
                iStack_74 = iVar8;
                local_80 = FUN_016b7950(uVar1,&local_78);
                lVar3 = FUN_00ffda40(param_1,&local_80);
                if (lVar3 != 0) {
                  local_58 = 0;
                  local_68 = 0;
                  FUN_016b7700(uVar1,&local_80,&local_58,&local_68);
                  if (0 < local_68._4_4_) {
                    uVar4 = local_68 & 0xffffffff;
                    iVar6 = local_68._4_4_;
                    iVar12 = (int)local_58;
                    iVar5 = local_58._4_4_;
                    iVar11 = local_58._4_4_;
                    do {
                      if (0 < (int)uVar4) {
                        do {
                          local_70 = iVar12;
                          iStack_6c = iVar11;
                          FUN_016b81d0(uVar1,&local_70,param_3 & 1);
                          uVar4 = local_68 & 0xffffffff;
                          iVar12 = iVar12 + 1;
                        } while (iVar12 < (int)local_68 + (int)local_58);
                        iVar6 = local_68._4_4_;
                        iVar12 = (int)local_58;
                        iVar5 = local_58._4_4_;
                      }
                      iVar11 = iVar11 + 1;
                    } while (iVar11 < iVar5 + iVar6);
                  }
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar7);
          }
          else {
            iVar10 = 0;
            do {
              local_78 = iVar10;
              iStack_74 = iVar8;
              local_80 = FUN_016b7950(uVar1,&local_78);
              lVar3 = FUN_00ffda40(param_1,&local_80);
              if (lVar3 != 0) {
                local_58 = 0;
                local_68 = 0;
                FUN_016b7700(uVar1,&local_80,&local_58,&local_68);
                if (0 < local_68._4_4_) {
                  uVar4 = local_68 & 0xffffffff;
                  iVar6 = local_68._4_4_;
                  iVar12 = (int)local_58;
                  iVar5 = local_58._4_4_;
                  iVar11 = local_58._4_4_;
                  do {
                    if (0 < (int)uVar4) {
                      do {
                        local_70 = iVar12;
                        iStack_6c = iVar11;
                        FUN_016b81d0(uVar1,&local_70,param_3 & 1);
                        uVar4 = local_68 & 0xffffffff;
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < (int)local_68 + (int)local_58);
                      iVar6 = local_68._4_4_;
                      iVar12 = (int)local_58;
                      iVar5 = local_58._4_4_;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < iVar5 + iVar6);
                }
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 != iVar7);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != iVar9);
    }
  }
  else if (0 < iVar9) {
    iVar8 = 0;
    do {
      if (0 < iVar7) {
        if (iVar8 - 2U < 6) {
          iVar10 = 0;
          do {
            if (iVar10 != 0) {
              local_78 = iVar10;
              iStack_74 = iVar8;
              local_80 = FUN_016b7950(uVar1,&local_78);
              lVar3 = FUN_00ffda40(param_1,&local_80);
              if (lVar3 != 0) {
                local_58 = 0;
                local_68 = 0;
                FUN_016b7700(uVar1,&local_80,&local_58,&local_68);
                if (0 < local_68._4_4_) {
                  uVar4 = local_68 & 0xffffffff;
                  iVar6 = local_68._4_4_;
                  iVar12 = (int)local_58;
                  iVar5 = local_58._4_4_;
                  iVar11 = local_58._4_4_;
                  do {
                    if (0 < (int)uVar4) {
                      do {
                        local_70 = iVar12;
                        iStack_6c = iVar11;
                        FUN_016b81d0(uVar1,&local_70,param_3 & 1);
                        uVar4 = local_68 & 0xffffffff;
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < (int)local_68 + (int)local_58);
                      iVar6 = local_68._4_4_;
                      iVar12 = (int)local_58;
                      iVar5 = local_58._4_4_;
                    }
                    iVar11 = iVar11 + 1;
                  } while (iVar11 < iVar5 + iVar6);
                }
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar7);
        }
        else {
          iVar10 = 0;
          do {
            local_78 = iVar10;
            iStack_74 = iVar8;
            local_80 = FUN_016b7950(uVar1,&local_78);
            lVar3 = FUN_00ffda40(param_1,&local_80);
            if (lVar3 != 0) {
              local_58 = 0;
              local_68 = 0;
              FUN_016b7700(uVar1,&local_80,&local_58,&local_68);
              if (0 < local_68._4_4_) {
                uVar4 = local_68 & 0xffffffff;
                iVar6 = local_68._4_4_;
                iVar12 = (int)local_58;
                iVar5 = local_58._4_4_;
                iVar11 = local_58._4_4_;
                do {
                  if (0 < (int)uVar4) {
                    do {
                      local_70 = iVar12;
                      iStack_6c = iVar11;
                      FUN_016b81d0(uVar1,&local_70,param_3 & 1);
                      uVar4 = local_68 & 0xffffffff;
                      iVar12 = iVar12 + 1;
                    } while (iVar12 < (int)local_68 + (int)local_58);
                    iVar6 = local_68._4_4_;
                    iVar12 = (int)local_58;
                    iVar5 = local_58._4_4_;
                  }
                  iVar11 = iVar11 + 1;
                } while (iVar11 < iVar5 + iVar6);
              }
            }
            iVar10 = iVar10 + 1;
          } while (iVar10 != iVar7);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != iVar9);
  }
  return;
}


