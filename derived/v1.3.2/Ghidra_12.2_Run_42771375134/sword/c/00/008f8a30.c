/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8a30; name: FUN_008f8a30
 */


bool FUN_008f8a30(long param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x88);
  if (*(int *)(param_1 + 0x150) != 2) {
    if (((byte)puVar1[0x29d] >> 2 & 1) == 0) {
      return *puVar1 < 2;
    }
    return false;
  }
  if (((puVar1[0x29c] & 0x41800) == 0) && ((puVar1[0x29d] & 0x30) == 0)) {
    return false;
  }
  return true;
}


