/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c212a0; name: FUN_00c212a0
 */


bool FUN_00c212a0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long local_150 [35];
  char local_38;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00be66c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        FUN_00c1ce80(local_150,puVar3 + -10);
        goto joined_r0x00c213ac;
      }
    }
  }
  FUN_00c1ce80(local_150,0);
joined_r0x00c213ac:
  if (local_150[0] != 0) {
    puVar3 = *(undefined8 **)(local_150[0] + 0x60);
    if (puVar3 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar3)(puVar3);
      lVar2 = FUN_00c22170();
      for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
        if (plVar1 == (long *)lVar2) {
          puVar3 = puVar3 + -10;
          goto joined_r0x00c213d0;
        }
      }
    }
    puVar3 = (undefined8 *)0x0;
joined_r0x00c213d0:
    if (local_150[0] != 0) {
      (**(code **)(*(long *)(local_150[0] + 0x48) + 0x18))();
      local_150[0] = 0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_00bdaa80(local_150,puVar3);
      return (char)local_150[0] != '\0' && local_38 != '\0';
    }
  }
  return false;
}


