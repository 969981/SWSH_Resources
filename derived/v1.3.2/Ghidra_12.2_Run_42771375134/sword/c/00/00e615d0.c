/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e615d0; name: FUN_00e615d0
 */


bool FUN_00e615d0(long param_1)

{
  if (*(int *)(param_1 + 0x8a4) == 1) {
    return false;
  }
  return *(char *)(param_1 + 0xb38) != '\0';
}


