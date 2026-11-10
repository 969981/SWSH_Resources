/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c4530; name: FUN_004c4530
 */


void FUN_004c4530(long param_1)

{
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    return;
  }
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 1;
  if (*(long *)(param_1 + 0x58) != 0) {
    FUN_004c36c0(*(long *)(param_1 + 0x58),param_1);
    FUN_004c2f90(*(undefined8 *)(param_1 + 0x58),param_1);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  FUN_004c2ce0(param_1);
  return;
}


