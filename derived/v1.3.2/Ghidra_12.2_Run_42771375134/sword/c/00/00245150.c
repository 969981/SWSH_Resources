/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00245150; name: FUN_00245150
 */


void FUN_00245150(undefined4 param_1,undefined4 param_2,undefined4 param_3,long *param_4,
                 undefined4 param_5,long param_6,byte param_7,long param_8,long *param_9,
                 float *param_10,long param_11,undefined2 *param_12,byte param_13)

{
  undefined2 uVar1;
  long lVar2;
  undefined *puVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  *(undefined4 *)(param_4 + 1) = param_5;
  uVar1 = *param_12;
  *(undefined2 *)((long)param_4 + 0xe) = 0;
  *(byte *)(param_4 + 2) = param_13 & 1;
  *(undefined4 *)((long)param_4 + 0x14) = param_3;
  *(undefined2 *)((long)param_4 + 0xc) = uVar1;
  puVar3 = PTR_DAT_02711e50;
  *(undefined4 *)(param_4 + 9) = param_2;
  param_4[3] = param_6;
  param_4[8] = param_11;
  param_4[6] = param_8;
  param_4[7] = (long)param_10;
  *param_4 = (long)(puVar3 + 0x10);
  *(undefined4 *)(param_4 + 4) = param_1;
  *(byte *)(param_4 + 0x16) = param_7 & 1;
  lVar2 = *param_9;
  uVar5 = *(uint *)(param_9 + 1);
  *(undefined4 *)((long)param_4 + 0x24) = param_1;
  param_4[0x13] = (ulong)uVar5;
  param_4[0x12] = lVar2;
  param_4[5] = CONCAT44(param_1,param_1);
  fVar7 = 1.0 / param_10[1];
  fVar6 = 1.0 / *param_10;
  fVar8 = param_10[2];
  fVar4 = 1.0 / fVar8;
  if (*param_10 == 0.0) {
    fVar6 = 0.0;
  }
  if (param_10[1] == 0.0) {
    fVar7 = 0.0;
  }
  *(float *)((long)param_4 + 0xa4) = fVar6;
  *(float *)(param_4 + 0x15) = fVar7;
  if (fVar8 == 0.0) {
    fVar4 = 0.0;
  }
  *(float *)((long)param_4 + 0xac) = fVar4;
  return;
}


