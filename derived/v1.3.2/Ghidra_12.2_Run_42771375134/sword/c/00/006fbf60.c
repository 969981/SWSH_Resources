/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006fbf60; name: FUN_006fbf60
 */


void FUN_006fbf60(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0xcbf29ce484222645;
  param_1[1] = &DAT_01d38550;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xcbf29ce484222645;
  param_1[5] = &DAT_01d38550;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[8] = PTR_DAT_02710818 + 0x10;
  param_1[9] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0xffffffff00000006;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  param_1[0x2a] = uVar1;
  if (param_1[0x2b] != 0) {
    (**(code **)(*(long *)(param_1[0x2b] + 0x48) + 0x18))();
    param_1[0x2b] = 0;
  }
  uVar1 = *param_3;
  *param_3 = 0;
  param_1[0x2b] = uVar1;
  if (param_1[0x2c] != 0) {
    (**(code **)(*(long *)(param_1[0x2c] + 0x48) + 0x18))();
    param_1[0x2c] = 0;
  }
  uVar1 = *param_4;
  *param_4 = 0;
  param_1[0x2c] = uVar1;
  uVar1 = *param_5;
  uVar2 = param_5[2];
  param_1[0x33] = param_5[1];
  param_1[0x34] = uVar2;
  param_1[0x32] = uVar1;
  uVar1 = *param_6;
  uVar2 = param_6[2];
  param_1[0x36] = param_6[1];
  param_1[0x37] = uVar2;
  param_1[0x35] = uVar1;
  uVar1 = *param_7;
  uVar2 = param_7[2];
  param_1[0x39] = param_7[1];
  param_1[0x3a] = uVar2;
  param_1[0x38] = uVar1;
  FUN_0199bfe0(param_1 + 0x2e);
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return;
}


