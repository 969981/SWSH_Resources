/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0039c580; name: FUN_0039c580
 */


undefined8
FUN_0039c580(undefined8 param_1,long param_2,long param_3,long *param_4,undefined8 *param_5,
            undefined8 *param_6)

{
  uint uVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  undefined8 uVar12;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  ulong uVar28;
  float fVar29;
  float fVar30;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [12];
  float fVar35;
  undefined1 auVar32 [16];
  long local_870 [256];
  undefined1 auStack_64 [4];
  
  lVar7 = param_4[2];
  uVar6 = 1;
  local_870[0] = lVar7;
  do {
    uVar6 = uVar6 - 1;
    pfVar2 = (float *)local_870[uVar6];
    uVar21 = param_5[0xd];
    uVar20 = param_5[0xc];
    uVar19 = param_5[0xf];
    uVar18 = param_5[0xe];
    fVar29 = (float)*(undefined8 *)pfVar2;
    fVar11 = pfVar2[3] - fVar29;
    fVar25 = (float)((ulong)*(undefined8 *)pfVar2 >> 0x20);
    fVar13 = pfVar2[4] - fVar25;
    fVar14 = pfVar2[5] - (float)*(undefined8 *)(pfVar2 + 2);
    uVar23 = param_5[1];
    uVar22 = *param_5;
    auVar10 = *(undefined1 (*) [16])(param_5 + 2);
    auVar31._0_4_ = (fVar29 + pfVar2[3]) * 0.5;
    auVar31._4_4_ = (fVar25 + pfVar2[4]) * 0.5;
    auVar31._8_4_ = ((float)*(undefined8 *)(pfVar2 + 2) + pfVar2[5]) * 0.5;
    uVar9 = param_5[5];
    uVar8 = param_5[4];
    uVar26 = param_5[7];
    uVar24 = param_5[6];
    uVar15 = param_5[9];
    uVar12 = param_5[8];
    uVar17 = param_5[0xb];
    uVar16 = param_5[10];
    while( true ) {
      fVar11 = fVar11 * 0.5 + (float)uVar24;
      fVar13 = fVar13 * 0.5 + (float)((ulong)uVar24 >> 0x20);
      fVar14 = fVar14 * 0.5 + (float)uVar26;
      fVar29 = (float)((ulong)uVar26 >> 0x20) + 0.0;
      fVar25 = auVar31._0_4_;
      fVar27 = auVar31._4_4_;
      fVar34 = auVar31._8_4_;
      fVar30 = (float)uVar22 - fVar25;
      fVar33 = (float)((ulong)uVar22 >> 0x20) - fVar27;
      fVar35 = (float)uVar23 - fVar34;
      uVar28 = CONCAT26(-(ushort)(0.0 - fVar29 <= (float)((ulong)uVar19 >> 0x20)),
                        CONCAT24(-(ushort)(fVar34 - fVar14 <= (float)uVar19),
                                 CONCAT22(-(ushort)(fVar27 - fVar13 <=
                                                   (float)((ulong)uVar18 >> 0x20)),
                                          -(ushort)(fVar25 - fVar11 <= (float)uVar18)))) &
               CONCAT26(-(ushort)((float)((ulong)uVar21 >> 0x20) <= fVar29 + 0.0),
                        CONCAT24(-(ushort)((float)uVar21 <= fVar34 + fVar14),
                                 CONCAT22(-(ushort)((float)((ulong)uVar20 >> 0x20) <=
                                                   fVar27 + fVar13),
                                          -(ushort)((float)uVar20 <= fVar25 + fVar11)))) &
               CONCAT26(-(ushort)(ABS(auVar10._12_4_ * 0.0 -
                                      (float)((ulong)uVar9 >> 0x20) *
                                      ((float)((ulong)uVar23 >> 0x20) - 0.0)) <=
                                 fVar29 * (float)((ulong)uVar17 >> 0x20) +
                                 (float)((ulong)uVar15 >> 0x20) * 0.0),
                        CONCAT24(-(ushort)(ABS(auVar10._8_4_ * fVar30 - (float)uVar9 * fVar35) <=
                                          fVar14 * (float)uVar17 + (float)uVar15 * fVar11),
                                 CONCAT22(-(ushort)(ABS(auVar10._4_4_ * fVar35 -
                                                        (float)((ulong)uVar8 >> 0x20) * fVar33) <=
                                                   fVar13 * (float)((ulong)uVar16 >> 0x20) +
                                                   (float)((ulong)uVar12 >> 0x20) * fVar14),
                                          -(ushort)(ABS(auVar10._0_4_ * fVar33 -
                                                        (float)uVar8 * fVar30) <=
                                                   fVar11 * (float)uVar16 + (float)uVar12 * fVar13))
                                ));
      auVar32._0_4_ = (int)((uint)(ushort)uVar28 << 0x1f) >> 0x1f;
      auVar32._4_4_ = (int)((uint)(ushort)(uVar28 >> 0x10) << 0x1f) >> 0x1f;
      auVar32._8_4_ = (int)((uint)(ushort)(uVar28 >> 0x20) << 0x1f) >> 0x1f;
      auVar32._12_4_ = (int)((uint)(ushort)(uVar28 >> 0x30) << 0x1f) >> 0x1f;
      NEON_ext(auVar32,auVar32,8,1);
      if (CONCAT13((char)(uVar28 >> 0x30),
                   CONCAT12((char)(uVar28 >> 0x20),CONCAT11((char)(uVar28 >> 0x10),(char)uVar28)))
          != -1) break;
      fVar11 = pfVar2[6];
      if (((uint)fVar11 & 1) != 0) {
        uVar1 = (uint)fVar11 >> 1 & 0xf;
        if (uVar1 != 0) {
          puVar4 = (uint *)(*param_4 + (ulong)((uint)fVar11 >> 5) * 4);
          if (uVar1 == 1) {
            uVar28 = (**(code **)*param_6)(param_6,auStack_64,param_2 + (ulong)*puVar4 * 0x10);
            if ((uVar28 & 1) == 0) {
              return 0;
            }
          }
          else {
            iVar5 = -uVar1;
            while( true ) {
              iVar5 = iVar5 + 1;
              puVar3 = (undefined8 *)(param_3 + (ulong)*puVar4 * 0x18);
              fVar11 = (float)*puVar3;
              fVar13 = (float)((ulong)*puVar3 >> 0x20);
              fVar33 = (fVar11 + *(float *)((long)puVar3 + 0xc)) * 0.5;
              fVar34 = (fVar13 + *(float *)(puVar3 + 2)) * 0.5;
              fVar35 = ((float)puVar3[1] + *(float *)((long)puVar3 + 0x14)) * 0.5;
              fVar29 = (float)uVar24 + (*(float *)((long)puVar3 + 0xc) - fVar11) * 0.5;
              fVar25 = (float)((ulong)uVar24 >> 0x20) + (*(float *)(puVar3 + 2) - fVar13) * 0.5;
              fVar30 = (float)uVar26 + (*(float *)((long)puVar3 + 0x14) - (float)puVar3[1]) * 0.5;
              fVar27 = (float)((ulong)uVar26 >> 0x20) + 0.0;
              fVar11 = (float)uVar22 - fVar33;
              fVar13 = (float)((ulong)uVar22 >> 0x20) - fVar34;
              fVar14 = (float)uVar23 - fVar35;
              uVar28 = CONCAT26(-(ushort)(0.0 - fVar27 <= (float)((ulong)uVar19 >> 0x20)),
                                CONCAT24(-(ushort)(fVar35 - fVar30 <= (float)uVar19),
                                         CONCAT22(-(ushort)(fVar34 - fVar25 <=
                                                           (float)((ulong)uVar18 >> 0x20)),
                                                  -(ushort)(fVar33 - fVar29 <= (float)uVar18)))) &
                       CONCAT26(-(ushort)((float)((ulong)uVar21 >> 0x20) <= fVar27 + 0.0),
                                CONCAT24(-(ushort)((float)uVar21 <= fVar35 + fVar30),
                                         CONCAT22(-(ushort)((float)((ulong)uVar20 >> 0x20) <=
                                                           fVar34 + fVar25),
                                                  -(ushort)((float)uVar20 <= fVar33 + fVar29)))) &
                       CONCAT26(-(ushort)(ABS(auVar10._12_4_ * 0.0 -
                                              (float)((ulong)uVar9 >> 0x20) *
                                              ((float)((ulong)uVar23 >> 0x20) - 0.0)) <=
                                         fVar27 * (float)((ulong)uVar17 >> 0x20) +
                                         (float)((ulong)uVar15 >> 0x20) * 0.0),
                                CONCAT24(-(ushort)(ABS(auVar10._8_4_ * fVar11 -
                                                       (float)uVar9 * fVar14) <=
                                                  fVar30 * (float)uVar17 + (float)uVar15 * fVar29),
                                         CONCAT22(-(ushort)(ABS(auVar10._4_4_ * fVar14 -
                                                                (float)((ulong)uVar8 >> 0x20) *
                                                                fVar13) <=
                                                           fVar25 * (float)((ulong)uVar16 >> 0x20) +
                                                           (float)((ulong)uVar12 >> 0x20) * fVar30),
                                                  -(ushort)(ABS(auVar10._0_4_ * fVar13 -
                                                                (float)uVar8 * fVar11) <=
                                                           fVar29 * (float)uVar16 +
                                                           (float)uVar12 * fVar25))));
              auVar10._0_4_ = (int)((uint)(ushort)uVar28 << 0x1f) >> 0x1f;
              auVar10._4_4_ = (int)((uint)(ushort)(uVar28 >> 0x10) << 0x1f) >> 0x1f;
              auVar10._8_4_ = (int)((uint)(ushort)(uVar28 >> 0x20) << 0x1f) >> 0x1f;
              auVar10._12_4_ = (int)((uint)(ushort)(uVar28 >> 0x30) << 0x1f) >> 0x1f;
              NEON_ext(auVar10,auVar10,8,1);
              if (CONCAT13((char)(uVar28 >> 0x30),
                           CONCAT12((char)(uVar28 >> 0x20),
                                    CONCAT11((char)(uVar28 >> 0x10),(char)uVar28))) == -1) {
                uVar1 = (**(code **)*param_6)(param_6,auStack_64,param_2 + (ulong)*puVar4 * 0x10);
                if (((~uVar1 & 1) != 6) && ((~uVar1 & 1) != 0)) {
                  return 0;
                }
              }
              if (iVar5 == 0) break;
              uVar9 = param_5[5];
              uVar8 = param_5[4];
              uVar26 = param_5[7];
              uVar24 = param_5[6];
              uVar23 = param_5[1];
              uVar22 = *param_5;
              auVar10 = *(undefined1 (*) [16])(param_5 + 2);
              uVar15 = param_5[9];
              uVar12 = param_5[8];
              uVar17 = param_5[0xb];
              uVar16 = param_5[10];
              uVar21 = param_5[0xd];
              uVar20 = param_5[0xc];
              uVar19 = param_5[0xf];
              uVar18 = param_5[0xe];
              puVar4 = puVar4 + 1;
            }
          }
        }
        break;
      }
      pfVar2 = (float *)(lVar7 + (ulong)((uint)fVar11 >> 1) * 0x1c);
      local_870[uVar6] = (long)(pfVar2 + 7);
      fVar29 = (float)*(undefined8 *)(pfVar2 + 3);
      fVar11 = fVar29 - *pfVar2;
      fVar25 = (float)((ulong)*(undefined8 *)(pfVar2 + 3) >> 0x20);
      fVar13 = fVar25 - pfVar2[1];
      fVar14 = (float)*(undefined8 *)(pfVar2 + 5) - pfVar2[2];
      uVar6 = uVar6 + 1;
      auVar31._0_4_ = (*pfVar2 + fVar29) * 0.5;
      auVar31._4_4_ = (pfVar2[1] + fVar25) * 0.5;
      auVar31._8_4_ = (pfVar2[2] + (float)*(undefined8 *)(pfVar2 + 5)) * 0.5;
    }
    if (uVar6 == 0) {
      return 1;
    }
  } while( true );
}


