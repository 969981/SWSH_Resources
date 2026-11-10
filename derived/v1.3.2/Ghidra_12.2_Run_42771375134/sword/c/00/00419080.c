/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00419080; name: FUN_00419080
 */


void FUN_00419080(long param_1,undefined8 param_2,byte param_3)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  *(byte *)(param_1 + 0x128) = param_3 & 1;
  return;
}


