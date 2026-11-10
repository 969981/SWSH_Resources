/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01557040; name: FUN_01557040
 */


void FUN_01557040(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x80) = param_2[2];
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined8 *)(param_1 + 0x78) = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  uVar3 = param_2[7];
  *(undefined8 *)(param_1 + 0xa0) = param_2[6];
  *(undefined8 *)(param_1 + 0xa8) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = uVar1;
  *(undefined8 *)(param_1 + 0x98) = uVar2;
  uVar1 = param_2[8];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined8 *)(param_1 + 0xb8) = param_2[9];
  *(undefined8 *)(param_1 + 0xc0) = uVar2;
  *(undefined8 *)(param_1 + 200) = uVar3;
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0xf];
  *(undefined8 *)(param_1 + 0xb0) = uVar1;
  *(undefined8 *)(param_1 + 0xe0) = uVar3;
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x12];
  uVar3 = param_2[0x13];
  *(undefined8 *)(param_1 + 0xf8) = param_2[0x11];
  *(undefined8 *)(param_1 + 0x100) = uVar2;
  *(undefined8 *)(param_1 + 0x108) = uVar3;
  uVar2 = param_2[0x14];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x16];
  uVar5 = param_2[0x17];
  *(undefined8 *)(param_1 + 0xf0) = uVar1;
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x128) = uVar5;
  *(undefined8 *)(param_1 + 0x110) = uVar2;
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  uVar1 = param_2[0x18];
  uVar2 = param_2[0x19];
  uVar3 = param_2[0x1b];
  *(undefined8 *)(param_1 + 0x140) = param_2[0x1a];
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  *(undefined8 *)(param_1 + 0x130) = uVar1;
  *(undefined8 *)(param_1 + 0x138) = uVar2;
  uVar1 = param_2[0x1c];
  uVar2 = param_2[0x1d];
  uVar3 = param_2[0x1f];
  *(undefined8 *)(param_1 + 0x160) = param_2[0x1e];
  *(undefined8 *)(param_1 + 0x168) = uVar3;
  *(undefined8 *)(param_1 + 0x150) = uVar1;
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  return;
}


