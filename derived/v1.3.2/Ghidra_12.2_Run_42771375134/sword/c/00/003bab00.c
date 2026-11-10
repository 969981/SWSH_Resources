/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003bab00; name: FUN_003bab00
 */


void FUN_003bab00(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3f80000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_2[1];
  *(undefined4 *)(param_1 + 2) = param_2[2];
  *(undefined4 *)((long)param_1 + 0x14) = param_2[3];
  *(undefined4 *)(param_1 + 3) = param_2[4];
  *(undefined4 *)((long)param_1 + 0x1c) = param_2[5];
  *(undefined4 *)(param_1 + 4) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x24) = *param_3;
  *(undefined4 *)(param_1 + 5) = param_3[1];
  *(undefined4 *)((long)param_1 + 0x2c) = param_3[2];
  *(undefined4 *)(param_1 + 6) = param_3[3];
  *(undefined4 *)((long)param_1 + 0x34) = param_3[4];
  *(undefined4 *)(param_1 + 7) = param_3[5];
  uVar1 = param_3[6];
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x3d4ccccd;
  *(undefined4 *)((long)param_1 + 0x94) = 0x3d4ccccd;
  fVar2 = DAT_01d4bf8c;
  *(undefined8 *)((long)param_1 + 0x6c) = 0x3f8000003f800000;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0x3f490fdb3f490fdb;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0xbf490fdb3f490fdb;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = uVar1;
  fVar2 = tanf(fVar2);
  *(float *)((long)param_1 + 0x9c) = fVar2;
  fVar2 = tanf(*(float *)(param_1 + 0xf) * 0.25);
  *(float *)(param_1 + 0x14) = fVar2;
  fVar2 = tanf(*(float *)((long)param_1 + 0x7c) * 0.25);
  *(float *)((long)param_1 + 0xa4) = fVar2;
  fVar2 = tanf(*(float *)((long)param_1 + 0x8c) * 0.25);
  *(float *)(param_1 + 0x15) = fVar2;
  fVar2 = tanf(*(float *)(param_1 + 0x12) * 0.25);
  *(float *)((long)param_1 + 0xac) = fVar2;
  fVar2 = tanf(*(float *)((long)param_1 + 0x94) * 0.25);
  *(float *)(param_1 + 0x16) = fVar2;
  return;
}


