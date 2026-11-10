/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010d9400; name: FUN_010d9400
 */


void FUN_010d9400(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_29d0 [10608];
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar3 != (undefined8 *)0x0)) {
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_010c8950();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_010d9468;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_010d9468:
  FUN_010c6c10(puVar3);
  FUN_010c6c10(puVar3);
                    /* WARNING: Subroutine does not return */
  memset(auStack_29d0,0,0x2961);
}


