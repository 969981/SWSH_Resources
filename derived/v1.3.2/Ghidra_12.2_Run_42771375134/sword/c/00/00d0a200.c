/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0a200; name: FUN_00d0a200
 */


void FUN_00d0a200(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  lVar2 = FUN_00cf3e00();
  for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
  }
  if (*(char *)((long)puVar3 + 0x61) != '\0') {
    FUN_01038270(*(undefined8 *)(param_1 + 0x80),1);
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00cf3e00();
    for (; plVar1 != (long *)lVar2; plVar1 = (long *)*plVar1) {
    }
    *(undefined1 *)((long)puVar3 + 0x61) = 0;
  }
  return;
}


