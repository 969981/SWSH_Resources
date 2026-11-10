/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0131d150; name: FUN_0131d150
 */


void FUN_0131d150(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if ((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 0x54) == 0)) {
    return;
  }
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_00c781c0();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_0131d1b8;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_0131d1b8:
  FUN_0069c580(puVar3,param_2 & 1);
  return;
}


