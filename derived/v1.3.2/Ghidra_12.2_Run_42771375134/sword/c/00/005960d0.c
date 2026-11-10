/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005960d0; name: FUN_005960d0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_005960d0(float param_1,long param_2,long param_3,long param_4,long param_5,float *param_6,
            uint param_7,float *param_8,uint param_9,byte param_10,byte param_11,uint param_12,
            uint param_13)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float local_358;
  int local_34c;
  float local_348 [6];
  float local_330 [6];
  float local_318 [6];
  float local_300 [6];
  float local_2e8 [44];
  float local_238;
  undefined1 local_234 [4];
  undefined8 uStack_230;
  float local_220 [6];
  float local_208 [6];
  float local_1f0 [27];
  float local_184 [11];
  float local_158 [11];
  float local_12c [11];
  float local_100 [11];
  float afStack_d4 [13];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  fVar20 = *param_6;
  fVar23 = param_6[1];
  fVar22 = fVar20;
  if (fVar20 <= 0.0) {
    fVar22 = -fVar20;
  }
  if (fVar23 <= 0.0) {
    fVar23 = -fVar23;
  }
  fVar24 = param_6[2];
  fVar25 = param_6[3];
  if (fVar24 <= 0.0) {
    fVar24 = -fVar24;
  }
  if (fVar25 <= 0.0) {
    fVar25 = -fVar25;
  }
  bVar7 = false;
  if ((fVar22 == fVar23) && (bVar7 = false, !NAN(fVar23) && !NAN(fVar24))) {
    bVar7 = fVar23 == fVar24;
  }
  bVar8 = false;
  if ((bVar7) && (bVar8 = false, !NAN(fVar24) && !NAN(fVar25))) {
    bVar8 = fVar24 == fVar25;
  }
  if (bVar8) {
    bVar7 = true;
    local_358 = fVar22;
  }
  else {
    fVar28 = fVar23;
    if (fVar23 <= fVar22) {
      fVar28 = fVar22;
    }
    fVar29 = fVar24;
    if (fVar24 <= fVar28) {
      fVar29 = fVar28;
    }
    local_358 = fVar25;
    if (fVar25 <= fVar29) {
      local_358 = fVar29;
    }
    bVar7 = false;
    param_11 = 0.0 <= fVar20 | param_11;
  }
  if ((((*param_8 == 1.0) && (param_8[1] == 1.0)) && (param_8[2] == 1.0)) && (param_8[3] == 1.0)) {
    bVar8 = (bool)(bVar7 ^ 1);
  }
  else {
    bVar8 = true;
  }
  if ((param_10 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  if (((param_11 & 1) == 0) &&
     ((((param_7 < 0xf && ((1 << (ulong)(param_7 & 0x1f) & 0x4924U) != 0)) ||
       ((param_7 < 0x15 && ((0x109209U >> (ulong)(param_7 & 0x1f) & 1) != 0)))) ||
      ((param_7 < 0x15 && ((1 << (ulong)(param_7 & 0x1f) & 0x106000U) != 0)))))) {
    lVar16 = param_3;
    do {
      lVar17 = lVar16;
      lVar16 = *(long *)(lVar17 + 0x120);
    } while (lVar16 != 0);
    if ((*(byte *)(*(long *)(lVar17 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
      lVar16 = param_4;
      do {
        lVar17 = lVar16;
        lVar16 = *(long *)(lVar17 + 0x120);
      } while (lVar16 != 0);
      if ((*(byte *)(*(long *)(lVar17 + 0xa8) + 0x5e) >> 1 & 1) != 0) {
        local_34c = 0;
        lVar16 = 6;
        goto LAB_0059628c;
      }
    }
  }
  lVar16 = 0xb;
  local_34c = 1;
LAB_0059628c:
  lVar17 = param_3;
  do {
    lVar18 = lVar17;
    lVar17 = *(long *)(lVar18 + 0x120);
  } while (lVar17 != 0);
  plVar9 = *(long **)(lVar18 + 0xa8);
  (**(code **)(*plVar9 + 0x88))(plVar9,local_34c);
  lVar17 = param_4;
  do {
    lVar18 = lVar17;
    lVar17 = *(long *)(lVar18 + 0x120);
  } while (lVar17 != 0);
  plVar9 = *(long **)(lVar18 + 0xa8);
  (**(code **)(*plVar9 + 0x88))(plVar9,local_34c);
  uVar6 = param_12;
  if (param_12 == 0) {
    uVar6 = *(uint *)(param_3 + 0x54);
  }
  uVar15 = param_13;
  if (param_13 == 0) {
    uVar15 = *(uint *)(param_3 + 0x58);
  }
  fVar20 = *(float *)(param_3 + 0x88);
  fVar31 = *(float *)(param_3 + 0x8c);
  fVar28 = *(float *)(param_3 + 0x90);
  fVar29 = *(float *)(param_3 + 0x94);
  uVar4 = param_12;
  if (param_12 == 0) {
    uVar4 = *(uint *)(param_4 + 0x54);
  }
  uVar12 = param_13;
  if (param_13 == 0) {
    uVar12 = *(uint *)(param_4 + 0x58);
  }
  uVar5 = *(undefined4 *)(*(long *)(param_3 + 0x80) + 8);
  if (local_34c == 0) {
    if (bVar7) {
      FUN_00513f50(local_358,0x3f800000,uVar5,afStack_d4,local_184,param_9 & 1);
    }
    else {
      uVar3 = param_9 & 1;
      FUN_00513f50(fVar22,0x3f800000,uVar5,&local_238,local_184,uVar3);
      FUN_00513f50(fVar23,0x3f800000,uVar5,local_220,local_158,uVar3);
      pfVar11 = local_208;
      FUN_00513f50(fVar24,0x3f800000,uVar5,pfVar11,local_12c,uVar3);
      FUN_00513f50(fVar25,0x3f800000,uVar5,local_1f0,local_100,uVar3);
      pfVar13 = afStack_d4;
      lVar17 = lVar16;
      do {
        pfVar1 = pfVar11 + -0xc;
        pfVar2 = pfVar11 + -6;
        fVar30 = *pfVar11;
        pfVar19 = pfVar11 + 6;
        pfVar11 = pfVar11 + 1;
        lVar17 = lVar17 + -1;
        *pfVar13 = (*pfVar1 + 0.0 + *pfVar2 + fVar30 + *pfVar19) * 0.25;
        pfVar13 = pfVar13 + 1;
      } while (lVar17 != 0);
    }
  }
  else if (bVar7) {
    FUN_00514e60(local_358,0x3f800000,uVar5,afStack_d4,local_184,param_9 & 1);
  }
  else {
    uVar3 = param_9 & 1;
    FUN_00514e60(fVar22,0x3f800000,uVar5,afStack_d4,local_184,uVar3);
    FUN_00514e60(fVar23,0x3f800000,uVar5,afStack_d4,local_158,uVar3);
    FUN_00514e60(fVar24,0x3f800000,uVar5,afStack_d4,local_12c,uVar3);
    FUN_00514e60(fVar25,0x3f800000,uVar5,afStack_d4,local_100,uVar3);
  }
  fVar30 = SQRT(param_1);
  if (NAN(fVar30)) {
    fVar30 = sqrtf(param_1);
  }
  if (bVar8) {
    pfVar11 = local_12c;
    puVar14 = &uStack_230;
    pfVar13 = local_2e8 + 2;
    pfVar19 = afStack_d4;
    lVar17 = lVar16;
    do {
      fVar21 = fVar30 * pfVar11[-0x16];
      pfVar13[-2] = fVar21;
      if (bVar7) {
        pfVar13[-1] = fVar21;
        *pfVar13 = fVar21;
      }
      else {
        fVar26 = *pfVar11;
        fVar21 = pfVar11[0xb];
        pfVar13[-1] = fVar30 * pfVar11[-0xb];
        *pfVar13 = fVar30 * fVar26;
        fVar21 = fVar30 * fVar21;
      }
      pfVar13[1] = fVar21;
      fVar21 = *pfVar19;
      *(undefined8 *)((long)puVar14 + -4) = 0;
      lVar17 = lVar17 + -1;
      pfVar11 = pfVar11 + 1;
      *(float *)(puVar14 + -1) = fVar21;
      *(undefined4 *)((long)puVar14 + 4) = 0;
      puVar14 = puVar14 + 2;
      pfVar13 = pfVar13 + 4;
      pfVar19 = pfVar19 + 1;
    } while (lVar17 != 0);
  }
  else {
    puVar14 = &uStack_230;
    pfVar11 = local_2e8 + 2;
    pfVar13 = afStack_d4;
    pfVar19 = local_184;
    lVar17 = lVar16;
    do {
      fVar21 = fVar30 * *pfVar19;
      pfVar11[-2] = fVar21;
      pfVar11[-1] = fVar21;
      lVar17 = lVar17 + -1;
      *pfVar11 = fVar21;
      pfVar11[1] = fVar21;
      fVar21 = *pfVar13;
      *(undefined8 *)((long)puVar14 + -4) = 0;
      *(undefined4 *)((long)puVar14 + 4) = 0;
      *(float *)(puVar14 + -1) = fVar21;
      puVar14 = puVar14 + 2;
      pfVar11 = pfVar11 + 4;
      pfVar13 = pfVar13 + 1;
      pfVar19 = pfVar19 + 1;
    } while (lVar17 != 0);
  }
  uVar10 = FUN_0059d300(param_4,0,0,1,0,0);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  FUN_0059d000(0,0);
  lVar17 = param_3;
  do {
    lVar18 = lVar17;
    lVar17 = *(long *)(lVar18 + 0x120);
  } while (lVar17 != 0);
  uVar10 = FUN_00575a10(0,0,(float)uVar4,(float)uVar12,0,0,fVar20 * (float)uVar6 + fVar28,
                        fVar31 * (float)uVar15 + fVar29,param_2,lVar16,&local_238,local_2e8,
                        *(undefined8 *)(lVar18 + 0xa8),param_7,0);
  if ((int)uVar10 < 0) {
    return uVar10;
  }
  uVar6 = param_12;
  if (param_12 == 0) {
    uVar6 = *(uint *)(param_4 + 0x54);
  }
  if (param_13 == 0) {
    uVar15 = *(uint *)(param_4 + 0x58);
    fVar20 = *(float *)(param_4 + 0x88);
    fVar28 = *(float *)(param_4 + 0x8c);
    fVar29 = *(float *)(param_4 + 0x90);
    fVar31 = *(float *)(param_4 + 0x94);
  }
  else {
    fVar20 = *(float *)(param_4 + 0x88);
    fVar28 = *(float *)(param_4 + 0x8c);
    fVar29 = *(float *)(param_4 + 0x90);
    fVar31 = *(float *)(param_4 + 0x94);
    uVar15 = param_13;
  }
  if (param_12 == 0) {
    param_12 = *(uint *)(param_5 + 0x54);
  }
  if (param_13 == 0) {
    param_13 = *(uint *)(param_5 + 0x58);
  }
  uVar5 = *(undefined4 *)(*(long *)(param_4 + 0x80) + 0xc);
  if (local_34c == 0) {
    if (bVar7) {
      FUN_00513f50(local_358,0x3f800000,uVar5,afStack_d4,local_184,param_9 & 1);
      fVar22 = *param_8;
      fVar23 = param_8[1];
      fVar24 = param_8[2];
      fVar25 = param_8[3];
    }
    else {
      param_9 = param_9 & 1;
      FUN_00513f50(fVar22,0x3f800000,uVar5,local_348,local_184,param_9);
      FUN_00513f50(fVar23,0x3f800000,uVar5,local_330,local_158,param_9);
      pfVar11 = local_318;
      FUN_00513f50(fVar24,0x3f800000,uVar5,pfVar11,local_12c,param_9);
      FUN_00513f50(fVar25,0x3f800000,uVar5,local_300,local_100,param_9);
      pfVar13 = afStack_d4;
      lVar17 = lVar16;
      do {
        pfVar1 = pfVar11 + -0xc;
        pfVar2 = pfVar11 + -6;
        fVar22 = *pfVar11;
        pfVar19 = pfVar11 + 6;
        pfVar11 = pfVar11 + 1;
        lVar17 = lVar17 + -1;
        *pfVar13 = (*pfVar1 + 0.0 + *pfVar2 + fVar22 + *pfVar19) * 0.25;
        pfVar13 = pfVar13 + 1;
      } while (lVar17 != 0);
      fVar22 = *param_8;
      fVar23 = param_8[1];
      fVar24 = param_8[2];
      fVar25 = param_8[3];
    }
  }
  else {
    if (bVar7) {
      pfVar11 = local_184;
      fVar25 = local_358;
    }
    else {
      uVar4 = param_9 & 1;
      FUN_00514e60(fVar22,0x3f800000,uVar5,afStack_d4,local_184,uVar4);
      FUN_00514e60(fVar23,0x3f800000,uVar5,afStack_d4,local_158,uVar4);
      FUN_00514e60(fVar24,0x3f800000,uVar5,afStack_d4,local_12c,uVar4);
      pfVar11 = local_100;
    }
    FUN_00514e60(fVar25,0x3f800000,uVar5,afStack_d4,pfVar11,param_9 & 1);
    fVar22 = *param_8;
    fVar23 = param_8[1];
    fVar24 = param_8[2];
    fVar25 = param_8[3];
  }
  if (bVar8) {
    pfVar11 = local_12c;
    pfVar13 = local_2e8 + 2;
    puVar14 = &uStack_230;
    pfVar19 = afStack_d4;
    lVar17 = lVar16;
    do {
      if (bVar7) {
        fVar21 = fVar30 * pfVar11[-0x16];
        pfVar13[-2] = fVar21 * fVar22;
        pfVar13[-1] = fVar21 * fVar23;
        *pfVar13 = fVar21 * fVar24;
        pfVar13[1] = fVar21 * fVar25;
      }
      else {
        fVar21 = pfVar11[-0xb];
        fVar26 = *pfVar11;
        fVar27 = pfVar11[0xb];
        pfVar13[-2] = fVar30 * fVar22 * pfVar11[-0x16];
        pfVar13[-1] = fVar30 * fVar23 * fVar21;
        *pfVar13 = fVar30 * fVar24 * fVar26;
        pfVar13[1] = fVar30 * fVar25 * fVar27;
      }
      fVar21 = *pfVar19;
      lVar17 = lVar17 + -1;
      pfVar11 = pfVar11 + 1;
      *(undefined4 *)(puVar14 + -1) = 0;
      *(float *)((long)puVar14 + -4) = fVar21;
      pfVar13 = pfVar13 + 4;
      *puVar14 = 0;
      puVar14 = puVar14 + 2;
      pfVar19 = pfVar19 + 1;
    } while (lVar17 != 0);
  }
  else {
    pfVar11 = local_2e8 + 2;
    puVar14 = &uStack_230;
    pfVar13 = afStack_d4;
    pfVar19 = local_184;
    lVar17 = lVar16;
    do {
      fVar21 = fVar30 * *pfVar19;
      pfVar11[-2] = fVar21 * fVar22;
      pfVar11[-1] = fVar21 * fVar23;
      *pfVar11 = fVar21 * fVar24;
      pfVar11[1] = fVar21 * fVar25;
      lVar17 = lVar17 + -1;
      fVar21 = *pfVar13;
      *puVar14 = 0;
      *(undefined4 *)(puVar14 + -1) = 0;
      *(float *)((long)puVar14 + -4) = fVar21;
      puVar14 = puVar14 + 2;
      pfVar11 = pfVar11 + 4;
      pfVar13 = pfVar13 + 1;
      pfVar19 = pfVar19 + 1;
    } while (lVar17 != 0);
  }
  uVar10 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar10) {
    FUN_0059d000(0,0);
    lVar17 = param_4;
    do {
      lVar18 = lVar17;
      lVar17 = *(long *)(lVar18 + 0x120);
    } while (lVar17 != 0);
    uVar10 = FUN_00575a10(0,0,(float)param_12,(float)param_13,0,0,fVar20 * (float)uVar6 + fVar29,
                          fVar28 * (float)uVar15 + fVar31,param_2,lVar16,&local_238,local_2e8,
                          *(undefined8 *)(lVar18 + 0xa8),param_7,0);
    if (-1 < (int)uVar10) {
      do {
        lVar16 = param_3;
        param_3 = *(long *)(lVar16 + 0x120);
      } while (param_3 != 0);
      plVar9 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      do {
        lVar16 = param_4;
        param_4 = *(long *)(lVar16 + 0x120);
      } while (param_4 != 0);
      plVar9 = *(long **)(lVar16 + 0xa8);
      (**(code **)(*plVar9 + 0x88))(plVar9,0);
      uVar10 = 0;
    }
  }
  return uVar10;
}


