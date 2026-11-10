/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003be310; name: FUN_003be310
 */


undefined4 FUN_003be310(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0xb0);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x1f) != '\x01')) {
    return *(undefined4 *)(param_1 + 0x70);
  }
  return *(undefined4 *)(lVar1 + 0x38);
}


