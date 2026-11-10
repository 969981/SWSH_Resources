/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fe0b0; name: FUN_010fe0b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010fe0b0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = FUN_010ff300(&local_60,*(undefined8 *)(param_1 + 8));
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x148) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  *(long *)(param_1 + 0x148) = lVar3;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar7)(puVar7);
    lVar3 = FUN_010e8cf0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar3) {
        puVar8 = puVar7 + -10;
        lVar3 = puVar7[2];
        goto joined_r0x010fe384;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
  lVar3 = _DAT_00000060;
joined_r0x010fe384:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar3;
  lVar3 = puVar8[0xd];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = lVar3;
  puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar7)(puVar7);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_02717528), iVar2 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  lVar3 = puVar7[0x9f];
  FUN_010f5c00(param_1 + 0xa0,lVar3);
  plVar1 = *(long **)(lVar3 + 0x80);
  for (plVar4 = *(long **)(lVar3 + 0x78); plVar1 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_60,*plVar4 + 0x5c0);
    lVar9 = local_60;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar9 == 0x53ffffdf53d3dd19) {
      if (*(long **)(lVar3 + 0x80) != plVar4) goto LAB_010fe280;
      goto LAB_010fe2ac;
    }
  }
  plVar4 = plVar1;
  if (*(long **)(lVar3 + 0x80) != plVar1) {
LAB_010fe280:
    lVar9 = *plVar4;
    if (lVar9 != 0) {
      uVar5 = FUN_010ef6c0(lVar9 + 0x50);
      if ((uVar5 & 1) == 0) {
        lVar9 = 0;
      }
      goto LAB_010fe2b0;
    }
  }
LAB_010fe2ac:
  lVar9 = 0;
LAB_010fe2b0:
  *(long *)(param_1 + 0x130) = lVar9;
  local_60 = -0x7cfc1f1e05c7572f;
  pcStack_58 = "optionbar";
  local_50 = 9;
  local_48 = 0;
  uVar6 = FUN_0089c480(lVar3,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x138) = uVar6;
  FUN_01036e20(uVar6);
  if (*(long *)(param_1 + 0x90) == 0) {
    local_60 = 0;
    FUN_010ee5c0(0,2);
  }
  else {
    FUN_010edb50(&local_60);
    FUN_010ee5c0(local_60,2);
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_01036f70(*(undefined8 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}


