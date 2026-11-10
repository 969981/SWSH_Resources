/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cb470; name: FUN_006cb470
 */


void FUN_006cb470(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  
  if (*(int *)(param_4 + 0x90) == 0) {
    *(undefined8 *)(param_4 + 200) = param_5[1];
    *(undefined8 *)(param_4 + 0xc0) = *param_5;
    *(undefined8 *)(param_4 + 0xd8) = param_6[1];
    *(undefined8 *)(param_4 + 0xd0) = *param_6;
    *(undefined8 *)(param_4 + 0xe8) = param_7[1];
    *(undefined8 *)(param_4 + 0xe0) = *param_7;
    *(undefined8 *)(param_4 + 0xf8) = param_8[1];
    uVar1 = *param_8;
    *(undefined4 *)(param_4 + 0x100) = param_1;
    *(undefined4 *)(param_4 + 0x104) = param_2;
    *(undefined8 *)(param_4 + 0xf0) = uVar1;
    *(undefined4 *)(param_4 + 0x108) = param_3;
    *(undefined4 *)(param_4 + 0x90) = 2;
    return;
  }
  return;
}


