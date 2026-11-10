/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011b0620; name: FUN_011b0620
 */


long FUN_011b0620(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725560;
  if (*(long *)PTR_DAT_02725560 == 0) {
    FUN_011b02f0();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02725560;
}


