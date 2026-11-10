/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b0f50; name: FUN_002b0f50
 */


/* WARNING: Removing unreachable block (ram,0x002b173c) */
/* WARNING: Removing unreachable block (ram,0x002b1b78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002b0f50(float param_1,long param_2,undefined8 param_3,float *param_4,undefined8 *param_5,
            uint param_6,long param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  undefined4 *puVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  ulong uVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  uint *puVar29;
  ushort *puVar30;
  uint uVar31;
  undefined4 *puVar32;
  long lVar33;
  undefined1 (*pauVar34) [12];
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar48;
  undefined1 auVar47 [16];
  float fVar51;
  uint uVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar71;
  undefined8 uVar72;
  float fVar73;
  undefined8 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar77;
  undefined1 auVar78 [16];
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 local_1980;
  undefined8 local_1960;
  undefined8 uStack_1958;
  undefined8 local_1930;
  ulong uStack_1928;
  uint local_18f4;
  undefined8 local_18f0;
  float fStack_18e8;
  undefined8 local_18e0;
  float fStack_18d8;
  float fStack_18d4;
  undefined1 local_18b0 [20];
  undefined4 local_189c [4];
  undefined1 local_188c [1244];
  undefined8 local_13b0;
  ulong uStack_13a8;
  undefined8 local_13a0;
  ulong uStack_1398;
  undefined8 local_1390;
  ulong uStack_1388;
  undefined8 local_1380;
  ulong uStack_1378;
  undefined *local_1370;
  undefined4 local_1368;
  long *local_1360;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined8 *local_1350;
  undefined8 *local_1348;
  undefined8 *local_1340;
  undefined1 local_1338;
  undefined8 *local_1330;
  undefined8 local_1320;
  undefined8 uStack_1318;
  undefined8 local_1310;
  undefined8 uStack_1308;
  float local_1300;
  float local_12fc;
  float local_12f8;
  float local_12f4;
  float local_12f0;
  float local_12ec;
  float local_12e8;
  float local_12e4;
  float local_12e0;
  float local_12dc;
  float local_12d8;
  float local_12d4;
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined8 local_12c0;
  undefined8 uStack_12b8;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined1 auStack_1298 [224];
  undefined1 auStack_11b8 [104];
  undefined8 local_1150;
  undefined8 local_1148;
  undefined4 local_1140;
  float local_113c;
  float local_1138;
  undefined8 local_1134;
  undefined1 local_112c;
  undefined8 local_1120;
  ulong uStack_1118;
  undefined8 local_1110;
  float local_1108;
  undefined8 local_1100;
  float local_10f8;
  float local_10f4;
  float local_10f0;
  float local_10ec;
  float local_10e8;
  float local_10e4;
  float local_10e0;
  float local_10dc;
  float local_10d8;
  undefined8 local_10d4;
  float local_10cc;
  float local_10c8;
  float local_10c4;
  float local_10c0;
  long local_10b8;
  undefined8 local_10b0;
  uint local_10a4;
  undefined1 auStack_10a0 [16];
  undefined8 local_1090 [2];
  undefined1 local_1080 [8];
  undefined8 auStack_1078 [15];
  undefined1 auStack_1000 [3936];
  
  lVar37 = *(long *)(param_2 + 0x28);
  lVar38 = *(long *)(lVar37 + 0x50);
  local_10a4 = 0;
  local_10b8 = 0;
  local_10b0 = 0;
                    /* try { // try from 002b0fb4 to 002b0fbf has its CatchHandler @ 002b1bb0 */
  FUN_001ed4d0(&local_10b8,0x80);
  local_10f8 = *param_4;
  local_10f4 = param_4[1];
  local_10f0 = param_4[2];
  local_10ec = param_4[3];
  local_10e8 = param_4[4];
  local_10e4 = param_4[5];
  local_10e0 = param_4[6];
  local_10dc = param_4[7];
  local_10d8 = param_4[8];
  local_1930 = *(undefined8 *)(param_4 + 9);
  local_10d4 = *(undefined8 *)(param_4 + 9);
  fVar81 = param_4[0xb];
  pauVar34 = (undefined1 (*) [12])(param_4 + 0xc);
  uVar74 = param_5[1];
  uVar44 = *param_5;
  auVar12 = *(undefined1 (*) [12])(param_5 + 2);
  local_112c = 0;
  uVar52 = SUB124(*pauVar34,8);
  local_1120 = SUB128(*pauVar34,0);
  uVar72 = NEON_fminp(CONCAT44(uVar52,uVar52),local_1120,4);
  local_1150 = 0;
  local_1148 = 0;
  local_1134 = 0x37f7fffff;
  uStack_1118 = (ulong)uVar52;
  uVar72 = NEON_fminp(uVar72,uVar72,4);
  local_1108 = (float)uVar72;
  local_113c = DAT_01d4c158 * local_1108;
  local_10c0 = param_1 + local_1108 * 0.15;
  local_1100 = CONCAT44(param_1 + (float)((ulong)uVar72 >> 0x20) * 0.15,local_10c0);
  local_10c8 = local_10c0 + *(float *)*pauVar34;
  local_10c4 = local_10c0 + param_4[0xd];
  local_10c0 = local_10c0 + param_4[0xe];
  local_1110 = 0;
  local_1140 = 0;
                    /* try { // try from 002b10e4 to 002b10fb has its CatchHandler @ 002b1bc0 */
  local_1138 = local_113c;
  local_10cc = fVar81;
  FUN_0028b370(auStack_1298,pauVar34);
  FUN_0028b4e0(auStack_1298,auStack_11b8);
  uStack_12c8 = _UNK_01d4ae58;
  local_12d0 = _DAT_01d4ae50;
  uStack_12b8 = _UNK_01d4b588;
  local_12c0 = _DAT_01d4b580;
  uStack_12a8 = _UNK_01d49dc8;
  local_12b0 = _DAT_01d49dc0;
                    /* try { // try from 002b1128 to 002b1137 has its CatchHandler @ 002b1ba0 */
  FUN_001ae520(&local_1300,param_3,param_2 + 4);
  bVar14 = false;
  uStack_1308 = (ulong)auVar12._8_4_;
  local_1310 = auVar12._0_8_;
  puVar2 = PTR_DAT_02711fe8 + 0x10;
  puVar3 = PTR_DAT_02711eb0 + 0x10;
  uVar52 = 0;
  local_18f4 = 0xfffffff;
  uVar43 = 0;
  local_1980 = 0;
  uStack_1928 = (ulong)(uint)fVar81;
  uStack_1958 = 0;
  local_1960 = 0;
  fStack_18e8 = 0.0;
  local_18f0 = 0;
  fStack_18d8 = 0.0;
  fStack_18d4 = 0.0;
  local_18e0 = 0;
  local_1320 = uVar44;
  uStack_1318 = uVar74;
  do {
    local_10b0 = local_10b0 & 0xffffffff00000000;
    lVar36 = *(long *)(param_2 + 0x28);
                    /* try { // try from 002b11d8 to 002b11eb has its CatchHandler @ 002b1be0 */
    FUN_002321a0(local_18b0,&local_10f8,param_3,param_2 + 4);
    local_1360 = &local_10b8;
    local_1368 = 2;
                    /* try { // try from 002b1214 to 002b122b has its CatchHandler @ 002b1bd0 */
    local_1370 = puVar2;
    (*(code *)(&PTR_LAB_025e55c0)[*(ushort *)(lVar36 + 8) - 3])(lVar36,local_18b0,&local_1370,1,1);
    iVar8 = (int)local_10b0;
    if ((int)local_10b0 == 0) break;
    local_1350 = &local_1320;
    local_1348 = &local_12d0;
    local_1340 = &local_12d0;
    local_1338 = 1;
    local_1360 = (long *)0x0;
    local_1370 = puVar3;
    local_1330 = &local_1150;
    uVar5 = (int)local_10b0 + 0x1fU >> 5;
    fVar81 = -(float)local_10d4;
    uStack_1308 = uStack_1928;
    local_1310 = local_1930;
    local_1358 = 0;
    uStack_13a8 = (ulong)(uint)(local_10e0 * local_1300 + local_10dc * local_12fc +
                               local_10d8 * local_12f8);
    local_13b0 = CONCAT44(local_10ec * local_1300 + local_10e8 * local_12fc +
                          local_10e4 * local_12f8,
                          local_10f8 * local_1300 + local_10f4 * local_12fc +
                          local_10f0 * local_12f8);
    uStack_1398 = (ulong)(uint)(local_10e0 * local_12f4 + local_10dc * local_12f0 +
                               local_10d8 * local_12ec);
    local_13a0 = CONCAT44(local_10ec * local_12f4 + local_10e8 * local_12f0 +
                          local_10e4 * local_12ec,
                          local_10f8 * local_12f4 + local_10f4 * local_12f0 +
                          local_10f0 * local_12ec);
    local_1354 = 0;
    uStack_1378 = (ulong)(uint)(((local_10e0 * fVar81 - local_10dc * local_10d4._4_4_) -
                                local_10d8 * local_10cc) +
                               local_10e0 * local_12dc + local_10dc * local_12d8 +
                               local_10d8 * local_12d4);
    local_1380 = CONCAT44(((local_10ec * fVar81 - local_10e8 * local_10d4._4_4_) -
                          local_10e4 * local_10cc) +
                          local_10ec * local_12dc + local_10e8 * local_12d8 +
                          local_10e4 * local_12d4,
                          ((local_10f8 * fVar81 - local_10f4 * local_10d4._4_4_) -
                          local_10f0 * local_10cc) +
                          local_10f8 * local_12dc + local_10f4 * local_12d8 +
                          local_10f0 * local_12d4);
    uStack_1388 = (ulong)(uint)(local_10e0 * local_12e8 + local_10dc * local_12e4 +
                               local_10d8 * local_12e0);
    local_1390 = CONCAT44(local_10ec * local_12e8 + local_10e8 * local_12e4 +
                          local_10e4 * local_12e0,
                          local_10f8 * local_12e8 + local_10f4 * local_12e4 +
                          local_10f0 * local_12e0);
    if (uVar5 == 0) break;
    fVar81 = 3.4028235e+38;
    lVar36 = 0;
    uVar35 = 0;
    bVar17 = false;
    do {
      bVar15 = bVar17;
      uVar20 = iVar8 + (int)uVar35 * -0x20;
      if (0x1f < uVar20) {
        uVar20 = 0x20;
      }
      if (uVar20 == 0) {
LAB_002b1824:
        bVar16 = false;
      }
      else {
        bVar55 = *(byte *)(lVar37 + 0x5c);
        fVar42 = *(float *)(param_2 + 4) * *(float *)(param_2 + 8) * *(float *)(param_2 + 0xc);
        lVar21 = *(long *)(lVar37 + 0x30);
        uVar39 = (ulong)uVar20;
        uVar22 = 0;
        if (lVar38 == 0) {
          lVar33 = *(long *)(lVar37 + 0x28);
          puVar24 = local_189c;
          do {
            uVar25 = (ulong)*(uint *)(local_10b8 + lVar36 * 4 + uVar22 * 4);
            if ((bVar55 >> 1 & 1) == 0) {
              puVar29 = (uint *)(lVar21 + uVar25 * 0xc);
              uVar31 = *puVar29;
              uVar26 = puVar29[1];
              uVar28 = puVar29[2];
            }
            else {
              puVar30 = (ushort *)(lVar21 + uVar25 * 6);
              uVar31 = (uint)*puVar30;
              uVar26 = (uint)puVar30[1];
              uVar28 = (uint)puVar30[2];
            }
            puVar32 = (undefined4 *)(lVar33 + (ulong)uVar31 * 0xc);
            puVar24[-5] = *puVar32;
            puVar24[-4] = puVar32[1];
            uVar31 = uVar28;
            if (0.0 <= fVar42) {
              uVar31 = uVar26;
            }
            puVar18 = (undefined4 *)(lVar33 + (ulong)uVar31 * 0xc);
            if (0.0 <= fVar42) {
              uVar26 = uVar28;
            }
            puVar27 = (undefined4 *)(lVar33 + (ulong)uVar26 * 0xc);
            puVar24[-3] = puVar32[2];
            puVar24[-2] = *puVar18;
            puVar24[-1] = puVar18[1];
            *puVar24 = puVar18[2];
            puVar24[1] = *puVar27;
            puVar24[2] = puVar27[1];
            uVar4 = puVar27[2];
            uVar22 = uVar22 + 1;
            *(undefined1 *)(puVar24 + 4) = 0x38;
            puVar24[3] = uVar4;
            puVar24 = puVar24 + 10;
          } while (uVar22 < uVar39);
        }
        else {
          puVar24 = local_189c;
          do {
            uVar25 = (ulong)*(uint *)(local_10b8 + lVar36 * 4 + uVar22 * 4);
            if ((bVar55 >> 1 & 1) == 0) {
              puVar29 = (uint *)(lVar21 + uVar25 * 0xc);
              uVar31 = *puVar29;
              uVar26 = puVar29[1];
              uVar28 = puVar29[2];
            }
            else {
              puVar30 = (ushort *)(lVar21 + uVar25 * 6);
              uVar31 = (uint)*puVar30;
              uVar26 = (uint)puVar30[1];
              uVar28 = (uint)puVar30[2];
            }
            lVar33 = *(long *)(lVar37 + 0x28);
            puVar32 = (undefined4 *)(lVar33 + (ulong)uVar31 * 0xc);
            puVar24[-5] = *puVar32;
            puVar24[-4] = puVar32[1];
            uVar31 = uVar28;
            if (0.0 <= fVar42) {
              uVar31 = uVar26;
            }
            puVar18 = (undefined4 *)(lVar33 + (ulong)uVar31 * 0xc);
            if (0.0 <= fVar42) {
              uVar26 = uVar28;
            }
            puVar27 = (undefined4 *)(lVar33 + (ulong)uVar26 * 0xc);
            puVar24[-3] = puVar32[2];
            puVar24[-2] = *puVar18;
            puVar24[-1] = puVar18[1];
            *puVar24 = puVar18[2];
            puVar24[1] = *puVar27;
            puVar24[2] = puVar27[1];
            puVar24[3] = puVar27[2];
            uVar22 = uVar22 + 1;
            *(undefined1 *)(puVar24 + 4) = *(undefined1 *)(lVar38 + uVar25);
            puVar24 = puVar24 + 10;
          } while (uVar22 < uVar39);
        }
        if (uVar20 == 0) goto LAB_002b1824;
        uVar22 = 0;
        bVar16 = false;
        do {
          while( true ) {
            uVar20 = (int)uVar35 * 0x20 + (int)uVar22;
            local_10a4 = 0;
                    /* try { // try from 002b16a8 to 002b16db has its CatchHandler @ 002b1bf0 */
            FUN_0026d950(auStack_11b8,&local_1370,local_18b0 + uVar22 * 0x28,uVar20,
                         local_188c[uVar22 * 0x28],&local_1100,param_6 & 1,&local_1320,&local_13b0,
                         auStack_10a0,&local_10a4);
            if (local_10a4 != 0) break;
LAB_002b1710:
            uVar22 = uVar22 + 1;
            if (uVar22 == uVar39) goto LAB_002b1828;
          }
          fVar42 = (float)((ulong)auStack_1078[0] >> 0x20);
          if (local_10a4 == 1) {
            uVar25 = 0;
          }
          else {
            if (local_10a4 == 2) {
              uVar31 = 0;
              lVar21 = 1;
LAB_002b17ac:
              fVar41 = (float)((ulong)auStack_1078[lVar21 * 8] >> 0x20);
              uVar26 = (uint)lVar21;
              if (fVar41 >= fVar42) {
                uVar26 = uVar31;
              }
              fVar42 = (float)((uint)fVar42 ^
                              ((uint)fVar42 ^ (uint)fVar41) & -(uint)(fVar41 < fVar42));
              uVar31 = uVar26;
            }
            else {
              lVar21 = 1;
              puVar23 = auStack_1000;
              uVar26 = 0;
              do {
                fVar40 = (float)((ulong)*(undefined8 *)(puVar23 + -0x38) >> 0x20);
                fVar41 = (float)((uint)fVar42 ^
                                ((uint)fVar42 ^ (uint)fVar40) & -(uint)(fVar40 < fVar42));
                puVar1 = (undefined8 *)(puVar23 + 8);
                puVar23 = puVar23 + 0x80;
                fVar77 = (float)((ulong)*puVar1 >> 0x20);
                uVar31 = (uint)lVar21;
                if (fVar40 >= fVar42) {
                  uVar31 = uVar26;
                }
                if (fVar77 < fVar41) {
                  uVar31 = (uint)lVar21 + 1;
                }
                fVar42 = (float)((uint)fVar41 ^
                                ((uint)fVar41 ^ (uint)fVar77) & -(uint)(fVar77 < fVar41));
                lVar21 = lVar21 + 2;
                uVar26 = uVar31;
              } while ((ulong)local_10a4 - (ulong)(~local_10a4 & 1) != lVar21);
              if ((~local_10a4 & 1) != 0) goto LAB_002b17ac;
            }
            uVar25 = (ulong)uVar31;
          }
          if (fVar81 <= fVar42) {
            bVar16 = true;
            goto LAB_002b1710;
          }
          local_18e0 = local_1090[uVar25 * 8];
          fStack_18d8 = (float)local_1090[uVar25 * 8 + 1];
          fStack_18d4 = (float)((ulong)local_1090[uVar25 * 8 + 1] >> 0x20);
          bVar16 = true;
          fStack_18e8 = SUB164(*(undefined1 (*) [16])(local_1080 + uVar25 * 0x40),8);
          local_18f0 = SUB168(*(undefined1 (*) [16])(local_1080 + uVar25 * 0x40),0);
          uVar22 = uVar22 + 1;
          local_18f4 = uVar20;
          fVar81 = fVar42;
        } while (uVar22 != uVar39);
      }
LAB_002b1828:
      uVar35 = uVar35 + 1;
      lVar36 = lVar36 + 0x20;
      bVar17 = (bool)(bVar15 | bVar16);
    } while (uVar35 < uVar5);
    if (!bVar15 && !bVar16) {
      if (bVar14) goto LAB_002b1a08;
      goto LAB_002b1ae8;
    }
    auVar13._8_8_ = uStack_1318;
    auVar13._0_8_ = local_1320;
    auVar9._8_4_ = fStack_18e8;
    auVar9._0_8_ = local_18f0;
    auVar68._8_4_ = fStack_18e8;
    auVar68._0_8_ = local_18f0;
    fVar73 = (float)local_18f0;
    fVar79 = (float)((ulong)local_18f0 >> 0x20);
    fVar54 = (float)((ulong)uStack_1318 >> 0x20);
    auVar45._0_12_ = auVar13._0_12_;
    auVar45._12_4_ = 0;
    fVar51 = (float)((ulong)local_1320 >> 0x20);
    auVar68._12_4_ = 0;
    auVar9._12_4_ = 0;
    auVar75 = NEON_ext(auVar68,auVar9,8,1);
    fVar71 = fVar54 * fVar54 + -0.5;
    fVar53 = (float)uStack_1318;
    auVar68 = NEON_ext(auVar45,auVar45,8,1);
    fVar48 = (float)local_1320;
    fVar77 = fVar79 * fVar48 - fVar73 * fVar51;
    uVar72 = NEON_ext(CONCAT44(fStack_18e8 * fVar51 - fVar79 * fVar53,fVar77),
                      CONCAT44(fVar79 * auVar68._4_4_ - auVar75._4_4_ * fVar51,
                               fVar73 * auVar68._0_4_ - auVar75._0_4_ * fVar48),4,1);
    fVar42 = fVar73 * fVar71 + (float)uVar72 * fVar54;
    fVar41 = fVar79 * fVar71 + (float)((ulong)uVar72 >> 0x20) * fVar54;
    uVar59 = (undefined1)((uint)fVar41 >> 8);
    uVar60 = (undefined1)((uint)fVar41 >> 0x10);
    uVar61 = (undefined1)((uint)fVar41 >> 0x18);
    fVar77 = fStack_18e8 * fVar71 + fVar77 * fVar54;
    uVar62 = (undefined1)((uint)fVar77 >> 8);
    uVar63 = (undefined1)((uint)fVar77 >> 0x10);
    uVar64 = (undefined1)((uint)fVar77 >> 0x18);
    fVar40 = fVar54 * 0.0 + 0.0;
    uVar65 = (undefined1)((uint)fVar40 >> 8);
    uVar66 = (undefined1)((uint)fVar40 >> 0x10);
    uVar67 = (undefined1)((uint)fVar40 >> 0x18);
    auVar75[4] = SUB41(fVar41,0);
    auVar75._0_4_ = fVar42;
    auVar75[5] = uVar59;
    auVar75[6] = uVar60;
    auVar75[7] = uVar61;
    auVar75[8] = SUB41(fVar77,0);
    auVar75[9] = uVar62;
    auVar75[10] = uVar63;
    auVar75[0xb] = uVar64;
    auVar75[0xc] = SUB41(fVar40,0);
    auVar75[0xd] = uVar65;
    auVar75[0xe] = uVar66;
    auVar75[0xf] = uVar67;
    auVar78[4] = SUB41(fVar41,0);
    auVar78._0_4_ = fVar42;
    auVar78[5] = uVar59;
    auVar78[6] = uVar60;
    auVar78[7] = uVar61;
    auVar78[8] = SUB41(fVar77,0);
    auVar78[9] = uVar62;
    auVar78[10] = uVar63;
    auVar78[0xb] = uVar64;
    auVar78[0xc] = SUB41(fVar40,0);
    auVar78[0xd] = uVar65;
    auVar78[0xe] = uVar66;
    auVar78[0xf] = uVar67;
    auVar75 = NEON_ext(auVar75,auVar78,8,1);
    auVar76._0_4_ = fVar73 * fVar48;
    auVar76._4_4_ = fVar79 * fVar51;
    auVar76._8_4_ = fStack_18e8 * fVar53;
    auVar76._12_4_ = 0;
    auVar78 = NEON_ext(auVar76,auVar76,8,1);
    local_18f4 = *(uint *)(local_10b8 + (ulong)local_18f4 * 4);
    fVar40 = auVar76._0_4_ + auVar76._4_4_ + auVar78._0_4_ + auVar78._4_4_;
    fVar42 = fVar48 * fVar40 + fVar42;
    fVar41 = fVar51 * fVar40 + fVar41;
    uVar59 = (undefined1)((uint)fVar41 >> 8);
    uVar60 = (undefined1)((uint)fVar41 >> 0x10);
    uVar61 = (undefined1)((uint)fVar41 >> 0x18);
    fVar77 = fVar53 * fVar40 + auVar75._0_4_;
    uVar62 = (undefined1)((uint)fVar77 >> 8);
    uVar63 = (undefined1)((uint)fVar77 >> 0x10);
    uVar64 = (undefined1)((uint)fVar77 >> 0x18);
    fVar40 = fVar40 * 0.0 + 0.0;
    uVar65 = (undefined1)((uint)fVar40 >> 8);
    uVar66 = (undefined1)((uint)fVar40 >> 0x10);
    uVar67 = (undefined1)((uint)fVar40 >> 0x18);
    auVar11._8_4_ = fStack_18d8;
    auVar11._0_8_ = local_18e0;
    auVar10._8_4_ = fStack_18d8;
    auVar10._0_8_ = local_18e0;
    fVar79 = (float)local_18e0;
    fVar80 = (float)((ulong)local_18e0 >> 0x20);
    fVar73 = fVar80 * fVar48 - fVar79 * fVar51;
    auVar6[4] = SUB41(fVar41,0);
    auVar6._0_4_ = fVar42;
    auVar6[5] = uVar59;
    auVar6[6] = uVar60;
    auVar6[7] = uVar61;
    auVar6[8] = SUB41(fVar77,0);
    auVar6[9] = uVar62;
    auVar6[10] = uVar63;
    auVar6[0xb] = uVar64;
    auVar6[0xc] = SUB41(fVar40,0);
    auVar6[0xd] = uVar65;
    auVar6[0xe] = uVar66;
    auVar6[0xf] = uVar67;
    auVar7[4] = SUB41(fVar41,0);
    auVar7._0_4_ = fVar42;
    auVar7[5] = uVar59;
    auVar7[6] = uVar60;
    auVar7[7] = uVar61;
    auVar7[8] = SUB41(fVar77,0);
    auVar7[9] = uVar62;
    auVar7[10] = uVar63;
    auVar7[0xb] = uVar64;
    auVar7[0xc] = SUB41(fVar40,0);
    auVar7[0xd] = uVar65;
    auVar7[0xe] = uVar66;
    auVar7[0xf] = uVar67;
    auVar75 = NEON_ext(auVar6,auVar7,8,1);
    auVar10._12_4_ = fStack_18d4;
    auVar11._12_4_ = fStack_18d4;
    auVar78 = NEON_ext(auVar10,auVar11,8,1);
    uVar72 = NEON_ext(CONCAT44(fStack_18d8 * fVar51 - fVar80 * fVar53,fVar73),
                      CONCAT44(fVar80 * auVar68._4_4_ - auVar78._4_4_ * fVar51,
                               fVar79 * auVar68._0_4_ - auVar78._0_4_ * fVar48),4,1);
    fVar77 = auVar75._0_4_ + auVar75._0_4_;
    auVar49._0_4_ = fVar79 * fVar71 + (float)uVar72 * fVar54;
    auVar49._4_4_ = fVar80 * fVar71 + (float)((ulong)uVar72 >> 0x20) * fVar54;
    auVar49._8_4_ = fStack_18d8 * fVar71 + fVar73 * fVar54;
    auVar49._12_4_ = fVar54 * 0.0 + 0.0;
    auVar75 = NEON_ext(auVar49,auVar49,8,1);
    auVar69._0_4_ = fVar79 * fVar48;
    auVar69._4_4_ = fVar80 * fVar51;
    auVar69._8_4_ = fStack_18d8 * fVar53;
    auVar69._12_4_ = fStack_18d4 * 0.0;
    auVar78 = NEON_ext(auVar69,auVar69,8,1);
    fVar40 = auVar69._0_4_ + auVar69._4_4_ + auVar78._0_4_ + auVar78._4_4_;
    auVar46._0_4_ = fVar48 * fVar40 + auVar49._0_4_;
    auVar46._4_4_ = fVar51 * fVar40 + auVar49._4_4_;
    auVar46._8_4_ = fVar53 * fVar40 + auVar75._0_4_;
    auVar46._12_4_ = fVar40 * 0.0 + 0.0;
    auVar75 = NEON_ext(auVar46,auVar46,8,1);
    auVar70._0_8_ =
         CONCAT44(local_1310._4_4_ + auVar46._4_4_ + auVar46._4_4_,
                  (float)local_1310 + auVar46._0_4_ + auVar46._0_4_);
    auVar70._8_4_ = (float)uStack_1308 + auVar75._0_4_ + auVar75._0_4_;
    auVar70._12_4_ = uStack_1308._4_4_ + 0.0;
    auVar75 = NEON_ext(auVar70,auVar70,8,1);
    uVar43 = auVar75._0_4_;
    local_1980 = auVar70._0_8_;
    if (0.0 < fVar81) {
      if (uVar52 != 0) goto LAB_002b1a08;
      *(undefined4 *)(param_7 + 0x30) = 0;
      uVar72 = CONCAT44(fVar77,fVar41 + fVar41);
      *(undefined8 *)(param_7 + 0x18) = auVar70._0_8_;
      *(ulong *)(param_7 + 0x20) = CONCAT44(fVar42 + fVar42,uVar43);
      goto LAB_002b1ac4;
    }
    fVar40 = (fVar42 + fVar42) * fVar81;
    fVar48 = (fVar41 + fVar41) * fVar81;
    fVar77 = fVar77 * fVar81;
    fVar81 = (float)local_1930 - fVar40;
    fVar42 = (float)((ulong)local_1930 >> 0x20) - fVar48;
    uVar59 = (undefined1)((uint)fVar42 >> 8);
    uVar60 = (undefined1)((uint)fVar42 >> 0x10);
    uVar61 = (undefined1)((uint)fVar42 >> 0x18);
    local_10cc = (float)uStack_1928 - fVar77;
    fVar41 = (float)(uStack_1928 >> 0x20) - 0.0;
    auVar50._0_8_ = CONCAT44(local_1960._4_4_ - fVar48,(float)local_1960 - fVar40);
    auVar50._8_4_ = (float)uStack_1958 - fVar77;
    auVar50._12_4_ = uStack_1958._4_4_ - 0.0;
    uVar52 = uVar52 + 1;
    local_10d4 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar42,0),fVar81))))
    ;
    bVar14 = true;
    uStack_1958 = auVar50._8_8_;
    uStack_1928 = CONCAT17((char)((uint)fVar41 >> 0x18),
                           CONCAT16((char)((uint)fVar41 >> 0x10),
                                    CONCAT15((char)((uint)fVar41 >> 8),
                                             CONCAT14(SUB41(fVar41,0),local_10cc))));
    local_1930 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar42,0),fVar81))))
    ;
    local_1960 = auVar50._0_8_;
  } while (uVar52 < 4);
  if (bVar14) {
LAB_002b1a08:
    auVar47._0_4_ = (float)local_1960 * (float)local_1960;
    auVar47._4_4_ = local_1960._4_4_ * local_1960._4_4_;
    auVar47._8_4_ = (float)uStack_1958 * (float)uStack_1958;
    auVar47._12_4_ = uStack_1958._4_4_ * uStack_1958._4_4_;
    auVar75 = NEON_ext(auVar47,auVar47,8,1);
    fVar41 = auVar75._0_4_ + auVar75._4_4_;
    fVar77 = auVar47._0_4_ + auVar47._4_4_ + fVar41;
    fVar41 = auVar47._0_4_ + auVar47._4_4_ + fVar41;
    uVar35 = CONCAT44(fVar41,fVar77);
    uVar72 = NEON_frsqrte(uVar35,4);
    fVar81 = (float)uVar72;
    fVar42 = (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar81 * fVar81),uVar35,4);
    fVar81 = fVar81 * (float)uVar72;
    fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar81 * fVar81),uVar35,4);
    fVar81 = fVar81 * (float)uVar72;
    fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar81 * fVar81),uVar35,4);
    fVar81 = fVar81 * (float)uVar72;
    fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frsqrts(CONCAT44(fVar42 * fVar42,fVar81 * fVar81),uVar35,4);
    fVar81 = fVar77 * fVar81 * (float)uVar72;
    fVar41 = fVar41 * fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar59 = (undefined1)((uint)fVar41 >> 8);
    uVar60 = (undefined1)((uint)fVar41 >> 0x10);
    uVar61 = (undefined1)((uint)fVar41 >> 0x18);
    uVar35 = CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar41,0),fVar81)))) ^
             (CONCAT17(uVar61,CONCAT16(uVar60,CONCAT15(uVar59,CONCAT14(SUB41(fVar41,0),fVar81)))) ^
             uVar35) & CONCAT44(-(uint)(fVar77 == 0.0),-(uint)(fVar77 == 0.0));
    uVar44 = NEON_frecpe(uVar35,4);
    uVar72 = NEON_frecps(uVar35,uVar44,4);
    fVar81 = (float)uVar44 * (float)uVar72;
    fVar42 = (float)((ulong)uVar44 >> 0x20) * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frecps(uVar35,CONCAT44(fVar42,fVar81),4);
    fVar81 = fVar81 * (float)uVar72;
    fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frecps(uVar35,CONCAT44(fVar42,fVar81),4);
    fVar81 = fVar81 * (float)uVar72;
    fVar42 = fVar42 * (float)((ulong)uVar72 >> 0x20);
    uVar72 = NEON_frecps(uVar35,CONCAT44(fVar42,fVar81),4);
    fVar81 = fVar81 * (float)uVar72;
    uVar72 = NEON_frecps(uVar35,CONCAT44(fVar42 * (float)((ulong)uVar72 >> 0x20),fVar81),4);
    fVar81 = fVar81 * (float)uVar72;
    iVar8 = -(uint)(0.0 < (float)uVar35);
    bVar55 = (byte)iVar8;
    bVar56 = (byte)((uint)iVar8 >> 8);
    bVar57 = (byte)((uint)iVar8 >> 0x10);
    bVar58 = (byte)((uint)iVar8 >> 0x18);
    local_1960._0_4_ = (float)local_1960 * fVar81;
    local_1960._4_4_ = local_1960._4_4_ * fVar81;
    uStack_1958._0_4_ = (float)uStack_1958 * fVar81;
    uVar72 = CONCAT17(bVar58 & (byte)((uint)(float)uStack_1958 >> 0x18),
                      CONCAT16(bVar57 & (byte)((uint)(float)uStack_1958 >> 0x10),
                               CONCAT15(bVar56 & (byte)((uint)(float)uStack_1958 >> 8),
                                        CONCAT14(bVar55 & SUB41((float)uStack_1958,0),
                                                 CONCAT13(bVar58 & (byte)((uint)local_1960._4_4_ >>
                                                                         0x18),
                                                          CONCAT12(bVar57 & (byte)((uint)local_1960.
                                                                                         _4_4_ >>
                                                                                  0x10),
                                                                   CONCAT11(bVar56 & (byte)((uint)
                                                  local_1960._4_4_ >> 8),
                                                  bVar55 & SUB41(local_1960._4_4_,0))))))));
    *(float *)(param_7 + 0x30) = -(float)uVar35;
    *(undefined4 *)(param_7 + 0x18) = (undefined4)local_1980;
    *(undefined4 *)(param_7 + 0x1c) = local_1980._4_4_;
    *(ulong *)(param_7 + 0x20) =
         CONCAT17(bVar58 & (byte)((uint)(float)local_1960 >> 0x18),
                  CONCAT16(bVar57 & (byte)((uint)(float)local_1960 >> 0x10),
                           CONCAT15(bVar56 & (byte)((uint)(float)local_1960 >> 8),
                                    CONCAT14(bVar55 & SUB41((float)local_1960,0),uVar43))));
LAB_002b1ac4:
    uVar44 = 1;
    *(undefined8 *)(param_7 + 0x28) = uVar72;
    *(uint *)(param_7 + 0x10) = local_18f4;
    lVar37 = local_10b8;
  }
  else {
LAB_002b1ae8:
    uVar44 = 0;
    lVar37 = local_10b8;
  }
  if (((-1 < (long)local_10b0) && ((local_10b0._4_4_ & 0x7fffffff) != 0)) && (lVar37 != 0)) {
    local_10b8 = lVar37;
                    /* try { // try from 002b1b04 to 002b1b17 has its CatchHandler @ 002b1b9c */
    plVar19 = (long *)FUN_00400d30();
    (**(code **)(*plVar19 + 0x18))(plVar19,lVar37);
  }
  return uVar44;
}


