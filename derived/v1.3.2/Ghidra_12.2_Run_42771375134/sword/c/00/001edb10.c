/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001edb10; name: FUN_001edb10
 */


void FUN_001edb10(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_003ae380(param_1 + 3);
  *(uint *)(param_1 + 1) =
       *(uint *)(param_1 + 1) & 0xf0000000 | *(uint *)(param_1 + 1) & 0xffffff | 0xb000000;
  return;
}


