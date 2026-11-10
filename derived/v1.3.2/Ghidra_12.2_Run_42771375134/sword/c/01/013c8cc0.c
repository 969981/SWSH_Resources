/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c8cc0; name: FUN_013c8cc0
 */


undefined8 * FUN_013c8cc0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x68) + 0x68);
  if (lVar3 == 0) {
    return (undefined8 *)0x0;
  }
  puVar4 = *(undefined8 **)(lVar3 + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN_0132d9a0();
  if (plVar1 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  do {
    if (plVar1 == plVar2) {
      return puVar4 + -10;
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  return (undefined8 *)0x0;
}


