/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0055e950; name: FUN_0055e950
 */


undefined8
FUN_0055e950(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,byte param_5,
            undefined4 param_6,byte param_7,undefined8 *param_8,undefined8 *param_9,
            undefined8 *param_10,undefined8 *param_11,undefined8 *param_12,byte param_13)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_4 + 0x2a0) = param_6;
  *(byte *)(param_4 + 0x29c) = param_5 & 1;
  *(byte *)(param_4 + 0x2a4) = param_7 & 1;
  *(undefined8 *)(param_4 + 0x2a8) = *param_8;
  *(undefined8 *)(param_4 + 0x2b0) = *param_9;
  *(undefined8 *)(param_4 + 0x2b8) = *param_10;
  *(undefined8 *)(param_4 + 0x2c0) = *param_11;
  uVar1 = *param_12;
  *(undefined4 *)(param_4 + 0x2d0) = param_1;
  *(undefined4 *)(param_4 + 0x2d4) = param_2;
  *(undefined8 *)(param_4 + 0x2c8) = uVar1;
  *(undefined4 *)(param_4 + 0x2d8) = param_3;
  *(byte *)(param_4 + 0x2dc) = param_13 & 1;
  return 0;
}


