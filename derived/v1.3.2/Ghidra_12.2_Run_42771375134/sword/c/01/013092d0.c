/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013092d0; name: FUN_013092d0
 */


ulong FUN_013092d0(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x308) == 0) {
    return (ulong)*(byte *)(param_1 + 0x310);
  }
  uVar1 = FUN_0120e630(*(undefined8 *)PTR_DAT_027185f8);
  return uVar1;
}


