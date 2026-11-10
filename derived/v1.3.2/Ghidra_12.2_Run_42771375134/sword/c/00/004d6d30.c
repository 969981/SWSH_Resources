/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d6d30; name: FUN_004d6d30
 */


void FUN_004d6d30(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined1 *)(param_1 + 0xf2) = 1;
  FUN_004d7480(param_1 + 0x10,param_2,param_4);
  return;
}


