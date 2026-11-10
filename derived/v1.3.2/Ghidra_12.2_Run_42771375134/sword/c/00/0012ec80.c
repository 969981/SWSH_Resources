/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0012ec80; name: FUN_0012ec80
 */


void FUN_0012ec80(uint *param_1,long param_2,long param_3,long param_4,long param_5,uint param_6,
                 uint param_7,long param_8,long param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  
  if (param_7 != 0 && param_6 != 0) {
    uVar14 = 0;
    uVar12 = 0;
    do {
      uVar1 = *(uint *)(param_8 + uVar14 * 4);
      uVar13 = uVar12;
      do {
        uVar12 = uVar13;
        fVar15 = *(float *)(param_3 + uVar12 * 0x18);
        uVar13 = (ulong)((uint)uVar12 + 1);
      } while (fVar15 < *(float *)(param_2 + uVar14 * 0x18));
      fVar16 = *(float *)(param_2 + uVar14 * 0x18 + 0xc);
      if (fVar15 <= fVar16) {
        lVar6 = param_2 + uVar14 * 0x18;
        uVar2 = *(uint *)(param_4 + (ulong)uVar1 * 4);
        uVar13 = uVar12;
        do {
          uVar3 = *(uint *)(param_9 + uVar13 * 4);
          uVar4 = *(uint *)(param_4 + (ulong)uVar3 * 4);
          if (((((uVar2 != uVar4) &&
                (*(char *)(param_5 + (ulong)((uVar2 & 3) << 2 | uVar4 & 3)) != '\0')) &&
               (*(float *)(lVar6 + 4) <= *(float *)(param_3 + uVar13 * 0x18 + 0x10))) &&
              ((*(float *)(param_3 + uVar13 * 0x18 + 4) <= *(float *)(lVar6 + 0x10) &&
               (*(float *)(lVar6 + 8) <= *(float *)(param_3 + uVar13 * 0x18 + 0x14))))) &&
             (*(float *)(param_3 + uVar13 * 0x18 + 8) <= *(float *)(lVar6 + 0x14))) {
            uVar4 = uVar1;
            if (uVar1 <= uVar3) {
              uVar4 = uVar3;
              uVar3 = uVar1;
            }
            uVar8 = uVar3 & 0xffff | uVar4 << 0x10;
            uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff);
            uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
            uVar8 = uVar8 ^ uVar8 >> 6;
            uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
            uVar5 = (ulong)(param_1[1] & (uVar8 ^ uVar8 >> 0x10));
            lVar7 = *(long *)(param_1 + 4);
            if ((lVar7 != 0) && (uVar8 = *(uint *)(lVar7 + uVar5 * 4), uVar8 != 0xffffffff)) {
              do {
                uVar9 = (ulong)uVar8;
                if ((*(uint *)(*(long *)(param_1 + 8) + uVar9 * 8) & 0x7fffffff) == uVar3) {
                  puVar11 = (uint *)(*(long *)(param_1 + 8) + uVar9 * 8 + 4);
                  uVar8 = *puVar11;
                  if ((uVar8 & 0x7fffffff) == uVar4) {
                    *puVar11 = uVar8 | 0x80000000;
                    goto LAB_0012eef4;
                  }
                }
                uVar8 = *(uint *)(*(long *)(param_1 + 6) + uVar9 * 4);
              } while (uVar8 != 0xffffffff);
            }
            uVar8 = param_1[2];
            if (*param_1 <= uVar8) {
              uVar5 = FUN_00133ef0(param_1);
              uVar8 = param_1[2];
              lVar7 = *(long *)(param_1 + 4);
            }
            param_1[2] = uVar8 + 1;
            puVar11 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar8 * 8);
            lVar10 = (uVar5 & 0xffffffff) * 4;
            *puVar11 = uVar3 | 0x80000000;
            puVar11[1] = uVar4;
            *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)uVar8 * 4) =
                 *(undefined4 *)(lVar7 + lVar10);
            *(uint *)(lVar7 + lVar10) = uVar8;
          }
LAB_0012eef4:
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (*(float *)(param_3 + uVar13 * 0x18) <= fVar16);
      }
    } while (((uint)uVar12 < param_7) && (uVar14 = uVar14 + 1, uVar14 < param_6));
    uVar14 = 0;
    uVar12 = 0;
    do {
      uVar1 = *(uint *)(param_9 + uVar14 * 4);
      uVar13 = uVar12;
      do {
        uVar12 = uVar13;
        fVar15 = *(float *)(param_2 + uVar12 * 0x18);
        uVar13 = (ulong)((uint)uVar12 + 1);
      } while (fVar15 <= *(float *)(param_3 + uVar14 * 0x18));
      fVar16 = *(float *)(param_3 + uVar14 * 0x18 + 0xc);
      if (fVar15 <= fVar16) {
        lVar6 = param_3 + uVar14 * 0x18;
        uVar2 = *(uint *)(param_4 + (ulong)uVar1 * 4);
        uVar13 = uVar12;
        do {
          uVar3 = *(uint *)(param_8 + uVar13 * 4);
          uVar4 = *(uint *)(param_4 + (ulong)uVar3 * 4);
          if ((((uVar2 != uVar4) &&
               (*(char *)(param_5 + (ulong)((uVar2 & 3) << 2 | uVar4 & 3)) != '\0')) &&
              (*(float *)(param_2 + uVar13 * 0x18 + 4) <= *(float *)(lVar6 + 0x10))) &&
             (((*(float *)(lVar6 + 4) <= *(float *)(param_2 + uVar13 * 0x18 + 0x10) &&
               (*(float *)(param_2 + uVar13 * 0x18 + 8) <= *(float *)(lVar6 + 0x14))) &&
              (*(float *)(lVar6 + 8) <= *(float *)(param_2 + uVar13 * 0x18 + 0x14))))) {
            uVar4 = uVar1;
            if (uVar1 <= uVar3) {
              uVar4 = uVar3;
              uVar3 = uVar1;
            }
            uVar8 = uVar3 & 0xffff | uVar4 << 0x10;
            uVar8 = uVar8 + (uVar8 << 0xf ^ 0xffffffff);
            uVar8 = (uVar8 ^ uVar8 >> 10) * 9;
            uVar8 = uVar8 ^ uVar8 >> 6;
            uVar8 = uVar8 + (uVar8 << 0xb ^ 0xffffffff);
            uVar5 = (ulong)(param_1[1] & (uVar8 ^ uVar8 >> 0x10));
            lVar7 = *(long *)(param_1 + 4);
            if ((lVar7 != 0) && (uVar8 = *(uint *)(lVar7 + uVar5 * 4), uVar8 != 0xffffffff)) {
              do {
                uVar9 = (ulong)uVar8;
                if ((*(uint *)(*(long *)(param_1 + 8) + uVar9 * 8) & 0x7fffffff) == uVar3) {
                  puVar11 = (uint *)(*(long *)(param_1 + 8) + uVar9 * 8 + 4);
                  uVar8 = *puVar11;
                  if ((uVar8 & 0x7fffffff) == uVar4) {
                    *puVar11 = uVar8 | 0x80000000;
                    goto LAB_0012f120;
                  }
                }
                uVar8 = *(uint *)(*(long *)(param_1 + 6) + uVar9 * 4);
              } while (uVar8 != 0xffffffff);
            }
            uVar8 = param_1[2];
            if (*param_1 <= uVar8) {
              uVar5 = FUN_00133ef0(param_1);
              uVar8 = param_1[2];
              lVar7 = *(long *)(param_1 + 4);
            }
            puVar11 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar8 * 8);
            lVar10 = (uVar5 & 0xffffffff) * 4;
            param_1[2] = uVar8 + 1;
            *puVar11 = uVar3 | 0x80000000;
            puVar11[1] = uVar4;
            *(undefined4 *)(*(long *)(param_1 + 6) + (ulong)uVar8 * 4) =
                 *(undefined4 *)(lVar7 + lVar10);
            *(uint *)(lVar7 + lVar10) = uVar8;
          }
LAB_0012f120:
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (*(float *)(param_2 + uVar13 * 0x18) <= fVar16);
      }
    } while (((uint)uVar12 < param_6) && (uVar14 = uVar14 + 1, uVar14 < param_7));
  }
  return;
}


