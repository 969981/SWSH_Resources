/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad59f0; name: FUN_00ad59f0
 */


undefined1 FUN_00ad59f0(long param_1)

{
  if ((*(int *)(param_1 + 0x4f0) == 0x37a) && (*(int *)(param_1 + 0x504) == 2)) {
    return 2;
  }
  return *(long *)(param_1 + 0x560) != 0;
}


