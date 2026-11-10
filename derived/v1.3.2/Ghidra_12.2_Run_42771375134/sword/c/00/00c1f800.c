/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1f800; name: FUN_00c1f800
 */


uint FUN_00c1f800(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long local_30;
  long local_28;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar4 != (undefined8 *)0x0)) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_00be66c0();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        FUN_00c1cce0(&local_28,puVar4 + -10);
        lVar3 = FUN_00be53f0(&local_28);
        if (local_28 != 0) {
          (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
          local_28 = 0;
        }
        if (lVar3 != 0) {
          (**(code **)(**(long **)(lVar3 + 0x90) + 0x10))(&local_28);
          local_30 = local_28;
          lVar3 = FUN_00be5600(&local_30);
          if (local_30 != 0) {
            (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
            local_30 = 0;
          }
          if (lVar3 != 0) {
            uVar1 = FUN_00bdfdf0(lVar3);
            goto LAB_00c1f8d8;
          }
        }
        break;
      }
    }
  }
  uVar1 = 1;
LAB_00c1f8d8:
  return uVar1 & 1;
}


