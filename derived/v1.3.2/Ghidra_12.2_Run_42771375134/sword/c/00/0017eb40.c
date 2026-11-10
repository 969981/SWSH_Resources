/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0017eb40; name: FUN_0017eb40
 */


void FUN_0017eb40(float param_1,float param_2,undefined1 param_3 [16],undefined1 param_4 [16],
                 undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
                 long param_10,long param_11,long param_12,undefined2 *param_13,long *param_14,
                 long *param_15)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  char cVar20;
  float *pfVar21;
  ushort *puVar22;
  long lVar23;
  uint uVar24;
  float *pfVar25;
  ulong uVar26;
  undefined8 *__s;
  ulong uVar27;
  undefined8 *puVar28;
  float fVar29;
  undefined8 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  float fVar41;
  undefined4 uVar42;
  byte bVar46;
  byte bVar47;
  float fVar43;
  byte bVar48;
  float fVar49;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  uint uVar56;
  ulong uVar57;
  float fVar58;
  float fVar59;
  int iVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  undefined4 local_104;
  float local_100;
  float fStack_fc;
  float local_f8;
  undefined4 local_f4;
  float local_f0;
  float fStack_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0 [4];
  undefined8 local_d0;
  uint local_c8;
  undefined4 local_c0 [4];
  undefined8 local_b0;
  uint local_a8;
  
  if ((ulong)*(ushort *)(param_14 + 2) == 0xffff) {
    pfVar21 = (float *)(param_14[1] + 0x44);
  }
  else {
    pfVar21 = (float *)(*param_14 + (ulong)*(ushort *)(*param_14 + 8) * 0x50 +
                        (ulong)*(ushort *)(param_14 + 2) * 4 + 0x80);
  }
  if ((ulong)*(ushort *)(param_15 + 2) == 0xffff) {
    pfVar25 = (float *)(param_15[1] + 0x44);
  }
  else {
    pfVar25 = (float *)(*param_15 + (ulong)*(ushort *)(*param_15 + 8) * 0x50 +
                        (ulong)*(ushort *)(param_15 + 2) * 4 + 0x80);
  }
  Hint_Prefetch(param_10 + 0x1b84,0,0,0);
  Hint_Prefetch(param_10 + 0x1c04,0,0,0);
  fVar15 = *pfVar21;
  if (*pfVar21 <= *pfVar25) {
    fVar15 = *pfVar25;
  }
  if (*(int *)(param_10 + 0x1c08) != 0) {
    uVar26 = 0;
    do {
      lVar23 = param_10 + uVar26 * 4;
      iVar2 = *(int *)(lVar23 + 0x1a80);
      if (iVar2 != 0) {
        lVar1 = param_9 + (ulong)*(ushort *)(param_10 + (ulong)*(uint *)(lVar23 + 0x1b00) * 0x2c) *
                          0x40;
        uVar40 = *(undefined4 *)(lVar1 + 0x2c);
        uVar42 = *(undefined4 *)(lVar1 + 0x38);
        fVar29 = *(float *)(lVar1 + 0x3c);
        bVar31 = *(byte *)(lVar1 + 0x30);
        __s = (undefined8 *)(param_13 + 0x28);
        Hint_Prefetch(param_13 + 0x68,0,0,0);
        Hint_Prefetch(param_13 + 0xa8,0,0,0);
        Hint_Prefetch(param_13 + 0xe8,0,0,0);
        *(char *)(param_13 + 1) = (char)iVar2;
        if ((bVar31 & 1) == 0) {
          cVar20 = (char)*(undefined2 *)(param_10 + uVar26 * 0x58 + 0xb02) << 1;
        }
        else {
          cVar20 = '\0';
        }
        *(char *)((long)param_13 + 3) = cVar20;
        *param_13 = 3;
        *(int *)(param_13 + 2) = param_4._0_4_;
        *(ulong *)(param_13 + 0xc) = CONCAT44(param_5,param_3._0_4_);
        *(ulong *)(param_13 + 8) = CONCAT44(uVar42,uVar40);
        *(undefined4 *)(param_13 + 4) = param_6;
        puVar28 = (undefined8 *)
                  (param_9 +
                  (ulong)*(ushort *)(param_10 + (ulong)*(uint *)(lVar23 + 0x1b00) * 0x2c) * 0x40);
        uVar16 = *puVar28;
        fVar49 = *(float *)(puVar28 + 1);
        *(ulong *)(param_13 + 0x14) = (ulong)(uint)fVar49;
        *(undefined8 *)(param_13 + 0x10) = uVar16;
        uVar24 = *(uint *)(lVar23 + 0x1b00);
        if (uVar24 != 0xffff) {
          do {
            puVar22 = (ushort *)(param_10 + (ulong)uVar24 * 0x2c);
            uVar26 = (ulong)*(byte *)((long)puVar22 + 5);
            if (uVar26 != 0) {
              pfVar21 = (float *)(param_9 + (ulong)*puVar22 * 0x40);
              uVar27 = 0;
              puVar28 = __s;
              do {
                fVar50 = pfVar21[5] - *(float *)(param_11 + 0x14);
                fVar53 = pfVar21[6] - *(float *)(param_11 + 0x18);
                fVar43 = pfVar21[4] - *(float *)(param_11 + 0x10);
                local_100 = *pfVar21;
                fStack_fc = pfVar21[1];
                fVar59 = pfVar21[4] - *(float *)(param_12 + 0x10);
                fVar41 = pfVar21[5] - *(float *)(param_12 + 0x14);
                fVar52 = pfVar21[6] - *(float *)(param_12 + 0x18);
                local_f8 = pfVar21[2];
                fVar58 = pfVar21[3];
                fVar64 = fVar43 * fStack_fc - fVar50 * local_100;
                fVar65 = fVar53 * local_100 - fVar43 * local_f8;
                fVar63 = fVar41 * local_f8 - fVar52 * fStack_fc;
                fVar52 = fVar52 * local_100 - fVar59 * local_f8;
                fVar50 = fVar50 * local_f8 - fVar53 * fStack_fc;
                fVar53 = fVar59 * fStack_fc - fVar41 * local_100;
                fVar41 = fVar65;
                fVar43 = fVar50;
                local_e8 = fVar64;
                if ((short)param_14[2] == -1) {
                  lVar23 = param_14[1];
                  fVar43 = fVar50 * *(float *)(lVar23 + 0x20) + fVar65 * *(float *)(lVar23 + 0x2c) +
                           fVar64 * *(float *)(lVar23 + 0x38);
                  fVar41 = fVar50 * *(float *)(lVar23 + 0x24) + fVar65 * *(float *)(lVar23 + 0x30) +
                           fVar64 * *(float *)(lVar23 + 0x3c);
                  local_e8 = fVar50 * *(float *)(lVar23 + 0x28) + fVar65 * *(float *)(lVar23 + 0x34)
                             + fVar64 * *(float *)(lVar23 + 0x40);
                }
                local_120 = -local_100;
                local_f4 = 0;
                local_11c = -fStack_fc;
                local_118 = -local_f8;
                local_110 = -fVar63;
                local_10c = -fVar52;
                local_108 = -fVar53;
                local_e4 = 0;
                uVar57 = (ulong)(uint)local_e8;
                if ((short)param_15[2] == -1) {
                  lVar23 = param_15[1];
                  fVar54 = *(float *)(lVar23 + 0x24) * local_110;
                  fVar51 = *(float *)(lVar23 + 0x28) * local_110;
                  fVar59 = *(float *)(lVar23 + 0x34) * local_10c;
                  local_110 = *(float *)(lVar23 + 0x20) * local_110 +
                              *(float *)(lVar23 + 0x2c) * local_10c +
                              *(float *)(lVar23 + 0x38) * local_108;
                  local_10c = fVar54 + *(float *)(lVar23 + 0x30) * local_10c +
                              *(float *)(lVar23 + 0x3c) * local_108;
                  local_108 = fVar51 + fVar59 + *(float *)(lVar23 + 0x40) * local_108;
                }
                local_114 = 0;
                local_104 = 0;
                    /* try { // try from 0017efe8 to 0017f013 has its CatchHandler @ 0017ffec */
                local_f0 = fVar43;
                fStack_ec = fVar41;
                fVar59 = (float)FUN_0017e820(param_3._0_8_,param_4._0_8_,(char)param_5,param_6,
                                             param_14,&local_100,local_c0,param_15,&local_120,
                                             local_e0,0);
                fVar58 = fVar58 - param_7;
                uVar3 = *(ushort *)(param_14 + 2);
                if ((ulong)uVar3 == 0xffff) {
                  pfVar25 = (float *)param_14[1];
                  fVar54 = *pfVar21;
                  fVar51 = pfVar21[1];
                  fVar55 = pfVar21[2];
                  fVar50 = *pfVar25 * fVar54 + pfVar25[1] * fVar51 + pfVar25[2] * fVar55 +
                           fVar50 * pfVar25[4] + fVar65 * pfVar25[5] + fVar64 * pfVar25[6];
                }
                else {
                  fVar54 = *pfVar21;
                  fVar51 = pfVar21[1];
                  fVar55 = pfVar21[2];
                  lVar23 = *param_14 + (ulong)uVar3 * 0x20;
                  fVar5 = fVar54 * *(float *)(lVar23 + 0x80);
                  fVar6 = fVar51 * *(float *)(lVar23 + 0x84);
                  uVar35 = (undefined1)((uint)fVar6 >> 8);
                  uVar36 = (undefined1)((uint)fVar6 >> 0x10);
                  uVar37 = (undefined1)((uint)fVar6 >> 0x18);
                  fVar38 = fVar55 * *(float *)(lVar23 + 0x88);
                  fVar39 = *(float *)(lVar23 + 0x8c) * 0.0;
                  auVar44[4] = SUB41(fVar6,0);
                  auVar44._0_4_ = fVar5;
                  auVar44[5] = uVar35;
                  auVar44[6] = uVar36;
                  auVar44[7] = uVar37;
                  auVar44._8_4_ = fVar38;
                  auVar44._12_4_ = fVar39;
                  auVar45[4] = SUB41(fVar6,0);
                  auVar45._0_4_ = fVar5;
                  auVar45[5] = uVar35;
                  auVar45[6] = uVar36;
                  auVar45[7] = uVar37;
                  auVar45._8_4_ = fVar38;
                  auVar45._12_4_ = fVar39;
                  auVar44 = NEON_ext(auVar44,auVar45,8,1);
                  fVar50 = fVar50 * *(float *)(lVar23 + 0x90);
                  fVar65 = fVar65 * *(float *)(lVar23 + 0x94);
                  fVar64 = fVar64 * *(float *)(lVar23 + 0x98);
                  fVar38 = *(float *)(lVar23 + 0x9c) * 0.0;
                  auVar7._4_4_ = fVar65;
                  auVar7._0_4_ = fVar50;
                  auVar7._8_4_ = fVar64;
                  auVar7._12_4_ = fVar38;
                  auVar8._4_4_ = fVar65;
                  auVar8._0_4_ = fVar50;
                  auVar8._8_4_ = fVar64;
                  auVar8._12_4_ = fVar38;
                  auVar45 = NEON_ext(auVar7,auVar8,8,1);
                  fVar50 = fVar5 + fVar6 + auVar44._0_4_ + auVar44._4_4_ +
                           fVar50 + fVar65 + auVar45._0_4_ + auVar45._4_4_;
                }
                uVar30 = CONCAT44(fVar59,fVar59);
                uVar4 = *(ushort *)(param_15 + 2);
                __s = puVar28 + 0xe;
                if ((ulong)uVar4 == 0xffff) {
                  pfVar25 = (float *)param_15[1];
                  fVar65 = fVar54 * *pfVar25 + fVar51 * pfVar25[1] + fVar55 * pfVar25[2] +
                           fVar63 * pfVar25[4] + fVar52 * pfVar25[5] + fVar53 * pfVar25[6];
                }
                else {
                  lVar23 = *param_15 + (ulong)uVar4 * 0x20;
                  fVar54 = fVar54 * (float)*(undefined8 *)(lVar23 + 0x80);
                  fVar51 = fVar51 * (float)((ulong)*(undefined8 *)(lVar23 + 0x80) >> 0x20);
                  fVar55 = fVar55 * (float)*(undefined8 *)(lVar23 + 0x88);
                  fVar65 = (float)((ulong)*(undefined8 *)(lVar23 + 0x88) >> 0x20) * 0.0;
                  auVar11._4_4_ = fVar51;
                  auVar11._0_4_ = fVar54;
                  auVar11._8_4_ = fVar55;
                  auVar11._12_4_ = fVar65;
                  auVar12._4_4_ = fVar51;
                  auVar12._0_4_ = fVar54;
                  auVar12._8_4_ = fVar55;
                  auVar12._12_4_ = fVar65;
                  auVar45 = NEON_ext(auVar11,auVar12,8,1);
                  fVar63 = fVar63 * *(float *)(lVar23 + 0x90);
                  fVar52 = fVar52 * *(float *)(lVar23 + 0x94);
                  fVar53 = fVar53 * *(float *)(lVar23 + 0x98);
                  fVar65 = *(float *)(lVar23 + 0x9c) * 0.0;
                  auVar9._4_4_ = fVar52;
                  auVar9._0_4_ = fVar63;
                  auVar9._8_4_ = fVar53;
                  auVar9._12_4_ = fVar65;
                  auVar10._4_4_ = fVar52;
                  auVar10._0_4_ = fVar63;
                  auVar10._8_4_ = fVar53;
                  auVar10._12_4_ = fVar65;
                  auVar44 = NEON_ext(auVar9,auVar10,8,1);
                  fVar65 = fVar54 + fVar51 + auVar45._0_4_ + auVar45._4_4_ +
                           fVar63 + fVar52 + auVar44._0_4_ + auVar44._4_4_;
                }
                uVar62 = NEON_frecpe(uVar30,4);
                fVar53 = -(fVar50 - fVar65);
                uVar61 = NEON_frecps(uVar30,uVar62,4);
                fVar63 = (float)uVar62 * (float)uVar61;
                fVar52 = (float)((ulong)uVar62 >> 0x20) * (float)((ulong)uVar61 >> 0x20);
                uVar62 = NEON_frecps(uVar30,CONCAT44(fVar52,fVar63),4);
                fVar63 = fVar63 * (float)uVar62;
                fVar52 = fVar52 * (float)((ulong)uVar62 >> 0x20);
                bVar19 = fVar50 - fVar65 < param_2 && (param_1 * fVar58 < fVar53 && 0.0 < fVar29);
                uVar17 = -(uint)bVar19;
                fVar64 = param_1 * 0.8 * fVar58;
                iVar18 = -(uint)(fVar58 <= param_8 && bVar19);
                uVar62 = NEON_fmax(CONCAT44(fVar15,fVar15),
                                   CONCAT17((char)((uint)fVar64 >> 0x18),
                                            CONCAT16((char)((uint)fVar64 >> 0x10),
                                                     CONCAT15((char)((uint)fVar64 >> 8),
                                                              CONCAT14(SUB41(fVar64,0),
                                                                       param_1 * 0.8 * fVar58)))),4)
                ;
                fVar54 = (float)(uVar17 & (uint)(fVar29 * fVar53));
                uVar56 = (uint)fVar54 ^
                         ((uint)fVar54 ^ (uint)(fVar65 + fVar54)) &
                         CONCAT22(-(ushort)(uVar4 == 0xffff),-(ushort)(uVar4 == 0xffff));
                uVar61 = NEON_frecps(uVar30,CONCAT44(fVar52,fVar63),4);
                fVar63 = fVar63 * (float)uVar61;
                fVar52 = fVar52 * (float)((ulong)uVar61 >> 0x20);
                uVar61 = NEON_frecps(uVar30,CONCAT44(fVar52,fVar63),4);
                fVar63 = fVar63 * (float)uVar61;
                fVar52 = fVar52 * (float)((ulong)uVar61 >> 0x20);
                fVar53 = (float)uVar16 * pfVar21[8];
                fVar51 = (float)((ulong)uVar16 >> 0x20) * pfVar21[9];
                fVar58 = fVar49 * pfVar21[10];
                auVar13._4_4_ = fVar51;
                auVar13._0_4_ = fVar53;
                auVar13._8_4_ = fVar58;
                auVar13._12_4_ = 0;
                auVar14._4_4_ = fVar51;
                auVar14._0_4_ = fVar53;
                auVar14._8_4_ = fVar58;
                auVar14._12_4_ = 0;
                auVar44 = NEON_ext(auVar13,auVar14,8,1);
                iVar60 = -(uint)(fVar59 == 0.0);
                uVar30 = NEON_frecps(uVar30,CONCAT44(fVar52,fVar63),4);
                fVar63 = fVar63 * (float)uVar30;
                fVar52 = fVar52 * (float)((ulong)uVar30 >> 0x20);
                bVar31 = (byte)((uint)iVar60 >> 8);
                bVar32 = (byte)((uint)iVar60 >> 0x10);
                bVar33 = (byte)((uint)iVar60 >> 0x18);
                fVar64 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~bVar33,
                                         CONCAT12((byte)((uint)fVar63 >> 0x10) & ~bVar32,
                                                  CONCAT11((byte)((uint)fVar63 >> 8) & ~bVar31,
                                                           SUB41(fVar63,0) & ~(byte)iVar60)));
                fVar58 = (float)uVar62 * fVar64;
                fVar65 = (float)((ulong)uVar62 >> 0x20) *
                         (float)(CONCAT17((byte)((uint)fVar52 >> 0x18) & ~bVar33,
                                          CONCAT16((byte)((uint)fVar52 >> 0x10) & ~bVar32,
                                                   CONCAT15((byte)((uint)fVar52 >> 8) & ~bVar31,
                                                            CONCAT14(SUB41(fVar52,0) & ~(byte)iVar60
                                                                     ,fVar64)))) >> 0x20);
                bVar46 = (byte)((uint)iVar18 >> 8);
                bVar47 = (byte)((uint)iVar18 >> 0x10);
                bVar48 = (byte)((uint)iVar18 >> 0x18);
                bVar31 = SUB41(fVar58,0) & ~(byte)iVar18;
                bVar32 = (byte)((uint)fVar58 >> 8) & ~bVar46;
                bVar33 = (byte)((uint)fVar58 >> 0x10) & ~bVar47;
                bVar34 = (byte)((uint)fVar58 >> 0x18) & ~bVar48;
                fVar58 = (fVar53 + fVar51 + auVar44._0_4_ + auVar44._4_4_ +
                         (float)(uVar56 ^ (uVar56 ^ (uint)(fVar54 - fVar50)) &
                                          CONCAT22(-(ushort)(uVar3 == 0xffff),
                                                   -(ushort)(uVar3 == 0xffff)))) * fVar64;
                uVar30 = NEON_fmax(CONCAT17((byte)((uint)fVar65 >> 0x18) & ~bVar48,
                                            CONCAT16((byte)((uint)fVar65 >> 0x10) & ~bVar47,
                                                     CONCAT15((byte)((uint)fVar65 >> 8) & ~bVar46,
                                                              CONCAT14(SUB41(fVar65,0) &
                                                                       ~(byte)iVar18,
                                                                       CONCAT13(bVar34,CONCAT12(
                                                  bVar33,CONCAT11(bVar32,bVar31))))))),0,4);
                fVar50 = -(float)uVar30;
                puVar28[4] = CONCAT44(fVar58 - (float)CONCAT13(bVar34,CONCAT12(bVar33,CONCAT11(
                                                  bVar32,bVar31))),fVar64);
                *(float *)(puVar28 + 5) =
                     fVar58 + (float)CONCAT13((byte)((uint)fVar50 >> 0x18) & ~(byte)(uVar17 >> 0x18)
                                              ,CONCAT12((byte)((uint)fVar50 >> 0x10) &
                                                        ~(byte)(uVar17 >> 0x10),
                                                        CONCAT11((byte)((uint)fVar50 >> 8) &
                                                                 ~(byte)(uVar17 >> 8),
                                                                 SUB41(fVar50,0) & ~(byte)uVar17)));
                fVar58 = pfVar21[7];
                puVar28[1] = uVar57;
                *puVar28 = CONCAT44(fVar41,fVar43);
                *(float *)((long)puVar28 + 0x2c) = fVar58;
                puVar28[3] = (ulong)(uint)-local_108;
                puVar28[2] = CONCAT44(-local_10c,-local_110);
                uVar40 = *(undefined4 *)((ulong)local_c0 | 4);
                puVar28[7] = (ulong)*(uint *)((ulong)local_c0 | 8);
                puVar28[6] = CONCAT44(uVar40,local_c0[0]);
                puVar28[9] = (ulong)local_a8;
                puVar28[8] = local_b0;
                uVar40 = *(undefined4 *)((ulong)local_e0 | 4);
                puVar28[0xb] = (ulong)*(uint *)((ulong)local_e0 | 8);
                puVar28[10] = CONCAT44(uVar40,local_e0[0]);
                uVar27 = uVar27 + 1;
                pfVar21 = pfVar21 + 0x10;
                puVar28[0xd] = (ulong)local_c8;
                puVar28[0xc] = local_d0;
                puVar28 = __s;
              } while (uVar27 < uVar26);
            }
            uVar24 = (uint)*(ushort *)(param_10 + (ulong)uVar24 * 0x2c + 2);
          } while (uVar24 != 0xffff);
        }
                    /* WARNING: Subroutine does not return */
        memset(__s,0,(ulong)(uint)(iVar2 << 2));
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 < *(uint *)(param_10 + 0x1c08));
  }
  return;
}


