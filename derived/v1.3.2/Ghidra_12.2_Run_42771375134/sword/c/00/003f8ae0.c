/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f8ae0; name: FUN_003f8ae0
 */


undefined2 FUN_003f8ae0(long param_1)

{
  undefined2 *puVar1;
  
  if (1 < *(int *)(param_1 + 0x48) - 5U) {
    return 1;
  }
  puVar1 = (undefined2 *)(param_1 + 0x90);
  if (*(int *)(param_1 + 0x48) != 5) {
    puVar1 = (undefined2 *)(param_1 + 0x78);
  }
  return *puVar1;
}


