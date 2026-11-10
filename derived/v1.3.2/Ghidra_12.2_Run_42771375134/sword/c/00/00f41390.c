/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f41390; name: FUN_00f41390
 */


undefined8 FUN_00f41390(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long local_38;
  long local_28;
  
  if (param_1[0x22] != 0) {
    puVar2 = *(undefined8 **)(param_1[0x22] + 0x60);
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    plVar3 = (long *)(**(code **)*puVar2)();
    lVar4 = FUN_00f41f30();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if (param_1[0x22] == 0) goto LAB_00f41420;
        puVar2 = *(undefined8 **)(param_1[0x22] + 0x60);
        if (puVar2 == (undefined8 *)0x0) goto LAB_00f41424;
        plVar3 = (long *)(**(code **)*puVar2)(puVar2);
        lVar4 = FUN_00f41f30();
        goto joined_r0x00f4140c;
      }
    }
  }
  return 0;
joined_r0x00f4140c:
  if (plVar3 == (long *)0x0) goto LAB_00f41420;
  if (plVar3 == (long *)lVar4) {
    puVar2 = puVar2 + -10;
    goto LAB_00f41424;
  }
  plVar3 = (long *)*plVar3;
  goto joined_r0x00f4140c;
LAB_00f41420:
  puVar2 = (undefined8 *)0x0;
LAB_00f41424:
  plVar3 = (long *)(**(code **)puVar2[10])(puVar2 + 10);
  if (((*PTR_DAT_02720a88 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_02720a88), iVar1 != 0))
  {
    uVar7 = FUN_00f41f30();
    *(undefined8 *)PTR_DAT_02720a90 = uVar7;
    __cxa_guard_release(PTR_DAT_02720a88);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)PTR_DAT_02720a90) goto LAB_00f4146c;
  }
  puVar2 = (undefined8 *)0x0;
LAB_00f4146c:
  (**(code **)(*param_1 + 0x10))(&local_38,param_1);
  local_28 = local_38;
  local_38 = 0;
  uVar5 = FUN_00f42c40(puVar2,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if ((param_1[0x23] != 0) &&
     (puVar2 = *(undefined8 **)(param_1[0x23] + 0x60), puVar2 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar2)();
    lVar4 = FUN_00f41e40();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if (param_1[0x23] == 0) goto LAB_00f41568;
        puVar2 = *(undefined8 **)(param_1[0x23] + 0x60);
        if (puVar2 == (undefined8 *)0x0) goto LAB_00f4156c;
        plVar3 = (long *)(**(code **)*puVar2)(puVar2);
        lVar4 = FUN_00f41e40();
        goto joined_r0x00f41554;
      }
    }
  }
  goto LAB_00f415dc;
joined_r0x00f41554:
  if (plVar3 == (long *)0x0) goto LAB_00f41568;
  if (plVar3 == (long *)lVar4) {
    puVar2 = puVar2 + -10;
    goto LAB_00f4156c;
  }
  plVar3 = (long *)*plVar3;
  goto joined_r0x00f41554;
joined_r0x00f41640:
  if (plVar3 == (long *)0x0) goto LAB_00f41654;
  if (plVar3 == (long *)lVar4) {
    puVar2 = puVar2 + -10;
    goto LAB_00f41658;
  }
  plVar3 = (long *)*plVar3;
  goto joined_r0x00f41640;
LAB_00f41654:
  puVar2 = (undefined8 *)0x0;
LAB_00f41658:
  plVar3 = (long *)(**(code **)puVar2[10])(puVar2 + 10);
  if (((*PTR_DAT_0271fd80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar1 != 0))
  {
    uVar7 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar7;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)PTR_DAT_0271fd88) {
      lVar4 = param_1[0x23];
      goto joined_r0x00f41768;
    }
  }
  puVar2 = (undefined8 *)0x0;
  lVar4 = param_1[0x23];
joined_r0x00f41768:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = puVar2[0x23];
  puVar2[0x23] = lVar4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  goto LAB_00f416c8;
LAB_00f41568:
  puVar2 = (undefined8 *)0x0;
LAB_00f4156c:
  plVar3 = (long *)(**(code **)puVar2[10])(puVar2 + 10);
  if (((*PTR_DAT_0271fd80 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar1 != 0))
  {
    uVar7 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar7;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    if (plVar3 == (long *)PTR_DAT_0271fd88) {
      lVar4 = param_1[0x24];
      goto joined_r0x00f41758;
    }
  }
  puVar2 = (undefined8 *)0x0;
  lVar4 = param_1[0x24];
joined_r0x00f41758:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar6 = puVar2[0x24];
  puVar2[0x24] = lVar4;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
LAB_00f415dc:
  if ((param_1[0x24] != 0) &&
     (puVar2 = *(undefined8 **)(param_1[0x24] + 0x60), puVar2 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar2)();
    lVar4 = FUN_00f41e40();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        if (param_1[0x24] == 0) goto LAB_00f41654;
        puVar2 = *(undefined8 **)(param_1[0x24] + 0x60);
        if (puVar2 == (undefined8 *)0x0) goto LAB_00f41658;
        plVar3 = (long *)(**(code **)*puVar2)(puVar2);
        lVar4 = FUN_00f41e40();
        goto joined_r0x00f41640;
      }
    }
  }
LAB_00f416c8:
  lVar4 = param_1[0x23];
  param_1[0x23] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = param_1[0x24];
  param_1[0x24] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = param_1[0x22];
  param_1[0x22] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  lVar4 = param_1[0x1f];
  param_1[0xc] = 0;
  if (lVar4 != 0) {
    plVar3 = (long *)param_1[0x1e];
    do {
      lVar4 = lVar4 + -1;
      if (*plVar3 != 0) {
        (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (lVar4 != 0);
  }
  param_1[0x1f] = 0;
  return 1;
}


