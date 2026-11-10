/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0118de10; name: FUN_0118de10
 */


long FUN_0118de10(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_027251d0;
  if (*(long *)PTR_DAT_027251d0 == 0) {
    FUN_011894f0();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_027251d0;
}


