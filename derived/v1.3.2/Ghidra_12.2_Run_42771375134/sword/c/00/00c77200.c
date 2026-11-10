/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c77200; name: FUN_00c77200
 */


void FUN_00c77200(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x18) = param_2 & 1;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00c77f60();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    FUN_00c77f60(*(long *)(param_1 + 0x40),param_2 & 1);
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    return;
  }
  FUN_00c77f60(*(long *)(param_1 + 0x60),param_2 & 1);
  return;
}


