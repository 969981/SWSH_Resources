/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148b570; name: FUN_0148b570
 */


void FUN_0148b570(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0x649) == '\0') {
    if (*(long *)(param_1 + 0x608) != 0) {
      FUN_01494a50();
    }
    lVar1 = *(long *)(param_1 + 0x628);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x5e8);
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_01494a50();
  return;
}


