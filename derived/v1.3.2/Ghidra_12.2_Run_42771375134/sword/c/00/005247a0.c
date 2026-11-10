/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005247a0; name: FUN_005247a0
 */


undefined8
FUN_005247a0(float param_1,undefined4 param_2,undefined4 param_3,long param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  
  if (*(long *)(param_4 + 0x1a0) != 0) {
    *(undefined1 *)(*(long *)(param_4 + 0x1a0) + 0x3a8) = 0;
  }
  if (param_1 == 0.0) {
    *(undefined4 *)(param_4 + 0x918) = 0;
    return 0;
  }
  *(undefined4 *)(param_4 + 0x918) = 1;
  *(float *)(param_4 + 0x91c) = param_1;
  *(undefined4 *)(param_4 + 0x920) = param_2;
  *(undefined4 *)(param_4 + 0x924) = param_3;
  uVar1 = *param_5;
  *(undefined8 *)(param_4 + 0x930) = param_5[1];
  *(undefined8 *)(param_4 + 0x928) = uVar1;
  return 0;
}


