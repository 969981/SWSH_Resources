/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00246b20; name: FUN_00246b20
 */


undefined8
FUN_00246b20(long param_1,undefined8 *param_2,undefined8 param_3,float *param_4,undefined8 param_5,
            undefined8 param_6,float *param_7,uint param_8,byte param_9,byte param_10,byte param_11)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x168);
    param_2[1] = *(undefined8 *)(param_1 + 0x160);
    *param_2 = *(undefined8 *)(param_1 + 0x158);
    *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(param_1 + 0x16c);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)((long)param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x178);
    fVar2 = *(float *)(param_1 + 0x17c);
    fVar3 = *(float *)(param_1 + 0x180);
    fVar4 = *(float *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)((long)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x18c);
    *(float *)((long)param_2 + 0x24) = -fVar2;
    *(float *)(param_2 + 5) = -fVar3;
    *(float *)((long)param_2 + 0x2c) = -fVar4;
    fVar2 = sqrtf(fVar2 * fVar2 + fVar3 * fVar3 + fVar4 * fVar4);
    if (0.0 < fVar2) {
      fVar2 = 1.0 / fVar2;
      *(float *)((long)param_2 + 0x24) = fVar2 * *(float *)((long)param_2 + 0x24);
      *(float *)(param_2 + 5) = fVar2 * *(float *)(param_2 + 5);
      *(float *)((long)param_2 + 0x2c) = fVar2 * *(float *)((long)param_2 + 0x2c);
    }
    if ((param_9 & 1) == 0) {
      return 1;
    }
    if ((param_10 & 1) != 0) {
      return 1;
    }
    fVar3 = *(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x18);
    fVar7 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x1c);
    fVar9 = *(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0x34) - *(float *)(param_1 + 0x1c);
    fVar2 = *(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x20);
    fVar10 = fVar7 * fVar2 - fVar9 * fVar5;
    fVar6 = param_4[2];
    fVar8 = param_4[3];
    fVar2 = fVar9 * fVar4 - fVar3 * fVar2;
    fVar3 = fVar3 * fVar5 - fVar7 * fVar4;
    fVar10 = fVar10 + fVar10;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar8 * fVar8 + -0.5;
    fVar5 = *param_4;
    fVar7 = param_4[1];
    fVar9 = fVar3 * fVar6 + fVar5 * fVar10 + fVar7 * fVar2;
    if (param_7[2] * (fVar3 * fVar4 + fVar8 * (fVar5 * fVar2 - fVar7 * fVar10) + fVar6 * fVar9) +
        *param_7 * (fVar5 * fVar9 + fVar4 * fVar10 + fVar8 * (fVar3 * fVar7 - fVar2 * fVar6)) +
        param_7[1] * (fVar7 * fVar9 + fVar4 * fVar2 + fVar8 * (fVar10 * fVar6 - fVar5 * fVar3)) <=
        0.0) {
      return 1;
    }
    *(float *)((long)param_2 + 0x24) = -*(float *)((long)param_2 + 0x24);
    *(float *)(param_2 + 5) = -*(float *)(param_2 + 5);
    *(float *)((long)param_2 + 0x2c) = -*(float *)((long)param_2 + 0x2c);
    return 1;
  }
  if ((param_8 & 1) == 0) {
    *(undefined2 *)((long)param_2 + 0x14) = 0x406;
  }
  else {
    uVar1 = FUN_002b2ac0(param_3,param_4,param_5,param_6,param_11 & 1,param_2);
    *(undefined2 *)((long)param_2 + 0x14) = 0x406;
    if ((uVar1 & 1) != 0) {
      if (*(float *)(param_2 + 6) == 0.0) {
        fVar2 = param_7[1];
        fVar3 = param_7[2];
        *(float *)((long)param_2 + 0x24) = -*param_7;
        *(float *)(param_2 + 5) = -fVar2;
        *(float *)((long)param_2 + 0x2c) = -fVar3;
      }
      *(undefined2 *)((long)param_2 + 0x14) = 0x407;
      goto LAB_00246dd8;
    }
  }
  *(undefined4 *)(param_2 + 6) = 0;
  fVar2 = param_7[1];
  fVar3 = param_7[2];
  *(float *)((long)param_2 + 0x24) = -*param_7;
  *(float *)(param_2 + 5) = -fVar2;
  *(float *)((long)param_2 + 0x2c) = -fVar3;
LAB_00246dd8:
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(param_1 + 0x168);
  return 1;
}


