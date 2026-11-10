/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a93e80; name: FUN_00a93e80
 */


void FUN_00a93e80(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  
  puVar2 = PTR_FloatDegree180_027194f0;
  puVar1 = PTR_FloatPi_02715160;
  *(undefined2 *)(param_1 + 0x100) = 0x101;
  fVar3 = *(float *)puVar1;
  fVar4 = *(float *)puVar2;
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x48);
  *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0x54) * (fVar3 / fVar4);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x5c);
  *(float *)(param_1 + 0xf0) = (fVar3 / fVar4) * *(float *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x104) = 2;
  FUN_00a93ef0();
  return;
}


