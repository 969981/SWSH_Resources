/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004147f0; name: FUN_004147f0
 */


undefined8 FUN_004147f0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0xc0) == 0) {
    return 0;
  }
  plVar1 = (long *)(*(long *)(param_1 + 0xb8) + 8);
  lVar2 = (ulong)*(uint *)(param_1 + 0xc0) << 4;
  do {
    if (*(char *)(*plVar1 + 0xc) < '\0') {
      return 1;
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0);
  return 0;
}


