/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005818d0; name: FUN_005818d0
 */


ulong FUN_005818d0(long param_1,long param_2,long param_3,float *param_4,float *param_5)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_648 [2];
  undefined8 local_640 [121];
  undefined1 auStack_278 [488];
  
  fVar9 = param_5[2];
  uVar18 = *(undefined4 *)(param_2 + 0x54);
  uVar19 = *(undefined4 *)(param_2 + 0x58);
  fVar21 = *(float *)(param_2 + 0x88);
  fVar15 = *(float *)(param_2 + 0x8c);
  fVar16 = *(float *)(param_2 + 0x90);
  fVar17 = *(float *)(param_2 + 0x94);
  fVar20 = *param_5;
  fVar22 = param_5[1];
  fVar10 = param_5[3];
  uVar11 = *(undefined4 *)(param_3 + 0x54);
  uVar12 = *(undefined4 *)(param_3 + 0x58);
  uVar3 = FUN_0059d300(param_3,0,0,1,0,0);
  if (-1 < (int)uVar3) {
    fVar14 = (float)NEON_ucvtf(uVar19);
    fVar13 = (float)NEON_ucvtf(uVar18);
    fVar14 = fVar15 * fVar14 + fVar17;
    fVar13 = fVar21 * fVar13 + fVar16;
    fVar15 = fVar14 * fVar22 - (fVar15 * 0.0 + fVar17);
    fVar9 = fVar13 * fVar9;
    uVar18 = NEON_ucvtf(uVar11);
    fVar14 = fVar14 * fVar10;
    fVar10 = fVar13 * fVar20 - (fVar21 * 0.0 + fVar16);
    uVar11 = NEON_ucvtf(uVar12);
    FUN_0059d000(0,0);
    lVar5 = param_2;
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x120);
    } while (lVar5 != 0);
    uVar12 = (**(code **)(**(long **)(lVar7 + 0xa8) + 0x80))();
    lVar5 = param_2;
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x120);
    } while (lVar5 != 0);
    plVar4 = *(long **)(lVar7 + 0xa8);
    (**(code **)(*plVar4 + 0x88))(plVar4,0);
    uVar2 = FUN_00515420(0x3f800000,3,auStack_278);
    uVar3 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      pfVar6 = (float *)((ulong)auStack_278 | 4);
      do {
        fVar16 = pfVar6[-1] * pfVar6[-1] + *pfVar6 * *pfVar6;
        bVar1 = true;
        if ((fVar16 != 0.0) && (bVar1 = false, !NAN(fVar16))) {
          bVar1 = fVar16 == 1.0;
        }
        if (bVar1) {
          bVar1 = true;
          if ((fVar16 != 0.0) && (bVar1 = false, !NAN(fVar16))) {
            bVar1 = fVar16 == 1.0;
          }
          fVar17 = fVar16;
          if (bVar1) goto LAB_00581ab8;
LAB_00581a60:
          fVar20 = SQRT(fVar16);
          if (NAN(fVar20)) {
            fVar20 = sqrtf(fVar16);
          }
          fVar16 = pfVar6[-1] * (1.0 / fVar20);
          fVar20 = (1.0 / fVar20) * *pfVar6;
        }
        else {
          fVar17 = SQRT(fVar16);
          if (NAN(fVar17)) {
            fVar17 = sqrtf(fVar16);
          }
          fVar16 = pfVar6[-1] * pfVar6[-1] + *pfVar6 * *pfVar6;
          bVar1 = true;
          if ((fVar16 != 0.0) && (bVar1 = false, !NAN(fVar16))) {
            bVar1 = fVar16 == 1.0;
          }
          if (!bVar1) goto LAB_00581a60;
LAB_00581ab8:
          fVar16 = pfVar6[-1];
          fVar20 = *pfVar6;
        }
        pfVar6[-1] = fVar17 * fVar16;
        *pfVar6 = fVar17 * fVar20;
        uVar3 = uVar3 - 1;
        pfVar6 = pfVar6 + 2;
      } while (uVar3 != 0);
    }
    fVar17 = *param_4;
    fVar16 = param_4[1];
    if (0 < (int)uVar2) {
      uVar3 = (ulong)uVar2;
      pfVar6 = (float *)((ulong)auStack_278 | 4);
      puVar8 = local_640;
      do {
        fVar20 = pfVar6[-1];
        fVar21 = *pfVar6;
        pfVar6 = pfVar6 + 2;
        *puVar8 = 0;
        *(float *)((long)puVar8 + -4) = fVar15 * fVar16 * fVar21;
        *(float *)(puVar8 + -1) = fVar10 * fVar17 * fVar20;
        puVar8 = puVar8 + 2;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    fVar10 = fVar10 + fVar9;
    lVar5 = param_2;
    do {
      lVar7 = lVar5;
      lVar5 = *(long *)(lVar7 + 0x120);
    } while (lVar5 != 0);
    fVar15 = fVar15 + fVar14;
    lVar5 = *(long *)(lVar7 + 0xa8);
    if ((fVar17 == 0.0) && (fVar16 == 0.0)) {
      uVar2 = FUN_00575a10(0,0,uVar18,uVar11,fVar9,fVar14,fVar10,fVar15,param_1,1,local_648,0,lVar5,
                           0,0);
    }
    else {
      (**(code **)(**(long **)(param_1 + 0x30) + 0xe8))
                (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x1b360));
      FUN_00573990(param_1,0x25,local_648,0,8);
      if (lVar5 != 0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 0xd0))
                  (*(long **)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38),lVar5);
      }
      uVar2 = FUN_00571d00(0,0,uVar18,uVar11,fVar9,fVar14,fVar10,fVar15,param_1,0);
    }
    do {
      lVar5 = param_2;
      param_2 = *(long *)(lVar5 + 0x120);
    } while (param_2 != 0);
    plVar4 = *(long **)(lVar5 + 0xa8);
    (**(code **)(*plVar4 + 0x78))(plVar4,uVar12);
    uVar3 = (ulong)(uVar2 & (int)uVar2 >> 0x1f);
  }
  return uVar3;
}


