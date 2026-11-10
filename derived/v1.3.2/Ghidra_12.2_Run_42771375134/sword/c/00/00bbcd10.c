/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbcd10; name: FUN_00bbcd10
 */


void FUN_00bbcd10(long param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar10 = 0;
LAB_00bbcddc:
    lVar7 = *(long *)(param_1 + 0x2b0);
  }
  else {
    lVar7 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar7 == 0) {
      uVar10 = 0;
      lVar7 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar8 = (long *)(lVar7 + 0x48);
      (**(code **)(*plVar8 + 0x10))(plVar8);
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar7 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      local_90 = &local_68;
      local_68 = 0;
      local_88 = 0xe2c06acab97c29c2;
      FUN_01037340(lVar7,&local_90,0);
      uVar10 = local_68;
      if (lVar7 == 0) goto LAB_00bbcddc;
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      lVar7 = *(long *)(param_1 + 0x2b0);
    }
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar7 + 0x2e8);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  FUN_00ff86a0(&local_90,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar7 = local_90[0xc];
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)(local_90[9] + 0x18))();
    local_90 = (undefined8 *)0x0;
  }
  FUN_00bbb900(param_1);
  local_90 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar7,&local_90,lVar9);
  local_70 = lVar9;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar10,0,1,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_006cf0a0(&local_90,&DAT_02637be8);
  FUN_016bbf30(uVar10,0,&local_90);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  uVar1 = param_2[1] - 2;
  if (1 < (uint)param_2[1]) {
    if (*param_2 == 0) {
      if ((int)uVar1 < 6) {
        uVar12 = *(undefined8 *)(param_1 + 0x5e8);
        uVar2 = *(undefined4 *)(param_1 + 0x614);
        uVar15 = 1;
        uVar1 = param_2[1];
        goto joined_r0x00bbd004;
      }
    }
    else if (uVar1 < 5) {
      uVar12 = *(undefined8 *)(param_1 + 0x5e8);
      lVar14 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar13 == 0) {
        uVar2 = FUN_0150b350(0);
      }
      else {
        plVar8 = (long *)(lVar13 + 0x48);
        (**(code **)(*plVar8 + 0x10))(plVar8);
        uVar2 = FUN_0150b350(lVar13);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
      if (lVar14 == 0) {
        uVar1 = param_2[1];
        uVar15 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
        uVar15 = 0;
        uVar1 = param_2[1];
      }
joined_r0x00bbd004:
      if (uVar1 < 2) {
LAB_00bbd028:
        uVar3 = 0xffffffff;
      }
      else {
        if (*param_2 == 0) {
          if ((int)(uVar1 - 2) < 6) {
            uVar4 = 1;
            iVar6 = 0;
            goto LAB_00bbd040;
          }
          goto LAB_00bbd028;
        }
        if (4 < uVar1 - 2) goto LAB_00bbd028;
        iVar6 = *param_2 + -1;
        uVar4 = 0;
LAB_00bbd040:
        uVar3 = FUN_00bcfb20(uVar4,iVar6);
      }
      lVar14 = thunk_FUN_00bccb30(uVar12,uVar15,uVar2,uVar3);
      if (lVar14 != 0) {
        if ((*(char *)(param_1 + 0x60c) == '\0') ||
           (uVar5 = FUN_00bbd240(param_1), (uVar5 & 1) == 0)) {
          local_90 = (undefined8 *)0xafc00806ba6ef3b5;
        }
        else {
          local_90 = (undefined8 *)0xafc30906ba712b3f;
        }
        FUN_0077eb10(lVar7,&local_90,lVar9);
        local_98 = lVar9;
        if (lVar9 != 0) {
          (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
        }
        bVar11 = true;
        FUN_016bb930(uVar10,1,4,&local_98);
        if (local_98 == 0) {
          uVar15 = 2;
        }
        else {
          (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
          uVar15 = 2;
          bVar11 = true;
          local_98 = 0;
        }
        goto LAB_00bbd08c;
      }
    }
  }
  bVar11 = false;
  uVar15 = 1;
LAB_00bbd08c:
  uVar12 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  lVar14 = FUN_016b7950(uVar12,param_2);
  if (((lVar14 != -0x4f66e07890fe68a9) && (lVar14 != -0x28deae12defc8940)) &&
     ((bVar11 || ((lVar14 == 0x1c25f63e48ab9462 || (lVar14 == -0x4ae43aff5c18c875)))))) {
    local_90 = (undefined8 *)0xafc00306ba6eeb36;
    FUN_0077eb10(lVar7,&local_90,lVar9);
    local_a0 = lVar9;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar10,uVar15,0,&local_a0);
    if (local_a0 != 0) {
      (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
      local_a0 = 0;
    }
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


