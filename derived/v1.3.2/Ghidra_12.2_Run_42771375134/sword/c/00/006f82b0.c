/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006f82b0; name: FUN_006f82b0
 */


undefined4 FUN_006f82b0(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(long *)PTR_DAT_02710910 + 0x85bc);
  if (iVar1 == 2) {
    return *(undefined4 *)(param_1 + 0x78);
  }
  if ((iVar1 == 1) || (iVar1 != 0)) {
    return *(undefined4 *)(param_1 + 0x60);
  }
  return *(undefined4 *)(param_1 + 0x6c);
}


