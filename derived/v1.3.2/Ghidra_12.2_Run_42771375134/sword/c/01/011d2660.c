/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011d2660; name: FUN_011d2660
 */


long FUN_011d2660(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725910;
  if (*(long *)PTR_DAT_02725910 == 0) {
    FUN_011d2220();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02725910;
}


