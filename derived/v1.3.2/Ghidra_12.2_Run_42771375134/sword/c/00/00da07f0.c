/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00da07f0; name: FUN_00da07f0
 */


undefined8 FUN_00da07f0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x490);
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 1;
    }
    if ((*(long *)(plVar1[3] + 0x18) != 0) &&
       (*(char *)(*(long *)(plVar1[3] + 0x18) + 0x170) == '\0')) break;
    plVar1 = (long *)*plVar1;
  }
  return 0;
}


