/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b18050; name: FUN_00b18050
 */


undefined4 FUN_00b18050(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x180);
}


