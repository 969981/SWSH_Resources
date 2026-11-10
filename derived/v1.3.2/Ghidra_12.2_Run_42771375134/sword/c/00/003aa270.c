/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003aa270; name: FUN_003aa270
 */


void FUN_003aa270(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x78) = *param_2;
  *(undefined4 *)(param_1 + 0x7c) = param_2[1];
  *(undefined4 *)(param_1 + 0x80) = param_2[2];
  *(undefined4 *)(param_1 + 0x84) = param_2[3];
  return;
}


