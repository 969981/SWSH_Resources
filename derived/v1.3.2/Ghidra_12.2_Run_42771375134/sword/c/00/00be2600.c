/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00be2600; name: FUN_00be2600
 */


undefined8 FUN_00be2600(long param_1,uint param_2)

{
  if ((*(ushort *)(param_1 + 100) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x66))) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x68) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x6a))) {
    return 1;
  }
  if ((*(ushort *)(param_1 + 0x6c) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x6e))) {
    return 2;
  }
  if ((*(ushort *)(param_1 + 0x70) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x72))) {
    return 3;
  }
  if ((*(ushort *)(param_1 + 0x74) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x76))) {
    return 4;
  }
  if ((*(ushort *)(param_1 + 0x78) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x7a))) {
    return 5;
  }
  if ((*(ushort *)(param_1 + 0x7c) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x7e))) {
    return 6;
  }
  if ((*(ushort *)(param_1 + 0x80) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x82))) {
    return 7;
  }
  if ((*(ushort *)(param_1 + 0x84) <= param_2) && (param_2 <= *(ushort *)(param_1 + 0x86))) {
    return 8;
  }
  if ((param_2 < *(ushort *)(param_1 + 0x88)) || (*(ushort *)(param_1 + 0x8a) < param_2)) {
    return 10;
  }
  return 9;
}


