/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01106a00; name: FUN_01106a00
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01106a00(long *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_78;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar2 = FUN_010ff300(&local_70,param_1[1]);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x53] != 0) {
    (**(code **)(*(long *)(param_1[0x53] + 0x48) + 0x18))();
    param_1[0x53] = 0;
  }
  param_1[0x53] = lVar2;
  if ((param_1[0xd] != 0) &&
     (puVar7 = *(undefined8 **)(param_1[0xd] + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar2 = FUN_010e8cf0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar2) {
        puVar8 = puVar7 + -10;
        lVar2 = puVar7[2];
        goto joined_r0x01106f30;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  lVar2 = _DAT_00000060;
joined_r0x01106f30:
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
    param_1[0x13] = 0;
  }
  param_1[0x13] = lVar2;
  lVar2 = puVar8[0xd];
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
    param_1[0x14] = 0;
  }
  param_1[0x14] = lVar2;
  puVar7 = *(undefined8 **)(param_1[0xc] + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02717528), iVar1 != 0))
  {
    uVar5 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar5;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  lVar2 = puVar7[0x9f];
  FUN_010f5c00(param_1 + 0x16,lVar2);
  plVar11 = *(long **)(lVar2 + 0x80);
  for (plVar3 = *(long **)(lVar2 + 0x78); plVar11 != plVar3; plVar3 = plVar3 + 1) {
    FUN_006cf0c0(&local_70,*plVar3 + 0x5c0);
    lVar9 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar9 == 0x53ffffdf53d3dd19) {
      plVar6 = *(long **)(lVar2 + 0x80);
      if (plVar6 != plVar3) goto LAB_01106bd8;
      goto LAB_01106c14;
    }
  }
  plVar6 = *(long **)(lVar2 + 0x80);
  plVar3 = plVar11;
  if (plVar6 == plVar11) {
LAB_01106c14:
    lVar9 = 0;
    plVar11 = *(long **)(lVar2 + 0x78);
    plVar6 = plVar3;
    if (plVar3 != *(long **)(lVar2 + 0x78)) goto LAB_01106c48;
  }
  else {
LAB_01106bd8:
    lVar9 = *plVar3;
    if (lVar9 == 0) {
      plVar3 = plVar6;
      plVar11 = *(long **)(lVar2 + 0x78);
      if (plVar6 != *(long **)(lVar2 + 0x78)) goto LAB_01106c48;
    }
    else {
      uVar4 = FUN_010ef6c0(lVar9 + 0x50);
      plVar3 = *(long **)(lVar2 + 0x80);
      if ((uVar4 & 1) == 0) {
        lVar9 = 0;
      }
      plVar11 = *(long **)(lVar2 + 0x78);
      plVar6 = plVar3;
      if (plVar3 != *(long **)(lVar2 + 0x78)) {
LAB_01106c48:
        do {
          plVar3 = plVar11;
          FUN_006cf0c0(&local_70,*plVar3 + 0x5c0);
          lVar10 = local_70;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          if (lVar10 == -0x1a6dbbee0c15921a) {
            if (*(long **)(lVar2 + 0x80) != plVar3) goto LAB_01106c94;
            goto LAB_01106cd0;
          }
          plVar11 = plVar3 + 1;
          plVar3 = plVar6;
        } while (plVar6 != plVar11);
      }
    }
  }
  if (*(long **)(lVar2 + 0x80) == plVar3) {
LAB_01106cd0:
    param_1[0x50] = 0;
    plVar11 = *(long **)(lVar2 + 0x80);
    plVar3 = *(long **)(lVar2 + 0x78);
    plVar6 = plVar11;
    if (plVar11 != *(long **)(lVar2 + 0x78)) {
LAB_01106cf4:
      do {
        plVar11 = plVar3;
        FUN_006cf0c0(&local_70,*plVar11 + 0x5c0);
        lVar10 = local_70;
        if (local_58 != 0) {
          (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
          local_58 = 0;
        }
        if (lVar10 == -0x2f2aa9faf12e8730) {
          if (*(long **)(lVar2 + 0x80) != plVar11) goto LAB_01106d40;
          goto LAB_01106d6c;
        }
        plVar3 = plVar11 + 1;
        plVar11 = plVar6;
      } while (plVar6 != plVar3);
    }
  }
  else {
LAB_01106c94:
    lVar10 = *plVar3;
    if (lVar10 == 0) goto LAB_01106cd0;
    uVar4 = FUN_010efc70(lVar10 + 0x50);
    if ((uVar4 & 1) == 0) {
      lVar10 = 0;
    }
    param_1[0x50] = lVar10;
    plVar11 = *(long **)(lVar2 + 0x80);
    plVar3 = *(long **)(lVar2 + 0x78);
    plVar6 = plVar11;
    if (plVar11 != *(long **)(lVar2 + 0x78)) goto LAB_01106cf4;
  }
  if (*(long **)(lVar2 + 0x80) != plVar11) {
LAB_01106d40:
    lVar10 = *plVar11;
    if (lVar10 != 0) {
      uVar4 = FUN_010efe50(lVar10 + 0x50);
      if ((uVar4 & 1) == 0) {
        lVar10 = 0;
      }
      goto LAB_01106d70;
    }
  }
LAB_01106d6c:
  lVar10 = 0;
LAB_01106d70:
  param_1[0x51] = lVar10;
  local_70 = -0x7cfc1f1e05c7572f;
  pcStack_68 = "optionbar";
  local_60 = 9;
  local_58 = 0;
  lVar2 = FUN_0089c480(lVar2,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_48 = param_1[0x14];
  param_1[0x52] = lVar2;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_01108100(param_1 + 0x28,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_78 = param_1[0x14];
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_01107d90(param_1 + 0x3a,&local_78,lVar9,param_1[0x52]);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  (**(code **)(*param_1 + 0x58))(param_1);
  if (param_1[0x13] == 0) {
    local_70 = 0;
    FUN_010f0d40();
  }
  else {
    FUN_010eb5e0(&local_70);
    FUN_010f0d40(local_70);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (param_1[0x14] == 0) {
    local_70 = 0;
    FUN_010ee5c0(0,2);
  }
  else {
    FUN_010edb50(&local_70);
    FUN_010ee5c0(local_70,2);
  }
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_01036f70(param_1[0x52]);
  *(undefined4 *)(param_1 + 0xf) = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  return;
}


