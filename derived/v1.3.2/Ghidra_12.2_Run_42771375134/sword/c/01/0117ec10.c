/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0117ec10; name: FUN_0117ec10
 */


long FUN_0117ec10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725100;
  if (*(long *)PTR_DAT_02725100 == 0) {
    FUN_0117e030();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02725100;
}


