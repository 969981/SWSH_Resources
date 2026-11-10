/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c55f00; name: FUN_00c55f00
 */


undefined8 FUN_00c55f00(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_00722fb0(*(undefined8 *)(*(long *)(param_1 + 0x80) + 0x350));
  if (iVar1 < 0) {
    return 0;
  }
  if ((ulong)(long)iVar1 < (ulong)(*(long *)(param_1 + 200) - *(long *)(param_1 + 0xc0) >> 3)) {
    return *(undefined8 *)(*(long *)(param_1 + 0xc0) + (long)iVar1 * 8);
  }
  return 0;
}


