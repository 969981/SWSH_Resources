/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00234860; name: FUN_00234860
 */


float FUN_00234860(float param_1,float param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar3 = param_3[1] - param_5[1];
  fVar1 = *param_3 - *param_5;
  fVar5 = param_3[2] - param_5[2];
  fVar13 = *param_4 * *param_6 + param_4[1] * param_6[1] + param_4[2] * param_6[2];
  fVar12 = fVar1 * *param_4 + fVar3 * param_4[1] + fVar5 * param_4[2];
  fVar11 = fVar1 * *param_6 + fVar3 * param_6[1] + fVar5 * param_6[2];
  fVar2 = fabsf(1.0 - fVar13 * fVar13);
  if (fVar2 < DAT_01d4c1cc) {
    fVar9 = -1.0;
    if (DAT_01d4bc1c <= fVar13) {
      fVar9 = 1.0;
    }
    fVar12 = fVar12 + fVar11 * fVar9;
    param_1 = param_1 + param_2;
    fVar2 = fVar12 * 0.5;
    if (fVar2 <= param_1) {
      fVar12 = fVar12 * -0.5;
      if (param_1 < fVar12) {
        fVar12 = param_1;
      }
    }
    else {
      fVar12 = -param_1;
    }
    fVar10 = -(fVar9 * fVar12 * param_2) / param_1;
    fVar2 = fVar12 * (fVar2 + fVar2 + fVar12);
    fVar9 = fVar12 + fVar9 * fVar10;
    goto joined_r0x00234d40;
  }
  fVar4 = -fVar13;
  fVar8 = fVar13 * fVar11 - fVar12;
  fVar6 = fVar11 + fVar12 * fVar4;
  fVar7 = fVar2 * param_2;
  fVar10 = param_2;
  fVar9 = param_1;
  if (fVar8 < -(fVar2 * param_1)) {
    if (fVar6 < -fVar7) {
      fVar4 = fVar12 + fVar13 * param_2;
      fVar7 = -fVar4;
      fVar6 = -param_2;
      if (fVar7 <= param_1) {
        fVar13 = fVar13 * param_1 - fVar11;
        fVar9 = -fVar13;
        fVar2 = (fVar13 + fVar13 + param_2) * param_2;
        if (fVar9 <= param_2) {
          fVar10 = fVar9;
          fVar2 = fVar13 * fVar9;
        }
        if (param_2 < fVar13) {
          fVar2 = ((fVar13 + fVar13) - param_2) * fVar6;
        }
        if (param_2 < fVar13) {
          fVar10 = fVar6;
        }
        fVar2 = ((fVar12 + fVar12) - param_1) * -param_1 + fVar2;
        fVar9 = -param_1;
        if (fVar4 <= param_1) {
          fVar2 = fVar4 * fVar7 + (fVar11 * -2.0 - param_2) * fVar6;
          fVar9 = fVar7;
          fVar10 = fVar6;
        }
      }
      else {
        fVar2 = (fVar11 * -2.0 - param_2) * fVar6 + (fVar4 + fVar4 + param_1) * param_1;
        fVar10 = fVar6;
      }
      goto joined_r0x00234d40;
    }
    if (fVar6 <= fVar7) {
      fVar11 = fVar13 * param_1 - fVar11;
      fVar9 = -param_1;
      fVar13 = -fVar11;
      fVar2 = (fVar11 + fVar11 + param_2) * param_2;
      if (fVar13 <= param_2) {
        fVar2 = fVar11 * fVar13;
        fVar10 = fVar13;
      }
      if (param_2 < fVar11) {
        fVar2 = ((fVar11 + fVar11) - param_2) * -param_2;
      }
      fVar2 = ((fVar12 + fVar12) - param_1) * fVar9 + fVar2;
      if (param_2 < fVar11) {
        fVar10 = -param_2;
      }
      goto joined_r0x00234d40;
    }
    fVar4 = fVar12 + fVar4 * param_2;
    fVar6 = -fVar4;
    if (fVar6 <= param_1) {
      fVar13 = fVar13 * param_1 - fVar11;
      fVar9 = -fVar13;
      fVar2 = (fVar13 + fVar13 + param_2) * param_2;
      if (fVar9 <= param_2) {
        fVar10 = fVar9;
        fVar2 = fVar13 * fVar9;
      }
      if (param_2 < fVar13) {
        fVar2 = ((fVar13 + fVar13) - param_2) * -param_2;
      }
      if (param_2 < fVar13) {
        fVar10 = -param_2;
      }
      fVar9 = -param_1;
      if (fVar4 <= param_1) {
        fVar9 = fVar6;
      }
      if (fVar4 <= param_1) {
        fVar10 = param_2;
      }
      fVar2 = ((fVar12 + fVar12) - param_1) * -param_1 + fVar2;
      if (fVar4 <= param_1) {
        fVar2 = fVar4 * fVar6 + (param_2 - (fVar11 + fVar11)) * param_2;
      }
      goto joined_r0x00234d40;
    }
    fVar12 = fVar4 + fVar4 + param_1;
  }
  else {
    if (fVar8 <= fVar2 * param_1) {
      if (-fVar7 <= fVar6) {
        if (fVar6 <= fVar7) {
          fVar10 = (1.0 / fVar2) * fVar6;
          fVar9 = (1.0 / fVar2) * fVar8;
          fVar2 = fVar9 * (fVar12 + fVar12 + fVar9 + fVar10 * fVar4) +
                  fVar10 * ((fVar10 + fVar9 * fVar4) - (fVar11 + fVar11));
        }
        else {
          fVar12 = fVar12 + fVar4 * param_2;
          fVar13 = -fVar12;
          fVar2 = (fVar12 + fVar12 + param_1) * param_1;
          if (fVar13 <= param_1) {
            fVar9 = fVar13;
            fVar2 = fVar12 * fVar13;
          }
          if (param_1 < fVar12) {
            fVar2 = ((fVar12 + fVar12) - param_1) * -param_1;
          }
          fVar2 = (param_2 - (fVar11 + fVar11)) * param_2 + fVar2;
          if (param_1 < fVar12) {
            fVar9 = -param_1;
          }
        }
      }
      else {
        fVar12 = fVar12 + fVar13 * param_2;
        fVar10 = -param_2;
        fVar13 = -fVar12;
        fVar2 = (fVar12 + fVar12 + param_1) * param_1;
        if (fVar13 <= param_1) {
          fVar9 = fVar13;
          fVar2 = fVar12 * fVar13;
        }
        if (param_1 < fVar12) {
          fVar2 = ((fVar12 + fVar12) - param_1) * -param_1;
        }
        fVar2 = (fVar11 * -2.0 - param_2) * fVar10 + fVar2;
        if (param_1 < fVar12) {
          fVar9 = -param_1;
        }
      }
      goto joined_r0x00234d40;
    }
    if (fVar6 < -fVar7) {
      fVar13 = fVar12 + fVar13 * param_2;
      fVar6 = -param_2;
      fVar10 = fVar6;
      if (fVar13 <= param_1) {
        fVar4 = fVar4 * param_1 - fVar11;
        fVar7 = -fVar4;
        fVar2 = ((fVar4 + fVar4) - param_2) * fVar6;
        if (fVar4 <= param_2) {
          fVar10 = fVar7;
          fVar2 = fVar4 * fVar7;
        }
        if (param_2 < fVar7) {
          fVar2 = (fVar4 + fVar4 + param_2) * param_2;
        }
        fVar4 = -fVar13;
        if (param_2 < fVar7) {
          fVar10 = param_2;
        }
        fVar2 = (fVar12 + fVar12 + param_1) * param_1 + fVar2;
        if (fVar4 <= param_1) {
          fVar2 = fVar13 * fVar4 + (fVar11 * -2.0 - param_2) * fVar6;
          fVar9 = fVar4;
          fVar10 = fVar6;
        }
      }
      else {
        fVar2 = (fVar11 * -2.0 - param_2) * fVar6 + ((fVar13 + fVar13) - param_1) * -param_1;
        fVar9 = -param_1;
      }
      goto joined_r0x00234d40;
    }
    if (fVar6 <= fVar7) {
      fVar11 = fVar4 * param_1 - fVar11;
      fVar13 = -fVar11;
      fVar2 = (fVar11 + fVar11 + param_2) * param_2;
      if (fVar13 <= param_2) {
        fVar10 = fVar13;
        fVar2 = fVar11 * fVar13;
      }
      if (param_2 < fVar11) {
        fVar2 = ((fVar11 + fVar11) - param_2) * -param_2;
      }
      fVar2 = (fVar12 + fVar12 + param_1) * param_1 + fVar2;
      if (param_2 < fVar11) {
        fVar10 = -param_2;
      }
      goto joined_r0x00234d40;
    }
    fVar13 = fVar12 + fVar4 * param_2;
    if (fVar13 <= param_1) {
      fVar4 = fVar4 * param_1 - fVar11;
      fVar6 = -fVar4;
      fVar2 = (fVar4 + fVar4 + param_2) * param_2;
      if (fVar6 <= param_2) {
        fVar10 = fVar6;
        fVar2 = fVar4 * fVar6;
      }
      if (param_2 < fVar4) {
        fVar10 = -param_2;
      }
      fVar6 = -fVar13;
      if (param_2 < fVar4) {
        fVar2 = ((fVar4 + fVar4) - param_2) * -param_2;
      }
      if (fVar6 <= param_1) {
        fVar9 = fVar6;
      }
      if (fVar6 <= param_1) {
        fVar10 = param_2;
      }
      fVar2 = (fVar12 + fVar12 + param_1) * param_1 + fVar2;
      if (fVar6 <= param_1) {
        fVar2 = fVar13 * fVar6 + (param_2 - (fVar11 + fVar11)) * param_2;
      }
      goto joined_r0x00234d40;
    }
    fVar12 = (fVar13 + fVar13) - param_1;
    param_1 = -param_1;
  }
  fVar2 = (param_2 - (fVar11 + fVar11)) * param_2 + fVar12 * param_1;
  fVar9 = param_1;
joined_r0x00234d40:
  if (param_7 != (float *)0x0) {
    *param_7 = fVar9;
  }
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3 + fVar5 * fVar5 + fVar2;
  if (param_8 != (float *)0x0) {
    *param_8 = fVar10;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}


