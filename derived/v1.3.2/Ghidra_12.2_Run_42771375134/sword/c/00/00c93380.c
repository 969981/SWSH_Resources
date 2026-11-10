/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c93380; name: FUN_00c93380
 */


void FUN_00c93380(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long local_68;
  long local_60;
  long local_58;
  char *local_50;
  undefined8 local_48;
  long local_40;
  long *local_38;
  int local_2c [3];
  
  bVar2 = param_2[2];
  uVar6 = (ulong)bVar2;
  if (bVar2 != 0) {
    local_2c[0] = bVar2 - 0x30;
    uVar6 = 1;
  }
  if (param_2[1] != 0) {
    local_2c[uVar6] = param_2[1] - 0x30;
    uVar6 = (ulong)((int)uVar6 + 1);
  }
  if (*param_2 == 0) {
LAB_00c933e0:
                    /* WARNING: Subroutine does not return */
    memset(local_2c + uVar6,0xff,(ulong)(2 - (int)uVar6) * 4 + 4);
  }
  local_2c[uVar6] = *param_2 - 0x30;
  uVar1 = (int)uVar6 + 1;
  uVar6 = (ulong)uVar1;
  if (uVar1 < 3) goto LAB_00c933e0;
  if (*(long *)(param_1 + 0x270) == 0) {
    local_38 = (long *)0x0;
    if (*(char *)(param_1 + 0x5f4) != '\0') goto LAB_00c93424;
LAB_00c934a0:
    if ((local_38 != (long *)0x0) &&
       ((**(code **)(*local_38 + 0xa8))(&local_60,local_38), local_60 != 0)) {
      if (*(int *)(local_60 + 0x54) != 0) {
        if (local_60 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(local_60 + 0x60);
          if (lVar5 != 0) {
            uVar6 = FUN_00a8cbe0(lVar5);
            lVar5 = lVar5 + -0x50;
            if ((uVar6 & 1) == 0) {
              lVar5 = 0;
            }
          }
        }
        local_58 = 0x4d2d32e941c2104a;
        local_50 = "num1Skin_vis";
        local_48 = 0xc;
        local_40 = 0;
        iVar4 = FUN_0072e390(*(undefined8 *)(lVar5 + 0x360),&local_58);
        if (-1 < iVar4) {
          FUN_0072e410(*(undefined8 *)(lVar5 + 0x360),iVar4,0,0);
        }
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
          local_40 = 0;
        }
        if (local_60 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(local_60 + 0x60);
          if (lVar5 != 0) {
            uVar6 = FUN_00a8cbe0(lVar5);
            lVar5 = lVar5 + -0x50;
            if ((uVar6 & 1) == 0) {
              lVar5 = 0;
            }
          }
        }
        local_58 = -0x2956a53b5bd8c159;
        local_50 = "num2Skin_vis";
        local_48 = 0xc;
        local_40 = 0;
        iVar4 = FUN_0072e390(*(undefined8 *)(lVar5 + 0x360),&local_58);
        if (-1 < iVar4) {
          FUN_0072e410(*(undefined8 *)(lVar5 + 0x360),iVar4,0,0);
        }
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
          local_40 = 0;
        }
        if (local_60 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(local_60 + 0x60);
          if (lVar5 != 0) {
            uVar6 = FUN_00a8cbe0(lVar5);
            lVar5 = lVar5 + -0x50;
            if ((uVar6 & 1) == 0) {
              lVar5 = 0;
            }
          }
        }
        local_58 = 0x82064882922dc34;
        local_50 = "num3Skin_vis";
        local_48 = 0xc;
        local_40 = 0;
        iVar4 = FUN_0072e390(*(undefined8 *)(lVar5 + 0x360),&local_58);
        if (-1 < iVar4) {
          FUN_0072e410(*(undefined8 *)(lVar5 + 0x360),iVar4,0,0);
        }
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
          local_40 = 0;
        }
      }
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
    }
  }
  else {
    FUN_00c834c0(*(long *)(param_1 + 0x270),*(undefined1 *)(param_1 + 0x34f));
    FUN_00c825a0(&local_38);
    if (*(char *)(param_1 + 0x5f4) == '\0') goto LAB_00c934a0;
LAB_00c93424:
    plVar3 = local_38;
    if (local_38 != (long *)0x0) {
      (**(code **)(local_38[9] + 0x10))();
    }
    local_58 = 0x362ef7dac8d7658;
    local_50 = "inner_num";
    local_48 = 9;
    local_40 = 0;
    FUN_00c93720(plVar3,&local_58,local_2c);
    if (plVar3 != (long *)0x0) {
      (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
      lVar5 = *(long *)(param_1 + 0x270);
      goto joined_r0x00c93488;
    }
  }
  lVar5 = *(long *)(param_1 + 0x270);
joined_r0x00c93488:
  if (lVar5 == 0) {
    local_68 = 0;
  }
  else {
    FUN_00c834c0(lVar5,*(undefined1 *)(param_1 + 0x373));
    FUN_00c825a0(&local_68);
  }
  local_58 = 0x144e669b634a19ac;
  local_50 = "bottoms_num";
  local_48 = 0xb;
  local_40 = 0;
  FUN_00c93720(local_68,&local_58,local_2c);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(local_38[9] + 0x18))();
  }
  return;
}


