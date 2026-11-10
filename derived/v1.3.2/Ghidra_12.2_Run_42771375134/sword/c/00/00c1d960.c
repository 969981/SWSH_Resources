/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c1d960; name: FUN_00c1d960
 */


undefined8 * FUN_00c1d960(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
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
          return (undefined8 *)0x0;
        }
        FUN_00bdd770(&local_28,lVar2);
        if (local_28 == 0) {
          return (undefined8 *)0x0;
        }
        puVar3 = *(undefined8 **)(local_28 + 0x60);
        if (puVar3 == (undefined8 *)0x0) goto LAB_00c1da5c;
        plVar1 = (long *)(**(code **)*puVar3)(puVar3);
        lVar2 = FUN_00c22170();
        goto joined_r0x00c1da18;
      }
    }
  }
  return (undefined8 *)0x0;
joined_r0x00c1da18:
  if (plVar1 == (long *)0x0) {
    puVar3 = (undefined8 *)0x0;
    if (local_28 != 0) {
LAB_00c1da64:
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
    return puVar3;
  }
  if (plVar1 != (long *)lVar2) goto code_r0x00c1da24;
  puVar3 = puVar3 + -10;
LAB_00c1da5c:
  if (local_28 == 0) {
    return puVar3;
  }
  goto LAB_00c1da64;
code_r0x00c1da24:
  plVar1 = (long *)*plVar1;
  goto joined_r0x00c1da18;
}


