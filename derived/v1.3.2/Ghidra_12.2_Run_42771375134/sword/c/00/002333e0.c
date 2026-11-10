/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002333e0; name: FUN_002333e0
 */


void FUN_002333e0(long *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = (long)param_2;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar4 = param_2[2];
  *(undefined2 *)(param_1 + 0x14) = 8;
  *(undefined2 *)((long)param_1 + 0xb4) = 0xc;
  *(undefined2 *)(param_1 + 0x19) = 0x10;
  *(undefined2 *)((long)param_1 + 0xdc) = 0x14;
  *(float *)((long)param_1 + 0x24) = fVar2;
  *(float *)(param_1 + 4) = fVar1;
  fVar3 = -fVar1;
  fVar5 = -fVar2;
  fVar6 = -fVar4;
  *(undefined1 *)((long)param_1 + 0x7a) = 4;
  *(undefined2 *)((long)param_1 + 0x8c) = 4;
  *(undefined1 *)((long)param_1 + 0xb6) = 4;
  *(float *)((long)param_1 + 0xc) = fVar5;
  *(float *)(param_1 + 3) = fVar5;
  *(float *)((long)param_1 + 0x1c) = fVar6;
  *(float *)(param_1 + 1) = fVar3;
  *(float *)(param_1 + 2) = fVar6;
  *(float *)((long)param_1 + 0x14) = fVar1;
  *(float *)(param_1 + 5) = fVar6;
  *(float *)((long)param_1 + 0x2c) = fVar3;
  *(float *)(param_1 + 6) = fVar2;
  *(float *)((long)param_1 + 0x34) = fVar6;
  *(float *)(param_1 + 7) = fVar3;
  *(float *)((long)param_1 + 0x3c) = fVar5;
  *(float *)(param_1 + 8) = fVar4;
  *(float *)((long)param_1 + 0x44) = fVar1;
  *(float *)(param_1 + 9) = fVar5;
  *(float *)((long)param_1 + 0x4c) = fVar4;
  *(float *)(param_1 + 10) = fVar1;
  *(float *)((long)param_1 + 0x54) = fVar2;
  *(float *)(param_1 + 0xb) = fVar4;
  *(float *)((long)param_1 + 0x5c) = fVar3;
  *(float *)(param_1 + 0xc) = fVar2;
  *(float *)((long)param_1 + 100) = fVar4;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x8e) = 4;
  *(undefined1 *)((long)param_1 + 0xa2) = 4;
  *(undefined1 *)((long)param_1 + 0xca) = 4;
  *(undefined1 *)((long)param_1 + 0xde) = 4;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x3f800000;
  param_1[0x10] = 0;
  *(float *)(param_1 + 0x11) = -*param_2;
  *(undefined8 *)((long)param_1 + 0xa4) = 0xbf800000;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  fVar1 = *param_2;
  *(undefined1 *)((long)param_1 + 0xb7) = 1;
  param_1[0x17] = 0x3f80000000000000;
  *(float *)(param_1 + 0x16) = -fVar1;
  *(undefined1 *)((long)param_1 + 0x8f) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(float *)((long)param_1 + 0xc4) = -param_2[1];
  *(undefined8 *)((long)param_1 + 0xcc) = 0xbf80000000000000;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  *(float *)(param_1 + 0x1b) = -param_2[1];
  *(undefined1 *)((long)param_1 + 0xcb) = 0;
  *(undefined1 *)((long)param_1 + 0xdf) = 2;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(float *)((long)param_1 + 0x9c) = -param_2[2];
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(float *)((long)param_1 + 0x74) = -param_2[2];
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  *(undefined1 *)((long)param_1 + 0x7b) = 4;
  return;
}


