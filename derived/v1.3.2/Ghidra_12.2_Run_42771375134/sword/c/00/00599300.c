/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00599300; name: FUN_00599300
 */


/* WARNING: Removing unreachable block (ram,0x0059943c) */

undefined8
FUN_00599300(undefined4 param_1,undefined4 param_2,float param_3,long param_4,long param_5,
            undefined8 param_6,long param_7,long param_8,float *param_9,undefined4 param_10,
            undefined8 param_11,int param_12,long param_13,uint param_14,byte param_15,byte param_16
            ,undefined1 param_17,undefined4 param_18,undefined4 param_19)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  undefined4 in_stack_fffffffffffffea8;
  uint uVar21;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  long local_b8;
  undefined8 uStack_b0;
  
  if (*(long *)(param_4 + 0x20) == 0) {
    return 0xffffffff;
  }
  fVar20 = *param_9;
  fVar9 = param_9[1];
  fVar17 = fVar20;
  if (fVar20 <= 0.0) {
    fVar17 = -fVar20;
  }
  if (fVar9 <= 0.0) {
    fVar9 = -fVar9;
  }
  fVar10 = param_9[2];
  fVar13 = param_9[3];
  if (fVar10 <= 0.0) {
    fVar10 = -fVar10;
  }
  if (fVar13 <= 0.0) {
    fVar13 = -fVar13;
  }
  fVar11 = fVar17;
  if (fVar17 <= fVar9) {
    fVar11 = fVar9;
  }
  if (fVar11 <= fVar10) {
    fVar11 = fVar10;
  }
  if (fVar11 <= fVar13) {
    fVar11 = fVar13;
  }
  fVar11 = logf(fVar11 / param_3);
  fVar16 = DAT_01d4c4dc;
  fVar14 = fVar11 / DAT_01d4c4dc + 1.0;
  fVar11 = (float)param_12;
  if (fVar14 <= (float)param_12) {
    fVar11 = fVar14;
  }
  fVar12 = 0.0;
  if (0.0 <= fVar14) {
    fVar12 = fVar11;
  }
  iVar5 = (int)fVar12;
  fVar11 = 0.75;
  if (iVar5 != 0) {
    fVar11 = DAT_01d4c12c;
  }
  fVar14 = 0.0;
  if ((iVar5 < param_12) && (fVar11 < fVar12 - (float)iVar5)) {
    fVar11 = ((fVar12 - (float)iVar5) - fVar11) / (1.0 - fVar11);
    fVar14 = 0.0;
    if (0.0 <= fVar11) {
      fVar14 = fVar11;
    }
  }
  fVar11 = ldexpf(1.0,-iVar5);
  fVar12 = logf((float)param_14);
  lVar4 = param_8;
  lVar6 = param_5;
  local_100 = param_6;
  if (iVar5 != 0) {
    lVar4 = param_5;
    if (0 < iVar5) {
      iVar8 = (int)(fVar12 / fVar16);
      iVar7 = 0;
      uVar18 = 0;
      do {
        lVar4 = *(long *)(param_13 + (long)(iVar7 << 1) * 8);
        uVar21 = *(uint *)(lVar4 + 0x54);
        if ((uVar21 * 2 == *(int *)(lVar6 + 0x54)) &&
           (*(int *)(lVar4 + 0x58) * 2 == *(int *)(lVar6 + 0x58))) {
          bVar3 = 0;
        }
        else {
          bVar3 = 1;
        }
        bVar2 = (bool)(0 < iVar7 | uVar21 < 0x141 | bVar3);
        if (bVar2) {
          iVar8 = 1;
        }
        iVar7 = iVar8 + iVar7;
        uVar19 = 0x3f800000;
        if (!bVar2) {
          uVar19 = uVar18;
        }
        iVar1 = iVar7;
        if (iVar5 <= iVar7) {
          iVar1 = iVar5;
        }
        lVar4 = *(long *)(param_13 + (long)(iVar1 * 2 + -2) * 8);
        local_d8 = 0x3f8000003f800000;
        local_d0 = 0x3f8000003f800000;
        local_b8 = 0;
        uStack_b0 = 0;
        in_stack_fffffffffffffea8 = 0;
        FUN_0057da10(0,0,uVar19,0x3f800000,param_4,lVar6,lVar4,0,0,&local_d8,0,0,0,1,&local_b8,0,
                     0xffffffff);
        lVar6 = lVar4;
        uVar18 = uVar19;
      } while (iVar7 < iVar5);
    }
    local_100 = *(undefined8 *)(param_13 + (long)(iVar5 * 2 + -1) * 8);
    lVar6 = lVar4;
  }
  if (fVar14 == 0.0) {
    local_138 = 0;
    local_130 = 0;
  }
  else {
    local_130 = *(undefined8 *)(param_13 + (long)(iVar5 << 1) * 8);
    local_138 = *(undefined8 *)(param_13 + ((long)iVar5 << 4 | 8U));
    local_b8 = 0;
    uStack_b0 = 0;
    local_d8 = 0x3f8000003f800000;
    local_d0 = 0x3f8000003f800000;
    in_stack_fffffffffffffea8 = 0;
    FUN_0057da10(0,0,0x3f800000,0x3f800000,param_4,lVar6,local_130,0,0,&local_d8,0,0,0,1,&local_b8,0
                 ,0xffffffff);
    if (param_7 != 0) {
      param_5 = param_7;
    }
    if (iVar5 != 0) {
      param_5 = lVar4;
    }
    lVar4 = param_5;
  }
  fVar17 = fVar17 * fVar11;
  fVar9 = fVar9 * fVar11;
  fVar13 = fVar13 * fVar11;
  fVar10 = fVar10 * fVar11;
  fVar12 = fVar17;
  fVar15 = fVar9;
  fVar11 = fVar10;
  fVar16 = fVar13;
  if (fVar20 < 0.0) {
    fVar12 = -fVar17;
    fVar15 = -fVar9;
    fVar11 = -fVar10;
    fVar16 = -fVar13;
  }
  local_d8 = CONCAT44(fVar15,fVar12);
  local_d0 = CONCAT44(fVar16,fVar11);
  uVar21 = CONCAT31((int3)((uint)in_stack_fffffffffffffea8 >> 8),param_17) & 0xffffff01;
  FUN_00597bd0(param_1,param_2,param_4,lVar6,local_100,lVar4,&local_d8,param_10,param_11,
               param_15 & 1,param_16 & 1,uVar21,param_18,param_19);
  if (fVar14 == 0.0) {
    local_100 = local_130;
  }
  else {
    if (0.0 <= fVar20) {
      fVar20 = 0.5;
    }
    else {
      fVar20 = -0.5;
    }
    local_d0 = CONCAT44(fVar13 * fVar20,fVar10 * fVar20);
    local_d8 = CONCAT44(fVar9 * fVar20,fVar17 * fVar20);
    FUN_00597bd0(param_1,param_2,param_4,local_130,local_138,local_130,&local_d8,param_10,param_11,
                 param_15 & 1,param_16 & 1,CONCAT31((int3)(uVar21 >> 8),param_17) & 0xffffff01,
                 param_18,param_19);
    if (iVar5 < 1) {
      local_100 = local_130;
    }
    else {
      local_d8 = 0x3f8000003f800000;
      local_d0 = 0x3f8000003f800000;
      local_b8 = 0;
      uStack_b0 = 0;
      FUN_0057da10(0,0,0x3f800000,0x3f800000,param_4,local_130,local_100,0,0,&local_d8,0,0,0,1,
                   &local_b8,0,0xffffffff);
    }
  }
  fVar17 = 1.0 - fVar14;
  local_d0 = CONCAT44(fVar17,fVar17);
  local_d8 = CONCAT44(fVar17,fVar17);
  local_c8 = fVar14;
  local_c4 = fVar14;
  local_c0 = fVar14;
  fStack_bc = fVar14;
  if (iVar5 == 0) {
    if (fVar14 == 0.0) {
      return 0;
    }
  }
  else {
    lVar6 = lVar4;
    if (1 < iVar5) {
      lVar6 = *(long *)(param_13 + (long)(iVar5 * 2 + -4) * 8);
      local_b8 = 0x3f8000003f800000;
      uStack_b0 = 0x3f8000003f800000;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_0057da10(0,0,0x3f800000,0x3f800000,param_4,lVar4,lVar6,0,0,&local_b8,0,0,0,1,&local_e8,0,
                   0xffffffff);
    }
    lVar4 = lVar6;
    if (fVar14 == 0.0) {
      local_b8 = 0x3f8000003f800000;
      uStack_b0 = 0x3f8000003f800000;
      local_e8 = 0;
      uStack_e0 = 0;
      FUN_0057da10(0,0,0,0x3f800000,param_4,lVar6,param_8,0,0,&local_b8,0,0,0,1,&local_e8,0,
                   0xffffffff);
      return 0;
    }
  }
  local_b8 = lVar4;
  uStack_b0 = local_100;
  FUN_0058d2d0(0x3f800000,0x3f800000,param_4,param_8,2,&local_b8,&local_d8,0,0);
  return 0;
}


