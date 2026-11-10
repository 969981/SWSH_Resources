/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ad020; name: FUN_004ad020
 */


void FUN_004ad020(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                 float *param_5)

{
  ulong uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float afStack_80 [2];
  undefined8 local_78;
  float local_70 [4];
  float local_60;
  float fStack_5c;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  
  uVar1 = (ulong)param_1;
  pfVar12 = afStack_80 + uVar1 * -4;
  pfVar2 = pfVar12 + (param_1 << 2);
  pfVar3 = local_70 + uVar1 * -4;
  pfVar4 = pfVar2;
  if (pfVar2 <= pfVar3) {
    pfVar4 = pfVar3;
  }
  pfVar11 = pfVar12;
  if (((uint)((long)pfVar4 + ~(ulong)pfVar12) >> 4 & 1) == 0) {
    pfVar12[0] = 0.0;
    pfVar12[1] = 0.0;
    (afStack_80 + uVar1 * -4 + 2)[0] = 1.0;
    (afStack_80 + uVar1 * -4 + 2)[1] = 1.0;
    pfVar11 = pfVar3;
  }
  if (0xf < (long)pfVar4 + ~(ulong)pfVar12) {
    do {
      pfVar11[0] = 0.0;
      pfVar11[1] = 0.0;
      pfVar11[2] = 1.0;
      pfVar11[3] = 1.0;
      pfVar11[4] = 0.0;
      pfVar11[5] = 0.0;
      pfVar11[6] = 1.0;
      pfVar11[7] = 1.0;
      pfVar11 = pfVar11 + 8;
    } while (pfVar11 < pfVar2);
  }
  FUN_004b1690(*param_4,param_4[1],param_4[2],param_2,param_3,&local_54,&local_78);
  fVar10 = DAT_01d4c71c;
  fVar9 = DAT_01d4c640;
  fVar8 = DAT_01d4c484;
  fVar7 = DAT_01d4c368;
  fVar6 = DAT_01d4c078;
  fVar5 = DAT_01d4be0c;
  if (param_1 << 2 != 0) {
    do {
      fVar13 = *pfVar12;
      fVar15 = pfVar12[1];
      fVar16 = pfVar12[2];
      pfVar12 = pfVar12 + 4;
      fVar14 = local_70[0] * fVar13 + fVar15 * local_70[3] + fVar16 * local_58;
      fVar14 = (fVar8 + fVar14 * fVar14 * (fVar9 + fVar6 * fVar14 * fVar14)) * fVar14;
      fVar14 = fVar14 * fVar14;
      fVar14 = fVar5 / (fVar14 * (fVar10 * fVar14 + -0.5) + 1.0);
      fVar17 = fVar14 * (fVar13 * (float)local_78 + fVar15 * local_70[1] + fVar16 * local_60);
      fVar14 = fVar14 * (fVar13 * local_78._4_4_ + fVar15 * local_70[2] + fVar16 * fStack_5c);
      *param_5 = local_3c * fVar7 + local_54 * fVar17 + local_48 * fVar14;
      param_5[1] = local_38 * fVar7 + fStack_50 * fVar17 + fStack_44 * fVar14;
      param_5[2] = fStack_34 * fVar7 + local_4c * fVar17 + local_40 * fVar14;
      param_5 = param_5 + 4;
    } while (pfVar12 < pfVar2);
  }
  return;
}


