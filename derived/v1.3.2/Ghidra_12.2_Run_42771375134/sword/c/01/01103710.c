/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01103710; name: FUN_01103710
 */


/* WARNING: Heritage AFTER dead removal. Example location: r0x00000060 : 0x0110377c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01103710(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar9 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar9)(puVar9);
    lVar5 = FUN_010e8cf0();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar10 = puVar9 + -10;
        lVar5 = puVar9[2];
        goto joined_r0x01103a70;
      }
    }
  }
  puVar10 = (undefined8 *)0x0;
  lVar5 = _DAT_00000060;
joined_r0x01103a70:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x80) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x80) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(long *)(param_1 + 0x80) = lVar5;
  lVar5 = puVar10[0xd];
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x88) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  *(long *)(param_1 + 0x88) = lVar5;
  puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar4 = (long *)(**(code **)*puVar9)(puVar9);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_02717528), iVar3 != 0))
  {
    uVar7 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar7;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar4 != (long *)PTR_DAT_02717530; plVar4 = (long *)*plVar4) {
  }
  lVar5 = puVar9[0x9f];
  plVar1 = *(long **)(lVar5 + 0x80);
  for (plVar4 = *(long **)(lVar5 + 0x78); plVar1 != plVar4; plVar4 = plVar4 + 1) {
    FUN_006cf0c0(&local_60,*plVar4 + 0x5c0);
    lVar11 = local_60;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar11 == 0x53ffffdf53d3dd19) {
      if (*(long **)(lVar5 + 0x80) != plVar4) goto LAB_01103894;
      goto LAB_011038c0;
    }
  }
  plVar4 = plVar1;
  if (*(long **)(lVar5 + 0x80) != plVar1) {
LAB_01103894:
    lVar11 = *plVar4;
    if (lVar11 != 0) {
      uVar6 = FUN_010ef6c0(lVar11 + 0x50);
      if ((uVar6 & 1) == 0) {
        lVar11 = 0;
      }
      goto LAB_011038c4;
    }
  }
LAB_011038c0:
  lVar11 = 0;
LAB_011038c4:
  *(long *)(param_1 + 0x90) = lVar11;
  local_60 = -0x7cfc1f1e05c7572f;
  pcStack_58 = "optionbar";
  local_50 = 9;
  local_48 = 0;
  uVar7 = FUN_0089c480(lVar5,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x98) = uVar7;
  if (*(long *)(param_1 + 0x88) == 0) {
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
  FUN_01036e20(*(undefined8 *)(param_1 + 0x98));
  puVar2 = PTR_DAT_02710798;
  lVar5 = *(long *)(*(long *)PTR_DAT_02710798 + 0x208);
  if (lVar5 == 0) {
    uVar6 = FUN_01539270(0);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
  }
  else {
    plVar4 = (long *)(lVar5 + 0x48);
    (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar6 = FUN_01539270(lVar5);
    (**(code **)(*plVar4 + 0x18))(plVar4);
    uVar7 = *(undefined8 *)(param_1 + 0x90);
  }
  if ((uVar6 & 1) == 0) {
    FUN_01102d70(uVar7,0x26);
    FUN_01103ad0(param_1,1);
    uVar8 = 2;
  }
  else {
    FUN_01102d70(uVar7,0x25);
    lVar5 = *(long *)(*(long *)puVar2 + 0x208);
    if (lVar5 == 0) {
      FUN_01539280(0,0);
    }
    else {
      plVar4 = (long *)(lVar5 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      FUN_01539280(lVar5,0);
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    FUN_01103ad0(param_1,0);
    uVar8 = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  return;
}


