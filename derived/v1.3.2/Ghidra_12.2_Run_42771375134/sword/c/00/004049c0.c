/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004049c0; name: FUN_004049c0
 */


undefined8 FUN_004049c0(int param_1)

{
  if ((param_1 < *(int *)PTR_DAT_02712a48) &&
     (*(int *)(*(long *)PTR_DAT_02712a40 + (long)param_1 * 0x68) != 0)) {
    return 1;
  }
  return 0xe;
}


