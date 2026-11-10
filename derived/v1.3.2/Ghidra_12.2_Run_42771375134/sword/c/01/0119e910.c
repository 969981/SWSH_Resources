/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119e910; name: FUN_0119e910
 */


void FUN_0119e910(undefined8 *param_1,long param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  byte *pbVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long local_148;
  long local_140;
  undefined1 auStack_138 [24];
  long local_120 [24];
  long local_58;
  
  if (*(long *)(param_2 + 0x918) != 0) {
    plVar9 = param_1 + 1;
    if (*plVar9 == 0) {
      lVar10 = 0;
    }
    else {
      plVar9 = param_1 + 4;
      if (*plVar9 == 0) {
        lVar10 = 1;
      }
      else {
        plVar9 = param_1 + 7;
        if (*plVar9 == 0) {
          lVar10 = 2;
        }
        else {
          plVar9 = param_1 + 10;
          if (*plVar9 == 0) {
            lVar10 = 3;
          }
          else {
            plVar9 = param_1 + 0xd;
            if (*plVar9 == 0) {
              lVar10 = 4;
            }
            else {
              plVar9 = param_1 + 0x10;
              if (*plVar9 == 0) {
                lVar10 = 5;
              }
              else {
                plVar9 = param_1 + 0x13;
                if (*plVar9 == 0) {
                  lVar10 = 6;
                }
                else {
                  plVar9 = param_1 + 0x16;
                  if (*plVar9 != 0) {
                    return;
                  }
                  lVar10 = 7;
                }
              }
            }
          }
        }
      }
    }
    plVar8 = (long *)*param_1;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar4 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar4 + *(ulong *)(lVar4 + 0x80) * 8) = plVar8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + 1;
    lVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,0x90,8);
    if (lVar5 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_00883c20(lVar5,*param_1);
    *(long **)(lVar5 + 8) = plVar8;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x90;
    *(undefined8 *)(lVar5 + 0x20) = 8;
    *(long *)(lVar4 + 0x80) = *(long *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    if (*plVar9 != 0) {
      (**(code **)(*(long *)(*plVar9 + 0x48) + 0x18))();
      *plVar9 = 0;
    }
    *plVar9 = lVar5;
    FUN_00885370(lVar5,param_2);
    uVar6 = *(undefined8 *)(param_2 + 0x918);
    pbVar7 = (byte *)(param_1 + lVar10 * 3 + 3);
    *pbVar7 = 1;
    param_1[lVar10 * 3 + 2] = uVar6;
    cVar1 = FUN_007a9cb0();
    if (cVar1 == '\x02') {
      if ((*(long *)PTR_DAT_02718f20 == 0) ||
         (FUN_011ffbe0(local_120,*(long *)PTR_DAT_02718f20,*(undefined8 *)(param_2 + 0x918)),
         local_120[0] == 0)) {
        uVar2 = 0;
        local_58 = *plVar9;
      }
      else {
        uVar2 = FUN_01524bc0(*(undefined8 *)(local_120[0] + 8));
        local_58 = *plVar9;
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      bVar3 = FUN_012aedc0(&local_58,uVar2,param_2 + 0x814);
      *pbVar7 = *pbVar7 & bVar3;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
    }
    if (*param_3 == 0) {
      *pbVar7 = 0;
    }
    else {
      FUN_009fc1c0(auStack_138,*param_1);
      local_140 = *param_3;
      if (local_140 != 0) {
        (**(code **)(*(long *)(local_140 + 0x48) + 0x10))();
      }
      FUN_009fc400(auStack_138,&local_140);
      if (local_140 != 0) {
        (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
        local_140 = 0;
      }
      local_148 = *plVar9;
      if (local_148 != 0) {
        (**(code **)(*(long *)(local_148 + 0x48) + 0x10))();
      }
      bVar3 = FUN_009fc470(auStack_138,&local_148,local_120);
      *pbVar7 = *pbVar7 & bVar3;
      if (local_148 != 0) {
        (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
        local_148 = 0;
      }
      FUN_009fc1e0(auStack_138);
    }
  }
  return;
}


