/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f8330; name: FUN_006f8330
 */


undefined4 FUN_006f8330(long param_1)

{
  if (*(int *)(*(long *)PTR_DAT_02710910 + 0x85bc) == 2) {
    return *(undefined4 *)(param_1 + 0x7c);
  }
  if (*(int *)(*(long *)PTR_DAT_02710910 + 0x85bc) == 1) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x70);
}


