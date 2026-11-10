/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102d640; name: FUN_0102d640
 */


void FUN_0102d640(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long local_38;
  long local_28;
  
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x10))(&local_28);
    lVar1 = local_28;
    while (lVar1 != 0) {
      FUN_0102e8a0(&local_28,lVar1);
      if (local_28 == 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        return;
      }
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_28,lVar1);
      lVar2 = *(long *)(*(long *)(local_28 + 0x60) + 0x60);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_0102e8a0(&local_38,lVar1);
        (**(code **)(**(long **)(*(long *)(local_38 + 0x60) + 0x60) + 0x10))(&local_28);
        lVar2 = local_28;
        local_28 = 0;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
      FUN_0102e8a0(&local_28,lVar1);
      FUN_01031710(local_28);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if (lVar2 == 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        return;
      }
      plVar3 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar1 = lVar2;
    }
  }
  return;
}


