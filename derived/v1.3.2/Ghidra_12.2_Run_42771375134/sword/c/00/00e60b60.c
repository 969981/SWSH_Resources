/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e60b60; name: FUN_00e60b60
 */


void FUN_00e60b60(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0x8b8) = param_2[2];
  *(undefined8 *)(param_1 + 0x8b0) = uVar2;
  *(undefined8 *)(param_1 + 0x8a8) = uVar1;
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  uVar2 = param_2[5];
  *(undefined8 *)(param_1 + 0x8d8) = param_2[6];
  *(undefined8 *)(param_1 + 0x8d0) = uVar2;
  *(undefined8 *)(param_1 + 0x8c8) = uVar3;
  *(undefined8 *)(param_1 + 0x8c0) = uVar1;
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  uVar2 = param_2[9];
  *(undefined8 *)(param_1 + 0x8f8) = param_2[10];
  *(undefined8 *)(param_1 + 0x8f0) = uVar2;
  *(undefined8 *)(param_1 + 0x8e8) = uVar3;
  *(undefined8 *)(param_1 + 0x8e0) = uVar1;
  return;
}


