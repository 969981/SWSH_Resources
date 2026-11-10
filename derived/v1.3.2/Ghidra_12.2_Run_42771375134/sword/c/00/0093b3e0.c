/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0093b3e0; name: FUN_0093b3e0
 */


undefined1 FUN_0093b3e0(long param_1,long param_2)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x4c) == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + lVar1 * 8) == param_2) {
      return *(undefined1 *)(param_1 + lVar1 + 0x3c);
    }
    lVar1 = lVar1 + 1;
  } while ((uint)lVar1 < (uint)*(byte *)(param_1 + 0x4c));
  return 0;
}


