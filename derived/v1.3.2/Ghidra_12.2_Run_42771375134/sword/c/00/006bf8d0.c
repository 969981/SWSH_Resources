/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006bf8d0; name: FUN_006bf8d0
 */


void FUN_006bf8d0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  plVar1 = (long *)*(long *)(param_1 + 0x88);
  while (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)plVar1[6];
    lVar3 = *plVar1;
    plVar1[6] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(*(long *)plVar1[7] + 0x18))((long *)plVar1[7],puVar2,plVar1[8],plVar1[9]);
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),plVar1,0x50,8);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (lVar3 != 0) {
    (**(code **)(**(long **)(param_1 + 0x70) + 0x18))
              (*(long **)(param_1 + 0x70),lVar3,*(long *)(param_1 + 0x68) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x30);
  while (plVar1 != (long *)0x0) {
    puVar2 = (undefined8 *)plVar1[6];
    lVar3 = *plVar1;
    plVar1[6] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      (**(code **)(*(long *)plVar1[7] + 0x18))((long *)plVar1[7],puVar2,plVar1[8],plVar1[9]);
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x38) + 0x18))(*(long **)(param_1 + 0x38),plVar1,0x50,8);
    plVar1 = (long *)lVar3;
  }
  lVar3 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (lVar3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006bfa3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x18))
            (*(long **)(param_1 + 0x18),lVar3,*(long *)(param_1 + 0x10) << 3,8);
  return;
}


