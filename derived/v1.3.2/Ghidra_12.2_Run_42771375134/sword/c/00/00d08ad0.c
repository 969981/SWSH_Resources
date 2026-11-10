/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d08ad0; name: FUN_00d08ad0
 */


long FUN_00d08ad0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_0271cd78;
  if (*(long *)PTR_DAT_0271cd78 == 0) {
    FUN_00d08690();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_0271cd78;
}


