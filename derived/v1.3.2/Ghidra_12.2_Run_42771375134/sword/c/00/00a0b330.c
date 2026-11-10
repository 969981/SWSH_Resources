/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b330; name: FUN_00a0b330
 */


void FUN_00a0b330(long param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  *(undefined1 *)(param_1 + 0x28) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_4;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return;
}


