/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d0ff0; name: FUN_007d0ff0
 */


long FUN_007d0ff0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02716c88;
  if (*(long *)PTR_DAT_02716c88 == 0) {
    FUN_007d07a0();
    return *(long *)puVar1;
  }
  return *(long *)PTR_DAT_02716c88;
}


