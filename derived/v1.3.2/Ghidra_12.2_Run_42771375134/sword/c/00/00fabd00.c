/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fabd00; name: FUN_00fabd00
 */


undefined4 FUN_00fabd00(long param_1)

{
  if (*(uint *)(param_1 + 0x1a0) == 0xffffffff) {
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0x1a0) * 4 + 0x1a4);
}


