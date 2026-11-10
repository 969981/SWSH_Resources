/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00181a60; name: FUN_00181a60
 */


undefined8
FUN_00181a60(float param_1,long param_2,char *param_3,int param_4,float *param_5,float *param_6)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  fVar2 = DAT_01d4c5a4;
  if ((param_3 != (char *)0x0) && (param_4 != 0)) {
    bVar3 = false;
    pfVar8 = (float *)(param_3 + 0x48);
    do {
      while( true ) {
        Hint_Prefetch(param_3 + 0x80,0,0,0);
        if (((*param_3 == '\0') && (*(short *)(param_3 + 2) != 0)) &&
           (((byte)param_3[1] >> 1 & 1) == 0)) break;
joined_r0x00181f34:
        pfVar8 = pfVar8 + 0x16;
        param_4 = param_4 + -1;
        param_3 = param_3 + 0x58;
        if (param_4 == 0) {
          return 1;
        }
      }
      if (!bVar3) {
        fVar10 = *param_5;
        fVar9 = param_5[1];
        fVar20 = *param_6;
        fVar21 = param_6[1];
        fVar15 = param_6[2];
        fVar16 = param_6[3];
        fVar12 = (param_6[5] - param_5[5]) + (param_6[5] - param_5[5]);
        fVar18 = param_5[2];
        fVar19 = param_5[3];
        fVar11 = (param_6[4] - param_5[4]) + (param_6[4] - param_5[4]);
        fVar13 = (param_6[6] - param_5[6]) + (param_6[6] - param_5[6]);
        unaff_s11 = ((fVar19 * fVar20 - fVar16 * fVar10) - fVar15 * fVar9) + fVar21 * fVar18;
        fVar17 = fVar19 * fVar19 + -0.5;
        fVar14 = (fVar11 * -fVar10 - fVar12 * fVar9) - fVar13 * fVar18;
        unaff_s12 = (fVar17 * fVar11 + fVar19 * (fVar12 * fVar18 - fVar13 * fVar9)) -
                    fVar14 * fVar10;
        unaff_s13 = (fVar17 * fVar12 + fVar19 * (fVar13 * fVar10 - fVar11 * fVar18)) -
                    fVar14 * fVar9;
        unaff_s14 = (fVar17 * fVar13 + fVar19 * (fVar11 * fVar9 - fVar12 * fVar10)) -
                    fVar14 * fVar18;
        unaff_s15 = ((fVar19 * fVar21 - fVar16 * fVar9) - fVar20 * fVar18) + fVar15 * fVar10;
        unaff_s9 = ((fVar19 * fVar15 - fVar16 * fVar18) - fVar21 * fVar10) + fVar20 * fVar9;
        unaff_s10 = fVar19 * fVar16 + fVar20 * fVar10 + fVar21 * fVar9 + fVar15 * fVar18;
      }
      fVar12 = *(float *)(param_3 + 0x20) + *(float *)(param_3 + 0x20);
      fVar9 = *(float *)(param_3 + 0x18);
      fVar10 = *(float *)(param_3 + 0x1c) + *(float *)(param_3 + 0x1c);
      fVar14 = *(float *)(param_3 + 0x24) + *(float *)(param_3 + 0x24);
      fVar16 = unaff_s10 * unaff_s10 + -0.5;
      fVar15 = unaff_s11 * fVar10 + unaff_s15 * fVar12 + unaff_s9 * fVar14;
      fVar13 = *(float *)(param_3 + 0x10);
      fVar11 = *(float *)(param_3 + 0x14);
      if (fVar2 < fVar9 * (fVar16 * fVar14 + unaff_s10 * (unaff_s11 * fVar12 - unaff_s15 * fVar10) +
                          unaff_s9 * fVar15) +
                  fVar13 * (unaff_s11 * fVar15 +
                           fVar16 * fVar10 + unaff_s10 * (unaff_s15 * fVar14 - unaff_s9 * fVar12)) +
                  fVar11 * (unaff_s15 * fVar15 +
                           fVar16 * fVar12 + unaff_s10 * (unaff_s9 * fVar10 - unaff_s11 * fVar14)))
      {
        uVar7 = 1;
        pfVar6 = pfVar8;
        while( true ) {
          fVar12 = pfVar6[-1] + pfVar6[-1];
          fVar10 = pfVar6[-2] + pfVar6[-2];
          fVar14 = *pfVar6 + *pfVar6;
          fVar15 = unaff_s11 * fVar10 + unaff_s15 * fVar12 + unaff_s9 * fVar14;
          fVar9 = fabsf(fVar9 * (pfVar6[-6] -
                                (unaff_s14 +
                                fVar16 * fVar14 +
                                unaff_s10 * (unaff_s11 * fVar12 - unaff_s15 * fVar10) +
                                unaff_s9 * fVar15)) +
                        fVar13 * (pfVar6[-8] -
                                 (unaff_s12 +
                                 unaff_s11 * fVar15 +
                                 fVar16 * fVar10 +
                                 unaff_s10 * (unaff_s15 * fVar14 - unaff_s9 * fVar12))) +
                        fVar11 * (pfVar6[-7] -
                                 (unaff_s13 +
                                 unaff_s15 * fVar15 +
                                 fVar16 * fVar12 +
                                 unaff_s10 * (unaff_s9 * fVar10 - unaff_s11 * fVar14))));
          if (param_1 <= fVar9) break;
          if (*(ushort *)(param_3 + 2) <= uVar7) {
            uVar1 = *(uint *)(param_2 + 0x1c08);
            if (uVar1 == 0x20) {
              return 0;
            }
            lVar5 = param_2 + (ulong)uVar1 * 4;
            *(undefined4 *)(lVar5 + 0x1b84) = 0xffffffff;
            fVar15 = *param_5;
            fVar16 = param_5[1];
            fVar10 = *(float *)(param_3 + 0x14) + *(float *)(param_3 + 0x14);
            fVar12 = param_5[2];
            fVar13 = param_5[3];
            fVar9 = *(float *)(param_3 + 0x10) + *(float *)(param_3 + 0x10);
            fVar11 = *(float *)(param_3 + 0x18) + *(float *)(param_3 + 0x18);
            fVar17 = fVar9 * fVar15 + fVar10 * fVar16 + fVar11 * fVar12;
            fVar14 = fVar13 * fVar13 + -0.5;
            lVar4 = param_2 + (ulong)uVar1 * 0xc;
            *(float *)(lVar4 + 0x1600) =
                 fVar15 * fVar17 + fVar9 * fVar14 + fVar13 * (fVar11 * fVar16 - fVar10 * fVar12);
            *(float *)(lVar4 + 0x1604) =
                 fVar16 * fVar17 + fVar10 * fVar14 + fVar13 * (fVar9 * fVar12 - fVar11 * fVar15);
            *(float *)(lVar4 + 0x1608) =
                 fVar11 * fVar14 + fVar13 * (fVar10 * fVar15 - fVar9 * fVar16) + fVar12 * fVar17;
            *(undefined4 *)(lVar5 + 0x1a80) = 0;
            uVar1 = *(uint *)(param_2 + 0x1c08);
            lVar5 = param_2 + (ulong)uVar1 * 0x18;
            *(undefined8 *)(lVar5 + 0x1780) = 0x7e7fffff7e7fffff;
            *(undefined8 *)(lVar5 + 0x1788) = 0xfe7fffff7e7fffff;
            *(undefined8 *)(lVar5 + 0x1790) = 0xfe7ffffffe7fffff;
            *(undefined4 *)(param_2 + (ulong)uVar1 * 4 + 0x1b00) = 0xffff;
            uVar1 = *(uint *)(param_2 + 0x1c08);
            *(uint *)(param_2 + 0x1c08) = uVar1 + 1;
            memcpy((void *)(param_2 + (ulong)uVar1 * 0x58 + 0xb00),param_3,0x58);
            break;
          }
          fVar13 = *(float *)(param_3 + 0x10);
          fVar11 = *(float *)(param_3 + 0x14);
          fVar9 = *(float *)(param_3 + 0x18);
          uVar7 = uVar7 + 1;
          pfVar6 = pfVar6 + 3;
        }
        bVar3 = true;
        goto joined_r0x00181f34;
      }
      bVar3 = true;
      param_4 = param_4 + -1;
      pfVar8 = pfVar8 + 0x16;
      param_3 = param_3 + 0x58;
    } while (param_4 != 0);
  }
  return 1;
}


