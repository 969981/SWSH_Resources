/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e3600; name: FUN_004e3600
 */


void FUN_004e3600(long param_1,undefined4 *param_2)

{
  param_2[2] = *(undefined4 *)(param_1 + 100);
  param_2[3] = *(undefined4 *)(param_1 + 0x68);
  *param_2 = *(undefined4 *)(param_1 + 0x5c);
  param_2[1] = *(undefined4 *)(param_1 + 0x60);
  return;
}


