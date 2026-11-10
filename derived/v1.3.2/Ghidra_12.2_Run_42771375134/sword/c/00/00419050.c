/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419050; name: FUN_00419050
 */


undefined8 FUN_00419050(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x118) - 1;
  if (uVar1 == *(uint *)(param_1 + 0x100)) {
    return 0;
  }
  return *(undefined8 *)(param_1 + (ulong)uVar1 * 8);
}


