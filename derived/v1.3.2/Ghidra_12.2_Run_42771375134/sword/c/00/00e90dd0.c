/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e90dd0; name: FUN_00e90dd0
 */


void FUN_00e90dd0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x98) = param_2[1];
  *(undefined8 *)(param_1 + 0x90) = *param_2;
  uVar1 = param_3[3];
  uVar3 = param_3[4];
  uVar2 = param_3[5];
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 6);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = *param_3;
  uVar3 = param_3[2];
  *(undefined8 *)(param_1 + 0x48) = param_3[1];
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  return;
}


