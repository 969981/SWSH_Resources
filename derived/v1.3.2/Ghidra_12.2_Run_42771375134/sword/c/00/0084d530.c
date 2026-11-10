/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0084d530; name: FUN_0084d530
 */


long FUN_0084d530(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027171e8;
  if (*(long *)PTR_DAT_027171e8 == 0) {
    FUN_00844a80();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_027171e8;
}


