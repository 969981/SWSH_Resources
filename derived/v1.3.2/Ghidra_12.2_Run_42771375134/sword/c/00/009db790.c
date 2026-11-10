/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009db790; name: FUN_009db790
 */


long FUN_009db790(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02718a78;
  if (*(long *)PTR_DAT_02718a78 == 0) {
    FUN_009db160();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02718a78;
}


