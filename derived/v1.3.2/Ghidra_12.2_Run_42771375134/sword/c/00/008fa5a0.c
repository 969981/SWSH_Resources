/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fa5a0; name: FUN_008fa5a0
 */


undefined8 FUN_008fa5a0(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(*(long *)(param_1 + 0x88) + 0x3bb) != '\x01') {
    return 0;
  }
  uVar1 = FUN_009015e0(*(undefined8 *)(param_1 + (ulong)*(byte *)(param_1 + 0x174) * 8 + 0x198));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x16c) = 2;
  return 1;
}


