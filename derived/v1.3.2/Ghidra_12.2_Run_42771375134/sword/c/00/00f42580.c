/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f42580; name: FUN_00f42580
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00f42580(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long local_48;
  
  if (*param_2 == 0) {
    return;
  }
  puVar4 = *(undefined8 **)(*param_2 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  plVar5 = (long *)(**(code **)*puVar4)();
  lVar6 = FUN_00f41e40();
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return;
    }
    if (plVar5 == (long *)lVar6) break;
    plVar5 = (long *)*plVar5;
  }
  if (*param_2 != 0) {
    puVar4 = *(undefined8 **)(*param_2 + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_00f4261c;
    plVar5 = (long *)(**(code **)*puVar4)(puVar4);
    lVar6 = FUN_00f41e40();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        puVar4 = puVar4 + -10;
        goto LAB_00f4261c;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_00f4261c:
  plVar5 = (long *)(**(code **)puVar4[10])(puVar4 + 10);
  puVar2 = PTR_DAT_0271fd80;
  puVar1 = (undefined8 *)PTR_DAT_0271fd88;
  if (((*PTR_DAT_0271fd80 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(PTR_DAT_0271fd80), puVar1 = (undefined8 *)PTR_DAT_0271fd88,
     iVar3 != 0)) {
    uVar7 = FUN_00f41e40();
    *(undefined8 *)PTR_DAT_0271fd88 = uVar7;
    __cxa_guard_release(PTR_DAT_0271fd80);
    puVar1 = (undefined8 *)PTR_DAT_0271fd88;
  }
  for (; plVar5 != puVar1; plVar5 = (long *)*plVar5) {
  }
  PTR_DAT_0271fd88 = (undefined *)puVar1;
  if ((puVar4[0x24] != 0) &&
     (puVar4 = *(undefined8 **)(puVar4[0x24] + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar5 = (long *)(**(code **)*puVar4)(puVar4);
    lVar6 = FUN_00f41e40();
    for (; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
      if (plVar5 == (long *)lVar6) {
        plVar5 = (long *)(**(code **)*puVar4)(puVar4);
        if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0271fd80), iVar3 != 0)) {
          uVar7 = FUN_00f41e40();
          *puVar1 = uVar7;
          __cxa_guard_release(PTR_DAT_0271fd80);
        }
        for (; plVar5 != puVar1; plVar5 = (long *)*plVar5) {
        }
        local_48 = puVar4[0x1a];
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
        }
        FUN_00f42580(param_1,&local_48);
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
        }
        break;
      }
    }
  }
  lVar6 = *param_2;
  *param_2 = 0;
  if (lVar6 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f42768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  return;
}


