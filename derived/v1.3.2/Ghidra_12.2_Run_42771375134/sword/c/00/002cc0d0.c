/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002cc0d0; name: FUN_002cc0d0
 */


undefined8
FUN_002cc0d0(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,float *param_7)

{
  undefined4 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x12) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x140);
    param_2[1] = *(undefined8 *)(param_1 + 0x138);
    *param_2 = *(undefined8 *)(param_1 + 0x130);
    *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(param_1 + 0x144);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x148);
    *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x14c);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x150);
    fVar3 = *(float *)(param_1 + 0x154);
    fVar4 = *(float *)(param_1 + 0x158);
    fVar5 = *(float *)(param_1 + 0x15c);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x164);
    *(float *)((long)param_2 + 0x24) = -fVar3;
    *(float *)(param_2 + 5) = -fVar4;
    *(float *)((long)param_2 + 0x2c) = -fVar5;
    fVar3 = sqrtf(fVar3 * fVar3 + fVar4 * fVar4 + fVar5 * fVar5);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      *(float *)((long)param_2 + 0x24) = fVar3 * *(float *)((long)param_2 + 0x24);
      *(float *)(param_2 + 5) = fVar3 * *(float *)(param_2 + 5);
      *(float *)((long)param_2 + 0x2c) = fVar3 * *(float *)((long)param_2 + 0x2c);
    }
  }
  else if ((*(byte *)(param_1 + 0x11) >> 1 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x140);
    *(undefined2 *)((long)param_2 + 0x14) = 0x406;
    *(undefined4 *)(param_2 + 2) = uVar1;
    fVar3 = *param_7;
    fVar4 = param_7[1];
    fVar5 = param_7[2];
    *(undefined4 *)(param_2 + 6) = 0;
    *(float *)(param_2 + 5) = -fVar4;
    *(float *)((long)param_2 + 0x24) = -fVar3;
    *(float *)((long)param_2 + 0x2c) = -fVar5;
  }
  else {
    uVar2 = FUN_002b3cd0(param_3,param_4,param_5,param_6,*(undefined1 *)(param_1 + 0x14),1,param_2);
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x140);
    *(undefined2 *)((long)param_2 + 0x14) = 0x406;
    if ((uVar2 & 1) == 0) {
      *(undefined4 *)(param_2 + 6) = 0;
      fVar3 = param_7[1];
      fVar4 = param_7[2];
      *(float *)((long)param_2 + 0x24) = -*param_7;
      *(float *)(param_2 + 5) = -fVar3;
      *(float *)((long)param_2 + 0x2c) = -fVar4;
    }
    else {
      *(undefined2 *)((long)param_2 + 0x14) = 0x407;
    }
  }
  return 1;
}


