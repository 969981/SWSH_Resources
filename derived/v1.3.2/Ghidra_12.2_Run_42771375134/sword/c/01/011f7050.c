/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f7050; name: FUN_011f7050
 */


ulong FUN_011f7050(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  uVar2 = uVar1 / 300;
  if (uVar1 % 300 != 0) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}


