/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e30ee0; name: FUN_00e30ee0
 */


undefined8 FUN_00e30ee0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = param_2[1];
  *(undefined8 *)(param_1 + 0x68) = uVar3;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = param_2[3];
  uVar3 = param_2[4];
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0x80) = param_2[5];
  *(undefined8 *)(param_1 + 0x88) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar3;
  uVar3 = param_2[8];
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  *(undefined8 *)(param_1 + 0x90) = param_2[7];
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  *(undefined8 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0x268) = 1;
  return 1;
}


