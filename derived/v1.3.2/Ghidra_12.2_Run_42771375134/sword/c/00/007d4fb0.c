/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d4fb0; name: FUN_007d4fb0
 */


undefined8 FUN_007d4fb0(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x40);
  while( true ) {
    if (plVar1 == *(long **)(param_1 + 0x48)) {
      return 0;
    }
    if ((*plVar1 != 0) && (*(char *)(*plVar1 + 0x60) != '\0')) break;
    plVar1 = plVar1 + 1;
  }
  return 1;
}


