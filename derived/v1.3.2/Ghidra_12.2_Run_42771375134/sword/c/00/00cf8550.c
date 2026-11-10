/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cf8550; name: FUN_00cf8550
 */


ulong FUN_00cf8550(long param_1)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x5e0) != 0) {
    uVar1 = FUN_016b8190();
    uVar1 = uVar1 >> 0x20;
  }
  return uVar1;
}


