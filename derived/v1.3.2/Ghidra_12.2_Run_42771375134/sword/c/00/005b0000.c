/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005b0000; name: FUN_005b0000
 */


undefined8
FUN_005b0000(undefined8 param_1,long param_2,uint param_3,uint param_4,float *param_5,uint param_6)

{
  long lVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  dVar4 = DAT_01cd5410;
  dVar3 = DAT_01cd53b0;
  uVar2 = param_3 * 4;
  if ((param_3 != 0) && ((param_6 & 1) != 0)) {
    uVar10 = 0;
    do {
      while( true ) {
        uVar11 = uVar10 & 0xfffffffc;
        uVar5 = *(uint *)(param_2 + uVar11);
        dVar12 = (double)(uVar5 >> 0x10 & 0xff) * dVar4;
        dVar15 = (double)(uVar5 >> 8 & 0xff) * dVar4;
        dVar19 = (double)(uVar5 & 0xff) * dVar4;
        dVar12 = dVar12 * dVar12;
        dVar15 = dVar15 * dVar15;
        dVar19 = dVar19 * dVar19;
        if (((dVar19 <= 0.0) && (dVar12 <= 0.0)) && (dVar15 <= 0.0)) break;
        uVar7 = *(uint *)(param_2 + (ulong)uVar2 + uVar11);
        dVar13 = (double)(uVar7 >> 0x10 & 0xff) * dVar4;
        dVar16 = (double)(uVar7 >> 8 & 0xff) * dVar4;
        dVar17 = (double)(uVar7 & 0xff) * dVar4;
        dVar17 = dVar17 * dVar17;
        dVar12 = dVar12 + dVar13 * dVar13;
        dVar15 = dVar15 + dVar16 * dVar16;
        if (dVar12 <= 0.0) {
LAB_005b01d0:
          if (dVar15 <= 0.0) goto LAB_005b01e4;
LAB_005b00ec:
          dVar16 = (double)(uVar5 >> 0x18);
          dVar13 = SQRT(dVar15);
          if (!NAN(dVar13)) goto joined_r0x005b0100;
          dVar13 = sqrt(dVar15);
          dVar16 = dVar16 * dVar4;
          if (0.0 < dVar19 + dVar17) goto LAB_005b0104;
LAB_005b01f4:
          dVar15 = dVar19 + dVar17;
joined_r0x005b0200:
          if (dVar16 < 1.0) goto LAB_005b011c;
LAB_005b0204:
          *(undefined4 *)(param_2 + uVar11) = 0xff000000;
joined_r0x005b0214:
          fVar18 = (float)(uVar7 >> 0x18);
          if (dVar12 < 1.0) goto LAB_005b0218;
LAB_005b0158:
          uVar5 = 0xff0000;
joined_r0x005b0164:
          dVar12 = (double)fVar18;
          if (dVar13 < 1.0) goto LAB_005b0168;
LAB_005b0238:
          uVar7 = 0xff00;
joined_r0x005b0198:
          dVar12 = dVar12 * dVar4;
          if (1.0 <= dVar15) goto LAB_005b019c;
LAB_005b0248:
          if (0.0 < dVar15) {
            uVar8 = (uint)(dVar15 * dVar3);
            goto joined_r0x005b01a4;
          }
          uVar8 = 0;
          if (dVar12 < 1.0) goto LAB_005b01a8;
LAB_005b0260:
          uVar9 = 0xff000000;
        }
        else {
          dVar13 = SQRT(dVar12);
          if (NAN(dVar13)) {
            dVar12 = sqrt(dVar12);
            goto LAB_005b01d0;
          }
          dVar12 = dVar13;
          if (0.0 < dVar15) goto LAB_005b00ec;
LAB_005b01e4:
          dVar16 = (double)(uVar5 >> 0x18);
          dVar13 = dVar15;
joined_r0x005b0100:
          dVar16 = dVar16 * dVar4;
          if (dVar19 + dVar17 <= 0.0) goto LAB_005b01f4;
LAB_005b0104:
          dVar15 = SQRT(dVar19 + dVar17);
          if (!NAN(dVar15)) goto joined_r0x005b0200;
          dVar15 = sqrt(dVar19 + dVar17);
          if (1.0 <= dVar16) goto LAB_005b0204;
LAB_005b011c:
          if (dVar16 <= 0.0) {
            *(undefined4 *)(param_2 + uVar11) = 0;
            goto joined_r0x005b0214;
          }
          fVar18 = (float)(uVar7 >> 0x18);
          *(int *)(param_2 + uVar11) = (int)(dVar16 * dVar3) << 0x18;
          if (1.0 <= dVar12) goto LAB_005b0158;
LAB_005b0218:
          if (0.0 < dVar12) {
            uVar5 = (int)(dVar12 * dVar3) << 0x10;
            goto joined_r0x005b0164;
          }
          uVar5 = 0;
          dVar12 = (double)fVar18;
          if (1.0 <= dVar13) goto LAB_005b0238;
LAB_005b0168:
          if (dVar13 <= 0.0) {
            uVar7 = 0;
            goto joined_r0x005b0198;
          }
          uVar7 = (int)(dVar13 * dVar3) << 8;
          dVar12 = dVar12 * dVar4;
          if (dVar15 < 1.0) goto LAB_005b0248;
LAB_005b019c:
          uVar8 = 0xff;
joined_r0x005b01a4:
          if (1.0 <= dVar12) goto LAB_005b0260;
LAB_005b01a8:
          if (dVar12 <= 0.0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (int)(dVar12 * dVar3) << 0x18;
          }
        }
        *(uint *)(param_2 + (ulong)uVar2 + uVar11) = uVar7 | uVar5 | uVar8 | uVar9;
        uVar10 = uVar10 + 4;
        if ((ulong)param_3 * 4 == uVar10) goto LAB_005b034c;
      }
      uVar10 = uVar10 + 4;
    } while ((ulong)param_3 * 4 != uVar10);
  }
LAB_005b034c:
  dVar15 = DAT_01cd5410;
  dVar12 = DAT_01cd53b0;
  dVar4 = DAT_01cd51f0;
  dVar3 = DAT_01cd5180;
  if (param_3 != 0) {
    dVar19 = 1.0 / (double)param_4;
    uVar10 = 0;
    do {
      dVar13 = 0.0;
      dVar17 = 0.0;
      dVar16 = 0.0;
      if (param_4 != 0) {
        dVar17 = 0.0;
        dVar13 = 0.0;
        dVar16 = 0.0;
        uVar6 = 0;
        uVar11 = (ulong)param_4;
        do {
          uVar5 = *(uint *)(param_2 + (uVar10 & 0x3fffffff) * 4 + uVar6);
          dVar20 = (double)(uVar5 >> 0x10 & 0xff) * dVar15;
          dVar22 = (double)(uVar5 >> 8 & 0xff) * dVar15;
          dVar23 = (double)(uVar5 & 0xff) * dVar15;
          dVar24 = dVar19 * (double)((float)(uVar11 & 0xffffffff) + -0.5) * dVar4;
          dVar17 = dVar17 + dVar19 * dVar24 * dVar20 * dVar20;
          dVar16 = dVar16 + dVar19 * dVar24 * dVar22 * dVar22;
          dVar13 = dVar13 + dVar19 * dVar24 * dVar23 * dVar23;
          uVar6 = (ulong)((int)uVar6 + uVar2);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (param_4 != 0) {
        fVar18 = *param_5;
        fVar21 = param_5[1];
        lVar1 = param_2 + (uVar10 & 0x3fffffff) * 4;
        dVar13 = (double)param_5[2] / (dVar13 * dVar3);
        uVar6 = 0;
        uVar11 = (ulong)param_4;
        do {
          uVar5 = *(uint *)(lVar1 + uVar6);
          dVar22 = (double)(uVar5 >> 0x10 & 0xff) * dVar15;
          dVar20 = (double)(uVar5 >> 8 & 0xff) * dVar15;
          dVar23 = (double)(uVar5 & 0xff) * dVar15;
          dVar23 = dVar23 * dVar23;
          dVar22 = ((double)fVar18 / (dVar17 * dVar3)) * dVar22 * dVar22;
          dVar24 = ((double)fVar21 / (dVar16 * dVar3)) * dVar20 * dVar20;
          dVar20 = dVar24;
          if (dVar22 <= 0.0) {
LAB_005b05f4:
            if (dVar24 <= 0.0) goto joined_r0x005b0558;
LAB_005b0544:
            dVar20 = SQRT(dVar24);
            if (!NAN(SQRT(dVar24))) goto joined_r0x005b0558;
            dVar20 = sqrt(dVar24);
            if (0.0 < dVar13 * dVar23) goto LAB_005b055c;
LAB_005b0614:
            dVar24 = dVar13 * dVar23;
joined_r0x005b0570:
            fVar14 = (float)(uVar5 >> 0x18);
            if (dVar22 < 1.0) goto LAB_005b0574;
LAB_005b0624:
            uVar5 = 0xff0000;
joined_r0x005b0630:
            dVar22 = (double)fVar14;
            if (dVar20 < 1.0) goto LAB_005b0634;
LAB_005b05ac:
            uVar7 = 0xff00;
joined_r0x005b05b8:
            dVar22 = dVar22 * dVar15;
            if (dVar24 < 1.0) goto LAB_005b05bc;
LAB_005b0658:
            uVar8 = 0xff;
joined_r0x005b05e4:
            if (1.0 <= dVar22) goto LAB_005b05e8;
LAB_005b0664:
            if (dVar22 <= 0.0) {
              uVar9 = 0;
            }
            else {
              uVar9 = (int)(dVar22 * dVar12) << 0x18;
            }
          }
          else {
            dVar25 = SQRT(dVar22);
            if (NAN(dVar25)) {
              dVar22 = sqrt(dVar22);
              goto LAB_005b05f4;
            }
            dVar22 = dVar25;
            if (0.0 < dVar24) goto LAB_005b0544;
joined_r0x005b0558:
            if (dVar13 * dVar23 <= 0.0) goto LAB_005b0614;
LAB_005b055c:
            dVar24 = SQRT(dVar13 * dVar23);
            if (!NAN(dVar24)) goto joined_r0x005b0570;
            dVar24 = sqrt(dVar13 * dVar23);
            fVar14 = (float)(uVar5 >> 0x18);
            if (1.0 <= dVar22) goto LAB_005b0624;
LAB_005b0574:
            if (dVar22 <= 0.0) {
              uVar5 = 0;
              goto joined_r0x005b0630;
            }
            uVar5 = (int)(dVar22 * dVar12) << 0x10;
            dVar22 = (double)fVar14;
            if (1.0 <= dVar20) goto LAB_005b05ac;
LAB_005b0634:
            if (0.0 < dVar20) {
              uVar7 = (int)(dVar20 * dVar12) << 8;
              goto joined_r0x005b05b8;
            }
            uVar7 = 0;
            dVar22 = dVar22 * dVar15;
            if (1.0 <= dVar24) goto LAB_005b0658;
LAB_005b05bc:
            if (dVar24 <= 0.0) {
              uVar8 = 0;
              goto joined_r0x005b05e4;
            }
            uVar8 = (uint)(dVar24 * dVar12);
            if (dVar22 < 1.0) goto LAB_005b0664;
LAB_005b05e8:
            uVar9 = 0xff000000;
          }
          *(uint *)(lVar1 + uVar6) = uVar7 | uVar5 | uVar8 | uVar9;
          uVar6 = (ulong)((int)uVar6 + uVar2);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_3);
  }
  return 0;
}


