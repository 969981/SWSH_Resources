/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011ac430; name: FUN_011ac430
 */


long FUN_011ac430(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027254b0;
  if (*(long *)PTR_DAT_027254b0 == 0) {
    FUN_011abf50();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_027254b0;
}


