/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011137f0; name: FUN_011137f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011137f0(long *param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long local_70;
  char *pcStack_68;
  undefined8 local_60;
  long local_58;
  long local_48;
  
  lVar3 = FUN_010ff300(&local_70,param_1[1]);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x3e] != 0) {
    (**(code **)(*(long *)(param_1[0x3e] + 0x48) + 0x18))();
    param_1[0x3e] = 0;
  }
  param_1[0x3e] = lVar3;
  if ((param_1[0xd] != 0) &&
     (puVar8 = *(undefined8 **)(param_1[0xd] + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar3 = FUN_010e8cf0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar3) {
        puVar9 = puVar8 + -10;
        lVar3 = puVar8[2];
        goto joined_r0x01113b9c;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
  lVar3 = _DAT_00000060;
joined_r0x01113b9c:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
    param_1[0x11] = 0;
  }
  param_1[0x11] = lVar3;
  lVar3 = puVar9[0xd];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
    param_1[0x12] = 0;
  }
  param_1[0x12] = lVar3;
  puVar8 = *(undefined8 **)(param_1[0xc] + 0x60);
  plVar4 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  lVar3 = puVar8[0x9f];
  FUN_010f5c00(param_1 + 0x14,lVar3);
  plVar1 = *(long **)(lVar3 + 0x80);
  for (plVar4 = *(long **)(lVar3 + 0x78); plVar1 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
    lVar10 = local_70;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    if (lVar10 == 0x53ffffdf53d3dd19) {
      plVar7 = *(long **)(lVar3 + 0x80);
      if (plVar7 != plVar4) goto LAB_011139c8;
      goto LAB_01113a04;
    }
  }
  plVar7 = *(long **)(lVar3 + 0x80);
  plVar4 = plVar1;
  if (plVar7 == plVar1) {
LAB_01113a04:
    lVar10 = 0;
    plVar1 = *(long **)(lVar3 + 0x78);
    plVar7 = plVar4;
    if (plVar4 != *(long **)(lVar3 + 0x78)) goto LAB_01113a38;
  }
  else {
LAB_011139c8:
    lVar10 = *plVar4;
    if (lVar10 == 0) {
      plVar4 = plVar7;
      plVar1 = *(long **)(lVar3 + 0x78);
      if (plVar7 != *(long **)(lVar3 + 0x78)) goto LAB_01113a38;
    }
    else {
      uVar5 = FUN_010ef6c0(lVar10 + 0x50);
      plVar4 = *(long **)(lVar3 + 0x80);
      if ((uVar5 & 1) == 0) {
        lVar10 = 0;
      }
      plVar1 = *(long **)(lVar3 + 0x78);
      plVar7 = plVar4;
      if (plVar4 != *(long **)(lVar3 + 0x78)) {
LAB_01113a38:
        do {
          plVar4 = plVar1;
          FUN_006cf0c0(&local_70,*plVar4 + 0x5c0);
          lVar11 = local_70;
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          if (lVar11 == 0x73942199cc4ddd8f) {
            if (*(long **)(lVar3 + 0x80) != plVar4) goto LAB_01113a84;
            goto LAB_01113ab0;
          }
          plVar1 = plVar4 + 1;
          plVar4 = plVar7;
        } while (plVar7 != plVar1);
      }
    }
  }
  if (*(long **)(lVar3 + 0x80) != plVar4) {
LAB_01113a84:
    lVar11 = *plVar4;
    if (lVar11 != 0) {
      uVar5 = FUN_010efd60(lVar11 + 0x50);
      if ((uVar5 & 1) == 0) {
        lVar11 = 0;
      }
      goto LAB_01113ab4;
    }
  }
LAB_01113ab0:
  lVar11 = 0;
LAB_01113ab4:
  param_1[0x3c] = lVar11;
  local_70 = -0x7cfc1f1e05c7572f;
  pcStack_68 = "optionbar";
  local_60 = 9;
  local_58 = 0;
  lVar3 = FUN_0089c480(lVar3,&local_70);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  local_48 = param_1[0x12];
  param_1[0x3d] = lVar3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    lVar3 = param_1[0x3d];
  }
  FUN_01107d90(param_1 + 0x26,&local_48,lVar10,lVar3);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(long **)(param_1[0x3c] + 0x638) = param_1 + 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(*param_1 + 0x88))(param_1,0);
  return;
}


