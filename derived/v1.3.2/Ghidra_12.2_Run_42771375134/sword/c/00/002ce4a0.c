/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002ce4a0; name: FUN_002ce4a0
 */


void FUN_002ce4a0(float param_1,float *param_2,float *param_3,float *param_4,long *param_5,
                 long param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_230;
  char local_228 [8];
  float *local_220;
  undefined8 uStack_218;
  long *local_210;
  int local_208;
  int local_204;
  int local_1f8;
  int local_1f4;
  int local_1f0;
  int local_1ec;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  undefined8 local_1dc;
  undefined8 local_1d4;
  undefined8 local_1cc;
  undefined8 local_1c4;
  undefined1 auStack_1bc [256];
  int local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  
  uVar7 = FUN_0023a140(param_6,param_6 + 0xc,param_3,param_4,&fStack_b4,&local_b8);
  if ((uVar7 & 1) == 0) {
    return;
  }
  fVar22 = *param_4;
  fVar19 = param_4[2];
  fVar24 = *param_3;
  fVar27 = param_3[2];
  local_b0 = fVar22 * param_1 + fVar24;
  local_ac = param_4[1] * param_1 + param_3[1];
  uStack_218 = *(undefined8 *)(param_2 + 4);
  local_228[0] = '\0';
  local_230 = 0;
  local_bc = 0;
  local_a8 = fVar19 * param_1 + fVar27;
  local_220 = param_2;
  FUN_002cea50(local_228,param_3,&local_b0,param_8,(long)&local_230 + 4,&local_230);
  iVar3 = *(int *)(*(long *)(param_2 + 4) + 0x38);
  iVar4 = *(int *)(*(long *)(param_2 + 4) + 0x3c);
  fVar26 = DAT_01d4bf24 - local_230._4_4_;
  fVar25 = DAT_01d4bf24 - (float)local_230;
  fVar18 = local_230._4_4_ + (float)(iVar3 + -1) * DAT_01d4be60;
  fVar23 = (fStack_b4 * fVar22 + fVar24) * *param_2;
  fVar22 = (fVar24 + fVar22 * local_b8) * *param_2;
  if (fVar23 <= fVar26) {
    fVar23 = fVar26;
  }
  if (fVar18 <= fVar23) {
    fVar23 = fVar18;
  }
  fVar24 = (fStack_b4 * fVar19 + fVar27) * param_2[2];
  fVar20 = (float)(iVar4 + -1) * DAT_01d4be60 + (float)local_230;
  if (fVar24 <= fVar25) {
    fVar24 = fVar25;
  }
  if (fVar20 <= fVar24) {
    fVar24 = fVar20;
  }
  if (fVar22 <= fVar26) {
    fVar22 = fVar26;
  }
  if (fVar18 <= fVar22) {
    fVar22 = fVar18;
  }
  fVar18 = (fVar27 + fVar19 * local_b8) * param_2[2];
  fVar22 = fVar22 - fVar23;
  if (fVar18 <= fVar25) {
    fVar18 = fVar25;
  }
  if (fVar20 <= fVar18) {
    fVar18 = fVar20;
  }
  fVar18 = fVar18 - fVar24;
  fVar19 = 1.0;
  if (fVar22 < 0.0) {
    fVar19 = -1.0;
  }
  fVar25 = 1.0;
  if (fVar18 < 0.0) {
    fVar25 = -1.0;
  }
  fVar20 = fabsf(fVar22);
  fVar27 = DAT_01d4c55c;
  fVar26 = fVar19 * DAT_01d4c55c;
  if (DAT_01d4c55c <= fVar20) {
    fVar26 = fVar22;
  }
  fVar20 = fabsf(fVar18);
  fVar22 = fVar25 * fVar27;
  if (fVar27 <= fVar20) {
    fVar22 = fVar18;
  }
  fVar18 = *param_2 * *param_4 * param_1;
  fVar27 = param_2[2] * param_4[2] * param_1;
  sqrtf(fVar18 * fVar18 + param_4[1] * param_1 * param_4[1] * param_1 + fVar27 * fVar27);
  if (fVar26 <= 0.0) {
    fVar18 = ceilf(fVar23);
  }
  else {
    fVar18 = floorf(fVar23);
  }
  if (0.0 < fVar22) {
    fVar27 = floorf(fVar24);
  }
  else {
    fVar27 = ceilf(fVar24);
  }
  if (0.0 < fVar26) {
    fVar20 = ceilf(fVar23);
    fVar21 = 1.0;
  }
  else {
    fVar20 = floorf(fVar23);
    fVar21 = -1.0;
  }
  iVar12 = (int)fVar18;
  iVar14 = (int)fVar27;
  iVar15 = (int)fVar19;
  fVar18 = fVar20 + fVar21;
  if (fVar20 != fVar23) {
    fVar18 = fVar20;
  }
  iVar16 = (int)fVar25;
  if (fVar22 <= 0.0) {
    fVar25 = floorf(fVar24);
    fVar19 = fVar25 + -1.0;
  }
  else {
    fVar25 = ceilf(fVar24);
    fVar19 = fVar25 + 1.0;
  }
  if (fVar25 != fVar24) {
    fVar19 = fVar25;
  }
  fVar18 = (fVar18 - fVar23) / fVar26;
  fVar23 = (fVar19 - fVar24) / fVar22;
  fVar19 = fabsf(fVar26);
  fVar24 = fabsf(fVar22);
  fVar22 = DAT_01d4c4e0;
  iVar1 = -(uint)(iVar15 < 1);
  iVar2 = -(uint)(iVar16 < 1);
  do {
    fVar25 = fVar18;
    if (fVar23 <= fVar18) {
      fVar25 = fVar23;
    }
    if (local_228[0] == '\0') {
      local_228[0] = '\x01';
      local_1cc = 0xffffffff00000001;
      local_1c4 = 0xffffffff00000001;
      iVar10 = local_208 + iVar12;
      local_1dc = CONCAT44(iVar10,iVar12 - local_208);
      iVar13 = (iVar12 - local_208) + iVar1;
      iVar8 = local_204 + iVar14;
      local_1d4 = CONCAT44(iVar8,iVar14 - local_204);
      local_210 = param_5;
      local_1e8 = iVar4;
      local_1e4 = iVar1;
      local_1e0 = iVar2;
      if (iVar13 <= iVar10 + iVar1) {
        iVar9 = iVar2;
        iVar11 = iVar1;
        do {
          if (local_1f8 <= iVar13) {
            if (local_1f4 <= iVar13) break;
            iVar17 = iVar9 + (int)(float)local_1d4;
            if (iVar9 + (int)(float)local_1d4 <= iVar8 + iVar9) {
              do {
                if (local_1f0 <= iVar17) {
                  if (local_1ec <= iVar17) break;
                  uVar7 = FUN_002cec60(local_228,iVar17 + iVar13 * local_1e8);
                  if ((uVar7 & 1) == 0) {
                    return;
                  }
                  iVar8 = local_1d4._4_4_;
                  iVar9 = local_1e0;
                }
                bVar5 = iVar17 < iVar8 + iVar9;
                iVar17 = iVar17 + 1;
              } while (bVar5);
              iVar10 = local_1dc._4_4_;
              iVar11 = local_1e4;
            }
          }
          bVar5 = iVar13 < iVar10 + iVar11;
          iVar13 = iVar13 + 1;
        } while (bVar5);
      }
      if (local_bc != 0) {
        uVar7 = (**(code **)(*local_210 + 0x10))(local_210,local_bc,auStack_1bc);
        if ((uVar7 & 1) == 0) {
          return;
        }
        local_bc = 0;
      }
      if (fVar23 <= fVar18) goto LAB_002ce9e4;
LAB_002ce950:
      iVar12 = iVar12 + iVar15;
      fVar26 = (float)(iVar12 + iVar15);
      fVar27 = local_230._4_4_ + (float)iVar3;
      bVar5 = false;
      bVar6 = false;
      if (0.0 - local_230._4_4_ <= fVar26) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar27) && !NAN(fVar26)) {
          bVar5 = fVar27 == fVar26;
          bVar6 = fVar26 <= fVar27;
        }
      }
      if (!bVar6 || bVar5) {
        return;
      }
      fVar18 = 1.0 / fVar19 + fVar18;
    }
    else {
      fVar20 = (float)(iVar12 - local_208);
      fVar26 = (float)(local_208 + iVar12);
      fVar21 = (float)(iVar14 - local_204);
      fVar27 = (float)(local_204 + iVar14);
      local_1cc = CONCAT44(fVar26,fVar20);
      local_1c4 = CONCAT44(fVar27,fVar21);
      if (fVar20 == (float)local_1dc) {
        if (fVar21 != (float)local_1d4) {
          local_b0 = (float)CONCAT31(local_b0._1_3_,1);
          local_ac = fVar21;
          if ((int)(float)local_1d4 <= (int)fVar21) {
            local_ac = fVar27;
          }
          fVar27 = fVar26;
          local_a8 = fVar20;
          goto LAB_002ce990;
        }
      }
      else {
        local_b0 = (float)((uint)local_b0._1_3_ << 8);
        local_ac = fVar20;
        if ((int)(float)local_1dc <= (int)fVar20) {
          local_ac = fVar26;
        }
        local_a8 = fVar21;
LAB_002ce990:
        local_a4 = fVar27;
      }
      uVar7 = FUN_002cede0(local_228,&local_b0);
      if ((uVar7 & 1) == 0) {
        return;
      }
      if (local_bc != 0) {
        uVar7 = (**(code **)(*local_210 + 0x10))(local_210,local_bc,auStack_1bc);
        if ((uVar7 & 1) == 0) {
          return;
        }
        local_bc = 0;
      }
      local_1d4 = local_1c4;
      local_1dc = local_1cc;
      if (fVar18 < fVar23) goto LAB_002ce950;
LAB_002ce9e4:
      iVar14 = iVar14 + iVar16;
      fVar26 = (float)(iVar14 + iVar16);
      fVar27 = (float)local_230 + (float)iVar4;
      bVar5 = false;
      bVar6 = false;
      if (0.0 - (float)local_230 <= fVar26) {
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fVar27) && !NAN(fVar26)) {
          bVar5 = fVar27 == fVar26;
          bVar6 = fVar26 <= fVar27;
        }
      }
      if (!bVar6 || bVar5) {
        return;
      }
      fVar23 = 1.0 / fVar24 + fVar23;
    }
    if (fVar22 <= fVar25) {
      return;
    }
  } while( true );
}


