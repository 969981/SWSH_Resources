/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ba8b0; name: FUN_003ba8b0
 */


void FUN_003ba8b0(undefined8 *param_1)

{
  undefined *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_DAT_02711060;
  fVar3 = DAT_01d4bec4;
  *param_1 = 0;
  param_1[1] = 0x400000004;
  pfVar2 = *(float **)puVar1;
  *(undefined4 *)(param_1 + 2) = 4;
  fVar5 = DAT_01d4c4e4;
  fVar4 = *pfVar2;
  *(undefined2 *)((long)param_1 + 0x14) = 0x104;
  *(float *)(param_1 + 3) = fVar4 * fVar3;
  puVar1 = PTR_DAT_02712750;
  fVar3 = pfVar2[2];
  *(float *)((long)param_1 + 0x1c) = fVar3 * fVar3 * fVar5;
  fVar5 = fVar3 * DAT_01d4c278;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)puVar1;
  *(float *)(param_1 + 4) = fVar3 * fVar5;
  return;
}


