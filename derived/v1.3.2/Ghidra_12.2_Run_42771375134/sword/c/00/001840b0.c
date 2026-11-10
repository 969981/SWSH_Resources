/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001840b0; name: FUN_001840b0
 */


undefined8
FUN_001840b0(float param_1,float param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,float param_7,float param_8,long param_9,long param_10,long param_11,
            long param_12,undefined4 *param_13,long *param_14,long *param_15,char param_16)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined8 uVar9;
  bool bVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  short sVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  undefined8 uVar25;
  byte bVar28;
  byte bVar29;
  undefined4 uVar26;
  float fVar27;
  byte bVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  float fVar35;
  int iVar36;
  undefined8 uVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float local_260;
  float fStack_25c;
  float local_188;
  float local_184;
  float local_180;
  float local_150;
  float local_14c;
  float local_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined1 auStack_130 [24];
  float local_118;
  undefined1 auStack_110 [16];
  undefined4 local_100;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_f0 [4];
  undefined8 local_e0;
  uint local_d8;
  undefined4 local_d0 [4];
  undefined8 local_c0;
  uint local_b8;
  float local_b0;
  float fStack_ac;
  float local_a8;
  
  if ((ulong)*(ushort *)(param_14 + 2) == 0xffff) {
    pfVar11 = (float *)(param_14[1] + 0x44);
  }
  else {
    pfVar11 = (float *)(*param_14 + (ulong)*(ushort *)(*param_14 + 8) * 0x50 +
                        (ulong)*(ushort *)(param_14 + 2) * 4 + 0x80);
  }
  if ((ulong)*(ushort *)(param_15 + 2) == 0xffff) {
    pfVar12 = (float *)(param_15[1] + 0x44);
  }
  else {
    pfVar12 = (float *)(*param_15 + (ulong)*(ushort *)(*param_15 + 8) * 0x50 +
                        (ulong)*(ushort *)(param_15 + 2) * 4 + 0x80);
  }
  Hint_Prefetch(param_10 + 0x1b84,0,0,0);
  Hint_Prefetch(param_10 + 0x1c04,0,0,0);
  uVar3 = *(uint *)(param_10 + 0x1c08);
  uVar14 = (ulong)uVar3;
  fVar8 = *pfVar11;
  if (*pfVar11 <= *pfVar12) {
    fVar8 = *pfVar12;
  }
  if (uVar3 != 0) {
    uVar15 = 0;
    puVar17 = param_13;
LAB_001841f0:
    do {
      lVar1 = param_10 + uVar15 * 4;
      iVar36 = *(int *)(lVar1 + 0x1a80);
      puVar16 = puVar17;
      if (iVar36 != 0) {
        uVar4 = *(uint *)(lVar1 + 0x1b00);
        uVar18 = (ulong)uVar4;
        puVar16 = puVar17 + 0xc;
        uVar13 = (ulong)*(ushort *)(param_10 + uVar18 * 0x2c);
        puVar2 = (undefined8 *)(param_9 + uVar13 * 0x40);
        uVar26 = *(undefined4 *)puVar2;
        uVar23 = *(undefined4 *)((long)puVar2 + 4);
        uVar9 = *puVar2;
        fVar21 = *(float *)(puVar2 + 1);
        fVar6 = *(float *)((long)puVar2 + 0x3c);
        Hint_Prefetch(puVar17 + 0x2c,0,0,0);
        Hint_Prefetch(puVar17 + 0x4c,0,0,0);
        Hint_Prefetch(puVar17 + 0x6c,0,0,0);
        puVar17[1] = param_4;
        puVar17[2] = param_3;
        puVar17[6] = fVar21;
        puVar17[7] = param_6;
        *(char *)((long)puVar17 + 1) = (char)iVar36;
        *(undefined1 *)puVar17 = 3;
        *(undefined1 *)(puVar17 + 10) = 0;
        puVar17[5] = uVar23;
        puVar17[3] = param_5;
        puVar17[4] = uVar26;
        if (uVar4 != 0xffff) {
          uVar19 = (ulong)*(byte *)(param_10 + (ulong)uVar4 * 0x2c + 5);
          if (uVar19 == 0) goto LAB_0018464c;
          do {
            pfVar11 = (float *)(param_9 + uVar13 * 0x40);
            uVar13 = 0;
            puVar17 = puVar16;
            do {
              fVar31 = pfVar11[5] - *(float *)(param_11 + 0x14);
              fVar40 = *pfVar11;
              fVar41 = pfVar11[1];
              fVar27 = pfVar11[4] - *(float *)(param_11 + 0x10);
              fVar33 = pfVar11[6] - *(float *)(param_11 + 0x18);
              fVar24 = pfVar11[5] - *(float *)(param_12 + 0x14);
              fVar22 = pfVar11[4] - *(float *)(param_12 + 0x10);
              fVar32 = pfVar11[6] - *(float *)(param_12 + 0x18);
              fVar35 = pfVar11[2];
              fVar38 = pfVar11[3];
              local_188 = fVar31 * fVar35 - fVar33 * fVar41;
              local_184 = fVar33 * fVar40 - fVar27 * fVar35;
              local_180 = fVar27 * fVar41 - fVar31 * fVar40;
              fVar31 = fVar24 * fVar35 - fVar32 * fVar41;
              fVar27 = fVar32 * fVar40 - fVar22 * fVar35;
              fVar22 = fVar22 * fVar41 - fVar24 * fVar40;
                    /* try { // try from 00184344 to 00184357 has its CatchHandler @ 00184e1c */
              local_b0 = fVar31;
              fStack_ac = fVar27;
              local_a8 = fVar22;
              FUN_0017e750(auStack_110,pfVar11,&local_188,param_14);
              local_150 = -fVar31;
              local_14c = -fVar27;
              local_13c = -pfVar11[1];
              local_140 = -*pfVar11;
              local_138 = -pfVar11[2];
              local_148 = -fVar22;
                    /* try { // try from 00184390 to 001843a7 has its CatchHandler @ 00184e18 */
              FUN_0017e750(auStack_130,&local_140,&local_150,param_15);
                    /* try { // try from 001843a8 to 001843cf has its CatchHandler @ 00184e14 */
              fVar22 = (float)FUN_0017e820(param_3,param_4,param_5,param_6,param_14,auStack_110,
                                           local_d0,param_15,auStack_130,local_f0,0);
                    /* try { // try from 001843d0 to 001843e3 has its CatchHandler @ 00184e10 */
              fVar24 = (float)FUN_0017e5f0(param_14,pfVar11,&local_188);
                    /* try { // try from 001843e4 to 001843f7 has its CatchHandler @ 00184e0c */
              fVar27 = (float)FUN_0017e5f0(param_15,pfVar11,&local_b0);
              fVar38 = fVar38 - param_7;
              uVar25 = CONCAT44(fVar22,fVar22);
              uVar37 = NEON_frecpe(uVar25,4);
              uVar39 = NEON_frecps(uVar25,uVar37,4);
              fVar31 = (float)uVar37 * (float)uVar39;
              fVar32 = (float)((ulong)uVar37 >> 0x20) * (float)((ulong)uVar39 >> 0x20);
              uVar37 = NEON_frecps(uVar25,CONCAT44(fVar32,fVar31),4);
              fVar31 = fVar31 * (float)uVar37;
              fVar32 = fVar32 * (float)((ulong)uVar37 >> 0x20);
              uVar37 = NEON_frecps(uVar25,CONCAT44(fVar32,fVar31),4);
              fVar31 = fVar31 * (float)uVar37;
              fVar32 = fVar32 * (float)((ulong)uVar37 >> 0x20);
              uVar37 = NEON_frecps(uVar25,CONCAT44(fVar32,fVar31),4);
              fVar31 = fVar31 * (float)uVar37;
              fVar32 = fVar32 * (float)((ulong)uVar37 >> 0x20);
              iVar36 = -(uint)(fVar22 == 0.0);
              uVar25 = NEON_frecps(uVar25,CONCAT44(fVar32,fVar31),4);
              fVar31 = fVar31 * (float)uVar25;
              fVar32 = fVar32 * (float)((ulong)uVar25 >> 0x20);
              fVar22 = -(fVar24 - fVar27);
              bVar28 = (byte)((uint)iVar36 >> 8);
              bVar29 = (byte)((uint)iVar36 >> 0x10);
              bVar30 = (byte)((uint)iVar36 >> 0x18);
              fVar31 = (float)CONCAT13((byte)((uint)fVar31 >> 0x18) & ~bVar30,
                                       CONCAT12((byte)((uint)fVar31 >> 0x10) & ~bVar29,
                                                CONCAT11((byte)((uint)fVar31 >> 8) & ~bVar28,
                                                         SUB41(fVar31,0) & ~(byte)iVar36)));
              uVar25 = NEON_fmax(CONCAT44(fVar8 / param_1,fVar8 / param_1),
                                 CONCAT44(param_1 * 0.8 * fVar38,param_1 * 0.8 * fVar38),4);
              fVar33 = (float)uVar25 * fVar31;
              fVar35 = (float)((ulong)uVar25 >> 0x20) *
                       (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~bVar30,
                                        CONCAT16((byte)((uint)fVar32 >> 0x10) & ~bVar29,
                                                 CONCAT15((byte)((uint)fVar32 >> 8) & ~bVar28,
                                                          CONCAT14(SUB41(fVar32,0) & ~(byte)iVar36,
                                                                   fVar31)))) >> 0x20);
              bVar10 = (0.0 < fVar6 && param_1 * fVar38 < fVar22) && fVar24 - fVar27 < param_2;
              uVar4 = -(uint)bVar10;
              iVar36 = -(uint)(fVar38 <= param_8 && bVar10);
              fVar22 = (float)(uVar4 & (uint)(fVar6 * fVar22));
              bVar28 = (byte)((uint)iVar36 >> 8);
              bVar29 = (byte)((uint)iVar36 >> 0x10);
              bVar30 = (byte)((uint)iVar36 >> 0x18);
              fVar32 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~bVar30,
                                       CONCAT12((byte)((uint)fVar33 >> 0x10) & ~bVar29,
                                                CONCAT11((byte)((uint)fVar33 >> 8) & ~bVar28,
                                                         SUB41(fVar33,0) & ~(byte)iVar36)));
              puVar16 = puVar17 + 0x1c;
              if ((short)param_14[2] == -1) {
                fVar22 = fVar22 - fVar24;
              }
              else {
                sVar20 = -(ushort)((short)param_15[2] == -1);
                fVar22 = (float)((uint)fVar22 ^
                                ((uint)fVar22 ^ (uint)(fVar27 + fVar22)) & CONCAT22(sVar20,sVar20));
              }
              local_260 = (float)uVar9;
              fStack_25c = (float)((ulong)uVar9 >> 0x20);
              local_260 = local_260 * pfVar11[8];
              fStack_25c = fStack_25c * pfVar11[9];
              fVar24 = fVar21 * pfVar11[10];
              auVar34._4_4_ = fStack_25c;
              auVar34._0_4_ = local_260;
              auVar34._8_4_ = fVar24;
              auVar34._12_4_ = 0;
              auVar7._4_4_ = fStack_25c;
              auVar7._0_4_ = local_260;
              auVar7._8_4_ = fVar24;
              auVar7._12_4_ = 0;
              auVar34 = NEON_ext(auVar34,auVar7,8,1);
              uVar25 = NEON_fmax(CONCAT17((byte)((uint)fVar35 >> 0x18) & ~bVar30,
                                          CONCAT16((byte)((uint)fVar35 >> 0x10) & ~bVar29,
                                                   CONCAT15((byte)((uint)fVar35 >> 8) & ~bVar28,
                                                            CONCAT14(SUB41(fVar35,0) & ~(byte)iVar36
                                                                     ,fVar32)))),0,4);
              fVar24 = -(float)uVar25;
              fVar22 = (fVar22 + local_260 + fStack_25c + auVar34._0_4_ + auVar34._4_4_) * fVar31;
              uVar13 = uVar13 + 1;
              *(ulong *)(puVar17 + 8) = CONCAT44(fVar22 - fVar32,fVar31);
              puVar17[10] = fVar22 + (float)CONCAT13((byte)((uint)fVar24 >> 0x18) &
                                                     ~(byte)(uVar4 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                                              ~(byte)(uVar4 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar24 >> 8) &
                                                                       ~(byte)(uVar4 >> 8),
                                                                       SUB41(fVar24,0) &
                                                                       ~(byte)uVar4)));
              puVar17[0xb] = pfVar11[7];
              *(ulong *)(puVar17 + 2) = (ulong)local_f8;
              *puVar17 = local_100;
              puVar17[1] = local_fc;
              *(ulong *)(puVar17 + 6) = (ulong)(uint)-local_118;
              *(ulong *)(puVar17 + 4) = CONCAT44(-auStack_130._20_4_,-auStack_130._16_4_);
              uVar23 = *(undefined4 *)((ulong)local_d0 | 4);
              *(ulong *)(puVar17 + 0xe) = (ulong)*(uint *)((ulong)local_d0 | 8);
              *(ulong *)(puVar17 + 0xc) = CONCAT44(uVar23,local_d0[0]);
              *(ulong *)(puVar17 + 0x12) = (ulong)local_b8;
              *(undefined8 *)(puVar17 + 0x10) = local_c0;
              uVar23 = *(undefined4 *)((ulong)local_f0 | 4);
              *(ulong *)(puVar17 + 0x16) = (ulong)*(uint *)((ulong)local_f0 | 8);
              *(ulong *)(puVar17 + 0x14) = CONCAT44(uVar23,local_f0[0]);
              pfVar11 = pfVar11 + 0x10;
              *(ulong *)(puVar17 + 0x1a) = (ulong)local_d8;
              *(undefined8 *)(puVar17 + 0x18) = local_e0;
              puVar17 = puVar16;
            } while (uVar13 < uVar19);
LAB_0018464c:
            do {
              uVar5 = *(ushort *)(param_10 + uVar18 * 0x2c + 2);
              uVar18 = (ulong)uVar5;
              if (uVar5 == 0xffff) {
                uVar15 = uVar15 + 1;
                puVar17 = puVar16;
                if (uVar15 < uVar14) goto LAB_001841f0;
                goto LAB_00184688;
              }
              uVar13 = (ulong)*(ushort *)(param_10 + uVar18 * 0x2c);
              uVar19 = (ulong)*(byte *)(param_10 + uVar18 * 0x2c + 5);
            } while (uVar19 == 0);
          } while( true );
        }
      }
      uVar15 = uVar15 + 1;
      puVar17 = puVar16;
    } while (uVar15 < uVar14);
LAB_00184688:
    if (uVar3 != 0) {
      uVar15 = 0;
      do {
        lVar1 = param_10 + uVar15 * 4;
        iVar36 = *(int *)(lVar1 + 0x1a80);
        if (iVar36 != 0) {
          *(short *)((long)param_13 + 2) = (short)puVar16 - (short)param_13;
          bVar28 = *(byte *)(param_9 + (ulong)*(ushort *)
                                               (param_10 + (ulong)*(uint *)(lVar1 + 0x1b00) * 0x2c)
                                       * 0x40 + 0x30);
          param_16 = (char)iVar36 * param_16;
          *(char *)((long)puVar16 + 1) = (char)iVar36;
          *(undefined1 *)((long)puVar16 + 3) = 0;
          if ((bVar28 & 1) != 0) {
            param_16 = '\0';
          }
          *(char *)((long)puVar16 + 2) = param_16;
                    /* WARNING: Subroutine does not return */
          memset(puVar16 + 8,0,(ulong)(uint)(iVar36 << 2));
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar14);
    }
  }
  return 0;
}


