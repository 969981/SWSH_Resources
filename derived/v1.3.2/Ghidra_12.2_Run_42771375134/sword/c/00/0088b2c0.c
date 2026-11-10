/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0088b2c0; name: FUN_0088b2c0
 */


undefined8 FUN_0088b2c0(undefined4 *param_1,long param_2)

{
  long *plVar1;
  
  if (param_2 == 0) {
    return 2;
  }
  if (*(long *)(param_1 + 6) != 0) {
    if (*(long **)(param_2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 6) = 0;
  }
  if (*(long *)(param_1 + 8) != 0) {
    if (*(long **)(param_2 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 8) + 0x18))();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  plVar1 = *(long **)(param_2 + 8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 10));
    plVar1 = *(long **)(param_2 + 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0xc));
      plVar1 = *(long **)(param_2 + 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0xe));
        plVar1 = *(long **)(param_2 + 8);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x10));
          plVar1 = *(long **)(param_2 + 8);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x12));
            plVar1 = *(long **)(param_2 + 8);
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 *)(param_1 + 0x14));
            }
          }
        }
      }
    }
  }
  *param_1 = 0;
  return 1;
}


