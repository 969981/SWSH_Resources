/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040ba80; name: FUN_0040ba80
 */


bool FUN_0040ba80(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    return false;
  }
  if ((*(byte *)(param_1 + 0x44) >> 1 & 1) == 0) {
    return *(long *)(param_1 + 0x10) == 0;
  }
  return false;
}


