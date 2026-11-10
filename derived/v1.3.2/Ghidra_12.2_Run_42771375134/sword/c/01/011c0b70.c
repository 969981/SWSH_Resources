/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011c0b70; name: FUN_011c0b70
 */


long FUN_011c0b70(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027256d0;
  if (*(long *)PTR_DAT_027256d0 == 0) {
    FUN_011c00c0();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_027256d0;
}


