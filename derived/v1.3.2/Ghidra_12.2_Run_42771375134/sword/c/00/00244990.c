/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00244990; name: FUN_00244990
 */


void FUN_00244990(float param_1,undefined4 param_2,long *param_3,long param_4,long param_5,
                 byte param_6,float *param_7,long param_8,undefined2 *param_9,byte param_10)

{
  undefined2 uVar1;
  undefined *puVar2;
  float fVar3;
  
  *(undefined4 *)(param_3 + 1) = 2;
  uVar1 = *param_9;
  *(undefined2 *)((long)param_3 + 0xe) = 0;
  *(byte *)(param_3 + 2) = param_10 & 1;
  *(undefined2 *)((long)param_3 + 0xc) = uVar1;
  puVar2 = PTR_DAT_02711e48;
  *(undefined4 *)((long)param_3 + 0x14) = param_2;
  param_3[3] = param_4;
  param_3[4] = param_5;
  *(float *)(param_3 + 5) = param_1;
  param_3[7] = (long)param_7;
  param_3[8] = param_8;
  *param_3 = (long)(puVar2 + 0x10);
  *(undefined4 *)((long)param_3 + 0x2c) = 0x40000000;
  fVar3 = param_1 + DAT_01d4c6ac;
  *(byte *)(param_3 + 9) = param_6 & 1;
  *(float *)(param_3 + 6) = fVar3;
  if (*param_7 != param_7[3]) {
    *(undefined1 *)((long)param_3 + 0x49) = 0;
    *(float *)(param_4 + 0x30) = param_1;
    return;
  }
  if (param_7[1] == param_7[4]) {
    *(bool *)((long)param_3 + 0x49) = param_7[2] == param_7[5];
    *(float *)(param_4 + 0x30) = param_1;
    return;
  }
  *(undefined1 *)((long)param_3 + 0x49) = 0;
  *(float *)(param_4 + 0x30) = param_1;
  return;
}


