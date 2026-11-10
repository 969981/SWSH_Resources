/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a0af00; name: FUN_00a0af00
 */


void FUN_00a0af00(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,byte param_5
                 ,undefined8 param_6)

{
  *(byte *)(param_1 + 0x34) = param_5 & 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x30) = param_4;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  *(undefined2 *)(param_1 + 0x40) = 1;
  *(undefined1 *)(param_1 + 0x42) = 0;
  return;
}


