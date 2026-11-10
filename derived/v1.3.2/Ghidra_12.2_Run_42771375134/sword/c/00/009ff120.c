/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ff120; name: FUN_009ff120
 */


uint FUN_009ff120(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x180) == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_1 + 0x188);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x5a1) != '\b')) {
    return (uint)*(byte *)(*(long *)(param_1 + 0x180) + 0x2354);
  }
  return *(uint *)(lVar1 + 0x614);
}


