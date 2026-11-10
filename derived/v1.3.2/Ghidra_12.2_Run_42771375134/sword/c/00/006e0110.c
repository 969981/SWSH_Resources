/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006e0110; name: FUN_006e0110
 */


void FUN_006e0110(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0xf8);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[10] != 0) {
      (**(code **)(*(long *)(plVar1[10] + 0x48) + 0x18))();
      plVar1[10] = 0;
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))(*(long **)(param_1 + 0x100),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
              (*(long **)(param_1 + 0xe0),lVar2,*(long *)(param_1 + 0xd8) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x98);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    FUN_006dff30(plVar1 + 6);
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))(*(long **)(param_1 + 0xa0),plVar1,0x178,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar2,*(long *)(param_1 + 0x78) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    if (plVar1[10] != 0) {
      (**(code **)(*(long *)(plVar1[10] + 0x48) + 0x18))();
      plVar1[10] = 0;
    }
    if (plVar1[5] != 0) {
      (**(code **)(*(long *)(plVar1[5] + 0x48) + 0x18))();
      plVar1[5] = 0;
    }
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006e02b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
            (*(long **)(param_1 + 0x20),lVar2,*(long *)(param_1 + 0x18) << 3,8);
  return;
}


