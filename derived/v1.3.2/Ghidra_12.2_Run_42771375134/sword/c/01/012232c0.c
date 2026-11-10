/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012232c0; name: FUN_012232c0
 */


void FUN_012232c0(undefined4 param_1,byte *param_2,byte param_3,byte param_4,undefined8 *param_5)

{
  *param_2 = param_3 & 0x1f;
  param_2[1] = param_4;
  *(undefined8 *)(param_2 + 0x18) = param_5[1];
  *(undefined8 *)(param_2 + 0x10) = *param_5;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  return;
}


