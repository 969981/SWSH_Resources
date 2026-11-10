/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008eacc0; name: FUN_008eacc0
 */


void FUN_008eacc0(long param_1,undefined2 *param_2)

{
  *(undefined2 *)(param_1 + 0x72) = *param_2;
  *(undefined2 *)(param_1 + 0x74) = param_2[1];
  *(undefined2 *)(param_1 + 0x76) = param_2[2];
  *(undefined2 *)(param_1 + 0x78) = param_2[3];
  return;
}


