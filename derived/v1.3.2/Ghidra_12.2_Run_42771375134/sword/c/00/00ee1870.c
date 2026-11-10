/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee1870; name: FUN_00ee1870
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00ee1870(long param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_60;
  long local_58;
  
  lVar5 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar7 == 0) {
    uVar4 = FUN_01510f00(0,0x74197e9ac3e193fd);
    if ((uVar4 & 1) == 0) goto LAB_00ee1990;
LAB_00ee1914:
    if (param_2 != (undefined8 *)0x0) {
      strncpy((char *)(param_2 + 8),"a_d0101",0x40);
      *param_2 = 0xdf864ae11fd1f74f;
      param_2[1] = 0x8f67cd45f405d66e;
      uVar6 = _DAT_01d4b080;
      param_2[5] = _UNK_01d4b088;
      param_2[4] = uVar6;
    }
    if (param_3 != (long *)0x0) {
      lVar7 = -0x7ba53809097a3a8;
      goto LAB_00ee1b30;
    }
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar4 = FUN_01510f00(lVar7,0x74197e9ac3e193fd);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if ((uVar4 & 1) != 0) goto LAB_00ee1914;
LAB_00ee1990:
    if (*(long *)(*(long *)PTR_DAT_02717c48 + 0x180) == 0x5742865396e549d0) {
      if (param_2 != (undefined8 *)0x0) {
        strncpy((char *)(param_2 + 8),"a_wr0101",0x40);
        *param_2 = 0x5742865396e549d0;
        param_2[1] = 0x776775717ea4468b;
        uVar6 = _DAT_01d49e50;
        param_2[5] = _UNK_01d49e58;
        param_2[4] = uVar6;
      }
      if (param_3 != (long *)0x0) {
        lVar7 = 0x494757dfc389b41a;
LAB_00ee1b30:
        *param_3 = lVar7;
      }
    }
    else {
      lVar7 = *(long *)(*(long *)puVar1 + 0x1c0);
      if (lVar7 == 0) {
        local_58 = _DAT_00000068;
      }
      else {
        plVar8 = (long *)(lVar7 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        lVar7 = *(long *)(lVar7 + 0x68);
        (**(code **)(*plVar8 + 0x18))(plVar8);
        local_58 = lVar7;
      }
      iVar3 = FUN_0100d230(lVar5,&local_58);
      if (iVar3 == 1) {
        if (param_2 != (undefined8 *)0x0) {
          FUN_00db1810(param_2);
        }
        if (param_3 != (long *)0x0) {
          lVar7 = 0x1c5ca054eb51bd50;
          goto LAB_00ee1b30;
        }
      }
      else if (local_58 == 0x7e8eca6c178176b7) {
LAB_00ee1a9c:
        if (param_2 != (undefined8 *)0x0) {
          strncpy((char *)(param_2 + 8),"a_pl0101",0x40);
          *param_2 = 0xd21509a8fafab5ed;
          param_2[1] = 0x7e87bd6c177b41f2;
          uVar6 = _DAT_01d4a1f0;
          param_2[5] = _UNK_01d4a1f8;
          param_2[4] = uVar6;
        }
        if (param_3 != (long *)0x0) {
          lVar7 = -0xe6a1b89afa71b1c;
          goto LAB_00ee1b30;
        }
      }
      else {
        iVar3 = FUN_0100d230(lVar5,&local_58);
        if (iVar3 == 2) {
          if (param_2 != (undefined8 *)0x0) {
            FUN_00db1810(param_2);
          }
          if (param_3 != (long *)0x0) {
            lVar7 = 0x2e025e30ad94cfe5;
            goto LAB_00ee1b30;
          }
        }
        else {
          if ((local_58 == 0x7e8eca6c178176b7) || (local_58 == 0x7e84b86c1779039c))
          goto LAB_00ee1a9c;
          lVar7 = *(long *)(*(long *)puVar1 + 0x1b8);
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
          }
          uVar4 = FUN_01510f00(lVar7,0xe1384f38ac4c43fc);
          if ((uVar4 & 1) == 0) {
            bVar2 = false;
          }
          else {
            lVar9 = *(long *)(*(long *)puVar1 + 0x1c0);
            if (lVar9 == 0) {
              bVar2 = _DAT_00000068 == -0x2430a300fe7f4f8d;
            }
            else {
              plVar8 = (long *)(lVar9 + 0x48);
              (**(code **)(*plVar8 + 0x10))(plVar8);
              bVar2 = *(long *)(lVar9 + 0x68) == -0x2430a300fe7f4f8d;
              (**(code **)(*plVar8 + 0x18))(plVar8);
            }
          }
          if (lVar7 != 0) {
            (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
          }
          if (bVar2) {
            if (param_2 != (undefined8 *)0x0) {
              strncpy((char *)(param_2 + 8),"a_0301",0x40);
              *param_2 = 0x89c421d3749f350b;
              param_2[1] = 0xdbcf5cff0180b073;
              uVar6 = _DAT_01d4b610;
              param_2[5] = _UNK_01d4b618;
              param_2[4] = uVar6;
            }
            if (param_3 != (long *)0x0) {
              lVar7 = -0x33278d2157fd2ab;
              goto LAB_00ee1b30;
            }
          }
          else {
            lVar7 = *(long *)(*(long *)puVar1 + 0x1b8);
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
            }
            uVar4 = FUN_01510f00(lVar7,0x8e3e92ece093c7fc);
            if ((uVar4 & 1) == 0) {
              bVar2 = false;
            }
            else {
              lVar9 = *(long *)(*(long *)puVar1 + 0x1c0);
              if (lVar9 == 0) {
                bVar2 = _DAT_00000068 == 0x75d83e45e5aa7953;
              }
              else {
                plVar8 = (long *)(lVar9 + 0x48);
                (**(code **)(*plVar8 + 0x10))(plVar8);
                bVar2 = *(long *)(lVar9 + 0x68) == 0x75d83e45e5aa7953;
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
            }
            if (lVar7 != 0) {
              (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
            }
            if (!bVar2) {
              lVar7 = *(long *)(*(long *)puVar1 + 0x1c0);
              if (lVar7 == 0) {
                local_60 = _DAT_00000060;
              }
              else {
                plVar8 = (long *)(lVar7 + 0x48);
                (**(code **)(*plVar8 + 0x10))(plVar8);
                local_60 = *(undefined8 *)(lVar7 + 0x60);
                (**(code **)(*plVar8 + 0x18))(plVar8);
              }
              uVar4 = FUN_01009850(lVar5,&local_60,param_2,param_3);
              if ((uVar4 & 1) == 0) {
                uVar6 = 0;
              }
              else {
                if ((*param_3 == -0x24bed87efb286346) || (*param_3 != 0x59a886b867b9c018)) {
                  *(undefined4 *)(param_1 + 0x120) = 0;
                }
                else {
                  *(undefined4 *)(param_1 + 0x120) = 1;
                }
                uVar6 = 1;
              }
              goto joined_r0x00ee1e74;
            }
            if (param_2 != (undefined8 *)0x0) {
              strncpy((char *)(param_2 + 8),"a_0201",0x40);
              *param_2 = 0x92dabad379e43890;
              param_2[1] = 0x194b97ff2492111a;
              uVar6 = _DAT_01d4b260;
              param_2[5] = _UNK_01d4b268;
              param_2[4] = uVar6;
            }
            if (param_3 != (long *)0x0) {
              lVar7 = 0x2f8c2ae4c3e0d915;
              goto LAB_00ee1b30;
            }
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x120) = 2;
  uVar6 = 1;
joined_r0x00ee1e74:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return uVar6;
}


