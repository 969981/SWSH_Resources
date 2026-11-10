/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01095b20; name: FUN_01095b20
 */


void FUN_01095b20(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x18) = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[4];
  *(undefined8 *)(param_1 + 0x30) = param_2[3];
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[8];
  *(undefined8 *)(param_1 + 0x50) = param_2[7];
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar3 = param_2[0xb];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar3;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  return;
}


