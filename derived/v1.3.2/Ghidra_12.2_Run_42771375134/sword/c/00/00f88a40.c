/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f88a40; name: FUN_00f88a40
 */


void FUN_00f88a40(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long *plVar5;
  
  plVar3 = *(long **)(param_1 + 0x40);
  if (plVar3 != (long *)0x0) {
    if (*(long **)(param_1 + 0x48) == plVar3) {
      plVar2 = plVar3;
    }
    else {
      plVar2 = *(long **)(param_1 + 0x48);
      do {
        plVar5 = plVar2 + -2;
        if ((*plVar5 != 0) && ((int)plVar2[-1] != -2)) {
          FUN_0175dcd0(*plVar5,0xfff0b9d8);
        }
        plVar2 = plVar5;
      } while (plVar3 != plVar5);
      plVar2 = *(long **)(param_1 + 0x40);
    }
    *(long **)(param_1 + 0x48) = plVar3;
    operator_delete(plVar2);
  }
  puVar1 = *(void **)(param_1 + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}


