/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01179a90; name: FUN_01179a90
 */


long FUN_01179a90(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02725068;
  if (*(long *)PTR_DAT_02725068 == 0) {
    FUN_01179650();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02725068;
}


