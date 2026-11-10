/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f101f0; name: FUN_00f101f0
 */


undefined8 FUN_00f101f0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long local_48;
  
  puVar2 = (undefined8 *)(param_1 + 8);
  plVar5 = (long *)*puVar2;
  plVar6 = *(long **)(param_1 + 0x10);
  if (plVar5 != plVar6) {
    do {
      lVar3 = *plVar5;
      if (lVar3 == 0) {
        uVar1 = FUN_00f107c0(0x50);
      }
      else {
        plVar4 = (long *)(lVar3 + 0x48);
        (**(code **)(*plVar4 + 0x10))(plVar4);
        uVar1 = FUN_00f107c0(lVar3 + 0x50);
        (**(code **)(*plVar4 + 0x18))(plVar4);
      }
      if ((uVar1 & 1) != 0) goto LAB_00f10280;
      plVar5 = plVar5 + 1;
    } while (plVar6 != plVar5);
    plVar5 = plVar6;
LAB_00f10280:
    plVar6 = *(long **)(param_1 + 0x10);
  }
  if ((plVar6 == plVar5) || ((long *)*puVar2 == plVar5)) {
    return 0;
  }
  local_48 = *plVar5;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    plVar6 = *(long **)(param_1 + 0x10);
  }
  if (plVar5 + 1 != plVar6) {
    plVar4 = plVar5;
    do {
      if (*plVar4 != 0) {
        (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
        *plVar4 = 0;
      }
      plVar5 = plVar4 + 1;
      lVar3 = *plVar5;
      *plVar5 = 0;
      *plVar4 = lVar3;
      plVar4 = plVar5;
    } while (plVar6 + -1 != plVar5);
    plVar6 = *(long **)(param_1 + 0x10);
    if (plVar6 == plVar5) goto LAB_00f1033c;
  }
  do {
    plVar4 = plVar6 + -1;
    if (*plVar4 != 0) {
      (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
      plVar6[-1] = 0;
    }
    plVar6 = plVar4;
  } while (plVar5 != plVar4);
LAB_00f1033c:
  *(long **)(param_1 + 0x10) = plVar5;
  FUN_00f10390(puVar2,*(undefined8 *)(param_1 + 8),&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return 1;
}


