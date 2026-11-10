/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 002b1c30; name: FUN_002b1c30
 */


/* WARNING: Removing unreachable block (ram,0x002b25f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_002b1c30(float param_1,long param_2,float *param_3,float *param_4,undefined8 *param_5,
            uint param_6,undefined4 param_7,long param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  long *plVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined1 *puVar18;
  ulong uVar19;
  uint uVar20;
  long **pplVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar38;
  undefined1 auVar37 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uVar45;
  ulong uVar46;
  undefined1 auVar47 [16];
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar72;
  undefined1 auVar73 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  undefined8 uVar89;
  ulong uVar90;
  undefined8 uVar91;
  ulong uVar92;
  float fVar93;
  undefined8 local_1a00;
  float local_19f0;
  float fStack_19ec;
  float fStack_19e8;
  float fStack_19e4;
  undefined8 local_1930;
  float fStack_1928;
  float fStack_1924;
  undefined8 local_1910;
  float fStack_1908;
  float local_1900;
  float fStack_18fc;
  float fStack_18f8;
  float fStack_18f4;
  float local_18e0;
  long *local_1880 [4];
  undefined1 local_185c [1244];
  undefined8 local_1380;
  ulong uStack_1378;
  undefined8 local_1370;
  ulong uStack_1368;
  undefined8 local_1360;
  ulong uStack_1358;
  undefined8 local_1350;
  ulong uStack_1348;
  undefined *local_1340 [2];
  undefined8 local_1330;
  undefined8 local_1328;
  undefined8 *local_1320;
  undefined8 *local_1318;
  undefined8 *local_1310;
  undefined1 local_1308;
  undefined8 *local_1300;
  float local_12e8;
  float local_12e4;
  float local_12e0;
  float local_12dc;
  float local_12d8;
  float local_12d4;
  undefined8 local_12d0;
  undefined8 uStack_12c8;
  undefined8 local_12c0;
  float fStack_12b8;
  float fStack_12b4;
  undefined8 local_12b0;
  undefined8 uStack_12a8;
  undefined8 local_12a0;
  undefined8 uStack_1298;
  undefined8 local_1290;
  undefined8 uStack_1288;
  undefined1 auStack_1278 [224];
  undefined1 auStack_1198 [104];
  undefined8 local_1130;
  undefined8 local_1128;
  undefined4 local_1120;
  float local_111c;
  float local_1118;
  undefined8 local_1114;
  undefined1 local_110c;
  undefined8 local_1100;
  ulong uStack_10f8;
  undefined8 local_10f0;
  float local_10e8;
  undefined8 local_10e0;
  float local_10d8;
  float local_10d4;
  float local_10d0;
  undefined8 local_10c8;
  long local_10c0;
  long local_10b8;
  undefined8 local_10b0;
  uint local_10a4;
  undefined1 auStack_10a0 [16];
  undefined8 local_1090 [18];
  undefined1 auStack_1000 [3936];
  
  local_10a4 = 0;
  local_10b8 = 0;
  local_10b0 = 0;
                    /* try { // try from 002b1c90 to 002b1c9b has its CatchHandler @ 002b2a18 */
  FUN_001ed4d0(&local_10b8,0x80);
  local_10c8 = *(undefined8 *)(param_2 + 8);
  local_10c0 = param_2;
                    /* try { // try from 002b1cac to 002b1cbb has its CatchHandler @ 002b2a38 */
  fabsf(*(float *)(param_2 + 0x14));
  fabsf(*(float *)(local_10c0 + 0x18));
  local_10d4 = 1.0 / *(float *)(local_10c0 + 0x10);
  local_10d8 = 1.0 / *(float *)(local_10c0 + 0x14);
  local_10d0 = 1.0 / *(float *)(local_10c0 + 0x18);
  fVar75 = *param_4;
  fVar39 = param_4[1];
  fVar40 = param_4[2];
  fVar79 = param_4[3];
  fVar74 = param_4[6];
  fVar41 = param_4[7];
  fVar80 = param_4[4];
  fVar81 = param_4[5];
  fVar42 = param_4[8];
  fStack_1928 = param_4[0xb];
  fVar32 = param_4[9];
  fVar38 = param_4[10];
  local_1930 = *(undefined8 *)(param_4 + 9);
  fVar43 = param_4[0xc];
  fVar30 = param_4[0xd];
  local_1100 = *(undefined8 *)(param_4 + 0xc);
  fVar44 = param_4[0xe];
  uVar69 = *param_5;
  uVar34 = param_5[1];
  fVar65 = *(float *)(param_5 + 3);
  uVar12 = param_5[2];
  local_1130 = 0;
  local_1128 = 0;
  uVar45 = NEON_fminp(CONCAT44(fVar44,fVar44),local_1100,4);
  local_110c = 0;
  local_1114 = 0x37f7fffff;
  uVar45 = NEON_fminp(uVar45,uVar45,4);
  uStack_10f8 = (ulong)(uint)fVar44;
  local_10e8 = (float)uVar45;
  local_111c = DAT_01d4c158 * local_10e8;
  fVar29 = param_1 + local_10e8 * 0.15;
  local_10e0 = CONCAT44(param_1 + (float)((ulong)uVar45 >> 0x20) * 0.15,fVar29);
  local_10f0 = 0;
  local_1120 = 0;
                    /* try { // try from 002b1ddc to 002b1def has its CatchHandler @ 002b2a28 */
  local_1118 = local_111c;
  FUN_0028b370(auStack_1278);
  FUN_0028b4e0(auStack_1278,auStack_1198);
  fVar30 = fVar30 + fVar29;
  uStack_1298 = _UNK_01d4b588;
  local_12a0 = _DAT_01d4b580;
  uStack_1288 = _UNK_01d49dc8;
  local_1290 = _DAT_01d49dc0;
  uStack_12a8 = _UNK_01d4ae58;
  local_12b0 = _DAT_01d4ae50;
  fVar44 = fVar44 + fVar29;
  fVar68 = *param_3;
  fVar28 = param_3[1];
  fVar67 = fVar68 + fVar68;
  fVar43 = fVar43 + fVar29;
  fVar61 = fVar28 + fVar28;
  fVar72 = param_3[2];
  fVar66 = param_3[3];
  fVar93 = param_3[4];
  fVar29 = param_3[5];
  fVar84 = 1.0 - fVar68 * fVar67;
  fVar86 = fVar72 * (fVar72 + fVar72);
  fVar68 = fVar67 * fVar72 - fVar61 * fVar66;
  fVar82 = (fVar72 + fVar72) * fVar66;
  fVar83 = fVar67 * fVar28 + fVar82;
  fVar85 = fVar67 * fVar72 + fVar61 * fVar66;
  fVar87 = fVar61 * fVar72 - fVar67 * fVar66;
  fVar66 = fVar61 * fVar72 + fVar67 * fVar66;
  fVar88 = (1.0 - fVar28 * fVar61) - fVar86;
  fVar86 = fVar84 - fVar86;
  fVar84 = fVar84 - fVar28 * fVar61;
  fVar82 = fVar67 * fVar28 - fVar82;
  fVar28 = param_3[6];
  fStack_1924 = 0.0;
  fStack_12b4 = 0.0;
  uVar45 = CONCAT44(fVar68 * fVar81 + fVar88 * fVar79 + fVar80 * fVar83,
                    fVar68 * fVar40 + fVar75 * fVar88 + fVar83 * fVar39);
  uVar91 = CONCAT44(fVar66 * fVar81 + fVar82 * fVar79 + fVar80 * fVar86,
                    fVar66 * fVar40 + fVar75 * fVar82 + fVar86 * fVar39);
  fVar67 = ((fVar75 + 1.0) - fVar80) - fVar42;
  uVar92 = (ulong)(uint)(fVar42 * fVar66 + fVar82 * fVar74 + fVar86 * fVar41);
  fVar66 = ((1.0 - fVar75) + fVar80) - fVar42;
  uVar89 = CONCAT44(fVar84 * fVar81 + fVar85 * fVar79 + fVar80 * fVar87,
                    fVar84 * fVar40 + fVar75 * fVar85 + fVar87 * fVar39);
  uVar90 = (ulong)(uint)(fVar42 * fVar84 + fVar85 * fVar74 + fVar87 * fVar41);
  plVar13 = (long *)(PTR_DAT_02711ff0 + 0x10);
  fVar72 = ((1.0 - fVar75) - fVar80) + fVar42;
  fVar61 = fVar75 + 1.0 + fVar80 + fVar42;
  uVar46 = (ulong)(uint)(fVar42 * fVar68 + fVar88 * fVar74 + fVar83 * fVar41);
  puVar2 = PTR_DAT_02711eb0 + 0x10;
  bVar27 = false;
  uVar20 = 0;
  uVar22 = 0xfffffff;
  uVar33 = 0;
  local_1a00 = 0;
  fStack_19e8 = 0.0;
  fStack_19e4 = 0.0;
  local_19f0 = 0.0;
  fStack_19ec = 0.0;
  fStack_1908 = 0.0;
  local_1910 = 0;
  fStack_18f8 = 0.0;
  fStack_18f4 = 0.0;
  local_1900 = 0.0;
  fStack_18fc = 0.0;
  local_12d0 = uVar69;
  uStack_12c8 = uVar34;
  local_12c0 = uVar12;
  fStack_12b8 = fVar65;
  do {
    local_10b0 = local_10b0 & 0xffffffff00000000;
    if (0.0 <= fVar42) {
      if (-fVar80 <= fVar75) {
        fVar68 = sqrtf(fVar61);
        fVar68 = 0.5 / fVar68;
        local_18e0 = (fVar81 - fVar41) * fVar68;
        fVar83 = (fVar74 - fVar40) * fVar68;
        fVar82 = (fVar39 - fVar79) * fVar68;
        fVar65 = fVar61;
      }
      else {
        fVar68 = sqrtf(fVar72);
        fVar68 = 0.5 / fVar68;
        local_18e0 = (fVar40 + fVar74) * fVar68;
        fVar83 = (fVar81 + fVar41) * fVar68;
        fVar82 = fVar72 * fVar68;
        fVar65 = fVar39 - fVar79;
      }
    }
    else if (fVar75 <= fVar80) {
      fVar68 = sqrtf(fVar66);
      fVar68 = 0.5 / fVar68;
      local_18e0 = (fVar39 + fVar79) * fVar68;
      fVar83 = fVar66 * fVar68;
      fVar82 = (fVar81 + fVar41) * fVar68;
      fVar65 = fVar74 - fVar40;
    }
    else {
                    /* try { // try from 002b2134 to 002b231f has its CatchHandler @ 002b2a68 */
      fVar68 = sqrtf(fVar67);
      fVar68 = 0.5 / fVar68;
      local_18e0 = fVar67 * fVar68;
      fVar83 = (fVar39 + fVar79) * fVar68;
      fVar82 = (fVar40 + fVar74) * fVar68;
      fVar65 = fVar81 - fVar41;
    }
    fVar77 = fVar83 + fVar83;
    fVar65 = fVar65 * fVar68;
    fVar68 = fVar82 * (fVar82 + fVar82);
    fVar84 = fabsf(fVar43 * ((1.0 - fVar83 * fVar77) - fVar68));
    fVar76 = local_18e0 + local_18e0;
    fVar87 = (fVar82 + fVar82) * fVar65;
    fVar85 = fabsf(fVar30 * (fVar76 * fVar83 - fVar87));
    fVar86 = fabsf(fVar44 * (fVar76 * fVar82 + fVar77 * fVar65));
    fVar87 = fabsf(fVar43 * (fVar76 * fVar83 + fVar87));
    fVar78 = 1.0 - local_18e0 * fVar76;
    fVar88 = fabsf(fVar30 * (fVar78 - fVar68));
    fVar68 = fabsf(fVar44 * (fVar77 * fVar82 - fVar76 * fVar65));
    fVar31 = fabsf(fVar43 * (fVar76 * fVar82 - fVar77 * fVar65));
    fVar65 = fabsf(fVar30 * (fVar77 * fVar82 + fVar76 * fVar65));
    local_12d4 = fabsf(fVar44 * (fVar78 - fVar83 * fVar77));
    fVar86 = fVar84 + fVar85 + fVar86;
    local_12d4 = fVar31 + fVar65 + local_12d4;
    fVar68 = fVar87 + fVar88 + fVar68;
    local_12e8 = fVar32 - fVar86;
    local_12e4 = fVar38 - fVar68;
    local_12e0 = fStack_1928 - local_12d4;
    local_12dc = fVar86 + fVar32;
    local_12d8 = fVar68 + fVar38;
    local_12d4 = local_12d4 + fStack_1928;
    local_1880[1] = &local_10b8;
                    /* try { // try from 002b238c to 002b23a3 has its CatchHandler @ 002b2a48 */
    local_1880[0] = plVar13;
    FUN_00251d90(&local_10d8,param_3,&local_12e8,param_7,local_1880);
    iVar7 = (int)local_10b0;
    if ((int)local_10b0 == 0) goto LAB_002b28b8;
    fVar32 = -fVar32;
    local_1350 = CONCAT44(fVar93 * fVar79 + fVar80 * fVar29 + fVar28 * fVar81 +
                          ((fVar79 * fVar32 - fVar80 * fVar38) - fVar81 * fStack_1928),
                          fVar75 * fVar93 + fVar29 * fVar39 + fVar28 * fVar40 +
                          ((fVar75 * fVar32 - fVar39 * fVar38) - fVar40 * fStack_1928));
    local_1320 = &local_12d0;
    fStack_12b8 = fStack_1928;
    fStack_12b4 = fStack_1924;
    local_12c0 = local_1930;
    local_1318 = &local_12b0;
    local_1308 = 1;
    uStack_1348 = (ulong)(uint)(fVar93 * fVar74 + fVar29 * fVar41 + fVar42 * fVar28 +
                               ((fVar74 * fVar32 - fVar41 * fVar38) - fVar42 * fStack_1928));
    local_1300 = &local_1130;
    uVar4 = (int)local_10b0 + 0x1fU >> 5;
    local_1330 = 0;
    local_1328 = 0;
    local_1380 = uVar45;
    uStack_1378 = uVar46;
    local_1370 = uVar91;
    uStack_1368 = uVar92;
    local_1360 = uVar89;
    uStack_1358 = uVar90;
    local_1340[0] = puVar2;
    local_1310 = local_1318;
    if (uVar4 == 0) goto LAB_002b28b8;
    fVar65 = 3.4028235e+38;
    lVar25 = 0;
    uVar23 = 0;
    uVar24 = 0;
    do {
      uVar16 = iVar7 + (int)uVar23 * -0x20;
      if (0x1f < uVar16) {
        uVar16 = 0x20;
      }
      if (uVar16 != 0) {
        uVar19 = 0;
        uVar26 = (ulong)uVar16;
        pplVar21 = local_1880;
        do {
                    /* try { // try from 002b24fc to 002b251b has its CatchHandler @ 002b2aa0 */
          FUN_002523d0(&local_10d8,param_3,pplVar21,0,0,
                       *(undefined4 *)(local_10b8 + lVar25 + uVar19 * 4),0,0);
          uVar19 = uVar19 + 1;
          *(undefined1 *)((long)pplVar21 + 0x24) = 0x38;
          pplVar21 = pplVar21 + 5;
        } while (uVar19 < uVar26);
        if (uVar16 == 0) {
        }
        else {
          uVar19 = 0;
          uVar16 = 0;
          do {
            while( true ) {
              uVar3 = (int)uVar23 * 0x20 + (int)uVar19;
              local_10a4 = 0;
                    /* try { // try from 002b2560 to 002b2593 has its CatchHandler @ 002b2a58 */
              FUN_0026d950(auStack_1198,local_1340,local_1880 + uVar19 * 5,uVar3,
                           local_185c[uVar19 * 0x28],&local_10e0,param_6 & 1,&local_12d0,&local_1380
                           ,auStack_10a0,&local_10a4);
              if (local_10a4 != 0) break;
LAB_002b25c4:
              uVar19 = uVar19 + 1;
              if (uVar19 == uVar26) goto LAB_002b26dc;
            }
            fVar32 = (float)((ulong)local_1090[3] >> 0x20);
            if (local_10a4 == 1) {
              uVar15 = 0;
            }
            else {
              if (local_10a4 == 2) {
                uVar14 = 0;
                lVar17 = 1;
LAB_002b2660:
                fVar38 = (float)((ulong)local_1090[lVar17 * 8 + 3] >> 0x20);
                uVar16 = (uint)lVar17;
                if (fVar38 >= fVar32) {
                  uVar16 = uVar14;
                }
                fVar32 = (float)((uint)fVar32 ^
                                ((uint)fVar32 ^ (uint)fVar38) & -(uint)(fVar38 < fVar32));
                uVar14 = uVar16;
              }
              else {
                lVar17 = 1;
                puVar18 = auStack_1000;
                uVar16 = 0;
                do {
                  fVar82 = (float)((ulong)*(undefined8 *)(puVar18 + -0x38) >> 0x20);
                  fVar38 = (float)((uint)fVar32 ^
                                  ((uint)fVar32 ^ (uint)fVar82) & -(uint)(fVar82 < fVar32));
                  puVar1 = (undefined8 *)(puVar18 + 8);
                  puVar18 = puVar18 + 0x80;
                  fVar68 = (float)((ulong)*puVar1 >> 0x20);
                  uVar14 = (uint)lVar17;
                  if (fVar82 >= fVar32) {
                    uVar14 = uVar16;
                  }
                  if (fVar68 < fVar38) {
                    uVar14 = (uint)lVar17 + 1;
                  }
                  fVar32 = (float)((uint)fVar38 ^
                                  ((uint)fVar38 ^ (uint)fVar68) & -(uint)(fVar68 < fVar38));
                  lVar17 = lVar17 + 2;
                  uVar16 = uVar14;
                } while ((ulong)local_10a4 - (ulong)(~local_10a4 & 1) != lVar17);
                if ((~local_10a4 & 1) != 0) goto LAB_002b2660;
              }
              uVar15 = (ulong)uVar14;
            }
            if (fVar65 <= fVar32) {
              uVar16 = 1;
              goto LAB_002b25c4;
            }
            local_1910 = local_1090[uVar15 * 8 + 2];
            fStack_18f8 = (float)local_1090[uVar15 * 8 + 1];
            fStack_18f4 = (float)((ulong)local_1090[uVar15 * 8 + 1] >> 0x20);
            local_1900 = (float)local_1090[uVar15 * 8];
            fStack_18fc = (float)((ulong)local_1090[uVar15 * 8] >> 0x20);
            uVar16 = 1;
            fStack_1908 = (float)local_1090[uVar15 * 8 + 3];
            uVar19 = uVar19 + 1;
            uVar22 = uVar3;
            fVar65 = fVar32;
          } while (uVar19 != uVar26);
        }
      }
LAB_002b26dc:
      uVar23 = uVar23 + 1;
      uVar24 = uVar24 | uVar16;
      lVar25 = lVar25 + 0x80;
    } while (uVar23 < uVar4);
    if ((uVar24 & 1) == 0) goto LAB_002b28b8;
    auVar11._8_8_ = uStack_12c8;
    auVar11._0_8_ = local_12d0;
    fVar86 = (float)((ulong)uStack_12c8 >> 0x20);
    auVar8._8_4_ = fStack_1908;
    auVar8._0_8_ = local_1910;
    auVar62._8_4_ = fStack_1908;
    auVar62._0_8_ = local_1910;
    fVar88 = (float)local_1910;
    fVar31 = (float)((ulong)local_1910 >> 0x20);
    auVar35._0_12_ = auVar11._0_12_;
    auVar35._12_4_ = 0;
    auVar62._12_4_ = 0;
    auVar8._12_4_ = 0;
    auVar70 = NEON_ext(auVar62,auVar8,8,1);
    fVar84 = (float)((ulong)local_12d0 >> 0x20);
    fVar85 = (float)uStack_12c8;
    fVar87 = fVar86 * fVar86 + -0.5;
    auVar62 = NEON_ext(auVar35,auVar35,8,1);
    fVar83 = (float)local_12d0;
    fVar68 = fVar31 * fVar83 - fVar88 * fVar84;
    uVar69 = NEON_ext(CONCAT44(fStack_1908 * fVar84 - fVar31 * fVar85,fVar68),
                      CONCAT44(fVar31 * auVar62._4_4_ - auVar70._4_4_ * fVar84,
                               fVar88 * auVar62._0_4_ - auVar70._0_4_ * fVar83),4,1);
    uVar22 = *(uint *)(local_10b8 + (ulong)uVar22 * 4);
    fVar32 = fVar88 * fVar87 + (float)uVar69 * fVar86;
    fVar38 = fVar31 * fVar87 + (float)((ulong)uVar69 >> 0x20) * fVar86;
    uVar52 = (undefined1)((uint)fVar38 >> 8);
    uVar53 = (undefined1)((uint)fVar38 >> 0x10);
    uVar54 = (undefined1)((uint)fVar38 >> 0x18);
    fVar68 = fStack_1908 * fVar87 + fVar68 * fVar86;
    uVar55 = (undefined1)((uint)fVar68 >> 8);
    uVar56 = (undefined1)((uint)fVar68 >> 0x10);
    uVar57 = (undefined1)((uint)fVar68 >> 0x18);
    fVar82 = fVar86 * 0.0 + 0.0;
    uVar58 = (undefined1)((uint)fVar82 >> 8);
    uVar59 = (undefined1)((uint)fVar82 >> 0x10);
    uVar60 = (undefined1)((uint)fVar82 >> 0x18);
    auVar70[4] = SUB41(fVar38,0);
    auVar70._0_4_ = fVar32;
    auVar70[5] = uVar52;
    auVar70[6] = uVar53;
    auVar70[7] = uVar54;
    auVar70[8] = SUB41(fVar68,0);
    auVar70[9] = uVar55;
    auVar70[10] = uVar56;
    auVar70[0xb] = uVar57;
    auVar70[0xc] = SUB41(fVar82,0);
    auVar70[0xd] = uVar58;
    auVar70[0xe] = uVar59;
    auVar70[0xf] = uVar60;
    auVar73[4] = SUB41(fVar38,0);
    auVar73._0_4_ = fVar32;
    auVar73[5] = uVar52;
    auVar73[6] = uVar53;
    auVar73[7] = uVar54;
    auVar73[8] = SUB41(fVar68,0);
    auVar73[9] = uVar55;
    auVar73[10] = uVar56;
    auVar73[0xb] = uVar57;
    auVar73[0xc] = SUB41(fVar82,0);
    auVar73[0xd] = uVar58;
    auVar73[0xe] = uVar59;
    auVar73[0xf] = uVar60;
    auVar70 = NEON_ext(auVar70,auVar73,8,1);
    auVar71._0_4_ = fVar88 * fVar83;
    auVar71._4_4_ = fVar31 * fVar84;
    auVar71._8_4_ = fStack_1908 * fVar85;
    auVar71._12_4_ = 0;
    auVar10._4_4_ = fStack_18fc;
    auVar10._0_4_ = local_1900;
    auVar10._8_4_ = fStack_18f8;
    auVar9._4_4_ = fStack_18fc;
    auVar9._0_4_ = local_1900;
    auVar9._8_4_ = fStack_18f8;
    auVar73 = NEON_ext(auVar71,auVar71,8,1);
    fVar82 = auVar71._0_4_ + auVar71._4_4_ + auVar73._0_4_ + auVar73._4_4_;
    fVar32 = fVar83 * fVar82 + fVar32;
    fVar38 = fVar84 * fVar82 + fVar38;
    uVar52 = (undefined1)((uint)fVar38 >> 8);
    uVar53 = (undefined1)((uint)fVar38 >> 0x10);
    uVar54 = (undefined1)((uint)fVar38 >> 0x18);
    fVar68 = fVar85 * fVar82 + auVar70._0_4_;
    uVar55 = (undefined1)((uint)fVar68 >> 8);
    uVar56 = (undefined1)((uint)fVar68 >> 0x10);
    uVar57 = (undefined1)((uint)fVar68 >> 0x18);
    fVar82 = fVar82 * 0.0 + 0.0;
    uVar58 = (undefined1)((uint)fVar82 >> 8);
    uVar59 = (undefined1)((uint)fVar82 >> 0x10);
    uVar60 = (undefined1)((uint)fVar82 >> 0x18);
    fVar88 = fStack_18fc * fVar83 - local_1900 * fVar84;
    auVar5[4] = SUB41(fVar38,0);
    auVar5._0_4_ = fVar32;
    auVar5[5] = uVar52;
    auVar5[6] = uVar53;
    auVar5[7] = uVar54;
    auVar5[8] = SUB41(fVar68,0);
    auVar5[9] = uVar55;
    auVar5[10] = uVar56;
    auVar5[0xb] = uVar57;
    auVar5[0xc] = SUB41(fVar82,0);
    auVar5[0xd] = uVar58;
    auVar5[0xe] = uVar59;
    auVar5[0xf] = uVar60;
    auVar6[4] = SUB41(fVar38,0);
    auVar6._0_4_ = fVar32;
    auVar6[5] = uVar52;
    auVar6[6] = uVar53;
    auVar6[7] = uVar54;
    auVar6[8] = SUB41(fVar68,0);
    auVar6[9] = uVar55;
    auVar6[10] = uVar56;
    auVar6[0xb] = uVar57;
    auVar6[0xc] = SUB41(fVar82,0);
    auVar6[0xd] = uVar58;
    auVar6[0xe] = uVar59;
    auVar6[0xf] = uVar60;
    auVar70 = NEON_ext(auVar5,auVar6,8,1);
    auVar9._12_4_ = fStack_18f4;
    auVar10._12_4_ = fStack_18f4;
    auVar73 = NEON_ext(auVar9,auVar10,8,1);
    uVar69 = NEON_ext(CONCAT44(fStack_18f8 * fVar84 - fStack_18fc * fVar85,fVar88),
                      CONCAT44(fStack_18fc * auVar62._4_4_ - auVar73._4_4_ * fVar84,
                               local_1900 * auVar62._0_4_ - auVar73._0_4_ * fVar83),4,1);
    fVar68 = auVar70._0_4_ + auVar70._0_4_;
    auVar47._0_4_ = local_1900 * fVar87 + (float)uVar69 * fVar86;
    auVar47._4_4_ = fStack_18fc * fVar87 + (float)((ulong)uVar69 >> 0x20) * fVar86;
    auVar47._8_4_ = fStack_18f8 * fVar87 + fVar88 * fVar86;
    auVar47._12_4_ = fVar86 * 0.0 + 0.0;
    auVar70 = NEON_ext(auVar47,auVar47,8,1);
    auVar63._0_4_ = local_1900 * fVar83;
    auVar63._4_4_ = fStack_18fc * fVar84;
    auVar63._8_4_ = fStack_18f8 * fVar85;
    auVar63._12_4_ = fStack_18f4 * 0.0;
    auVar73 = NEON_ext(auVar63,auVar63,8,1);
    fVar82 = auVar63._0_4_ + auVar63._4_4_ + auVar73._0_4_ + auVar73._4_4_;
    auVar36._0_4_ = fVar83 * fVar82 + auVar47._0_4_;
    auVar36._4_4_ = fVar84 * fVar82 + auVar47._4_4_;
    auVar36._8_4_ = fVar85 * fVar82 + auVar70._0_4_;
    auVar36._12_4_ = fVar82 * 0.0 + 0.0;
    auVar70 = NEON_ext(auVar36,auVar36,8,1);
    auVar64._0_8_ =
         CONCAT44(local_12c0._4_4_ + auVar36._4_4_ + auVar36._4_4_,
                  (float)local_12c0 + auVar36._0_4_ + auVar36._0_4_);
    auVar64._8_4_ = fStack_12b8 + auVar70._0_4_ + auVar70._0_4_;
    auVar64._12_4_ = fStack_12b4 + 0.0;
    auVar70 = NEON_ext(auVar64,auVar64,8,1);
    uVar33 = auVar70._0_4_;
    local_1a00 = auVar64._0_8_;
    if (0.0 < fVar65) {
      if (uVar20 == 0) {
        *(undefined4 *)(param_8 + 0x30) = 0;
        uVar69 = CONCAT44(fVar68,fVar38 + fVar38);
        *(undefined8 *)(param_8 + 0x18) = auVar64._0_8_;
        *(ulong *)(param_8 + 0x20) = CONCAT44(fVar32 + fVar32,uVar33);
        goto LAB_002b2978;
      }
      bVar27 = true;
      goto LAB_002b28b8;
    }
    fVar32 = (fVar32 + fVar32) * fVar65;
    fVar38 = (fVar38 + fVar38) * fVar65;
    fVar68 = fVar68 * fVar65;
    local_19f0 = local_19f0 - fVar32;
    fStack_19ec = fStack_19ec - fVar38;
    fStack_19e8 = fStack_19e8 - fVar68;
    fStack_19e4 = fStack_19e4 - 0.0;
    fVar32 = (float)local_1930 - fVar32;
    fVar38 = local_1930._4_4_ - fVar38;
    fStack_1928 = fStack_1928 - fVar68;
    fStack_1924 = fStack_1924 - 0.0;
    uVar20 = uVar20 + 1;
    bVar27 = true;
    local_1930 = CONCAT44(fVar38,fVar32);
    if (3 < uVar20) {
LAB_002b28b8:
      if (bVar27) {
        auVar37._0_4_ = local_19f0 * local_19f0;
        auVar37._4_4_ = fStack_19ec * fStack_19ec;
        auVar37._8_4_ = fStack_19e8 * fStack_19e8;
        auVar37._12_4_ = fStack_19e4 * fStack_19e4;
        auVar70 = NEON_ext(auVar37,auVar37,8,1);
        fVar30 = auVar70._0_4_ + auVar70._4_4_;
        fVar28 = auVar37._0_4_ + auVar37._4_4_ + fVar30;
        fVar30 = auVar37._0_4_ + auVar37._4_4_ + fVar30;
        uVar46 = CONCAT44(fVar30,fVar28);
        uVar69 = NEON_frsqrte(uVar46,4);
        fVar32 = (float)uVar69;
        fVar38 = (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frsqrts(CONCAT44(fVar38 * fVar38,fVar32 * fVar32),uVar46,4);
        fVar32 = fVar32 * (float)uVar69;
        fVar38 = fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frsqrts(CONCAT44(fVar38 * fVar38,fVar32 * fVar32),uVar46,4);
        fVar32 = fVar32 * (float)uVar69;
        fVar38 = fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frsqrts(CONCAT44(fVar38 * fVar38,fVar32 * fVar32),uVar46,4);
        fVar32 = fVar32 * (float)uVar69;
        fVar38 = fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frsqrts(CONCAT44(fVar38 * fVar38,fVar32 * fVar32),uVar46,4);
        fVar32 = fVar28 * fVar32 * (float)uVar69;
        fVar30 = fVar30 * fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar52 = (undefined1)((uint)fVar30 >> 8);
        uVar53 = (undefined1)((uint)fVar30 >> 0x10);
        uVar54 = (undefined1)((uint)fVar30 >> 0x18);
        uVar46 = CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(SUB41(fVar30,0),fVar32))))
                 ^ (CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(SUB41(fVar30,0),fVar32)
                                                            ))) ^ uVar46) &
                   CONCAT44(-(uint)(fVar28 == 0.0),-(uint)(fVar28 == 0.0));
        uVar34 = NEON_frecpe(uVar46,4);
        uVar69 = NEON_frecps(uVar46,uVar34,4);
        fVar32 = (float)uVar34 * (float)uVar69;
        fVar38 = (float)((ulong)uVar34 >> 0x20) * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar46,CONCAT44(fVar38,fVar32),4);
        fVar32 = fVar32 * (float)uVar69;
        fVar38 = fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar46,CONCAT44(fVar38,fVar32),4);
        fVar32 = fVar32 * (float)uVar69;
        fVar38 = fVar38 * (float)((ulong)uVar69 >> 0x20);
        uVar69 = NEON_frecps(uVar46,CONCAT44(fVar38,fVar32),4);
        fVar32 = fVar32 * (float)uVar69;
        uVar69 = NEON_frecps(uVar46,CONCAT44(fVar38 * (float)((ulong)uVar69 >> 0x20),fVar32),4);
        fVar32 = fVar32 * (float)uVar69;
        iVar7 = -(uint)(0.0 < (float)uVar46);
        bVar48 = (byte)iVar7;
        bVar49 = (byte)((uint)iVar7 >> 8);
        bVar50 = (byte)((uint)iVar7 >> 0x10);
        bVar51 = (byte)((uint)iVar7 >> 0x18);
        local_19f0 = local_19f0 * fVar32;
        fStack_19ec = fStack_19ec * fVar32;
        fStack_19e8 = fStack_19e8 * fVar32;
        uVar69 = CONCAT17(bVar51 & (byte)((uint)fStack_19e8 >> 0x18),
                          CONCAT16(bVar50 & (byte)((uint)fStack_19e8 >> 0x10),
                                   CONCAT15(bVar49 & (byte)((uint)fStack_19e8 >> 8),
                                            CONCAT14(bVar48 & SUB41(fStack_19e8,0),
                                                     CONCAT13(bVar51 & (byte)((uint)fStack_19ec >>
                                                                             0x18),
                                                              CONCAT12(bVar50 & (byte)((uint)
                                                  fStack_19ec >> 0x10),
                                                  CONCAT11(bVar49 & (byte)((uint)fStack_19ec >> 8),
                                                           bVar48 & SUB41(fStack_19ec,0))))))));
        *(float *)(param_8 + 0x30) = -(float)uVar46;
        *(undefined4 *)(param_8 + 0x18) = (undefined4)local_1a00;
        *(undefined4 *)(param_8 + 0x1c) = local_1a00._4_4_;
        *(ulong *)(param_8 + 0x20) =
             CONCAT17(bVar51 & (byte)((uint)local_19f0 >> 0x18),
                      CONCAT16(bVar50 & (byte)((uint)local_19f0 >> 0x10),
                               CONCAT15(bVar49 & (byte)((uint)local_19f0 >> 8),
                                        CONCAT14(bVar48 & SUB41(local_19f0,0),uVar33))));
LAB_002b2978:
        uVar34 = 1;
        *(undefined8 *)(param_8 + 0x28) = uVar69;
        *(uint *)(param_8 + 0x10) = uVar22;
        lVar25 = local_10b8;
      }
      else {
        uVar34 = 0;
        lVar25 = local_10b8;
      }
      if (((-1 < (long)local_10b0) && ((local_10b0._4_4_ & 0x7fffffff) != 0)) && (lVar25 != 0)) {
        local_10b8 = lVar25;
                    /* try { // try from 002b29ac to 002b29bf has its CatchHandler @ 002b2a14 */
        plVar13 = (long *)FUN_00400d30();
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar25);
      }
      return uVar34;
    }
  } while( true );
}


