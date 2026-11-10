/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006dff30; name: FUN_006dff30
 */


void FUN_006dff30(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)*(long *)(param_1 + 0x118);
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
    (**(code **)(**(long **)(param_1 + 0x120) + 0x18))(*(long **)(param_1 + 0x120),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x100) + 0x18))
              (*(long **)(param_1 + 0x100),lVar2,*(long *)(param_1 + 0xf8) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0xb8);
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
    (**(code **)(**(long **)(param_1 + 0xc0) + 0x18))(*(long **)(param_1 + 0xc0),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
              (*(long **)(param_1 + 0xa0),lVar2,*(long *)(param_1 + 0x98) << 3,8);
  }
  plVar1 = (long *)*(long *)(param_1 + 0x58);
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
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))(*(long **)(param_1 + 0x60),plVar1,0x58,8);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar2 != 0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 0x18))
              (*(long **)(param_1 + 0x40),lVar2,*(long *)(param_1 + 0x38) << 3,8);
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x20) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


