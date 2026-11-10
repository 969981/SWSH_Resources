/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c0cb0; name: FUN_007c0cb0
 */


long FUN_007c0cb0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716b50;
  if (*(long *)PTR_DAT_02716b50 == 0) {
    FUN_007c0960();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02716b50;
}


