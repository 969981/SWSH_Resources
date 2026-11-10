/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057c140; name: FUN_0057c140
 */


undefined1  [16]
FUN_0057c140(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,float param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,
            float *param_10)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  uVar10 = param_1._0_8_;
  if ((0.0 < param_4) && (param_9 != 0)) {
    fVar11 = (float)NEON_fminnm(param_4,0x41800000);
    fVar7 = param_1._0_4_;
    fVar8 = (float)param_3;
    if (fVar11 + -1.0 <= 0.0) {
      if (param_9 == 10) {
        fVar5 = powf(*param_10,DAT_01d4bd24);
        if (0.0 <= fVar5) {
          if (1.0 < fVar5) {
            fVar5 = 1.0;
          }
          fVar5 = fVar5 / DAT_01d4c158;
        }
        else {
          fVar5 = 0.0;
        }
        iVar3 = (int)fVar5;
        iVar4 = 0x14;
        if (iVar3 + 1 < 0x14) {
          iVar4 = iVar3 + 1;
        }
        fVar5 = *(float *)(&DAT_01d6c9ec + (long)iVar3 * 4) +
                (*(float *)(&DAT_01d6c9ec + (long)iVar4 * 4) -
                *(float *)(&DAT_01d6c9ec + (long)iVar3 * 4)) * (fVar5 - (float)iVar3);
      }
      else {
        fVar5 = 0.0;
      }
    }
    else {
      auVar6 = FUN_0057c140(uVar10,param_2,param_3,(int)(fVar11 + -1.0),param_5,param_6,param_7,
                            param_8,param_9,param_10);
      uVar10 = auVar6._0_8_;
      fVar5 = auVar6._0_4_;
      bVar1 = false;
      bVar2 = false;
      if (fVar5 != fVar7) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar5) && !NAN(fVar8)) {
          bVar1 = fVar5 < fVar8;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        return auVar6;
      }
      if (param_9 == 10) {
        fVar5 = powf(*param_10,DAT_01d4bd24);
        if (0.0 <= fVar5) {
          if (1.0 < fVar5) {
            fVar5 = 1.0;
          }
          fVar5 = fVar5 / DAT_01d4c158;
        }
        else {
          fVar5 = 0.0;
        }
        iVar3 = (int)fVar5;
        iVar4 = 0x14;
        if (iVar3 + 1 < 0x14) {
          iVar4 = iVar3 + 1;
        }
        fVar5 = *(float *)(&DAT_01d6c9ec + (long)iVar3 * 4) +
                (*(float *)(&DAT_01d6c9ec + (long)iVar4 * 4) -
                *(float *)(&DAT_01d6c9ec + (long)iVar3 * 4)) * (fVar5 - (float)iVar3);
      }
      else {
        fVar5 = 0.0;
      }
    }
    fVar12 = ((fVar11 + DAT_01d4c2dc) - (float)(int)(fVar11 + DAT_01d4c2dc)) + DAT_01d4bac8;
    fVar5 = fVar5 * (float)param_7;
    fVar11 = (float)param_2;
    if ((float)param_2 <= fVar7) {
      fVar11 = fVar7;
    }
    fVar11 = (float)FUN_0057bfc0(fVar11,uVar10,0x3f800000,param_5,param_6,param_7,param_8,param_9,
                                 param_10);
    fVar9 = (float)uVar10;
    fVar5 = fVar5 + (fVar9 - fVar5) * ((fVar7 - fVar5) / (fVar11 - fVar5));
    if (fVar8 <= fVar5) {
      fVar5 = fVar8;
    }
    param_1 = ZEXT416((uint)(fVar9 + fVar12 * (fVar5 - fVar9)));
  }
  return param_1;
}


