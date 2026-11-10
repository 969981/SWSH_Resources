/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0121b280; name: FUN_0121b280
 */


void FUN_0121b280(undefined2 *param_1,undefined4 *param_2,undefined2 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 2) = *param_2;
  *(undefined4 *)(param_1 + 4) = param_4;
  param_1[6] = param_5;
  return;
}


