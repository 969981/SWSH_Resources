/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008f8be0; name: FUN_008f8be0
 */


bool FUN_008f8be0(long param_1)

{
  uint *puVar1;
  
  if (((*(int *)(param_1 + 0x150) == 2) || (puVar1 = *(uint **)(param_1 + 0x88), 1 < *puVar1)) ||
     ((*(byte *)((long)puVar1 + 0xa71) & 0x1c) != 0)) {
    return false;
  }
  return (char)puVar1[0x2a1] == '\0';
}


