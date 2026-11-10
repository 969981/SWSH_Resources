/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a5b640; name: FUN_00a5b640
 */


void FUN_00a5b640(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x68) == 0) {
    return;
  }
  FUN_014bcfa0(*(long *)(param_1 + 0x68),param_2,0);
  return;
}


