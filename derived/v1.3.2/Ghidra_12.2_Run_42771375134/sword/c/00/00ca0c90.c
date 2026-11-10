/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca0c90; name: FUN_00ca0c90
 */


bool FUN_00ca0c90(long param_1)

{
  if ((*(uint *)(param_1 + 0x70) & 0xfffffffe) == 4) {
    return *(char *)(param_1 + 0x90) != '\0';
  }
  return true;
}


