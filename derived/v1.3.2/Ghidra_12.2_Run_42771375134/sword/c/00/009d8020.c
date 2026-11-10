/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d8020; name: FUN_009d8020
 */


long FUN_009d8020(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02718a18;
  if (*(long *)PTR_DAT_02718a18 == 0) {
    FUN_009d7bd0();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02718a18;
}


