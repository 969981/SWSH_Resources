/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1a50; name: FUN_007c1a50
 */


ulong FUN_007c1a50(void)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(long *)PTR_DAT_027104b0 != 0) {
    uVar1 = FUN_007b5c10();
    uVar1 = uVar1 & 1;
  }
  return uVar1;
}


