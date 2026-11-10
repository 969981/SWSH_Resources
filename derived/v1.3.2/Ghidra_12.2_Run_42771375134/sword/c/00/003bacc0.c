/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bacc0; name: FUN_003bacc0
 */


void FUN_003bacc0(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x24) = *param_2;
  *(undefined4 *)(param_1 + 0x28) = param_2[1];
  *(undefined4 *)(param_1 + 0x2c) = param_2[2];
  *(undefined4 *)(param_1 + 0x30) = param_2[3];
  *(undefined4 *)(param_1 + 0x34) = param_2[4];
  *(undefined4 *)(param_1 + 0x38) = param_2[5];
  *(undefined4 *)(param_1 + 0x3c) = param_2[6];
  return;
}


