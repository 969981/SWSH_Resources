/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00590f20; name: FUN_00590f20
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00590f20(float param_1,float param_2,float param_3,long param_4,long param_5,long param_6,
                  long param_7,ulong param_8,float *param_9,ulong param_10,undefined4 param_11,
                  float *param_12,long param_13,undefined8 param_14,byte param_15,uint param_16,
                  uint param_17)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
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
  float fVar28;
  float fVar29;
  float fVar30;
  float local_340 [2];
  undefined8 local_338 [29];
  float afStack_24c [15];
  float local_210 [60];
  undefined8 auStack_120 [16];
  
  if (*(long **)(param_4 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  iVar2 = (int)param_8;
  if ((param_15 & 1) != 0) {
    (**(code **)(**(long **)(param_4 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_4 + 0x20) + 0x140))(*(long **)(param_4 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_4 + 0x20) + 0x150))(*(long **)(param_4 + 0x20),0);
  }
  if (param_2 <= 0.0) {
    param_2 = (float)iVar2;
  }
  pfVar17 = (float *)&UNK_01d6cac4;
  if (param_9 != (float *)0x0) {
    pfVar17 = param_9;
  }
  fVar18 = cosf(param_1);
  fVar19 = sinf(param_1);
  if (0 < iVar2) {
    iVar7 = iVar2;
    if (-1 < iVar2 + -1) {
      iVar7 = iVar2 + -1;
    }
    iVar7 = -(iVar7 >> 1);
    uVar9 = param_8 & 0xffffffff;
    puVar13 = auStack_120;
    do {
      fVar25 = (float)iVar7;
      iVar7 = iVar7 + 1;
      fVar25 = (param_2 / (float)iVar2) * fVar25;
      uVar9 = uVar9 - 1;
      *puVar13 = CONCAT44(fVar18 * 0.0 + fVar19 * fVar25,fVar18 * fVar25 - fVar19 * 0.0);
      puVar13 = puVar13 + 1;
    } while (uVar9 != 0);
  }
  if (((param_10 & 1) != 0) && (0 < iVar2)) {
    uVar9 = param_8 & 3;
    if ((param_8 & 0xffffffff) - 1 < 3) {
      fVar18 = 0.0;
      lVar10 = 0;
    }
    else {
      fVar18 = 0.0;
      lVar10 = 0;
      pfVar15 = pfVar17 + 2;
      do {
        lVar10 = lVar10 + 4;
        fVar18 = fVar18 + pfVar15[-2] + pfVar15[-1] + *pfVar15 + pfVar15[1];
        pfVar15 = pfVar15 + 4;
      } while ((param_8 & 0xffffffff) - uVar9 != lVar10);
    }
    if (uVar9 != 0) {
      lVar12 = -uVar9;
      pfVar15 = pfVar17 + lVar10;
      do {
        fVar18 = fVar18 + *pfVar15;
        lVar12 = lVar12 + 1;
        pfVar15 = pfVar15 + 1;
      } while (lVar12 != 0);
    }
    if (fVar18 != 0.0) {
      fVar18 = 1.0 / fVar18;
      goto joined_r0x00591120;
    }
  }
  fVar18 = 1.0;
joined_r0x00591120:
  uVar8 = param_16;
  if (param_16 == 0) {
    uVar8 = *(uint *)(param_5 + 0x54);
  }
  if (param_17 == 0) {
    fVar19 = *(float *)(param_5 + 0x88);
    fVar25 = *(float *)(param_5 + 0x8c);
    fVar29 = *(float *)(param_5 + 0x90);
    fVar28 = *(float *)(param_5 + 0x94);
    uVar3 = *(uint *)(param_5 + 0x58);
  }
  else {
    fVar19 = *(float *)(param_5 + 0x88);
    fVar25 = *(float *)(param_5 + 0x8c);
    fVar29 = *(float *)(param_5 + 0x90);
    fVar28 = *(float *)(param_5 + 0x94);
    uVar3 = param_17;
  }
  uVar5 = param_16;
  if (param_16 == 0) {
    uVar5 = *(uint *)(param_6 + 0x54);
  }
  uVar4 = param_17;
  if (param_17 == 0) {
    uVar4 = *(uint *)(param_6 + 0x58);
  }
  if (NAN(SQRT(param_3))) {
    param_3 = sqrtf(param_3);
    fVar22 = *param_12;
  }
  else {
    param_3 = SQRT(param_3);
    fVar22 = *param_12;
  }
  if (((fVar22 == 1.0) && (param_12[1] == 1.0)) && (param_12[2] == 1.0)) {
    bVar6 = param_12[3] != 1.0;
  }
  else {
    bVar6 = true;
  }
  fVar18 = fVar18 * param_3;
  if (0 < iVar2) {
    uVar9 = param_8 & 0xffffffff;
    if (bVar6) {
      puVar13 = local_338;
      pfVar15 = (float *)((ulong)auStack_120 | 4);
      pfVar14 = local_210 + 2;
      pfVar16 = pfVar17;
      do {
        fVar22 = *pfVar16;
        *puVar13 = 0;
        fVar22 = fVar18 * fVar22;
        pfVar14[-2] = fVar22;
        pfVar14[-1] = fVar22;
        uVar9 = uVar9 - 1;
        *pfVar14 = fVar22;
        pfVar14[1] = fVar22;
        pfVar1 = pfVar15 + -1;
        fVar22 = *pfVar15;
        pfVar15 = pfVar15 + 2;
        *(float *)(puVar13 + -1) = fVar19 * *pfVar1;
        *(float *)((long)puVar13 + -4) = fVar25 * fVar22;
        puVar13 = puVar13 + 2;
        pfVar14 = pfVar14 + 4;
        pfVar16 = pfVar16 + 1;
      } while (uVar9 != 0);
    }
    else {
      puVar13 = local_338;
      pfVar15 = (float *)((ulong)auStack_120 | 4);
      pfVar14 = afStack_24c;
      pfVar16 = pfVar17;
      do {
        fVar22 = *pfVar16;
        *puVar13 = 0;
        fVar30 = pfVar15[-1];
        fVar20 = *pfVar15;
        uVar9 = uVar9 - 1;
        pfVar15 = pfVar15 + 2;
        *pfVar14 = fVar18 * fVar22;
        *(float *)(puVar13 + -1) = fVar19 * fVar30;
        *(float *)((long)puVar13 + -4) = fVar25 * fVar20;
        puVar13 = puVar13 + 2;
        pfVar14 = pfVar14 + 1;
        pfVar16 = pfVar16 + 1;
      } while (uVar9 != 0);
    }
  }
  uVar9 = FUN_0059d300(param_6,0,0,1,0,0);
  if ((int)uVar9 < 0) {
    return uVar9;
  }
  fVar29 = fVar19 * (float)uVar8 + fVar29;
  fVar28 = fVar25 * (float)uVar3 + fVar28;
  fVar30 = (float)uVar5;
  fVar22 = (float)uVar4;
  FUN_0059d000(0,0);
  if (param_13 == 0) {
    if (bVar6) {
      do {
        lVar10 = param_5;
        param_5 = *(long *)(lVar10 + 0x120);
      } while (param_5 != 0);
      uVar9 = FUN_00575a10(0,0,fVar30,fVar22,0,0,fVar29,fVar28,param_4,param_8 & 0xffffffff,
                           local_340,local_210,*(undefined8 *)(lVar10 + 0xa8),0,0);
      iVar7 = (int)uVar9;
    }
    else {
      do {
        lVar10 = param_5;
        param_5 = *(long *)(lVar10 + 0x120);
      } while (param_5 != 0);
      uVar9 = FUN_00575e30(0,0,fVar30,fVar22,0,0,fVar29,fVar28,param_4,param_8 & 0xffffffff,
                           local_340,afStack_24c,*(undefined8 *)(lVar10 + 0xa8),0,0);
      iVar7 = (int)uVar9;
    }
  }
  else {
    do {
      lVar10 = param_5;
      param_5 = *(long *)(lVar10 + 0x120);
    } while (param_5 != 0);
    lVar12 = param_13;
    do {
      lVar11 = lVar12;
      lVar12 = *(long *)(lVar11 + 0x120);
    } while (lVar12 != 0);
    uVar9 = FUN_00576340(0,0,fVar30,fVar22,0,0,fVar29,fVar28,param_4,param_8 & 0xffffffff,local_340,
                         local_210,param_14,*(undefined8 *)(lVar10 + 0xa8),
                         *(undefined8 *)(lVar11 + 0xa8),0,0);
    iVar7 = (int)uVar9;
  }
  if (iVar7 < 0) {
    return uVar9;
  }
  uVar8 = param_16;
  if (param_16 == 0) {
    uVar8 = *(uint *)(param_6 + 0x54);
  }
  if (param_17 == 0) {
    fVar29 = *(float *)(param_6 + 0x88);
    fVar28 = *(float *)(param_6 + 0x8c);
    fVar22 = *(float *)(param_6 + 0x90);
    fVar30 = *(float *)(param_6 + 0x94);
    uVar3 = *(uint *)(param_6 + 0x58);
  }
  else {
    fVar29 = *(float *)(param_6 + 0x88);
    fVar28 = *(float *)(param_6 + 0x8c);
    fVar22 = *(float *)(param_6 + 0x90);
    fVar30 = *(float *)(param_6 + 0x94);
    uVar3 = param_17;
  }
  if (param_16 == 0) {
    param_16 = *(uint *)(param_7 + 0x54);
  }
  if (param_17 == 0) {
    param_17 = *(uint *)(param_7 + 0x58);
  }
  if (0 < iVar2) {
    uVar9 = param_8 & 0xffffffff;
    if (bVar6) {
      fVar20 = *param_12;
      fVar21 = param_12[1];
      fVar23 = param_12[2];
      fVar24 = param_12[3];
      puVar13 = local_338;
      pfVar15 = (float *)((ulong)auStack_120 | 4);
      pfVar14 = local_210 + 2;
      do {
        fVar26 = *pfVar17;
        *puVar13 = 0;
        fVar27 = pfVar15[-1];
        fVar26 = fVar18 * fVar26;
        *(float *)(puVar13 + -1) = -(fVar19 * *pfVar15);
        *(float *)((long)puVar13 + -4) = fVar25 * fVar27;
        uVar9 = uVar9 - 1;
        pfVar14[-2] = fVar26 * fVar20;
        pfVar14[-1] = fVar26 * fVar21;
        *pfVar14 = fVar26 * fVar23;
        pfVar14[1] = fVar26 * fVar24;
        puVar13 = puVar13 + 2;
        pfVar15 = pfVar15 + 2;
        pfVar14 = pfVar14 + 4;
        pfVar17 = pfVar17 + 1;
      } while (uVar9 != 0);
    }
    else {
      pfVar15 = (float *)((ulong)auStack_120 | 4);
      puVar13 = local_338;
      pfVar14 = afStack_24c;
      do {
        fVar20 = *pfVar17;
        *puVar13 = 0;
        fVar23 = pfVar15[-1];
        fVar21 = *pfVar15;
        uVar9 = uVar9 - 1;
        pfVar15 = pfVar15 + 2;
        *pfVar14 = fVar18 * fVar20;
        *(float *)(puVar13 + -1) = -(fVar19 * fVar21);
        *(float *)((long)puVar13 + -4) = fVar25 * fVar23;
        puVar13 = puVar13 + 2;
        pfVar14 = pfVar14 + 1;
        pfVar17 = pfVar17 + 1;
      } while (uVar9 != 0);
    }
  }
  uVar9 = FUN_0059d300(param_7,0,0,1,0,0);
  if (-1 < (int)uVar9) {
    fVar18 = (float)param_16;
    fVar19 = (float)param_17;
    if (param_13 == 0) {
      if (bVar6) {
        do {
          lVar10 = param_6;
          param_6 = *(long *)(lVar10 + 0x120);
        } while (param_6 != 0);
        uVar8 = FUN_00575a10(0,0,fVar18,fVar19,0,0,param_4,param_8 & 0xffffffff,local_340,local_210,
                             *(undefined8 *)(lVar10 + 0xa8),param_11,0);
      }
      else {
        do {
          lVar10 = param_6;
          param_6 = *(long *)(lVar10 + 0x120);
        } while (param_6 != 0);
        uVar8 = FUN_00575e30(0,0,fVar18,fVar19,0,0,fVar29 * (float)uVar8 + fVar22,
                             fVar28 * (float)uVar3 + fVar30,param_4,param_8 & 0xffffffff,local_340,
                             afStack_24c,*(undefined8 *)(lVar10 + 0xa8),param_11,0);
      }
    }
    else {
      do {
        lVar10 = param_6;
        param_6 = *(long *)(lVar10 + 0x120);
      } while (param_6 != 0);
      do {
        lVar12 = param_13;
        param_13 = *(long *)(lVar12 + 0x120);
      } while (param_13 != 0);
      uVar8 = FUN_00576340(0,0,fVar18,fVar19,0,0,param_4,param_8 & 0xffffffff,local_340,local_210,
                           param_14,*(undefined8 *)(lVar10 + 0xa8),*(undefined8 *)(lVar12 + 0xa8),
                           param_11,0);
    }
    uVar9 = (ulong)(uVar8 & (int)uVar8 >> 0x1f);
  }
  return uVar9;
}


