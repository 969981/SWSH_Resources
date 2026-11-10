/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0102d7e0; name: FUN_0102d7e0
 */


undefined8 FUN_0102d7e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long local_38;
  long local_28;
  
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 0x10))(&local_28);
    lVar1 = local_28;
    while (lVar1 != 0) {
      FUN_0102e8a0(&local_28,lVar1);
      if (local_28 == 0) {
        uVar5 = 1;
LAB_0102d970:
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        return uVar5;
      }
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      FUN_0102e8a0(&local_28,lVar1);
      lVar3 = *(long *)(*(long *)(local_28 + 0x60) + 0x60);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      lVar4 = 0;
      if (lVar3 != 0) {
        FUN_0102e8a0(&local_38,lVar1);
        (**(code **)(**(long **)(*(long *)(local_38 + 0x60) + 0x60) + 0x10))(&local_28);
        lVar4 = local_28;
        local_28 = 0;
        if (local_38 != 0) {
          (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
          local_38 = 0;
        }
      }
      FUN_0102e8a0(&local_28,lVar1);
      uVar2 = FUN_010310c0(local_28);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
        local_28 = 0;
      }
      if ((uVar2 & 1) == 0) {
        uVar5 = 0;
        if (lVar4 != 0) {
          (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          uVar5 = 0;
        }
        goto LAB_0102d970;
      }
      if (lVar4 == 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
        return 1;
      }
      plVar6 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar6 + 0x10))(plVar6);
      (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
      (**(code **)(*plVar6 + 0x18))(plVar6);
      lVar1 = lVar4;
    }
  }
  return 1;
}


