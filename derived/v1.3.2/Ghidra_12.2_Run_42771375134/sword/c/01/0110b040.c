/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0110b040; name: FUN_0110b040
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0110b040(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long local_70;
  long local_68;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_010e8cf0();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar8 = puVar7 + -10;
        lVar4 = puVar7[2];
        goto joined_r0x0110b474;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  lVar4 = _DAT_00000060;
joined_r0x0110b474:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar4;
  lVar4 = puVar8[0xd];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar4;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar3 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar3 != (long *)PTR_DAT_02717530; plVar3 = (long *)*plVar3) {
  }
  lVar4 = puVar7[0x9f];
  FUN_010f5c00(param_1 + 0xa0,lVar4);
  plVar1 = *(long **)(lVar4 + 0x80);
  for (plVar3 = *(long **)(lVar4 + 0x78); plVar1 != plVar3; plVar3 = plVar3 + 1) {
    FUN_006cf0c0(&local_60,*plVar3 + 0x5c0);
    lVar9 = local_60;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar9 == 0x6e3174eac0f87762) {
      if (*(long **)(lVar4 + 0x80) != plVar3) goto LAB_0110b1d4;
      goto LAB_0110b200;
    }
  }
  plVar3 = plVar1;
  if (*(long **)(lVar4 + 0x80) != plVar1) {
LAB_0110b1d4:
    lVar9 = *plVar3;
    if (lVar9 != 0) {
      uVar5 = FUN_010ef8a0(lVar9 + 0x50);
      if ((uVar5 & 1) == 0) {
        lVar9 = 0;
      }
      goto LAB_0110b204;
    }
  }
LAB_0110b200:
  lVar9 = 0;
LAB_0110b204:
  *(long *)(param_1 + 0x130) = lVar9;
  local_60 = -0x7cfc1f1e05c7572f;
  pcStack_58 = "optionbar";
  local_50 = 9;
  local_48 = 0;
  uVar6 = FUN_0089c480(lVar4,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  FUN_00ff86a0(&local_60,*(undefined8 *)(lVar4 + 0xb0),0);
  lVar4 = *(long *)(local_60 + 0x60);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  lVar9 = *(long *)(*(long *)(param_1 + 0x138) + 0x2b0);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar10 = *(long *)(lVar9 + 0x2e8);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  FUN_01036e20(*(undefined8 *)(param_1 + 0x138));
  local_60 = 0x6a1a8ec0e36659a0;
  FUN_0077eb10(lVar4,&local_60,lVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  local_68 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar6,0,0,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  local_60 = 0x6a1723c0e3636df8;
  FUN_0077eb10(lVar4,&local_60,lVar10);
  uVar6 = *(undefined8 *)(param_1 + 0x138);
  local_70 = lVar10;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  FUN_01036db0(uVar6,1,1,&local_70);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  *(long *)(*(long *)(param_1 + 0x130) + 0x608) = param_1 + 0x78;
  FUN_0110cf10(*(undefined8 *)(param_1 + 0x130));
  if (*(long *)(param_1 + 0x90) == 0) {
    local_60 = 0;
    FUN_010ee5c0(0,8);
  }
  else {
    FUN_010edb50(&local_60);
    FUN_010ee5c0(local_60,8);
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_01036f70(*(undefined8 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


