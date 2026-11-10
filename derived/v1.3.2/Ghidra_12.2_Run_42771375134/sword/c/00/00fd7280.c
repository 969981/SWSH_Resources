/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fd7280; name: FUN_00fd7280
 */


void FUN_00fd7280(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x20) = param_2 & 1;
  FUN_00ffa160(*(undefined8 *)(param_1 + 0x18),param_2 & 1,1);
  FUN_00ffa290(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x20),1);
  return;
}


