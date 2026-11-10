/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbba00; name: FUN_00bbba00
 */


void FUN_00bbba00(long param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  ulong uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 *local_90;
  undefined8 local_88;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  if (*(long *)(param_1 + 0x4c0) == 0) {
    uVar15 = 0;
LAB_00bbbacc:
    lVar12 = *(long *)(param_1 + 0x2b0);
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
    if (lVar12 == 0) {
      uVar15 = 0;
      lVar12 = *(long *)(param_1 + 0x2b0);
    }
    else {
      plVar13 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar12 = *(long *)(*(long *)(param_1 + 0x4c0) + 0x58);
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      local_90 = &local_68;
      local_68 = 0;
      local_88 = 0xe2c06acab97c29c2;
      FUN_01037340(lVar12,&local_90,0);
      uVar15 = local_68;
      if (lVar12 == 0) goto LAB_00bbbacc;
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      lVar12 = *(long *)(param_1 + 0x2b0);
    }
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar12 + 0x2e8);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_00ff86a0(&local_90,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar16 = local_90[0xc];
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (local_90 != (undefined8 *)0x0) {
    (**(code **)(local_90[9] + 0x18))();
    local_90 = (undefined8 *)0x0;
  }
  FUN_00bbb900(param_1);
  local_90 = (undefined8 *)0xafc00106ba6ee7d0;
  FUN_0077eb10(lVar16,&local_90,lVar14);
  local_70 = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar15,0,1,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_006cf0a0(&local_90,&DAT_02637be8);
  FUN_016bbf30(uVar15,0,&local_90);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  uVar2 = param_2[1] - 2;
  if ((uint)param_2[1] < 2) {
LAB_00bbbcec:
    bVar3 = 0;
    lVar18 = 0;
    cVar10 = *(char *)(param_1 + 0x620);
    if (*(int *)(param_1 + 0x61c) == 2) goto LAB_00bbbd04;
LAB_00bbbdac:
    if ((lVar18 != 0) || (cVar10 != '\0')) goto LAB_00bbbdbc;
LAB_00bbbdb4:
    iVar9 = 1;
  }
  else {
    if (*param_2 == 0) {
      if (5 < (int)uVar2) goto LAB_00bbbcec;
      uVar4 = *(undefined4 *)(param_1 + 0x614);
      uVar19 = 1;
      uVar2 = param_2[1];
      uVar20 = *(undefined8 *)(param_1 + 0x5e8);
    }
    else {
      if (4 < uVar2) goto LAB_00bbbcec;
      lVar18 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      lVar17 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
      if (lVar17 == 0) {
        uVar4 = FUN_0150b350(0);
      }
      else {
        plVar13 = (long *)(lVar17 + 0x48);
        (**(code **)(*plVar13 + 0x10))(plVar13);
        uVar4 = FUN_0150b350(lVar17);
        (**(code **)(*plVar13 + 0x18))(plVar13);
      }
      if (lVar18 == 0) {
        uVar2 = param_2[1];
        uVar20 = *(undefined8 *)(param_1 + 0x5e8);
        uVar19 = 0;
      }
      else {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
        uVar19 = 0;
        uVar2 = param_2[1];
        uVar20 = *(undefined8 *)(param_1 + 0x5e8);
      }
    }
    if (uVar2 < 2) {
LAB_00bbbd64:
      uVar5 = 0xffffffff;
    }
    else {
      if (*param_2 == 0) {
        if ((int)(uVar2 - 2) < 6) {
          uVar6 = 1;
          iVar9 = 0;
          goto LAB_00bbbd7c;
        }
        goto LAB_00bbbd64;
      }
      if (4 < uVar2 - 2) goto LAB_00bbbd64;
      iVar9 = *param_2 + -1;
      uVar6 = 0;
LAB_00bbbd7c:
      uVar5 = FUN_00bcfb20(uVar6,iVar9);
    }
    lVar18 = thunk_FUN_00bccb30(uVar20,uVar19,uVar4,uVar5);
    bVar3 = 1;
    cVar10 = *(char *)(param_1 + 0x620);
    if (*(int *)(param_1 + 0x61c) != 2) goto LAB_00bbbdac;
LAB_00bbbd04:
    bVar1 = cVar10 == '\0';
    cVar10 = '\0';
    if (bVar1) goto LAB_00bbbdac;
    puVar7 = (undefined4 *)FUN_00bd2120(*(undefined8 *)(param_1 + 0x5f0));
    uVar4 = FUN_00bcfb20(*puVar7,(uint)puVar7[1] >> 8 & 0x3f,(uint)puVar7[1] >> 0xe & 0x3f);
    lVar17 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),*puVar7,*(undefined1 *)(puVar7 + 1)
                                ,uVar4);
    if (lVar17 == 0) goto LAB_00bbbdb4;
LAB_00bbbdbc:
    if ((*(char *)(param_1 + 0x60c) == '\0') || (uVar8 = FUN_00bbd240(param_1), (uVar8 & 1) == 0)) {
      local_90 = (undefined8 *)0xafc00806ba6ef3b5;
    }
    else {
      local_90 = (undefined8 *)0xafc30906ba712b3f;
    }
    FUN_0077eb10(lVar16,&local_90,lVar14);
    local_98 = lVar14;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    FUN_016bb930(uVar15,1,4,&local_98);
    if (local_98 != 0) {
      (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
      local_98 = 0;
    }
    iVar9 = 2;
  }
  uVar19 = FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  lVar17 = FUN_016b7950(uVar19,param_2);
  if (*(char *)(param_1 + 0x620) == '\0') {
    if ((*(int *)(param_1 + 0x61c) == 2) && (*(char *)(param_1 + 0x630) != '\0')) {
      iVar11 = *(int *)(param_1 + 0x618);
      if (iVar11 == 1) goto LAB_00bbbf08;
LAB_00bbc008:
      bVar1 = true;
    }
    else {
      local_90 = (undefined8 *)0xafc00206ba6ee983;
      FUN_0077eb10(lVar16,&local_90,lVar14);
      local_a0 = lVar14;
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      FUN_016bb930(uVar15,iVar9,3,&local_a0);
      if (local_a0 != 0) {
        (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
        local_a0 = 0;
      }
      local_90 = (undefined8 *)0xafc00706ba6ef202;
      FUN_0077eb10(lVar16,&local_90,lVar14);
      local_a8 = lVar14;
      if (lVar14 != 0) {
        (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      }
      FUN_016bb930(uVar15,iVar9 + 1,2,&local_a8);
      if (local_a8 != 0) {
        (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
        local_a8 = 0;
      }
      iVar9 = iVar9 + 2;
      iVar11 = *(int *)(param_1 + 0x618);
      if (iVar11 != 1) goto LAB_00bbc008;
LAB_00bbbf08:
      bVar1 = lVar18 != 0 || *(int *)(param_1 + 0x61c) != 1;
    }
    if (lVar17 == -0x4f66e07890fe68a9) {
      if ((iVar11 != 2) || ((!bVar1 || (*(int *)(param_1 + 0x614) == 0)))) goto LAB_00bbc100;
    }
    else if ((!bVar1) || ((bool)(lVar18 == 0 & bVar3 & *(int *)(param_1 + 0x61c) != 2)))
    goto LAB_00bbc100;
  }
  else if ((lVar17 == -0x4f66e07890fe68a9) ||
          (((lVar17 == -0x28deae12defc8940 || (lVar17 == 0x1c25f63e48ab9462)) ||
           ((*(int *)(param_1 + 0x618) == 1 && ((lVar18 == 0 && (lVar17 != -0x4ae43aff5c18c875))))))
          )) goto LAB_00bbc100;
  local_90 = (undefined8 *)0xafc00306ba6eeb36;
  FUN_0077eb10(lVar16,&local_90,lVar14);
  local_b0 = lVar14;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  FUN_016bb930(uVar15,iVar9,0,&local_b0);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  FUN_006cf0a0(&local_90,&DAT_02637be8);
  FUN_016bbf30(uVar15,iVar9,&local_90);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
LAB_00bbc100:
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


