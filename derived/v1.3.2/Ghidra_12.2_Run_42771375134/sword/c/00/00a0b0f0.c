/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0b0f0; name: FUN_00a0b0f0
 */


void FUN_00a0b0f0(long param_1,undefined1 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined2 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x20) = *param_2;
  *(undefined1 *)(param_1 + 0x21) = param_2[1];
  *(undefined1 *)(param_1 + 0x28) = 1;
  return;
}


