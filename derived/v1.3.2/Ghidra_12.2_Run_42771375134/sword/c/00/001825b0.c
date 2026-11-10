/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001825b0; name: FUN_001825b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001825b0(float param_1,float param_2,long param_3,long param_4,float *param_5,
                 float *param_6,uint param_7)

{
  ushort *puVar1;
  float *pfVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  undefined2 uVar8;
  ulong uVar9;
  float *pfVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
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
  float in_s22;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float local_44;
  
  uVar5 = *(uint *)(param_3 + 0x1c08);
  if (param_7 < uVar5) {
    fVar18 = param_5[2];
    fVar19 = param_5[3];
    fVar20 = *param_5;
    fVar21 = param_5[1];
    lVar13 = param_3 + (ulong)param_7 * 0x58;
    uVar12 = (ulong)param_7;
    fVar22 = fVar19 * fVar19 + -0.5;
    fVar23 = param_6[2];
    fVar24 = param_6[3];
    fVar25 = fVar24 * fVar24 + -0.5;
    fVar26 = *param_6;
    fVar27 = param_6[1];
    do {
      lVar15 = param_3 + uVar12 * 0x58;
      uVar7 = *(ushort *)(lVar15 + 0xb02);
      uVar9 = (ulong)uVar7;
      puVar1 = (ushort *)(lVar15 + 0xb02);
      if ((uVar7 == 2) || (*(int *)(param_3 + uVar12 * 4 + 0x1b00) == 0xffff)) {
        if (*(int *)(param_3 + uVar12 * 4 + 0x1a80) != 0) {
          lVar15 = param_3 + uVar12 * 0x18;
          fVar28 = *(float *)(lVar15 + 0x178c) - *(float *)(lVar15 + 0x1780);
          fVar29 = *(float *)(lVar15 + 0x1790) - *(float *)(lVar15 + 0x1784);
          lVar16 = param_3 + uVar12 * 0x58;
          fVar30 = *(float *)(lVar15 + 0x1794) - *(float *)(lVar15 + 0x1788);
          in_s22 = fVar28 * fVar28 + fVar29 * fVar29 + fVar30 * fVar30;
          fVar28 = *(float *)(lVar16 + 0xb28) - *(float *)(lVar16 + 0xb34);
          fVar29 = *(float *)(lVar16 + 0xb2c) - *(float *)(lVar16 + 0xb38);
          fVar30 = *(float *)(lVar16 + 0xb30) - *(float *)(lVar16 + 0xb3c);
          if ((fVar28 * fVar28 + fVar29 * fVar29 + fVar30 * fVar30) * 4.0 < in_s22) {
            uVar9 = 0;
            *puVar1 = 0;
            goto LAB_001829c8;
          }
        }
      }
      else {
        if (uVar7 == 1) {
          lVar15 = param_3 + uVar12 * 0x58;
          uVar14 = 1;
          fVar28 = *(float *)(lVar15 + 0xb28) + *(float *)(lVar15 + 0xb28);
          fVar29 = *(float *)(lVar15 + 0xb2c) + *(float *)(lVar15 + 0xb2c);
          fVar30 = *(float *)(lVar15 + 0xb30) + *(float *)(lVar15 + 0xb30);
          fVar32 = fVar28 * fVar20 + fVar29 * fVar21 + fVar30 * fVar18;
          in_s22 = param_5[4] +
                   fVar20 * fVar32 + fVar28 * fVar22 + fVar19 * (fVar30 * fVar21 - fVar29 * fVar18);
          uVar9 = 1;
          local_58 = in_s22;
          local_54 = param_5[5] +
                     fVar21 * fVar32 +
                     fVar29 * fVar22 + fVar19 * (fVar28 * fVar18 - fVar30 * fVar20);
          local_50 = param_5[6] +
                     fVar30 * fVar22 + fVar19 * (fVar29 * fVar20 - fVar28 * fVar21) +
                     fVar18 * fVar32;
          lVar15 = param_3 + uVar12 * 4;
          uVar11 = *(uint *)(lVar15 + 0x1b00);
          if (uVar11 != 0xffff) goto LAB_001827b0;
LAB_001829d8:
          if ((uint)uVar9 < uVar14) goto LAB_001829e0;
        }
        else {
LAB_001829c8:
          uVar14 = 0;
          lVar15 = param_3 + uVar12 * 4;
          uVar11 = *(uint *)(lVar15 + 0x1b00);
          if (uVar11 == 0xffff) goto LAB_001829d8;
LAB_001827b0:
          fVar28 = 0.0;
          fVar29 = in_s22;
          do {
            bVar6 = *(byte *)(param_3 + (ulong)uVar11 * 0x2c + 5);
            if (bVar6 != 0) {
              uVar9 = 0;
LAB_001827e0:
              do {
                while( true ) {
                  lVar16 = *(ushort *)(param_3 + (ulong)uVar11 * 0x2c) + uVar9;
                  lVar3 = param_4 + lVar16 * 0x40;
                  iVar17 = (int)uVar9;
                  if (*(float *)(lVar3 + 0xc) < param_2) break;
joined_r0x00182920:
                  uVar4 = iVar17 + 1U & 0xffff;
                  uVar9 = (ulong)uVar4;
                  if (bVar6 <= uVar4) goto LAB_0018299c;
                }
                pfVar10 = (float *)(lVar3 + 0x10);
                uVar8 = (undefined2)lVar16;
                if (uVar14 != 1) {
                  if (uVar14 == 0) {
                    *(undefined2 *)(lVar15 + 0x1b84) = uVar8;
                    in_s22 = *pfVar10;
                    local_58 = in_s22;
                    local_54 = *(float *)(lVar3 + 0x14);
                    uVar14 = 1;
                    local_50 = *(float *)(lVar3 + 0x18);
                    fVar29 = in_s22;
                    goto joined_r0x00182920;
                  }
                  local_58 = *pfVar10;
                  fVar32 = *(float *)(lVar3 + 0x14);
                  fVar30 = *(float *)(lVar3 + 0x18);
                  fVar31 = (local_58 - in_s22) * (local_58 - in_s22) +
                           (fVar32 - local_54) * (fVar32 - local_54) +
                           (fVar30 - local_50) * (fVar30 - local_50);
                  fVar33 = (local_58 - local_4c) * (local_58 - local_4c) +
                           (fVar32 - fStack_48) * (fVar32 - fStack_48) +
                           (fVar30 - local_44) * (fVar30 - local_44);
                  fVar29 = in_s22;
                  if (fVar33 < fVar31) {
                    if (fVar28 < fVar31) {
                      *(undefined2 *)(lVar15 + 0x1b86) = uVar8;
                      local_4c = local_58;
                      fStack_48 = fVar32;
                      local_44 = fVar30;
                      fVar28 = fVar31;
                      goto joined_r0x00182920;
                    }
                  }
                  else if (fVar28 < fVar33) {
                    *(undefined2 *)(lVar15 + 0x1b84) = uVar8;
                    local_54 = fVar32;
                    local_50 = fVar30;
                    fVar28 = fVar33;
                    fVar29 = local_58;
                    in_s22 = local_58;
                  }
joined_r0x00182898:
                  uVar4 = iVar17 + 1U & 0xffff;
                  uVar9 = (ulong)uVar4;
                  if (bVar6 <= uVar4) break;
                  goto LAB_001827e0;
                }
                fVar32 = *pfVar10;
                fVar31 = *(float *)(lVar3 + 0x14);
                fVar33 = *(float *)(lVar3 + 0x18);
                fVar28 = fVar33 - local_50;
                fVar30 = fVar32 - fVar29;
                fVar34 = fVar31 - local_54;
                fVar28 = fVar30 * fVar30 + fVar34 * fVar34 + fVar28 * fVar28;
                if (param_1 * param_1 < fVar28) {
                  *(undefined2 *)(lVar15 + 0x1b86) = uVar8;
                  uVar14 = 2;
                  local_4c = fVar32;
                  fStack_48 = fVar31;
                  local_44 = fVar33;
                  goto joined_r0x00182898;
                }
                uVar14 = 1;
                uVar4 = iVar17 + 1U & 0xffff;
                uVar9 = (ulong)uVar4;
              } while (uVar4 < bVar6);
            }
LAB_0018299c:
            uVar11 = (uint)*(ushort *)(param_3 + (ulong)uVar11 * 0x2c + 2);
          } while (uVar11 != 0xffff);
          uVar9 = (ulong)*puVar1;
          if (*puVar1 < uVar14) {
LAB_001829e0:
            lVar16 = uVar14 - uVar9;
            pfVar10 = &local_58;
            lVar15 = lVar13;
            do {
              pfVar2 = pfVar10 + uVar9 * 3;
              pfVar10 = pfVar10 + 3;
              fVar28 = *pfVar2;
              fVar29 = pfVar2[1];
              fVar32 = pfVar2[2];
              fVar31 = fVar29 - param_5[5];
              fVar30 = fVar28 - param_5[4];
              fVar33 = fVar32 - param_5[6];
              fVar31 = fVar31 + fVar31;
              fVar33 = fVar33 + fVar33;
              fVar30 = fVar30 + fVar30;
              fVar34 = fVar30 * fVar20 + fVar31 * fVar21 + fVar33 * fVar18;
              lVar3 = uVar9 * 0xc + lVar15;
              *(float *)(lVar3 + 0xb28) =
                   fVar20 * fVar34 +
                   (fVar30 * fVar22 - fVar19 * (fVar33 * fVar21 - fVar31 * fVar18));
              lVar15 = lVar15 + 0xc;
              *(float *)(lVar3 + 0xb2c) =
                   fVar21 * fVar34 +
                   (fVar31 * fVar22 - fVar19 * (fVar30 * fVar18 - fVar33 * fVar20));
              *(float *)(lVar3 + 0xb30) =
                   (fVar33 * fVar22 - fVar19 * (fVar31 * fVar20 - fVar30 * fVar21)) +
                   fVar18 * fVar34;
              fVar29 = fVar29 - param_6[5];
              fVar28 = fVar28 - param_6[4];
              fVar29 = fVar29 + fVar29;
              fVar32 = fVar32 - param_6[6];
              fVar28 = fVar28 + fVar28;
              fVar32 = fVar32 + fVar32;
              fVar30 = fVar28 * fVar26 + fVar29 * fVar27 + fVar32 * fVar23;
              *(float *)(lVar3 + 0xb40) =
                   fVar26 * fVar30 +
                   (fVar28 * fVar25 - fVar24 * (fVar32 * fVar27 - fVar29 * fVar23));
              in_s22 = (fVar32 * fVar25 - fVar24 * (fVar29 * fVar26 - fVar28 * fVar27)) +
                       fVar23 * fVar30;
              lVar16 = lVar16 + -1;
              *(float *)(lVar3 + 0xb44) =
                   fVar27 * fVar30 +
                   (fVar29 * fVar25 - fVar24 * (fVar28 * fVar23 - fVar32 * fVar26));
              *(float *)(lVar3 + 0xb48) = in_s22;
            } while (lVar16 != 0);
          }
        }
        if (uVar14 == 0) {
          lVar15 = param_3 + uVar12 * 0x58;
          *(undefined8 *)(lVar15 + 0xb40) = 0;
          *(undefined4 *)(lVar15 + 0xb48) = 0;
          *(undefined8 *)(lVar15 + 0xb28) = 0;
          *(undefined4 *)(lVar15 + 0xb30) = 0;
        }
        *puVar1 = (ushort)uVar14;
      }
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x58;
    } while (uVar12 < uVar5);
  }
  return;
}


