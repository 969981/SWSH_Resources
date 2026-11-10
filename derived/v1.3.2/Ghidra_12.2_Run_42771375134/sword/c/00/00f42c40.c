/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f42c40; name: FUN_00f42c40
 */


undefined8 FUN_00f42c40(long param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  if (*param_2 != 0) {
    puVar3 = *(undefined8 **)(*param_2 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    plVar4 = (long *)(**(code **)*puVar3)();
    lVar5 = FUN_00f41e40();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        if (*param_2 == 0) goto LAB_00f42ce8;
        puVar3 = *(undefined8 **)(*param_2 + 0x60);
        if (puVar3 == (undefined8 *)0x0) goto LAB_00f42cec;
        plVar4 = (long *)(**(code **)*puVar3)(puVar3);
        lVar5 = FUN_00f41e40();
        goto joined_r0x00f42cd4;
      }
    }
  }
  return 0;
joined_r0x00f42cd4:
  if (plVar4 == (long *)0x0) goto LAB_00f42ce8;
  if (plVar4 == (long *)lVar5) {
    puVar3 = puVar3 + -10;
    goto LAB_00f42cec;
  }
  plVar4 = (long *)*plVar4;
  goto joined_r0x00f42cd4;
LAB_00f42ce8:
  puVar3 = (undefined8 *)0x0;
LAB_00f42cec:
  plVar4 = (long *)(**(code **)puVar3[10])(puVar3 + 10);
  puVar1 = PTR_DAT_0271fd80;
  if (((*PTR_DAT_0271fd80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar2 != 0))
  {
    uVar8 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar8;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)PTR_DAT_0271fd88) {
      lVar5 = *(long *)(param_1 + 0x60);
      goto joined_r0x00f42d78;
    }
  }
  puVar3 = (undefined8 *)0x0;
  lVar5 = *(long *)(param_1 + 0x60);
joined_r0x00f42d78:
  if (lVar5 == 0) {
    return 1;
  }
  if (*(undefined8 **)(lVar5 + 0x60) == (undefined8 *)0x0) {
    return 1;
  }
  plVar4 = (long *)(**(code **)**(undefined8 **)(lVar5 + 0x60))();
  plVar6 = (long *)FUN_00f41e40();
  if (plVar4 == (long *)0x0) {
    return 1;
  }
  while (plVar4 != plVar6) {
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      return 1;
    }
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
    if (puVar9 == (undefined8 *)0x0) goto LAB_00f42dc8;
    plVar4 = (long *)(**(code **)*puVar9)(puVar9);
    lVar5 = FUN_00f41e40();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        puVar9 = puVar9 + -10;
        goto LAB_00f42dc8;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_00f42dc8:
  plVar4 = (long *)(**(code **)puVar9[10])(puVar9 + 10);
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar2 != 0)) {
    uVar8 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar8;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  do {
    if (plVar4 == (long *)0x0) {
      if (puVar3 == (undefined8 *)0x0) {
LAB_00f42e18:
        lVar5 = puVar3[0x24];
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar7 = *(long *)(param_1 + 0x60);
        *(long *)(param_1 + 0x60) = lVar5;
        if (lVar7 != 0) {
          (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
        }
      }
      return 1;
    }
    if (plVar4 == (long *)PTR_DAT_0271fd88) {
      if (puVar9 != puVar3) {
        return 1;
      }
      goto LAB_00f42e18;
    }
    plVar4 = (long *)*plVar4;
  } while( true );
}


