/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0014a830; name: FUN_0014a830
 */


ulong FUN_0014a830(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x208) * 0x50;
  uVar2 = (ulong)*(uint *)(param_1 + 0x1e8) << 5;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}


