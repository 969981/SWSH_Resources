/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bac80; name: FUN_003bac80
 */


void FUN_003bac80(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 0x10) = param_2[2];
  *(undefined4 *)(param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 0x18) = param_2[4];
  *(undefined4 *)(param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 0x20) = param_2[6];
  return;
}


