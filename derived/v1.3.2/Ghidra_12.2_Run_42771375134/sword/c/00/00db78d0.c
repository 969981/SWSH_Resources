/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db78d0; name: FUN_00db78d0
 */


void FUN_00db78d0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long *local_38;
  undefined1 auStack_28 [8];
  
  plVar3 = *(long **)(param_1 + 0x1f0);
  plVar1 = *(long **)(param_1 + 0x1e8);
  do {
    if (plVar1 == plVar3) {
      if (*(long *)(param_1 + 0x1d8) == 0) {
        return;
      }
      plVar3 = (long *)FUN_00db8fa0(auStack_28);
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
      }
      plVar3[0xe] = param_1;
      (**(code **)(*plVar3 + 0x38))(plVar3);
      uVar4 = *(undefined8 *)(param_1 + 0x1e8);
      local_38 = plVar3;
      if (plVar3 != (long *)0x0) {
        (**(code **)(plVar3[9] + 0x10))();
      }
      FUN_01591030(param_1 + 0x1e8,uVar4,&local_38);
      if (local_38 != (long *)0x0) {
        (**(code **)(local_38[9] + 0x18))();
        local_38 = (long *)0x0;
      }
      (**(code **)(plVar3[9] + 0x18))(plVar3 + 9);
      return;
    }
    uVar2 = FUN_00db8dc0(*plVar1 + 0x50);
    plVar1 = plVar1 + 1;
  } while ((uVar2 & 1) == 0);
  return;
}


