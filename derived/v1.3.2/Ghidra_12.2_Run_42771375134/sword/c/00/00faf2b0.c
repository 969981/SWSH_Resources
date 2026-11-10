/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00faf2b0; name: FUN_00faf2b0
 */


void FUN_00faf2b0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long local_48;
  undefined8 local_38;
  
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 1:
    uVar6 = *(undefined8 *)(*(long *)PTR_DAT_02710540 + 0x68);
    lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    lVar10 = *(long *)(lVar8 + 0x1e0);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    FUN_015ab460(&local_38,lVar10,uVar6,param_1 + 0x48,1);
    if (*(long *)(param_1 + 0x88) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = local_38;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  case 2:
    uVar5 = FUN_014bca10(*(undefined8 *)(param_1 + 0x88));
    if ((uVar5 & 1) != 0) {
      lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      if (*(long *)(lVar8 + 0x60) == 0) {
        *(undefined4 *)(param_1 + 0x80) = 6;
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar8 + 0x60) + 0x610);
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
        }
        FUN_014bc870(*(undefined8 *)(param_1 + 0x88));
        lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
        puVar2 = PTR_DAT_02710920;
        if (lVar7 != 0) {
          puVar2 = (undefined *)(lVar7 + 0x58);
        }
        FUN_00faccf0(&local_38,lVar10,puVar2,*(undefined4 *)(param_1 + 0x78),
                     *(undefined8 *)(param_1 + 0x70),0);
        if (*(long *)(param_1 + 0x90) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x90) = 0;
        }
        *(undefined8 *)(param_1 + 0x90) = local_38;
        FUN_00faae60(local_38,param_1 + 0x68);
        FUN_00fabb60(*(undefined8 *)(param_1 + 0x90),0);
        lVar7 = *(long *)(param_1 + 0x90);
        FUN_01679b10(*(undefined8 *)(lVar7 + 0x68));
        *(undefined1 *)(lVar7 + 0x88) = 1;
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        if (lVar10 != 0) {
          (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
        }
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
switchD_00faf2ec_caseD_3:
        plVar11 = (long *)(param_1 + 0x90);
        FUN_00faaf90(*plVar11);
        uVar5 = FUN_00fab240(*plVar11);
        if ((uVar5 & 1) != 0) {
          lVar8 = *(long *)(*plVar11 + 0x68);
          if (lVar8 == 0) {
            FUN_01679c40(0,1,1);
          }
          else {
            plVar11 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar11 + 0x10))(plVar11);
            FUN_01679c40(lVar8,1,1);
            (**(code **)(*plVar11 + 0x18))(plVar11);
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_00faf58c:
          plVar11 = (long *)(param_1 + 0x90);
          FUN_00faaf90(*plVar11);
          lVar8 = *(long *)(*plVar11 + 0x68);
          if (lVar8 == 0) {
            iVar4 = FUN_01679c20(0);
          }
          else {
            plVar9 = (long *)(lVar8 + 0x48);
            (**(code **)(*plVar9 + 0x10))(plVar9);
            iVar4 = FUN_01679c20(lVar8);
            (**(code **)(*plVar9 + 0x18))(plVar9);
          }
          if (iVar4 == 6) {
            uVar6 = FUN_0101f840(*(undefined8 *)PTR_DAT_02710840);
            uVar5 = FUN_01020290(uVar6,0x1000000000000);
            if (((uVar5 & 1) != 0) ||
               (uVar5 = FUN_01020290(uVar6,0x2000000000000), (uVar5 & 1) != 0)) {
              FUN_01679b30(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x68),1);
              *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
              uVar5 = FUN_00fab260(*plVar11);
              if ((uVar5 & 1) != 0) {
LAB_00faf644:
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
switchD_00faf2ec_caseD_6:
                FUN_00fab200(*(undefined8 *)(param_1 + 0x90));
                puVar2 = PTR_DAT_02710848;
                lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
                if (lVar8 != 0) {
                  (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
                }
                lVar10 = *(long *)(lVar8 + 0x1e0);
                if (lVar10 != 0) {
                  (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
                }
                lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x68);
                puVar3 = (undefined8 *)PTR_DAT_02710920;
                if (lVar7 != 0) {
                  puVar3 = (undefined8 *)(lVar7 + 0x58);
                }
                FUN_015ab9c0(lVar10,*puVar3);
                lVar7 = *(long *)(*(long *)puVar2 + 0x90);
                if (lVar7 != 0) {
                  (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
                }
                if (*(long *)(lVar7 + 0x60) != 0) {
                  lVar12 = *(long *)(*(long *)(lVar7 + 0x60) + 0x610);
                  if (lVar12 != 0) {
                    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
                  }
                  local_48 = *(long *)(param_1 + 0x90);
                  if (local_48 != 0) {
                    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
                  }
                  FUN_00fad100(lVar12,&local_48);
                  if (local_48 != 0) {
                    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
                    local_48 = 0;
                  }
                  if (lVar12 != 0) {
                    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
                  }
                }
                (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
                if (lVar10 != 0) {
                  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
                }
                (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
                lVar8 = *(long *)(param_1 + 0x88);
                *(undefined8 *)(param_1 + 0x88) = 0;
                if (lVar8 != 0) {
                  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
                }
                lVar8 = *(long *)(param_1 + 0x90);
                *(undefined8 *)(param_1 + 0x90) = 0;
                if (lVar8 != 0) {
                  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
                }
                *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
                *(undefined4 *)(param_1 + 0x84) = 0;
              }
            }
          }
        }
      }
    }
    break;
  case 3:
    goto switchD_00faf2ec_caseD_3;
  case 4:
    goto LAB_00faf58c;
  case 5:
    uVar5 = FUN_00fab260(*(undefined8 *)(param_1 + 0x90));
    if ((uVar5 & 1) == 0) {
      return;
    }
    goto LAB_00faf644;
  case 6:
    goto switchD_00faf2ec_caseD_6;
  case 7:
    iVar4 = (**(code **)(**(long **)(*(long *)PTR_DAT_02710540 + 0x68) + 0x68))();
    if (iVar4 == 2) {
      uVar1 = *(int *)(param_1 + 0x84) + 1;
      *(uint *)(param_1 + 0x84) = uVar1;
      if (uVar1 < 10) {
        return;
      }
    }
    else if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}


