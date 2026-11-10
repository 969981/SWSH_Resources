/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ce42b0; name: FUN_00ce42b0
 */


void FUN_00ce42b0(long param_1)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0))
  {
    uVar6 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar6;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar5 != (long *)PTR_DAT_02717530; plVar5 = (long *)*plVar5) {
  }
  lVar9 = puVar8[0x9f];
  local_60 = -0x3c4e39f4ddaf45e0;
  local_58 = "ChikaResultViewResult";
  local_50 = 0x15;
  local_48 = 0;
  uVar6 = FUN_00ce1730(lVar9,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  local_60 = -0x398194bd6d7ca270;
  local_58 = "ChikaResultViewBlack";
  local_50 = 0x14;
  local_48 = 0;
  uVar6 = FUN_00ce4a10(lVar9,&local_60);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar6;
  FUN_006cf0a0(&local_60,PTR_DAT_027176e0);
  uVar6 = FUN_0089c480(lVar9,&local_60);
  *(undefined8 *)(param_1 + 0x88) = uVar6;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  plVar1 = *(long **)(lVar9 + 0x80);
  for (plVar5 = *(long **)(lVar9 + 0x78); plVar1 != plVar5; plVar5 = plVar5 + 1) {
    FUN_006cf0c0(&local_60,*plVar5 + 0x5c0);
    lVar3 = local_60;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    if (lVar3 == 0xf736fd1edafce6e) {
      if (*(long **)(lVar9 + 0x80) != plVar5) goto LAB_00ce4458;
      goto LAB_00ce44c8;
    }
  }
  plVar5 = plVar1;
  if (*(long **)(lVar9 + 0x80) == plVar1) {
LAB_00ce44c8:
    *(undefined8 *)(param_1 + 0x90) = 0;
    lVar9 = *(long *)(param_1 + 0x68);
    if (lVar9 == 0) {
      puVar8 = (undefined8 *)0x0;
      goto LAB_00ce44e0;
    }
  }
  else {
LAB_00ce4458:
    lVar9 = *plVar5;
    if (lVar9 == 0) goto LAB_00ce44c8;
    uVar7 = FUN_008a3e00(lVar9 + 0x50);
    if ((uVar7 & 1) == 0) {
      lVar9 = 0;
    }
    *(long *)(param_1 + 0x90) = lVar9;
    lVar9 = *(long *)(param_1 + 0x68);
    puVar8 = (undefined8 *)0x0;
    if (lVar9 == 0) goto LAB_00ce44e0;
  }
  puVar8 = *(undefined8 **)(lVar9 + 0x60);
  if (puVar8 != (undefined8 *)0x0) {
    plVar5 = (long *)(**(code **)*puVar8)(puVar8);
    lVar9 = FUN_00ce0f20();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar9) {
        puVar8 = puVar8 + -10;
        goto LAB_00ce44e0;
      }
    }
  }
  puVar8 = (undefined8 *)0x0;
LAB_00ce44e0:
  *(undefined8 **)(param_1 + 0xa8) = puVar8;
  *(undefined8 *)(param_1 + 0x98) = puVar8[0xc];
  lVar9 = puVar8[0xd];
  if (lVar9 == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    cVar2 = *(char *)(puVar8 + 0xf);
  }
  else {
    plVar5 = (long *)(lVar9 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    *(long *)(param_1 + 0xa0) = lVar9;
    (**(code **)(*plVar5 + 0x18))(plVar5);
    cVar2 = *(char *)(*(long *)(param_1 + 0xa8) + 0x78);
  }
  if (cVar2 != '\0') {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x80),3);
    *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0x78) = 0;
  }
  return;
}


