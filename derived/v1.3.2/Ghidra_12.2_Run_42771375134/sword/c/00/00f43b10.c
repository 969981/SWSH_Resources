/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f43b10; name: FUN_00f43b10
 */


void FUN_00f43b10(long param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = *(long *)(param_1 + 0x198);
  if (lVar1 != 0) {
    plVar2 = *(long **)(param_1 + 400);
    do {
      lVar1 = lVar1 + -1;
      if (*plVar2 != 0) {
        (**(code **)(*(long *)(*plVar2 + 0x48) + 0x18))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (lVar1 != 0);
  }
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0xffffffffffffffff;
  return;
}


