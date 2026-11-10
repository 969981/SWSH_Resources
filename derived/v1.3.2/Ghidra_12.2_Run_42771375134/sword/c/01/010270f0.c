/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010270f0; name: FUN_010270f0
 */


undefined8 FUN_010270f0(long param_1,ulong param_2)

{
  long lVar1;
  uint *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x58) + 0x118);
  if (lVar1 == 0) {
    return 0;
  }
  lVar1 = lVar1 * 0x118;
  puVar2 = (uint *)(*(long *)(*(long *)(param_1 + 0x58) + 0x110) + 4);
  do {
    if (*puVar2 == param_2) {
      return 1;
    }
    lVar1 = lVar1 + -0x118;
    puVar2 = puVar2 + 0x46;
  } while (lVar1 != 0);
  return 0;
}


