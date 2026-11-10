/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba9f0; name: FUN_003ba9f0
 */


ulong FUN_003ba9f0(long *param_1)

{
  ulong uVar1;
  
  if (*param_1 == 0) {
    return (ulong)(*(float *)((long)param_1 + 0x24) == 0.0);
  }
  uVar1 = FUN_003bc510();
  return uVar1;
}


