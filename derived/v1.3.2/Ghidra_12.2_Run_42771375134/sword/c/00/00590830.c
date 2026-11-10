/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00590830; name: FUN_00590830
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00590830(float param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                  undefined *param_7,ulong param_8,undefined4 param_9,float *param_10,byte param_11,
                  uint param_12,uint param_13)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  float *pfVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_330;
  undefined1 local_32c [4];
  undefined8 uStack_328;
  float local_23c [15];
  float local_200 [60];
  float local_110 [15];
  float local_d4 [17];
  
  if (*(long **)(param_2 + 0x20) == (long *)0x0) {
    return 0xffffffff;
  }
  if ((param_11 & 1) != 0) {
    (**(code **)(**(long **)(param_2 + 0x20) + 0x138))();
    (**(code **)(**(long **)(param_2 + 0x20) + 0x140))(*(long **)(param_2 + 0x20),0xffffffff);
    (**(code **)(**(long **)(param_2 + 0x20) + 0x150))(*(long **)(param_2 + 0x20),0);
  }
  puVar2 = &UNK_01d6cac4;
  if (param_7 != (undefined *)0x0) {
    puVar2 = param_7;
  }
  iVar1 = param_6 + 2;
  if (-1 < (int)(param_6 + 1)) {
    iVar1 = param_6 + 1;
  }
  iVar1 = iVar1 >> 1;
  if (0 < (int)param_6) {
    lVar12 = 0;
    lVar13 = 0;
    if ((param_6 & 1) == 0) {
      pfVar11 = local_d4;
      pfVar14 = local_110;
      do {
        fVar15 = (float)(int)lVar12 - (float)(param_6 >> 1);
        FUN_00512320(fVar15,fVar15 + 1.0,*(undefined4 *)(puVar2 + lVar12 * 4),
                     *(undefined4 *)((long)(puVar2 + lVar12 * 4) + 4),pfVar11,pfVar14);
        lVar13 = lVar13 + 1;
        pfVar11 = pfVar11 + 1;
        pfVar14 = pfVar14 + 1;
        lVar12 = lVar12 + 2;
      } while (lVar13 < iVar1);
    }
    else {
      pfVar11 = local_110;
      pfVar14 = local_d4;
      do {
        fVar15 = (float)(int)lVar12 - (float)(param_6 >> 1);
        if (lVar13 < iVar1 + -1) {
          FUN_00512320(fVar15,fVar15 + 1.0,*(undefined4 *)(puVar2 + lVar12 * 4),
                       *(undefined4 *)((long)(puVar2 + lVar12 * 4) + 4),pfVar14,pfVar11);
        }
        else {
          *pfVar14 = fVar15;
          *pfVar11 = *(float *)(puVar2 + lVar12 * 4) * 0.5;
        }
        lVar13 = lVar13 + 1;
        lVar12 = lVar12 + 2;
        pfVar11 = pfVar11 + 1;
        pfVar14 = pfVar14 + 1;
      } while (lVar13 < iVar1);
    }
  }
  if ((param_8 & 1) == 0) {
    fVar15 = 1.0;
  }
  else {
    if ((int)param_6 < 1) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = 0.0;
      lVar13 = 0;
      do {
        pfVar11 = local_110 + lVar13;
        lVar13 = lVar13 + 1;
        fVar15 = fVar15 + *pfVar11;
      } while (lVar13 < iVar1);
    }
    fVar15 = 1.0 / fVar15;
  }
  uVar8 = param_12;
  if (param_12 == 0) {
    uVar8 = *(uint *)(param_3 + 0x54);
  }
  if (param_13 == 0) {
    fVar23 = *(float *)(param_3 + 0x88);
    fVar24 = *(float *)(param_3 + 0x8c);
    fVar25 = *(float *)(param_3 + 0x90);
    fVar22 = *(float *)(param_3 + 0x94);
    uVar3 = *(uint *)(param_3 + 0x58);
  }
  else {
    fVar23 = *(float *)(param_3 + 0x88);
    fVar24 = *(float *)(param_3 + 0x8c);
    fVar25 = *(float *)(param_3 + 0x90);
    fVar22 = *(float *)(param_3 + 0x94);
    uVar3 = param_13;
  }
  uVar5 = param_12;
  if (param_12 == 0) {
    uVar5 = *(uint *)(param_4 + 0x54);
  }
  uVar4 = param_13;
  if (param_13 == 0) {
    uVar4 = *(uint *)(param_4 + 0x58);
  }
  if (NAN(SQRT(param_1))) {
    param_1 = sqrtf(param_1);
    fVar17 = *param_10;
  }
  else {
    param_1 = SQRT(param_1);
    fVar17 = *param_10;
  }
  if (((fVar17 == 1.0) && (param_10[1] == 1.0)) && (param_10[2] == 1.0)) {
    bVar6 = param_10[3] != 1.0;
  }
  else {
    bVar6 = true;
  }
  fVar15 = fVar15 * param_1;
  if (0 < (int)param_6) {
    if (bVar6) {
      puVar10 = &uStack_328;
      pfVar11 = local_200 + 2;
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        fVar17 = fVar15 * local_110[lVar13];
        pfVar11[-2] = fVar17;
        pfVar11[-1] = fVar17;
        *pfVar11 = fVar17;
        pfVar11[1] = fVar17;
        fVar17 = local_d4[lVar13];
        *(undefined8 *)((long)puVar10 + -4) = 0;
        *(undefined4 *)((long)puVar10 + 4) = 0;
        *(float *)(puVar10 + -1) = fVar23 * fVar17;
        puVar10 = puVar10 + 2;
        pfVar11 = pfVar11 + 4;
        lVar13 = lVar12;
      } while (lVar12 < iVar1);
    }
    else {
      puVar10 = &uStack_328;
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        fVar16 = local_d4[lVar13];
        fVar17 = local_110[lVar13];
        *(undefined8 *)((long)puVar10 + -4) = 0;
        *(undefined4 *)((long)puVar10 + 4) = 0;
        *(float *)(puVar10 + -1) = fVar23 * fVar16;
        puVar10 = puVar10 + 2;
        local_23c[lVar13] = fVar15 * fVar17;
        lVar13 = lVar12;
      } while (lVar12 < iVar1);
    }
  }
  uVar9 = FUN_0059d300(param_4,0,0,1,0,0);
  if ((int)uVar9 < 0) {
    return uVar9;
  }
  fVar25 = fVar23 * (float)uVar8 + fVar25;
  fVar22 = fVar24 * (float)uVar3 + fVar22;
  FUN_0059d000(0,0);
  if (bVar6) {
    lVar13 = param_3;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    uVar9 = FUN_00575a10(0,0,(float)uVar5,(float)uVar4,0,0,fVar25,fVar22,param_2,iVar1,&local_330,
                         local_200,*(undefined8 *)(lVar12 + 0xa8),param_9,0);
    iVar7 = (int)uVar9;
  }
  else {
    lVar13 = param_3;
    do {
      lVar12 = lVar13;
      lVar13 = *(long *)(lVar12 + 0x120);
    } while (lVar13 != 0);
    uVar9 = FUN_00575e30(0,0,(float)uVar5,(float)uVar4,0,0,fVar25,fVar22,param_2,iVar1,&local_330,
                         local_23c,*(undefined8 *)(lVar12 + 0xa8),param_9,0);
    iVar7 = (int)uVar9;
  }
  if (iVar7 < 0) {
    return uVar9;
  }
  uVar8 = param_12;
  if (param_12 == 0) {
    uVar8 = *(uint *)(param_4 + 0x54);
  }
  if (param_13 == 0) {
    fVar23 = *(float *)(param_4 + 0x88);
    fVar24 = *(float *)(param_4 + 0x8c);
    fVar25 = *(float *)(param_4 + 0x90);
    fVar22 = *(float *)(param_4 + 0x94);
    uVar3 = *(uint *)(param_4 + 0x58);
  }
  else {
    fVar23 = *(float *)(param_4 + 0x88);
    fVar24 = *(float *)(param_4 + 0x8c);
    fVar25 = *(float *)(param_4 + 0x90);
    fVar22 = *(float *)(param_4 + 0x94);
    uVar3 = param_13;
  }
  if (param_12 == 0) {
    param_12 = *(uint *)(param_5 + 0x54);
  }
  if (param_13 == 0) {
    param_13 = *(uint *)(param_5 + 0x58);
  }
  if (0 < (int)param_6) {
    fVar17 = *(float *)(param_3 + 0x8c);
    if (bVar6) {
      fVar16 = *param_10;
      fVar18 = param_10[1];
      fVar19 = param_10[2];
      fVar20 = param_10[3];
      puVar10 = &uStack_328;
      lVar13 = 0;
      pfVar11 = local_200 + 2;
      do {
        lVar12 = lVar13 + 1;
        fVar21 = fVar15 * local_110[lVar13];
        *(float *)((long)puVar10 + -4) = fVar17 * local_d4[lVar13];
        *(undefined4 *)(puVar10 + -1) = 0;
        *puVar10 = 0;
        puVar10 = puVar10 + 2;
        pfVar11[-2] = fVar21 * fVar16;
        pfVar11[-1] = fVar21 * fVar18;
        *pfVar11 = fVar21 * fVar19;
        pfVar11[1] = fVar21 * fVar20;
        lVar13 = lVar12;
        pfVar11 = pfVar11 + 4;
      } while (lVar12 < iVar1);
    }
    else {
      puVar10 = &uStack_328;
      lVar13 = 0;
      do {
        lVar12 = lVar13 + 1;
        fVar18 = local_d4[lVar13];
        fVar16 = local_110[lVar13];
        *(undefined4 *)(puVar10 + -1) = 0;
        *puVar10 = 0;
        *(float *)((long)puVar10 + -4) = fVar17 * fVar18;
        puVar10 = puVar10 + 2;
        local_23c[lVar13] = fVar15 * fVar16;
        lVar13 = lVar12;
      } while (lVar12 < iVar1);
    }
  }
  uVar9 = FUN_0059d300(param_5,0,0,1,0,0);
  if (-1 < (int)uVar9) {
    if (bVar6) {
      do {
        lVar13 = param_4;
        param_4 = *(long *)(lVar13 + 0x120);
      } while (param_4 != 0);
      uVar8 = FUN_00575a10(0,0,(float)param_12,(float)param_13,0,0,param_2,iVar1,&local_330,
                           local_200,*(undefined8 *)(lVar13 + 0xa8),param_9,0);
    }
    else {
      do {
        lVar13 = param_4;
        param_4 = *(long *)(lVar13 + 0x120);
      } while (param_4 != 0);
      uVar8 = FUN_00575e30(0,0,(float)param_12,(float)param_13,0,0,fVar23 * (float)uVar8 + fVar25,
                           fVar24 * (float)uVar3 + fVar22,param_2,iVar1,&local_330,local_23c,
                           *(undefined8 *)(lVar13 + 0xa8),param_9,0);
    }
    uVar9 = (ulong)(uVar8 & (int)uVar8 >> 0x1f);
  }
  return uVar9;
}


