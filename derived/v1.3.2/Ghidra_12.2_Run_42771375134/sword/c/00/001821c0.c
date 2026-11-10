/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001821c0; name: FUN_001821c0
 */


byte FUN_001821c0(float param_1,long param_2,long param_3,float *param_4,float *param_5,uint param_6
                 ,uint param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
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
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar9 = *(uint *)(param_2 + 0x1c04);
  uVar7 = *(uint *)(param_2 + 0x1c08);
  if (param_6 < uVar9) {
    fVar16 = param_4[2];
    fVar17 = param_4[3];
    fVar20 = param_5[2];
    fVar21 = param_5[3];
    fVar18 = *param_4;
    fVar19 = param_4[1];
    fVar22 = fVar17 * fVar17 + -0.5;
    fVar23 = fVar21 * fVar21 + -0.5;
    fVar24 = *param_5;
    fVar25 = param_5[1];
    bVar4 = 0;
    uVar8 = (ulong)param_6;
LAB_00182240:
    do {
      pfVar15 = (float *)(param_3 + (ulong)*(ushort *)(param_2 + uVar8 * 0x2c) * 0x40);
      fVar26 = *pfVar15;
      fVar27 = pfVar15[1];
      fVar31 = pfVar15[2];
      uVar5 = (ulong)param_7;
      if (param_7 < uVar7) {
        lVar6 = param_2 + uVar8 * 0x2c;
        uVar5 = (ulong)param_7;
        pfVar14 = (float *)(param_2 + (ulong)param_7 * 0x58 + 0xb0c);
        pfVar15 = (float *)(param_2 + (ulong)param_7 * 0xc + 0x1608);
        do {
          if ((((param_1 <= pfVar15[-2] * fVar26 + pfVar15[-1] * fVar27 + *pfVar15 * fVar31) &&
               (pfVar14[-2] == *(float *)(lVar6 + 0x10))) && (pfVar14[-1] == *(float *)(lVar6 + 8)))
             && (*pfVar14 == *(float *)(lVar6 + 0xc))) break;
          uVar5 = uVar5 + 1;
          pfVar15 = pfVar15 + 3;
          pfVar14 = pfVar14 + 0x16;
        } while (uVar5 < uVar7);
      }
      if ((uint)uVar5 == uVar7) {
        if ((bool)(bVar4 | uVar7 == 0x20)) {
          bVar4 = 1;
          uVar8 = uVar8 + 1;
          if (uVar9 <= uVar8) break;
          goto LAB_00182240;
        }
        fVar29 = fVar27 + fVar27;
        fVar30 = fVar26 + fVar26;
        fVar28 = fVar31 + fVar31;
        fVar33 = fVar30 * fVar24 + fVar29 * fVar25 + fVar28 * fVar20;
        lVar10 = param_2 + uVar8 * 0x2c;
        lVar11 = param_2 + (ulong)uVar7 * 0x58;
        uVar1 = *(undefined4 *)(lVar10 + 0xc);
        uVar2 = *(undefined4 *)(lVar10 + 0x10);
        uVar3 = *(undefined1 *)(lVar10 + 4);
        *(undefined4 *)(lVar11 + 0xb08) = *(undefined4 *)(lVar10 + 8);
        lVar12 = param_2 + (ulong)uVar7 * 0xc;
        *(undefined4 *)(lVar11 + 0xb0c) = uVar1;
        *(undefined4 *)(lVar11 + 0xb04) = uVar2;
        *(undefined1 *)(lVar11 + 0xb01) = uVar3;
        *(undefined2 *)(lVar11 + 0xb02) = 0;
        *(undefined1 *)(lVar11 + 0xb00) = 0;
        lVar6 = param_2 + (ulong)uVar7 * 4;
        lVar13 = param_2 + (ulong)uVar7 * 0x18;
        uVar7 = uVar7 + 1;
        fVar32 = fVar30 * fVar18 + fVar29 * fVar19 + fVar28 * fVar16;
        *(float *)(lVar11 + 0xb10) =
             fVar18 * fVar32 + (fVar30 * fVar22 - fVar17 * (fVar28 * fVar19 - fVar29 * fVar16));
        *(float *)(lVar11 + 0xb14) =
             fVar19 * fVar32 + (fVar29 * fVar22 - fVar17 * (fVar30 * fVar16 - fVar28 * fVar18));
        *(float *)(lVar11 + 0xb18) =
             (fVar28 * fVar22 - fVar17 * (fVar29 * fVar18 - fVar30 * fVar19)) + fVar16 * fVar32;
        *(float *)(lVar11 + 0xb20) =
             fVar25 * fVar33 + (fVar29 * fVar23 - fVar21 * (fVar30 * fVar20 - fVar28 * fVar24));
        *(float *)(lVar11 + 0xb1c) =
             fVar24 * fVar33 + (fVar30 * fVar23 - fVar21 * (fVar28 * fVar25 - fVar29 * fVar20));
        *(float *)(lVar11 + 0xb24) =
             (fVar28 * fVar23 - fVar21 * (fVar29 * fVar24 - fVar30 * fVar25)) + fVar20 * fVar33;
        *(float *)(lVar12 + 0x1600) = fVar26;
        *(float *)(lVar12 + 0x1604) = fVar27;
        *(float *)(lVar12 + 0x1608) = fVar31;
        bVar4 = *(byte *)(lVar10 + 5);
        *(undefined2 *)(lVar6 + 0x1b84) = 0xffff;
        *(uint *)(lVar6 + 0x1a80) = (uint)bVar4;
        *(undefined4 *)(lVar13 + 0x1780) = *(undefined4 *)(lVar10 + 0x14);
        *(undefined4 *)(lVar13 + 0x1784) = *(undefined4 *)(lVar10 + 0x18);
        *(undefined4 *)(lVar13 + 0x1788) = *(undefined4 *)(lVar10 + 0x1c);
        *(undefined4 *)(lVar13 + 0x178c) = *(undefined4 *)(lVar10 + 0x20);
        *(undefined4 *)(lVar13 + 0x1790) = *(undefined4 *)(lVar10 + 0x24);
        lVar11 = param_2 + (uVar5 & 0xffffffff) * 4;
        bVar4 = 0;
        *(undefined4 *)(lVar13 + 0x1794) = *(undefined4 *)(lVar10 + 0x28);
        *(undefined2 *)(lVar6 + 0x1b86) = 0xffff;
        *(undefined2 *)(lVar10 + 2) = 0xffff;
      }
      else {
        lVar6 = param_2 + uVar8 * 0x2c;
        lVar10 = param_2 + (uVar5 & 0xffffffff) * 0x18;
        fVar26 = *(float *)(lVar10 + 0x1780);
        if (*(float *)(lVar6 + 0x14) <= *(float *)(lVar10 + 0x1780)) {
          fVar26 = *(float *)(lVar6 + 0x14);
        }
        fVar27 = *(float *)(lVar10 + 0x1784);
        if (*(float *)(lVar6 + 0x18) <= *(float *)(lVar10 + 0x1784)) {
          fVar27 = *(float *)(lVar6 + 0x18);
        }
        fVar31 = *(float *)(lVar6 + 0x1c);
        *(float *)(lVar10 + 0x1780) = fVar26;
        *(float *)(lVar10 + 0x1784) = fVar27;
        fVar26 = *(float *)(lVar10 + 0x1788);
        if (fVar31 <= *(float *)(lVar10 + 0x1788)) {
          fVar26 = fVar31;
        }
        *(float *)(lVar10 + 0x1788) = fVar26;
        fVar26 = *(float *)(lVar10 + 0x178c);
        if (*(float *)(lVar10 + 0x178c) <= *(float *)(lVar6 + 0x20)) {
          fVar26 = *(float *)(lVar6 + 0x20);
        }
        fVar27 = *(float *)(lVar10 + 0x1790);
        if (*(float *)(lVar10 + 0x1790) <= *(float *)(lVar6 + 0x24)) {
          fVar27 = *(float *)(lVar6 + 0x24);
        }
        fVar31 = *(float *)(lVar6 + 0x28);
        *(float *)(lVar10 + 0x178c) = fVar26;
        *(float *)(lVar10 + 0x1790) = fVar27;
        fVar26 = *(float *)(lVar10 + 0x1794);
        if (*(float *)(lVar10 + 0x1794) <= fVar31) {
          fVar26 = fVar31;
        }
        lVar11 = param_2 + (uVar5 & 0xffffffff) * 4;
        *(float *)(lVar10 + 0x1794) = fVar26;
        *(uint *)(lVar11 + 0x1a80) = *(int *)(lVar11 + 0x1a80) + (uint)*(byte *)(lVar6 + 5);
        *(short *)(lVar6 + 2) = (short)*(undefined4 *)(lVar11 + 0x1b00);
      }
      *(int *)(lVar11 + 0x1b00) = (int)uVar8;
      uVar9 = *(uint *)(param_2 + 0x1c04);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  else {
    bVar4 = 0;
  }
  *(uint *)(param_2 + 0x1c08) = uVar7;
  return bVar4;
}


