/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0021a690; name: FUN_0021a690
 */


void FUN_0021a690(float param_1,float param_2,float param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_d0;
  float fStack_cc;
  float local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float fStack_98;
  
  if (param_1 != 0.0) {
    uVar3 = FUN_00218620(param_4);
    uVar1 = 0xffff0000;
    if ((param_6 & 1) == 0) {
      uVar1 = 0xff808080;
    }
    FUN_00218580(uVar3,uVar1);
    FUN_00218570(param_4,1);
    fVar2 = DAT_01d4bf8c;
    uVar4 = 0;
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar6 = 0.0;
    do {
      fVar8 = cosf((float)uVar4 * fVar2);
      fVar9 = sinf((float)uVar4 * fVar2);
      fVar9 = fVar9 * param_3;
      fVar8 = fVar8 * param_2;
      fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + 0.0;
      fVar11 = 1.0 / (fVar10 + 1.0);
      fVar12 = fVar11 * 0.0;
      fVar9 = fVar9 * -2.0 * fVar11;
      fVar8 = (fVar8 + fVar8) * fVar11;
      fVar11 = (1.0 - fVar10) * fVar11;
      fVar10 = fVar8 * 0.0 + fVar12 + fVar12 + fVar9 * 0.0;
      fVar15 = fVar11 * fVar11 + -0.5;
      fVar13 = (fVar12 * fVar10 + fVar15 + fVar15 + fVar11 * (fVar9 * 0.0 - fVar8 * 0.0)) * param_1;
      fVar14 = (fVar9 * fVar10 + fVar15 * 0.0 + fVar11 * ((fVar8 + fVar8) - fVar12 * 0.0)) * param_1
      ;
      fVar8 = (fVar15 * 0.0 + fVar11 * (fVar12 * 0.0 - (fVar9 + fVar9)) + fVar8 * fVar10) * param_1;
      local_a0 = fVar7;
      local_9c = fVar6;
      fStack_98 = fVar5;
      uVar3 = FUN_002186d0(param_4,&local_a0);
      local_b0 = fVar13;
      fStack_ac = fVar14;
      local_a8 = fVar8;
      uVar3 = FUN_002186d0(uVar3,&local_b0);
      local_c0 = 0;
      local_b8 = 0;
      uVar3 = FUN_002186d0(uVar3,&local_c0);
      local_d0 = fVar13;
      fStack_cc = fVar14;
      local_c8 = fVar8;
      FUN_002186d0(uVar3,&local_d0);
      uVar4 = uVar4 + 1;
      fVar7 = fVar13;
      fVar5 = fVar8;
      fVar6 = fVar14;
    } while (uVar4 != 0x21);
  }
  return;
}


