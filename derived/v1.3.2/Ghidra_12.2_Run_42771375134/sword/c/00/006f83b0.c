/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f83b0; name: FUN_006f83b0
 */


undefined4 FUN_006f83b0(long param_1)

{
  long lVar1;
  
  lVar1 = 0x74;
  if (*(int *)(*(long *)PTR_DAT_02710910 + 0x70) != 0) {
    lVar1 = 0x68;
  }
  return *(undefined4 *)(param_1 + lVar1);
}


