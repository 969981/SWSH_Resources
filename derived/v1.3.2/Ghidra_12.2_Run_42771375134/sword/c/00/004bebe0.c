/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bebe0; name: FUN_004bebe0
 */


void FUN_004bebe0(uint *param_1,undefined1 param_2 [16],float param_3,long *param_4,long param_5,
                 float *param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  
  *param_6 = 0.0;
  fVar8 = (float)FUN_00484700();
  *param_1 = 0x42480000;
  uVar1 = DAT_01d4c6b8;
  fVar11 = fVar8;
  if (fVar8 <= 0.0) {
    fVar11 = 0.0;
  }
  uVar9 = NEON_fminnm(fVar11,DAT_01d4c6b8);
  param_1[4] = (uint)param_3;
  param_1[3] = (uint)fVar8;
  if ((~uVar9 & 0x7f800000) != 0) {
    *param_1 = uVar9;
  }
  uVar2 = (**(code **)(*param_4 + 0x100))(param_4,param_6);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(param_5 + 0x40) == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = **(long **)(param_5 + 0x38);
  }
  *param_6 = *param_6 * *(float *)(lVar5 + 0x40);
  if (param_3 == 0.0) {
    return;
  }
  lVar3 = FUN_004959d0(param_5);
  fVar11 = DAT_01d4c198;
  if (*(int *)(lVar3 + 0x10) == 0) {
    fVar10 = *param_6;
    if (fVar10 <= DAT_01d4c198) goto LAB_004bed48;
  }
  else {
    puVar6 = *(undefined8 **)(lVar3 + 8);
    do {
      lVar4 = FUN_0042c0f0(*puVar6);
      if ((lVar4 != 0) && (*(short *)(lVar5 + 0x38) != 0)) {
        uVar2 = 0;
        lVar7 = 0x18;
        do {
          fVar10 = (float)FUN_00469550(lVar4 + 0x78,*(long *)(lVar5 + 0x20) + lVar7);
          fVar11 = (float)NEON_fminnm(fVar11,fVar10 / *(float *)(lVar4 + 0x84));
          uVar2 = uVar2 + 1;
          lVar7 = lVar7 + 0x28;
        } while (uVar2 < *(ushort *)(lVar5 + 0x38));
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined8 *)(*(long *)(lVar3 + 8) + (ulong)*(uint *)(lVar3 + 0x10) * 8));
    fVar10 = *param_6;
    if (fVar10 <= fVar11) goto LAB_004bed48;
  }
  param_3 = (fVar11 / fVar10) * param_3;
LAB_004bed48:
  param_3 = param_3 + fVar8;
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  uVar9 = NEON_fminnm(param_3,uVar1);
  if ((~uVar9 & 0x7f800000) != 0) {
    *param_1 = uVar9;
  }
  return;
}


