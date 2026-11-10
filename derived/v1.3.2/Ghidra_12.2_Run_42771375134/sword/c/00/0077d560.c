/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077d560; name: FUN_0077d560
 */


short FUN_0077d560(long param_1,long param_2)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return 0;
  }
  sVar1 = FUN_0077d7e0(*(long *)(param_1 + 0x58) + (ulong)*(ushort *)(param_1 + 0x7a) * 2,
                       *(undefined8 *)(param_2 + 0x58),
                       (uint)*(ushort *)(param_1 + 0x78) - (uint)*(ushort *)(param_1 + 0x7a));
  sVar1 = *(short *)(param_1 + 0x7a) + sVar1;
  *(short *)(param_1 + 0x7a) = sVar1;
  return sVar1;
}


