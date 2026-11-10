/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00553550; name: FUN_00553550
 */


undefined8
FUN_00553550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,long param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  uVar1 = *param_7;
  *(undefined8 *)(param_6 + 0x22c) = param_7[1];
  *(undefined8 *)(param_6 + 0x224) = uVar1;
  *(undefined4 *)(param_6 + 0x234) = param_1;
  *(undefined4 *)(param_6 + 0x238) = param_2;
  *(undefined4 *)(param_6 + 0x23c) = param_3;
  *(undefined4 *)(param_6 + 0x240) = param_4;
  *(undefined4 *)(param_6 + 0x244) = param_5;
  return 0;
}


