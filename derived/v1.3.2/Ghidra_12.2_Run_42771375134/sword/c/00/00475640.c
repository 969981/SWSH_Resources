/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00475640; name: FUN_00475640
 */


void FUN_00475640(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float __x;
  float fVar10;
  float fVar11;
  
  lVar5 = *(long *)(param_1 + 0x50);
  if (lVar5 == 0) goto LAB_004757c8;
  __x = *(float *)(lVar5 + 0x24);
  uVar1 = *(undefined4 *)(lVar5 + 0x28);
  iVar2 = *(int *)(lVar5 + 0x2c);
  uVar6 = *(undefined8 *)(lVar5 + 0x30);
  uVar3 = *(undefined4 *)(lVar5 + 0x20);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar5 + 0x18);
  *(undefined4 *)(param_1 + 0xc0) = uVar3;
  *(float *)(param_1 + 0xc4) = __x;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(int *)(param_1 + 0xcc) = iVar2;
  *(undefined8 *)(param_1 + 0xd0) = uVar6;
  if (iVar2 == 0) {
    fVar10 = DAT_01d4bdf4;
LAB_004756bc:
    __x = fmodf(__x,fVar10);
    *(float *)(param_1 + 0xc4) = __x;
  }
  else if (iVar2 != 5) {
    fVar10 = 1.0;
    goto LAB_004756bc;
  }
  if (*(char *)(param_1 + 0xd8) == '\0') goto LAB_004757c8;
  fVar10 = *(float *)(param_1 + 0xa8);
  fVar11 = *(float *)(param_1 + 0xac);
  if (fVar11 == 0.0) {
    fVar11 = 0.0;
    fVar8 = 1.0;
  }
  else {
    dVar7 = (double)NEON_fminnm((double)fVar10,DAT_01cd5350);
    dVar7 = log(DAT_01cd5360 / dVar7);
    dVar7 = exp(-(dVar7 * (double)fVar11));
    dVar7 = cos(dVar7 * DAT_01cd4fd0);
    dVar7 = 2.0 - dVar7;
    fVar11 = (float)(SQRT(dVar7 * dVar7 + -1.0) - dVar7);
    fVar8 = fVar11 + 1.0;
  }
  iVar4 = *(int *)(param_1 + 0xa4);
  fVar9 = fVar10 * DAT_01d4c160;
  if (DAT_01d4bdac <= fVar10) {
    fVar9 = 1.0;
  }
  *(float *)(param_1 + 200) = fVar9;
  if (iVar4 == 0) {
    *(float *)(param_1 + 200) = fVar9 * DAT_01d4bdf4;
    *(float *)(param_1 + 0xbc) = fVar8;
    *(float *)(param_1 + 0xc0) = fVar11;
    if (iVar2 != 0) goto LAB_00475784;
  }
  else {
    *(float *)(param_1 + 0xbc) = fVar8;
    *(float *)(param_1 + 0xc0) = fVar11;
    if (iVar2 != iVar4) {
LAB_00475784:
      if (iVar2 == 0) {
        fVar10 = DAT_01d4c3ec;
      }
      else {
        if (iVar4 != 0) goto LAB_004757c0;
        fVar10 = DAT_01d4bdf4;
      }
      *(float *)(param_1 + 0xc4) = __x * fVar10;
    }
  }
LAB_004757c0:
  *(int *)(param_1 + 0xcc) = iVar4;
  *(undefined1 *)(param_1 + 0xd8) = 0;
LAB_004757c8:
  param_2[6] = *(undefined4 *)(param_1 + 0x98);
  param_2[7] = *(undefined4 *)(param_1 + 0x9c);
  param_2[8] = *(undefined4 *)(param_1 + 0xa0);
  param_2[9] = *(undefined4 *)(param_1 + 0xa4);
  param_2[10] = *(undefined4 *)(param_1 + 0xa8);
  param_2[0xb] = *(undefined4 *)(param_1 + 0xac);
  param_2[0xc] = *(undefined4 *)(param_1 + 0xb0);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_2 + 0x12) = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_2 + 0xe) = *(undefined8 *)(param_1 + 0xb8);
  *param_2 = *(undefined4 *)(param_1 + 0x68);
  param_2[3] = *(undefined4 *)(param_1 + 0x60);
  param_2[2] = *(undefined4 *)(param_1 + 0x5c);
  param_2[1] = *(undefined4 *)(param_1 + 0x58);
  param_2[4] = *(undefined4 *)(param_1 + 0x70);
  param_2[5] = *(undefined4 *)(param_1 + 0x78);
  return;
}


