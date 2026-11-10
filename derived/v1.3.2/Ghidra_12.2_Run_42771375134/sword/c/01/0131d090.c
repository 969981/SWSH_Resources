/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d090; name: FUN_0131d090
 */


undefined8 FUN_0131d090(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0)) {
    return 1;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar3 = FUN_0069c590(0);
    return uVar3;
  }
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60);
  if (puVar4 == (undefined8 *)0x0) {
    uVar3 = FUN_0069c590(0);
    return uVar3;
  }
  plVar1 = (long *)(**(code **)*puVar4)(puVar4);
  plVar2 = (long *)FUN_00c781c0();
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_0069c590(0);
    return uVar3;
  }
  do {
    if (plVar1 == plVar2) {
      uVar3 = FUN_0069c590(puVar4 + -10);
      return uVar3;
    }
    plVar1 = (long *)*plVar1;
  } while (plVar1 != (long *)0x0);
  uVar3 = FUN_0069c590(0);
  return uVar3;
}


