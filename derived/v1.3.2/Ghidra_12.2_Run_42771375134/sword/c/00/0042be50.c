/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0042be50; name: FUN_0042be50
 */


undefined8 FUN_0042be50(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  memcpy((void *)(param_1 + 0x60),param_2,0x24);
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x60);
  *(float *)(param_1 + 0x3c) = fVar5 * fVar1 - fVar4 * fVar2;
  *(float *)(param_1 + 0x40) = fVar3 * fVar2 - fVar6 * fVar5;
  *(float *)(param_1 + 0x44) = fVar6 * fVar4 - fVar3 * fVar1;
  FUN_004e7fa0(PTR_DAT_02712d10,*(undefined8 *)(*(long *)(param_1 + 8) + 0x48));
  return 1;
}


