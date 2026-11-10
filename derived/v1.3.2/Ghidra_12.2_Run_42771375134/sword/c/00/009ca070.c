/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ca070; name: FUN_009ca070
 */


void FUN_009ca070(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2[1];
  *(undefined8 *)(param_1 + 0x10) = param_2[2];
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  *(undefined8 *)(param_1 + 0x20) = param_2[3];
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}


