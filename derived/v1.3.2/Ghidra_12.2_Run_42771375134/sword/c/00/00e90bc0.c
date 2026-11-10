/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90bc0; name: FUN_00e90bc0
 */


void FUN_00e90bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar3 = (undefined4)uVar1;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar2;
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x15) = uVar3;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


