/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd8a40; name: FUN_00fd8a40
 */


void FUN_00fd8a40(long param_1)

{
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x38),1,1);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x70),1);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x70),1);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x68),*(undefined1 *)(param_1 + 0x70),1);
  return;
}


