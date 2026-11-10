/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f427e0; name: FUN_00f427e0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f427e0(long *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long local_48;
  
  if (*param_2 != 0) {
    puVar3 = *(undefined8 **)(*param_2 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    plVar4 = (long *)(**(code **)*puVar3)();
    lVar5 = FUN_00f41e40();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        if (*param_2 == 0) goto LAB_00f42890;
        puVar3 = *(undefined8 **)(*param_2 + 0x60);
        if (puVar3 == (undefined8 *)0x0) goto LAB_00f42894;
        plVar4 = (long *)(**(code **)*puVar3)(puVar3);
        lVar5 = FUN_00f41e40();
        goto joined_r0x00f4287c;
      }
    }
  }
  return 0;
joined_r0x00f4287c:
  if (plVar4 == (long *)0x0) goto LAB_00f42890;
  if (plVar4 == (long *)lVar5) {
    puVar3 = puVar3 + -10;
    goto LAB_00f42894;
  }
  plVar4 = (long *)*plVar4;
  goto joined_r0x00f4287c;
joined_r0x00f42be4:
  if (plVar4 == (long *)0x0) goto LAB_00f42968;
  if (plVar4 == (long *)PTR_DAT_02720a90) {
    if (puVar8 + -10 == param_1) {
      return 0;
    }
    goto LAB_00f42984;
  }
  plVar4 = (long *)*plVar4;
  goto joined_r0x00f42be4;
LAB_00f42968:
  if (param_1 == (long *)0x0) {
    return 0;
  }
  goto LAB_00f42984;
joined_r0x00f42a18:
  if (plVar4 == (long *)0x0) goto LAB_00f42a2c;
  if (plVar4 == (long *)lVar5) {
    puVar8 = puVar8 + -10;
    goto LAB_00f42a30;
  }
  plVar4 = (long *)*plVar4;
  goto joined_r0x00f42a18;
LAB_00f42a2c:
  puVar8 = (undefined8 *)0x0;
LAB_00f42a30:
  plVar4 = (long *)(**(code **)puVar8[10])(puVar8 + 10);
  if (((*puVar1 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar2 != 0)) {
    uVar7 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar7;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)PTR_DAT_0271fd88) {
      lVar5 = *param_2;
      goto joined_r0x00f42b4c;
    }
  }
  puVar8 = (undefined8 *)0x0;
  lVar5 = *param_2;
joined_r0x00f42b4c:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = puVar8[0x23];
  puVar8[0x23] = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  goto LAB_00f42a98;
LAB_00f42890:
  puVar3 = (undefined8 *)0x0;
LAB_00f42894:
  plVar4 = (long *)(**(code **)puVar3[10])(puVar3 + 10);
  puVar1 = PTR_DAT_0271fd80;
  if (((*PTR_DAT_0271fd80 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar2 != 0))
  {
    uVar7 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar7;
    __cxa_guard_release(PTR_DAT_0271fd80);
  }
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    if (plVar4 == (long *)PTR_DAT_0271fd88) {
      lVar5 = puVar3[0x22];
      goto joined_r0x00f4291c;
    }
  }
  puVar3 = (undefined8 *)0x0;
  lVar5 = _DAT_00000110;
joined_r0x00f4291c:
  if ((lVar5 != 0) && (puVar8 = *(undefined8 **)(lVar5 + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)(puVar8);
    lVar5 = FUN_00f41f30();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        if (((*PTR_DAT_02720a88 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_02720a88), iVar2 != 0)) {
          uVar7 = FUN_00f41f30();
          *(undefined8 *)PTR_DAT_02720a90 = uVar7;
          __cxa_guard_release(PTR_DAT_02720a88);
        }
        goto joined_r0x00f42be4;
      }
    }
  }
LAB_00f42984:
  if ((param_1[0xc] != 0) &&
     (puVar8 = *(undefined8 **)(param_1[0xc] + 0x60), puVar8 != (undefined8 *)0x0)) {
    plVar4 = (long *)(**(code **)*puVar8)();
    lVar5 = FUN_00f41e40();
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (plVar4 == (long *)lVar5) {
        lVar5 = param_1[0xc];
        if (lVar5 != 0) {
          (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
        }
        lVar6 = puVar3[0x24];
        puVar3[0x24] = lVar5;
        if (lVar6 != 0) {
          (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
        }
        if (param_1[0xc] == 0) goto LAB_00f42a2c;
        puVar8 = *(undefined8 **)(param_1[0xc] + 0x60);
        if (puVar8 == (undefined8 *)0x0) goto LAB_00f42a30;
        plVar4 = (long *)(**(code **)*puVar8)(puVar8);
        lVar5 = FUN_00f41e40();
        goto joined_r0x00f42a18;
      }
    }
  }
LAB_00f42a98:
  lVar5 = *param_2;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = param_1[0xc];
  param_1[0xc] = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  (**(code **)(*param_1 + 0x10))(&local_48,param_1);
  lVar5 = local_48;
  local_48 = 0;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar6 = puVar3[0x22];
  puVar3[0x22] = lVar5;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return 1;
}


