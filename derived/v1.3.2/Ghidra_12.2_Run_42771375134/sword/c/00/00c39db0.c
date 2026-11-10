/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c39db0; name: FUN_00c39db0
 */


void FUN_00c39db0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1cce0(&local_28,puVar3 + -10);
        lVar2 = FUN_00be53f0(&local_28);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        if (lVar2 == 0) {
          return;
        }
        (**(code **)(**(long **)(lVar2 + 0x90) + 0x10))(&local_28);
        local_30 = local_28;
        lVar2 = FUN_00be5600(&local_30);
        if (local_30 != 0) {
          (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
          local_30 = 0;
        }
        if (lVar2 == 0) {
          return;
        }
        FUN_00bdff30(lVar2);
        return;
      }
    }
  }
  return;
}


