/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbc160; name: FUN_00bbc160
 */


void FUN_00bbc160(long param_1,int *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  byte bVar17;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 *local_88;
  undefined8 local_80;
  long local_70;
  long local_68;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar11 = 0;
LAB_00bbc22c:
    lVar8 = *(long *)(param_1 + 0x2b0);
  }
  else {
    lVar8 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar8 == 0) {
      uVar11 = 0;
      lVar8 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar9 = (long *)(lVar8 + 0x48);
      (**(code **)(*plVar9 + 0x10))(plVar9);
      (**(code **)(*plVar9 + 0x18))(plVar9);
      lVar8 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      local_88 = &local_58;
      local_58 = 0;
      local_80 = 0xe2c06acab97c29c2;
      FUN_01037340(lVar8,&local_88,0);
      uVar11 = local_58;
      if (lVar8 == 0) goto LAB_00bbc22c;
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      lVar8 = *(long *)(param_1 + 0x2b0);
    }
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar8 + 0x2e8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  FUN_00ff86a0(&local_88,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar8 = local_88[0xc];
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (local_88 != (undefined8 *)0x0) {
    (**(code **)(local_88[9] + 0x18))();
    local_88 = (undefined8 *)0x0;
  }
  FUN_00bbb900(param_1);
  local_88 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar8,&local_88,lVar10);
  local_68 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar11,0,1,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(&local_88,&DAT_02637be8);
  FUN_016bbf30(uVar11,0,&local_88);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  uVar1 = param_2[1] - 2;
  if ((uint)param_2[1] < 2) {
LAB_00bbc4d0:
    bVar17 = 0;
    iVar7 = 1;
  }
  else {
    if (*param_2 != 0) {
      if (uVar1 < 5) {
        uVar13 = *(undefined8 *)(param_1 + 0x5e8);
        lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
        if (lVar15 != 0) {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
        }
        lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
        if (lVar14 == 0) {
          uVar3 = FUN_0150b350(0);
        }
        else {
          plVar9 = (long *)(lVar14 + 0x48);
          (**(code **)(*plVar9 + 0x10))(plVar9);
          uVar3 = FUN_0150b350(lVar14);
          (**(code **)(*plVar9 + 0x18))(plVar9);
        }
        if (lVar15 == 0) {
          uVar1 = param_2[1];
          uVar16 = 0;
        }
        else {
          (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
          uVar16 = 0;
          uVar1 = param_2[1];
        }
        goto joined_r0x00bbc404;
      }
      goto LAB_00bbc4d0;
    }
    if (5 < (int)uVar1) goto LAB_00bbc4d0;
    uVar13 = *(undefined8 *)(param_1 + 0x5e8);
    uVar3 = *(undefined4 *)(param_1 + 0x614);
    uVar16 = 1;
    uVar1 = param_2[1];
joined_r0x00bbc404:
    if (uVar1 < 2) {
LAB_00bbc474:
      uVar4 = 0xffffffff;
    }
    else {
      if (*param_2 == 0) {
        if ((int)(uVar1 - 2) < 6) {
          uVar5 = 1;
          iVar7 = 0;
          goto LAB_00bbc48c;
        }
        goto LAB_00bbc474;
      }
      if (4 < uVar1 - 2) goto LAB_00bbc474;
      iVar7 = *param_2 + -1;
      uVar5 = 0;
LAB_00bbc48c:
      uVar4 = FUN_00bcfb20(uVar5,iVar7);
    }
    lVar15 = thunk_FUN_00bccb30(uVar13,uVar16,uVar3,uVar4);
    if (lVar15 == 0) goto LAB_00bbc4d0;
    if ((*(char *)(param_1 + 0x60c) == '\0') || (uVar6 = FUN_00bbd240(param_1), (uVar6 & 1) == 0)) {
      local_88 = (undefined8 *)0xafc00806ba6ef3b5;
    }
    else {
      local_88 = (undefined8 *)0xafc30906ba712b3f;
    }
    FUN_0077eb10(lVar8,&local_88,lVar10);
    local_90 = lVar10;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    bVar17 = 1;
    FUN_016bb930(uVar11,1,4,&local_90);
    if (local_90 == 0) {
      iVar7 = 2;
    }
    else {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      iVar7 = 2;
      bVar17 = 1;
      local_90 = 0;
    }
  }
  local_88 = (undefined8 *)0xafc00206ba6ee983;
  FUN_0077eb10(lVar8,&local_88,lVar10);
  local_98 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar11,iVar7,3,&local_98);
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  iVar12 = iVar7 + 1;
  if (*(char *)(param_1 + 0x6e0) != '\0') {
    local_88 = (undefined8 *)0xafc00c06ba6efa81;
    FUN_0077eb10(lVar8,&local_88,lVar10);
    local_a0 = lVar10;
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar11,iVar12,2,&local_a0);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
    iVar12 = iVar7 + 2;
  }
  uVar13 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  lVar15 = FUN_016b7950(uVar13,param_2);
  if (lVar15 == -0x4f66e07890fe68a9) goto LAB_00bbc718;
  bVar2 = lVar15 != -0x28deae12defc8940;
  if ((bool)(lVar15 == -0x28deae12defc8940 | bVar17)) {
LAB_00bbc640:
    if (lVar15 == 0x1c25f63e48ab9462) {
      bVar2 = (bool)(bVar2 & **(char **)(param_1 + 0x5d8) == '\0');
    }
    if (!bVar2) goto LAB_00bbc718;
  }
  else if (lVar15 != -0x4ae43aff5c18c875) {
    bVar2 = lVar15 == 0x1c25f63e48ab9462;
    goto LAB_00bbc640;
  }
  local_88 = (undefined8 *)0xafc00306ba6eeb36;
  FUN_0077eb10(lVar8,&local_88,lVar10);
  local_a8 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar11,iVar12,0,&local_a8);
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  FUN_006cf0a0(&local_88,&DAT_02637be8);
  FUN_016bbf30(uVar11,iVar12,&local_88);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
LAB_00bbc718:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  return;
}


