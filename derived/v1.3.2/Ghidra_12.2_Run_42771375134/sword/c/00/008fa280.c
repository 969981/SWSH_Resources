/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa280; name: FUN_008fa280
 */


bool FUN_008fa280(long param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x150) != 2) {
    return *puVar1 < 2;
  }
  if (((puVar1[0x29c] & 0x41800) == 0) && ((puVar1[0x29d] & 0x30) == 0)) {
    return false;
  }
  return true;
}


