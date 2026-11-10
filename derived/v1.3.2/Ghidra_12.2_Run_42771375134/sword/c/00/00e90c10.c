/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90c10; name: FUN_00e90c10
 */


void FUN_00e90c10(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_3;
  uVar2 = param_3[2];
  param_1[1] = param_3[1];
  param_1[2] = uVar2;
  *param_1 = uVar1;
  uVar1 = param_3[3];
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_3 + 6);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar1 = param_3[4];
  uVar2 = param_3[5];
  uVar4 = param_3[3];
  *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_3 + 6);
  uVar3 = param_3[1];
  param_1[0xd] = uVar2;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar1;
  param_1[9] = uVar3;
  uVar1 = *param_3;
  param_1[10] = param_3[2];
  param_1[8] = uVar1;
  uVar1 = param_2[1];
  param_1[0x10] = *param_2;
  param_1[0x11] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x16);
  param_1[0x12] = uVar1;
  param_1[0x13] = uVar2;
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_1 + 0x16);
  return;
}


