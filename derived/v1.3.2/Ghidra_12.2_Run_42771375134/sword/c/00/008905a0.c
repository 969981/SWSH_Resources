/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008905a0; name: FUN_008905a0
 */


/* WARNING: Removing unreachable block (ram,0x008907f0) */
/* WARNING: Removing unreachable block (ram,0x008907fc) */
/* WARNING: Removing unreachable block (ram,0x00890840) */
/* WARNING: Removing unreachable block (ram,0x008907ec) */

void FUN_008905a0(float *param_1,undefined8 *param_2,long param_3,undefined8 param_4,uint *param_5,
                 int *param_6)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulong *__ptr;
  uint uVar8;
  float *pfVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  float *pfVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  float *pfVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  uVar6 = *param_5;
  uVar8 = param_5[1];
  uVar16 = (ulong)uVar8;
  iVar7 = uVar8 * uVar6;
  uVar18 = (ulong)uVar6;
  lVar22 = (long)(int)uVar8;
  iVar13 = (int)param_4;
  if (uVar8 == 1) {
    uVar15 = (long)iVar7 * 8 - 8;
    uVar1 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
    pfVar9 = param_1;
    if ((uVar1 & 3) != 0) {
      lVar17 = -((ulong)uVar1 & 3);
      pfVar14 = param_1;
      do {
        uVar19 = *param_2;
        param_2 = param_2 + param_3 * iVar13;
        lVar17 = lVar17 + 1;
        pfVar9 = pfVar14 + 2;
        *(undefined8 *)pfVar14 = uVar19;
        pfVar14 = pfVar9;
      } while (lVar17 != 0);
    }
    if (0x17 < uVar15) {
      lVar17 = param_3 * iVar13;
      do {
        *(undefined8 *)pfVar9 = *param_2;
        *(undefined8 *)(pfVar9 + 2) = param_2[lVar17];
        *(undefined8 *)(pfVar9 + 4) = param_2[lVar17 * 2];
        *(undefined8 *)(pfVar9 + 6) = param_2[lVar17 * 3];
        pfVar9 = pfVar9 + 8;
        param_2 = param_2 + lVar17 * 4;
      } while (pfVar9 != param_1 + (long)iVar7 * 2);
    }
  }
  else {
    lVar17 = 0;
    do {
      FUN_008905a0((long)param_1 + lVar17,param_2,(int)uVar6 * param_3,param_4,param_5 + 2,param_6);
      lVar17 = lVar17 + lVar22 * 8;
      param_2 = param_2 + param_3 * iVar13;
    } while ((long)iVar7 * 8 != lVar17);
  }
  switch(uVar6) {
  case 2:
    pfVar9 = (float *)(param_6 + 0x43);
    do {
      pfVar14 = param_1 + lVar22 * 2;
      fVar23 = pfVar9[-1] * *pfVar14 - *pfVar9 * pfVar14[1];
      fVar24 = pfVar14[1] * pfVar9[-1] + *pfVar14 * *pfVar9;
      fVar28 = param_1[1];
      *pfVar14 = *param_1 - fVar23;
      pfVar14[1] = fVar28 - fVar24;
      uVar6 = (int)uVar16 - 1;
      uVar16 = (ulong)uVar6;
      pfVar9 = pfVar9 + param_3 * 2;
      *param_1 = *param_1 + fVar23;
      param_1[1] = param_1[1] + fVar24;
      param_1 = param_1 + 2;
    } while (uVar6 != 0);
    break;
  case 3:
    fVar23 = (float)param_6[lVar22 * param_3 * 2 + 0x43];
    pfVar9 = (float *)(param_6 + 0x43);
    param_1 = param_1 + 1;
    lVar17 = -lVar22;
    pfVar14 = pfVar9;
    do {
      pfVar20 = param_1 + lVar22 * 2;
      pfVar2 = param_1 + lVar22 * 4;
      fVar24 = *pfVar20 * pfVar9[-1] + pfVar20[-1] * *pfVar9;
      fVar26 = pfVar9[-1] * pfVar20[-1] - *pfVar9 * *pfVar20;
      fVar27 = pfVar14[-1] * pfVar2[-1] - *pfVar14 * *pfVar2;
      fVar29 = *pfVar2 * pfVar14[-1] + pfVar2[-1] * *pfVar14;
      fVar34 = fVar27 + fVar26;
      fVar28 = fVar29 + fVar24;
      pfVar20[-1] = param_1[-1] - fVar34 * 0.5;
      fVar29 = (fVar24 - fVar29) * fVar23;
      fVar24 = (fVar26 - fVar27) * fVar23;
      *pfVar20 = *param_1 - fVar28 * 0.5;
      param_1[-1] = param_1[-1] + fVar34;
      *param_1 = *param_1 + fVar28;
      pfVar2[-1] = pfVar20[-1] + fVar29;
      *pfVar2 = *pfVar20 - fVar24;
      param_1 = param_1 + 2;
      pfVar14 = pfVar14 + param_3 * 4;
      pfVar9 = pfVar9 + param_3 * 2;
      lVar17 = lVar17 + 1;
      pfVar20[-1] = pfVar20[-1] - fVar29;
      *pfVar20 = *pfVar20 + fVar24;
    } while (lVar17 != 0);
    break;
  case 4:
    pfVar9 = (float *)(param_6 + 0x43);
    param_1 = param_1 + 1;
    lVar17 = -lVar22;
    pfVar20 = pfVar9;
    pfVar14 = pfVar9;
    do {
      pfVar2 = param_1 + lVar22 * 2;
      fVar26 = pfVar9[-1] * pfVar2[-1] - *pfVar9 * *pfVar2;
      fVar27 = *pfVar2 * pfVar9[-1] + pfVar2[-1] * *pfVar9;
      pfVar3 = param_1 + lVar22 * 4;
      pfVar4 = param_1 + lVar22 * 6;
      fVar34 = pfVar20[-1] * pfVar3[-1] - *pfVar20 * *pfVar3;
      fVar28 = *pfVar3 * pfVar20[-1] + pfVar3[-1] * *pfVar20;
      fVar30 = pfVar14[-1] * pfVar4[-1] - *pfVar14 * *pfVar4;
      fVar29 = *pfVar4 * pfVar14[-1] + pfVar4[-1] * *pfVar14;
      fVar23 = *param_1 - fVar28;
      fVar24 = param_1[-1] - fVar34;
      fVar34 = param_1[-1] + fVar34;
      fVar28 = *param_1 + fVar28;
      fVar33 = fVar30 + fVar26;
      fVar26 = fVar26 - fVar30;
      fVar30 = fVar29 + fVar27;
      fVar27 = fVar27 - fVar29;
      param_1[-1] = fVar34;
      *param_1 = fVar28;
      pfVar3[-1] = fVar34 - fVar33;
      *pfVar3 = fVar28 - fVar30;
      param_1[-1] = param_1[-1] + fVar33;
      *param_1 = *param_1 + fVar30;
      if (param_6[1] == 0) {
        fVar28 = fVar23 + fVar26;
        pfVar2[-1] = fVar27 + fVar24;
        param_1[lVar22 * 2] = fVar23 - fVar26;
        pfVar4[-1] = fVar24 - fVar27;
      }
      else {
        pfVar2[-1] = fVar24 - fVar27;
        param_1[lVar22 * 2] = fVar23 + fVar26;
        pfVar4[-1] = fVar27 + fVar24;
        fVar28 = fVar23 - fVar26;
      }
      param_1[lVar22 * 6] = fVar28;
      param_1 = param_1 + 2;
      pfVar14 = pfVar14 + param_3 * 6;
      pfVar20 = pfVar20 + param_3 * 4;
      lVar17 = lVar17 + 1;
      pfVar9 = pfVar9 + param_3 * 2;
    } while (lVar17 != 0);
    break;
  case 5:
    if (0 < (int)uVar8) {
      fVar23 = (float)param_6[lVar22 * param_3 * 2 + 0x42];
      fVar24 = (float)(param_6 + lVar22 * param_3 * 2 + 0x42)[1];
      param_1 = param_1 + 1;
      fVar28 = (float)param_6[lVar22 * param_3 * 4 + 0x42];
      fVar26 = (float)(param_6 + lVar22 * param_3 * 4 + 0x42)[1];
      pfVar9 = (float *)(param_6 + 0x43);
      uVar15 = 0;
      uVar18 = 0;
      pfVar14 = pfVar9;
      do {
        pfVar20 = param_1 + lVar22 * 2;
        pfVar2 = param_1 + lVar22 * 4;
        pfVar3 = param_1 + lVar22 * 8;
        pfVar4 = (float *)((long)param_1 +
                          (-(ulong)(uVar8 * 3 >> 0x1f) & 0xfffffff800000000 |
                          (ulong)(uVar8 * 3) << 3));
        fVar30 = *pfVar2 * pfVar9[-1] + pfVar2[-1] * *pfVar9;
        fVar31 = pfVar14[-1] * pfVar20[-1] - *pfVar14 * *pfVar20;
        fVar32 = *pfVar20 * pfVar14[-1] + pfVar20[-1] * *pfVar14;
        fVar29 = pfVar9[-1] * pfVar2[-1] - *pfVar9 * *pfVar2;
        fVar33 = (float)param_6[(uVar15 & 0xffffffff) * param_3 * 2 + 0x42];
        fVar35 = (float)(param_6 + (uVar15 & 0xffffffff) * param_3 * 2 + 0x42)[1];
        fVar27 = *param_1;
        fVar41 = (float)param_6[(uVar18 & 0xfffffffc) * param_3 * 2 + 0x42];
        fVar43 = (float)(param_6 + (uVar18 & 0xfffffffc) * param_3 * 2 + 0x42)[1];
        pfVar14 = pfVar14 + param_3 * 2;
        fVar34 = fVar33 * pfVar4[-1] - fVar35 * *pfVar4;
        fVar36 = fVar41 * pfVar3[-1] - fVar43 * *pfVar3;
        fVar33 = *pfVar4 * fVar33 + pfVar4[-1] * fVar35;
        fVar41 = *pfVar3 * fVar41 + pfVar3[-1] * fVar43;
        fVar39 = param_1[-1];
        fVar37 = fVar36 + fVar31;
        fVar31 = fVar31 - fVar36;
        fVar35 = fVar29 - fVar34;
        fVar34 = fVar34 + fVar29;
        fVar38 = fVar41 + fVar32;
        fVar32 = fVar32 - fVar41;
        fVar43 = fVar30 - fVar33;
        fVar33 = fVar33 + fVar30;
        fVar40 = fVar39 + fVar28 * fVar34 + fVar23 * fVar37;
        fVar30 = fVar39 + fVar23 * fVar34 + fVar28 * fVar37;
        fVar41 = -(fVar24 * fVar31) - fVar26 * fVar35;
        fVar36 = fVar43 * fVar26 + fVar24 * fVar32;
        fVar42 = fVar27 + fVar28 * fVar33 + fVar23 * fVar38;
        fVar29 = fVar27 + fVar23 * fVar33 + fVar28 * fVar38;
        fVar35 = fVar31 * fVar26 - fVar35 * fVar24;
        fVar31 = fVar43 * fVar24 - fVar32 * fVar26;
        param_1[-1] = fVar34 + fVar39 + fVar37;
        *param_1 = fVar33 + fVar27 + fVar38;
        param_1 = param_1 + 2;
        pfVar20[-1] = fVar40 - fVar36;
        uVar16 = uVar16 - 1;
        uVar18 = uVar18 + 4;
        uVar15 = uVar15 + 3;
        pfVar9 = pfVar9 + param_3 * 4;
        *pfVar20 = fVar42 - fVar41;
        pfVar3[-1] = fVar40 + fVar36;
        *pfVar3 = fVar42 + fVar41;
        pfVar2[-1] = fVar30 + fVar31;
        *pfVar2 = fVar29 + fVar35;
        pfVar4[-1] = fVar30 - fVar31;
        *pfVar4 = fVar29 - fVar35;
      } while (uVar16 != 0);
    }
    break;
  default:
    iVar7 = *param_6;
    __ptr = malloc((long)(int)uVar6 << 3);
    if ((0 < (int)uVar8) && (0 < (int)uVar6)) {
      if (uVar6 == 1) {
        uVar18 = 0;
        do {
          pfVar9 = param_1 + uVar18 * 2;
          lVar17 = -1;
          puVar10 = __ptr;
          do {
            uVar15 = *(ulong *)pfVar9;
            pfVar9 = pfVar9 + lVar22 * 2;
            lVar17 = lVar17 + 1;
            *puVar10 = uVar15;
            puVar10 = puVar10 + 1;
          } while (lVar17 != 0);
          *(ulong *)(param_1 + uVar18 * 2) = *__ptr;
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar16);
      }
      else {
        uVar15 = 0;
        do {
          if (uVar18 - 1 < 3) {
            lVar17 = 0;
            uVar11 = uVar15;
          }
          else {
            lVar17 = 0;
            uVar12 = uVar15;
            puVar10 = __ptr + 2;
            do {
              uVar11 = uVar12 + lVar22 * 4;
              puVar10[-2] = *(ulong *)(param_1 + uVar12 * 2);
              lVar17 = lVar17 + 4;
              puVar10[-1] = *(ulong *)(param_1 + lVar22 * 2 + uVar12 * 2);
              *puVar10 = *(ulong *)(param_1 + lVar22 * 4 + uVar12 * 2);
              puVar10[1] = *(ulong *)(param_1 + lVar22 * 6 + uVar12 * 2);
              puVar10 = puVar10 + 4;
              uVar12 = uVar11;
            } while (uVar18 - (uVar18 & 3) != lVar17);
          }
          if ((uVar6 & 3) != 0) {
            pfVar9 = param_1 + uVar11 * 2;
            puVar10 = __ptr + lVar17;
            lVar17 = -(uVar18 & 3);
            do {
              uVar12 = *(ulong *)pfVar9;
              pfVar9 = pfVar9 + lVar22 * 2;
              lVar17 = lVar17 + 1;
              *puVar10 = uVar12;
              puVar10 = puVar10 + 1;
            } while (lVar17 != 0);
          }
          uVar11 = *__ptr;
          uVar8 = 0;
          uVar12 = uVar15;
          do {
            pfVar14 = param_1 + uVar12 * 2;
            *(ulong *)pfVar14 = uVar11;
            fVar23 = pfVar14[1];
            uVar25 = uVar11 & 0xffffffff;
            iVar13 = 0;
            pfVar9 = (float *)((long)__ptr + 0xc);
            uVar21 = uVar18 - 1;
            do {
              iVar13 = iVar13 + (int)uVar12 * (int)param_3;
              iVar5 = 0;
              if (iVar7 <= iVar13) {
                iVar5 = iVar7;
              }
              pfVar20 = pfVar9 + -1;
              fVar28 = *pfVar9;
              uVar21 = uVar21 - 1;
              pfVar9 = pfVar9 + 2;
              iVar13 = iVar13 - iVar5;
              fVar24 = ((float)uVar25 + *pfVar20 * (float)param_6[(long)iVar13 * 2 + 0x42]) -
                       fVar28 * (float)param_6[(long)iVar13 * 2 + 0x43];
              uVar25 = (ulong)(uint)fVar24;
              fVar23 = fVar23 + (float)param_6[(long)iVar13 * 2 + 0x42] * fVar28 +
                       *pfVar20 * (float)param_6[(long)iVar13 * 2 + 0x43];
              *pfVar14 = fVar24;
              pfVar14[1] = fVar23;
            } while (uVar21 != 0);
            uVar8 = uVar8 + 1;
            uVar12 = uVar12 + lVar22;
          } while (uVar8 != uVar6);
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar16);
      }
    }
    free(__ptr);
    return;
  }
  return;
}


