/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004a93b0; name: FUN_004a93b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_004a93b0(float param_1,float param_2,float param_3,undefined8 param_4,undefined4 *param_5,
                 uint param_6,uint param_7,ulong param_8,undefined8 param_9,undefined8 param_10,
                 long param_11)

{
  float *pfVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  float *pfVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  undefined1 (*pauVar33) [16];
  undefined4 *puVar34;
  undefined1 (*pauVar35) [16];
  undefined1 (*pauVar36) [16];
  uint *puVar37;
  uint uVar38;
  undefined4 *puVar39;
  ulong uVar40;
  undefined1 (*pauVar41) [16];
  undefined4 *puVar42;
  ulong uVar43;
  uint *puVar44;
  long lVar45;
  float *pfVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  float *pfVar49;
  float *pfVar50;
  uint uVar51;
  uint uVar52;
  float *pfVar53;
  undefined *puVar54;
  long lVar55;
  undefined4 *puVar56;
  uint uVar57;
  long lVar58;
  int iVar59;
  ulong uVar60;
  ulong uVar61;
  float *pfVar62;
  long lVar63;
  uint uVar64;
  float *pfVar65;
  long lVar66;
  long lVar67;
  float fVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  undefined1 auVar88 [16];
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  undefined1 auVar97 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  undefined1 auVar103 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float afStack_7ffffffc [536870131];
  float afStack_c30 [536];
  float local_3d0 [128];
  float local_1d0 [2];
  undefined1 (*local_1c8) [16];
  long local_1c0 [2];
  undefined4 *local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 (*local_198) [16];
  undefined1 (*local_190) [16];
  undefined1 *local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  undefined4 *local_168;
  ulong local_160;
  undefined4 *local_158;
  ulong local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined1 (*local_120) [16];
  undefined8 local_118;
  ulong local_110;
  float *local_108;
  undefined1 *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  undefined4 *local_e0;
  undefined1 (*local_d8) [16];
  ulong local_d0;
  ulong local_c8;
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined4 *local_b0;
  float local_a8 [2];
  
  uVar57 = (uint)param_8;
  uVar51 = uVar57 >> 8 & 0xf;
  local_b0 = param_5;
  uVar52 = uVar57;
  if (uVar51 == 1) {
    uVar38 = uVar57 >> 0xc & 0xffff7;
    uVar52 = uVar38 - (uVar38 >> 1 & 0x55555555);
    uVar52 = (uVar52 & 0x33333333) + (uVar52 >> 2 & 0x33333333);
    uVar52 = (uVar52 + (uVar52 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar38 << 0xc | 0x100;
  }
  uVar38 = uVar52 & 0xff;
  uVar4 = param_6 & 0xff;
  uVar60 = (ulong)uVar4;
  iVar59 = uVar38 - 1;
  local_b8 = CONCAT44(local_b8._4_4_,iVar59);
  if (uVar38 == 0 || iVar59 == 0) {
    if (iVar59 != 0) {
      return;
    }
    if ((param_6 & 0xf00) == 0x200) {
      *param_5 = 0x3f800000;
      return;
    }
    uVar43 = 0;
    do {
      if ((param_7 & 0xffff & *(uint *)(&DAT_01d56800 + uVar43 * 4 + (ulong)(uVar4 - 1) * 0x20)) !=
          0) {
        param_5[(*(uint *)(&DAT_01d56800 + uVar43 * 4 + (ulong)(uVar4 - 1) * 0x20) >> 0x10) *
                ((uVar57 & 0xff) + 3 & 0x1fc)] = 0x3f800000;
      }
      uVar43 = uVar43 + 1;
    } while (uVar43 < uVar60);
    return;
  }
  uVar7 = param_6 >> 8 & 0xf;
  if ((uVar7 == 0) || (uVar51 == 0)) {
    uVar57 = uVar57 & 0xff;
    uVar52 = uVar57 + 3 & 0x1fc;
    uVar43 = (ulong)uVar52;
    if (uVar52 * uVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(param_5,0,(ulong)(uVar52 * uVar4 * 4));
    }
    if ((param_6 & 0xf00) == 0x200) {
      if ((param_6 & 0xff) == 0) {
        return;
      }
      if ((param_8 & 0xff) == 0) {
        return;
      }
      uVar38 = *(uint *)(&DAT_01d568dc + uVar60 * 4);
      uVar60 = 0;
      uVar51 = 0;
      while( true ) {
        if ((1 << (ulong)((uint)uVar60 & 0x1f) & uVar38) == 0) {
          uVar7 = uVar51 * uVar52;
          uVar51 = uVar51 + 1;
          param_5[uVar7 + uVar60] = 0x3f800000;
        }
        uVar60 = uVar60 + 1;
        if (uVar57 <= uVar60) break;
        if (uVar4 <= uVar51) {
          return;
        }
      }
      return;
    }
    if (uVar57 <= uVar4) {
      uVar4 = uVar57;
    }
    uVar60 = (ulong)uVar4;
    if (uVar4 == 0) {
      return;
    }
    if (uVar60 - 1 < 3) {
      lVar58 = 0;
    }
    else {
      lVar55 = 3;
      puVar42 = param_5;
      do {
        lVar58 = lVar55;
        *puVar42 = 0x3f800000;
        puVar42[uVar43 + 1] = 0x3f800000;
        lVar55 = lVar58 + 4;
        puVar42[uVar43 * 2 + 2] = 0x3f800000;
        puVar42[uVar43 * 3 + 3] = 0x3f800000;
        puVar42 = puVar42 + uVar43 * 4 + 4;
      } while (((uVar60 & 3) - uVar60) + lVar55 != 3);
      lVar58 = lVar58 + 1;
    }
    if ((uVar4 & 3) == 0) {
      return;
    }
    param_5 = (undefined4 *)((long)param_5 + lVar58 * (uVar43 * 4 + 4));
    lVar55 = -(uVar60 & 3);
    do {
      *param_5 = 0x3f800000;
      param_5 = param_5 + uVar43 + 1;
      lVar55 = lVar55 + 1;
    } while (lVar55 != 0);
    return;
  }
  local_c0 = (undefined4 *)(ulong)uVar38;
  fVar73 = param_2 * DAT_01d4c4d4;
  if (uVar7 == 2) {
    local_118 = uVar60;
    FUN_004acd00(&DAT_01d56600,0x20,param_4,param_10,local_3d0);
    fVar68 = DAT_01d4bd30;
    fVar73 = fVar73 * param_2 * DAT_01d4c6b4 + 0.5;
    uVar38 = (uint)local_118;
    if (uVar51 == 2) {
      uVar57 = uVar57 & 0xff;
      uVar52 = uVar57;
      if (uVar38 <= uVar57) {
        uVar52 = uVar38;
      }
      if (uVar52 < 5) {
        puVar42 = (undefined4 *)&DAT_01d551ac;
        uVar60 = 4;
        puVar54 = &DAT_01d5519c;
      }
      else if ((uVar52 < 10) && (1 < uVar52 - 7)) {
        puVar42 = &DAT_01d553d0;
        uVar60 = 9;
        puVar54 = &DAT_01d553ac;
      }
      else {
        if (0x10 < uVar52) {
          return;
        }
        puVar42 = (undefined4 *)&DAT_01d55890;
        uVar60 = 0x10;
        puVar54 = &DAT_01d55850;
      }
      uVar52 = (uint)uVar60;
      lVar55 = -(ulong)(uVar52 << 7);
      puVar56 = (undefined4 *)((long)local_3d0 + lVar55);
      if (uVar52 < 5) {
        *(float *)((long)local_3d0 + lVar55 + 0x80) = -local_3d0[0];
        *(float *)((long)local_3d0 + lVar55 + 0x84) = -local_3d0[4];
        *(float *)((long)local_3d0 + lVar55 + 0x88) = -local_3d0[8];
        *(float *)((long)local_3d0 + lVar55 + 0x8c) = -local_3d0[0xc];
        *(float *)((long)local_3d0 + lVar55 + 0x90) = -local_3d0[0x10];
        *(float *)((long)local_3d0 + lVar55 + 0x94) = -local_3d0[0x14];
        *(float *)((long)local_3d0 + lVar55 + 0x98) = -local_3d0[0x18];
        *(float *)((long)local_3d0 + lVar55 + 0x9c) = -local_3d0[0x1c];
        *(float *)((long)local_3d0 + lVar55 + 0xa0) = -local_3d0[0x20];
        *(float *)((long)local_3d0 + lVar55 + 0xa4) = -local_3d0[0x24];
        *(float *)((long)local_3d0 + lVar55 + 0xa8) = -local_3d0[0x28];
        *(float *)((long)local_3d0 + lVar55 + 0xac) = -local_3d0[0x2c];
        *(float *)((long)local_3d0 + lVar55 + 0xb0) = -local_3d0[0x30];
        *(float *)((long)local_3d0 + lVar55 + 0xb4) = -local_3d0[0x34];
        *(float *)((long)local_3d0 + lVar55 + 0xb8) = -local_3d0[0x38];
        *(float *)((long)local_3d0 + lVar55 + 0xbc) = -local_3d0[0x3c];
        *(float *)((long)local_3d0 + lVar55 + 0x100) = local_3d0[1];
        *(float *)((long)local_3d0 + lVar55 + 0x180) = local_3d0[2];
        *(float *)((long)local_3d0 + lVar55 + 0x104) = local_3d0[5];
        *(float *)((long)local_3d0 + lVar55 + 0x184) = local_3d0[6];
        *(float *)((long)local_3d0 + lVar55 + 0x108) = local_3d0[9];
        *(float *)((long)local_3d0 + lVar55 + 0x188) = local_3d0[10];
        *(float *)((long)local_3d0 + lVar55 + 0xc0) = -local_3d0[0x40];
        *(float *)((long)local_3d0 + lVar55 + 0x10c) = local_3d0[0xd];
        *(float *)((long)local_3d0 + lVar55 + 0x18c) = local_3d0[0xe];
        *(float *)((long)local_3d0 + lVar55 + 0x110) = local_3d0[0x11];
        *(float *)((long)local_3d0 + lVar55 + 400) = local_3d0[0x12];
        *(float *)((long)local_3d0 + lVar55 + 0x114) = local_3d0[0x15];
        *(float *)((long)local_3d0 + lVar55 + 0x194) = local_3d0[0x16];
        *(float *)((long)local_3d0 + lVar55 + 0xc4) = -local_3d0[0x44];
        *(float *)((long)local_3d0 + lVar55 + 200) = -local_3d0[0x48];
        *(float *)((long)local_3d0 + lVar55 + 0x118) = local_3d0[0x19];
        *(float *)((long)local_3d0 + lVar55 + 0x198) = local_3d0[0x1a];
        *(float *)((long)local_3d0 + lVar55 + 0x11c) = local_3d0[0x1d];
        *(float *)((long)local_3d0 + lVar55 + 0x19c) = local_3d0[0x1e];
        *(float *)((long)local_3d0 + lVar55 + 0x120) = local_3d0[0x21];
        *(float *)((long)local_3d0 + lVar55 + 0x1a0) = local_3d0[0x22];
        *(float *)((long)local_3d0 + lVar55 + 0xcc) = -local_3d0[0x4c];
        *(float *)((long)local_3d0 + lVar55 + 0x124) = local_3d0[0x25];
        *(float *)((long)local_3d0 + lVar55 + 0x1a4) = local_3d0[0x26];
        *(float *)((long)local_3d0 + lVar55 + 0x128) = local_3d0[0x29];
        *(float *)((long)local_3d0 + lVar55 + 0x1a8) = local_3d0[0x2a];
        *(float *)((long)local_3d0 + lVar55 + 300) = local_3d0[0x2d];
        *(float *)((long)local_3d0 + lVar55 + 0x1ac) = local_3d0[0x2e];
        *(float *)((long)local_3d0 + lVar55 + 0xd0) = -local_3d0[0x50];
        *(float *)((long)local_3d0 + lVar55 + 0xd4) = -local_3d0[0x54];
        *(float *)((long)local_3d0 + lVar55 + 0x130) = local_3d0[0x31];
        *(float *)((long)local_3d0 + lVar55 + 0x1b0) = local_3d0[0x32];
        *(float *)((long)local_3d0 + lVar55 + 0x134) = local_3d0[0x35];
        *(float *)((long)local_3d0 + lVar55 + 0x1b4) = local_3d0[0x36];
        *(float *)((long)local_3d0 + lVar55 + 0x138) = local_3d0[0x39];
        *(float *)((long)local_3d0 + lVar55 + 0x1b8) = local_3d0[0x3a];
        *(float *)((long)local_3d0 + lVar55 + 0xd8) = -local_3d0[0x58];
        *(float *)((long)local_3d0 + lVar55 + 0x13c) = local_3d0[0x3d];
        *(float *)((long)local_3d0 + lVar55 + 0x1bc) = local_3d0[0x3e];
        *(float *)((long)local_3d0 + lVar55 + 0x140) = local_3d0[0x41];
        *(float *)((long)local_3d0 + lVar55 + 0x1c0) = local_3d0[0x42];
        *(float *)((long)local_3d0 + lVar55 + 0x144) = local_3d0[0x45];
        *(float *)((long)local_3d0 + lVar55 + 0x1c4) = local_3d0[0x46];
        *(float *)((long)local_3d0 + lVar55 + 0x148) = local_3d0[0x49];
        *(float *)((long)local_3d0 + lVar55 + 0x1c8) = local_3d0[0x4a];
        *(float *)((long)local_3d0 + lVar55 + 0x14c) = local_3d0[0x4d];
        *(float *)((long)local_3d0 + lVar55 + 0x1cc) = local_3d0[0x4e];
        *(float *)((long)local_3d0 + lVar55 + 0x150) = local_3d0[0x51];
        *(float *)((long)local_3d0 + lVar55 + 0x1d0) = local_3d0[0x52];
        *(float *)((long)local_3d0 + lVar55 + 0x154) = local_3d0[0x55];
        *(float *)((long)local_3d0 + lVar55 + 0x1d4) = local_3d0[0x56];
        *(float *)((long)local_3d0 + lVar55 + 0x158) = local_3d0[0x59];
        *(float *)((long)local_3d0 + lVar55 + 0x1d8) = local_3d0[0x5a];
        *(float *)((long)local_3d0 + lVar55 + 0x15c) = local_3d0[0x5d];
        *(float *)((long)local_3d0 + lVar55 + 0x1dc) = local_3d0[0x5e];
        *(float *)((long)local_3d0 + lVar55 + 0x160) = local_3d0[0x61];
        *(float *)((long)local_3d0 + lVar55 + 0x1e0) = local_3d0[0x62];
        *(float *)((long)local_3d0 + lVar55 + 0x164) = local_3d0[0x65];
        *(float *)((long)local_3d0 + lVar55 + 0x1e4) = local_3d0[0x66];
        *(float *)((long)local_3d0 + lVar55 + 0x168) = local_3d0[0x69];
        *(float *)((long)local_3d0 + lVar55 + 0x1e8) = local_3d0[0x6a];
        *(float *)((long)local_3d0 + lVar55 + 0x16c) = local_3d0[0x6d];
        *(float *)((long)local_3d0 + lVar55 + 0x1ec) = local_3d0[0x6e];
        *(float *)((long)local_3d0 + lVar55 + 0x170) = local_3d0[0x71];
        *(float *)((long)local_3d0 + lVar55 + 0x1f0) = local_3d0[0x72];
        *(float *)((long)local_3d0 + lVar55 + 0x174) = local_3d0[0x75];
        *(float *)((long)local_3d0 + lVar55 + 500) = local_3d0[0x76];
        *(float *)((long)local_3d0 + lVar55 + 0x178) = local_3d0[0x79];
        *(float *)((long)local_3d0 + lVar55 + 0x1f8) = local_3d0[0x7a];
        *(float *)((long)local_3d0 + lVar55 + 0x17c) = local_3d0[0x7d];
        *(float *)((long)local_3d0 + lVar55 + 0x1fc) = local_3d0[0x7e];
        *(float *)((long)local_3d0 + lVar55 + 0xdc) = -local_3d0[0x5c];
        *(float *)((long)local_3d0 + lVar55 + 0xe0) = -local_3d0[0x60];
        *(float *)((long)local_3d0 + lVar55 + 0xe4) = -local_3d0[100];
        *(float *)((long)local_3d0 + lVar55 + 0xe8) = -local_3d0[0x68];
        *(float *)((long)local_3d0 + lVar55 + 0xec) = -local_3d0[0x6c];
        *(float *)((long)local_3d0 + lVar55 + 0xf0) = -local_3d0[0x70];
        *(float *)((long)local_3d0 + lVar55 + 0xf4) = -local_3d0[0x74];
        *(float *)((long)local_3d0 + lVar55 + 0xf8) = -local_3d0[0x78];
        *puVar56 = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 4) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 8) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0xc) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x10) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x14) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x18) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x1c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x20) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x24) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x28) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x2c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x30) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x34) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x38) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x3c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x40) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x44) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x48) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x4c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x50) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x54) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x58) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x5c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x60) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 100) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x68) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x6c) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x70) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x74) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x78) = 0x3f800000;
        *(undefined4 *)((long)local_3d0 + lVar55 + 0x7c) = 0x3f800000;
        *(float *)((long)local_3d0 + lVar55 + 0xfc) = -local_3d0[0x7c];
      }
      else {
        lVar58 = 0;
        puVar34 = puVar56;
        do {
          fVar89 = local_3d0[lVar58 * 4 + 1];
          fVar104 = -local_3d0[lVar58 * 4];
          fVar91 = fVar89 * fVar89;
          fVar101 = local_3d0[lVar58 * 4 + 2];
          puVar2 = puVar56 + lVar58;
          *puVar2 = 0x3f800000;
          puVar2[0x20] = fVar104;
          puVar2[0x40] = fVar89;
          puVar2[0x60] = fVar101;
          if (DAT_01d4bdf0 <= fVar91) {
            if (uVar60 - 5 < 3) {
              uVar43 = 4;
            }
            else {
              uVar61 = 0x80;
              uVar43 = 4;
              do {
                uVar40 = uVar61 >> 7;
                puVar2[uVar61 & 0xffffff80] = 0;
                *(undefined4 *)((long)puVar2 + ((uVar40 & 0x1ffffff) << 9 | 0x80)) = 0;
                uVar43 = uVar43 + 4;
                *(undefined4 *)((long)puVar2 + ((uVar40 & 0x1ffffff) << 9 | 0x100)) = 0;
                uVar61 = uVar61 + 0x80;
                *(undefined4 *)((long)puVar2 + ((uVar40 & 0x1ffffff) << 9 | 0x180)) = 0;
              } while (uVar60 - (uVar52 & 1) != uVar43);
            }
            if ((uVar60 & 1) != 0) {
              puVar39 = puVar34 + (uVar43 & 0x7ffffff) * 0x20;
              lVar63 = -(ulong)(uVar52 & 1);
              do {
                lVar63 = lVar63 + 1;
                *puVar39 = 0;
                puVar39 = puVar39 + 0x20;
              } while (lVar63 != 0);
            }
            puVar2[0xc0] = fVar91;
            if (9 < uVar52) {
              puVar2[0x180] = fVar89;
            }
          }
          else {
            fVar95 = 1.0 - fVar91;
            fVar98 = SQRT(fVar95);
            puVar2[0xc0] = fVar91 * 1.5 + -0.5;
            fVar104 = (1.0 / fVar98) * fVar104;
            fVar101 = (1.0 / fVar98) * fVar101;
            fVar109 = fVar101 * fVar101;
            fVar111 = fVar104 * fVar104;
            fVar107 = (fVar101 + fVar101) * fVar104;
            puVar2[0xa0] = fVar98 * fVar89 * DAT_01d4c240 * fVar104;
            puVar2[0xe0] = fVar98 * fVar89 * DAT_01d4c19c * (fVar101 + fVar101);
            puVar2[0x80] = fVar107 * fVar95 * DAT_01d4c19c;
            puVar2[0x100] = (fVar109 - fVar111) * fVar95 * DAT_01d4c19c;
            if (9 < uVar52) {
              fVar99 = fVar95 * DAT_01d4c63c * fVar98;
              fVar98 = fVar91 * 5.0 * fVar98 * DAT_01d4c070 - fVar98 * DAT_01d4c070;
              fVar95 = fVar89 * DAT_01d4bad8 * fVar95;
              puVar2[0x140] = fVar107 * fVar95;
              puVar2[0x180] = fVar89 * 0.5 * (fVar91 * 5.0 + -3.0);
              puVar2[0x160] = fVar98 * fVar104;
              puVar2[0x1a0] = fVar98 * fVar101;
              puVar2[0x120] = fVar104 * fVar99 * (fVar109 * 3.0 - fVar111);
              puVar2[0x1c0] = (fVar109 - fVar111) * fVar95;
              puVar2[0x1e0] = fVar101 * fVar99 * (fVar109 - fVar111 * 3.0);
            }
          }
          lVar58 = lVar58 + 1;
          puVar34 = puVar34 + 1;
        } while (lVar58 != 0x20);
      }
      uVar52 = *(uint *)(&DAT_01d568dc + (local_118 & 0xffffffff) * 4);
      uVar43 = 0;
      iVar59 = 0;
      do {
        while ((uVar52 & 1 << (ulong)((uint)uVar43 & 0x1f)) != 0) {
          uVar43 = uVar43 + 1;
          if (uVar60 <= uVar43) {
            return;
          }
        }
        fVar89 = SQRT(fVar73) / (*(float *)(puVar54 + uVar43 * 4) * fVar68);
        pfVar65 = (float *)(puVar42 + uVar43 * 0x20);
        fVar91 = pfVar65[1];
        fVar101 = pfVar65[2];
        fVar104 = pfVar65[3];
        puVar56[-0x20] = *pfVar65 * fVar89;
        puVar56[-0x1f] = fVar91 * fVar89;
        fVar91 = pfVar65[6];
        fVar98 = pfVar65[7];
        puVar56[-0x1e] = fVar101 * fVar89;
        fVar95 = pfVar65[9];
        puVar56[-0x18] = pfVar65[8] * fVar89;
        puVar56[-0x1a] = fVar91 * fVar89;
        fVar91 = pfVar65[10];
        fVar101 = pfVar65[0xb];
        puVar56[-0x1d] = fVar104 * fVar89;
        fVar104 = pfVar65[5];
        puVar56[-0x1c] = pfVar65[4] * fVar89;
        puVar56[-0x1b] = fVar104 * fVar89;
        puVar56[-0x15] = fVar101 * fVar89;
        fVar101 = pfVar65[0xc];
        fVar104 = pfVar65[0xd];
        puVar56[-0x16] = fVar91 * fVar89;
        puVar56[-0x13] = fVar104 * fVar89;
        fVar91 = pfVar65[0xe];
        fVar104 = pfVar65[0xf];
        puVar56[-0x14] = fVar101 * fVar89;
        puVar56[-0x11] = fVar104 * fVar89;
        fVar101 = pfVar65[0x10];
        fVar104 = pfVar65[0x11];
        puVar56[-0x12] = fVar91 * fVar89;
        puVar56[-0xf] = fVar104 * fVar89;
        fVar91 = pfVar65[0x12];
        fVar104 = pfVar65[0x13];
        puVar56[-0x10] = fVar101 * fVar89;
        puVar56[-0xd] = fVar104 * fVar89;
        fVar101 = pfVar65[0x14];
        fVar104 = pfVar65[0x15];
        puVar56[-0xe] = fVar91 * fVar89;
        puVar56[-0xb] = fVar104 * fVar89;
        fVar91 = pfVar65[0x16];
        fVar104 = pfVar65[0x17];
        puVar56[-0xc] = fVar101 * fVar89;
        puVar56[-9] = fVar104 * fVar89;
        fVar101 = pfVar65[0x18];
        fVar104 = pfVar65[0x19];
        puVar56[-10] = fVar91 * fVar89;
        puVar56[-7] = fVar104 * fVar89;
        fVar91 = pfVar65[0x1a];
        fVar104 = pfVar65[0x1b];
        puVar56[-8] = fVar101 * fVar89;
        puVar56[-5] = fVar104 * fVar89;
        fVar101 = pfVar65[0x1c];
        fVar104 = pfVar65[0x1d];
        puVar56[-6] = fVar91 * fVar89;
        puVar56[-3] = fVar104 * fVar89;
        fVar91 = pfVar65[0x1e];
        fVar104 = pfVar65[0x1f];
        puVar56[-4] = fVar101 * fVar89;
        puVar56[-0x19] = fVar98 * fVar89;
        puVar56[-0x17] = fVar95 * fVar89;
        puVar56[-2] = fVar91 * fVar89;
        puVar56[-1] = fVar104 * fVar89;
        auVar69 = *(undefined1 (*) [16])(puVar56 + -0x20);
        auVar70 = *(undefined1 (*) [16])(puVar56 + -0x1c);
        auVar84 = *(undefined1 (*) [16])(puVar56 + -0x18);
        auVar8 = *(undefined1 (*) [16])(puVar56 + -0x14);
        auVar85 = *(undefined1 (*) [16])(puVar56 + -0x10);
        auVar93 = *(undefined1 (*) [16])(puVar56 + -0xc);
        uVar80 = *(undefined8 *)(puVar56 + -6);
        uVar79 = *(undefined8 *)(puVar56 + -8);
        auVar97 = *(undefined1 (*) [16])(puVar56 + -4);
        uVar61 = 0;
        pfVar65 = (float *)((long)local_3d0 + lVar55 + 0x40);
        do {
          pfVar62 = pfVar65 + -0x10;
          pfVar9 = pfVar65 + -0xf;
          pfVar10 = pfVar65 + -0xe;
          pfVar11 = pfVar65 + -0xd;
          pfVar5 = pfVar65 + -0xc;
          pfVar12 = pfVar65 + -0xb;
          pfVar13 = pfVar65 + -10;
          pfVar14 = pfVar65 + -9;
          pfVar49 = pfVar65 + -8;
          pfVar15 = pfVar65 + -7;
          pfVar16 = pfVar65 + -6;
          pfVar17 = pfVar65 + -5;
          pfVar46 = pfVar65 + -4;
          pfVar18 = pfVar65 + -3;
          pfVar19 = pfVar65 + -2;
          pfVar20 = pfVar65 + -1;
          fVar89 = *pfVar65;
          pfVar21 = pfVar65 + 1;
          pfVar22 = pfVar65 + 2;
          pfVar23 = pfVar65 + 3;
          pfVar50 = pfVar65 + 4;
          pfVar24 = pfVar65 + 5;
          pfVar25 = pfVar65 + 6;
          pfVar26 = pfVar65 + 7;
          pfVar1 = pfVar65 + 8;
          pfVar27 = pfVar65 + 9;
          pfVar28 = pfVar65 + 10;
          pfVar29 = pfVar65 + 0xb;
          pfVar53 = pfVar65 + 0xc;
          pfVar30 = pfVar65 + 0xd;
          pfVar31 = pfVar65 + 0xe;
          pfVar32 = pfVar65 + 0xf;
          pfVar65 = pfVar65 + 0x20;
          auVar83._0_4_ =
               auVar69._0_4_ * *pfVar62 + auVar70._0_4_ * *pfVar5 + auVar84._0_4_ * *pfVar49 +
               auVar8._0_4_ * *pfVar46 + auVar85._0_4_ * fVar89 + auVar93._0_4_ * *pfVar50 +
               (float)uVar79 * *pfVar1 + auVar97._0_4_ * *pfVar53;
          auVar83._4_4_ =
               auVar69._4_4_ * *pfVar9 + auVar70._4_4_ * *pfVar12 + auVar84._4_4_ * *pfVar15 +
               auVar8._4_4_ * *pfVar18 + auVar85._4_4_ * *pfVar21 + auVar93._4_4_ * *pfVar24 +
               (float)((ulong)uVar79 >> 0x20) * *pfVar27 + auVar97._4_4_ * *pfVar30;
          auVar83._8_4_ =
               auVar69._8_4_ * *pfVar10 + auVar70._8_4_ * *pfVar13 + auVar84._8_4_ * *pfVar16 +
               auVar8._8_4_ * *pfVar19 + auVar85._8_4_ * *pfVar22 + auVar93._8_4_ * *pfVar25 +
               (float)uVar80 * *pfVar28 + auVar97._8_4_ * *pfVar31;
          auVar83._12_4_ =
               auVar69._12_4_ * *pfVar11 + auVar70._12_4_ * *pfVar14 + auVar84._12_4_ * *pfVar17 +
               auVar8._12_4_ * *pfVar20 + auVar85._12_4_ * *pfVar23 + auVar93._12_4_ * *pfVar26 +
               (float)((ulong)uVar80 >> 0x20) * *pfVar29 + auVar97._12_4_ * *pfVar32;
          auVar88 = NEON_ext(auVar83,auVar83,8,1);
          auVar88 = NEON_ext(auVar83,auVar88,8,1);
          local_b0[iVar59 * (uVar57 + 3 & 0x1fc) + uVar61] =
               auVar88._4_4_ + auVar83._4_4_ + auVar88._0_4_ + auVar83._0_4_;
          uVar61 = uVar61 + 1;
        } while (uVar61 < uVar60);
        iVar59 = iVar59 + 1;
        uVar43 = uVar43 + 1;
        puVar56 = puVar56 + -0x20;
      } while (uVar43 < uVar60);
      return;
    }
    if (uVar38 < 5) {
      local_130 = (undefined *)0x4;
      local_138 = (undefined4 *)&DAT_01d551ac;
    }
    else if ((uVar38 < 10) && (1 < uVar38 - 7)) {
      local_130 = (undefined *)0x9;
      local_138 = &DAT_01d553d0;
    }
    else {
      if (0x10 < uVar38) {
        return;
      }
      local_130 = (undefined *)0x10;
      local_138 = (undefined4 *)&DAT_01d55890;
    }
    if (param_11 == 0) {
      return;
    }
    puVar44 = *(uint **)(param_11 + 0x78);
    uVar51 = *(uint *)(param_11 + 0x80);
    puVar37 = puVar44;
    if (uVar51 == 0) {
LAB_004aa13c:
      if (puVar37 != puVar44 + (ulong)uVar51 * 4) {
        lVar55 = *(long *)(puVar37 + 2);
        goto joined_r0x004aa14c;
      }
    }
    else {
      lVar55 = (ulong)uVar51 << 4;
      do {
        if (*puVar37 == uVar52) goto LAB_004aa13c;
        lVar55 = lVar55 + -0x10;
        puVar37 = puVar37 + 4;
      } while (lVar55 != 0);
    }
    lVar55 = FUN_0047b520(param_11,uVar52);
joined_r0x004aa14c:
    if (lVar55 != 0) {
      uVar51 = (int)local_c0 + 3;
      uVar38 = uVar51 >> 2;
      local_d0 = (ulong)uVar38;
      lVar58 = -(ulong)(uVar38 << 9);
      pauVar35 = (undefined1 (*) [16])((long)local_3d0 + lVar58);
      uVar51 = uVar51 & 0x1fc;
      uVar60 = (ulong)uVar51;
      local_120 = pauVar35;
      local_b8 = uVar60;
      if (uVar51 != 0) {
                    /* WARNING: Subroutine does not return */
        memset(pauVar35,0,(ulong)(uVar51 << 7));
      }
      fVar73 = fVar73 * DAT_01d4be70;
      local_110 = param_8;
      if ((param_8 & 0xff9c0000) == 0) {
        if (((uVar52 & 0xfffff000) == 0x3000) && (*(int *)(param_11 + 0x54) == 1)) {
          uVar52 = uVar57 & 0xff;
          uVar51 = uVar52 + 3 >> 2;
          if ((param_8 & 0xff) == 0) {
            uVar43 = (ulong)(uVar51 << 4) - 1;
            uVar57 = ((uint)(uVar43 >> 4) & 0xfffffff) + 1;
            lVar55 = 0;
            do {
              fVar73 = local_3d0[lVar55 * 4];
              fVar73 = DAT_01d4bfe0 + fVar73 * (DAT_01d4c244 * fVar73 + 0.5);
              fVar68 = *(float *)((long)local_3d0 + lVar58 + 4);
              fVar73 = fVar73 * fVar73;
              *(float *)*pauVar35 = (*(float *)*pauVar35 + 1.0) - fVar73;
              *(float *)((long)local_3d0 + lVar58 + 4) = fVar73 + fVar68;
              if (pauVar35 < pauVar35 + uVar51) {
                pauVar36 = pauVar35;
                if ((uVar57 & 3) != 0) {
                  lVar63 = -((ulong)uVar57 & 3);
                  pauVar41 = pauVar35;
                  do {
                    pauVar36 = pauVar41 + 1;
                    lVar63 = lVar63 + 1;
                    auVar69 = NEON_frsqrte(*pauVar41,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar41 + 8) = auVar69._8_8_;
                    *(long *)*pauVar41 = auVar69._0_8_;
                    pauVar41 = pauVar36;
                  } while (lVar63 != 0);
                }
                if (0x2f < uVar43) {
                  do {
                    auVar70 = NEON_frsqrte(pauVar36[1],4);
                    auVar69 = NEON_frsqrte(*pauVar36,4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar36 + 8) = auVar69._8_8_;
                    *(long *)*pauVar36 = auVar69._0_8_;
                    *(long *)(pauVar36[1] + 8) = auVar70._8_8_;
                    *(long *)pauVar36[1] = auVar70._0_8_;
                    auVar69 = pauVar36[3];
                    auVar70 = NEON_frsqrte(pauVar36[2],4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    *(long *)(pauVar36[2] + 8) = auVar70._8_8_;
                    *(long *)pauVar36[2] = auVar70._0_8_;
                    auVar69 = NEON_frsqrte(auVar69,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(pauVar36[3] + 8) = auVar69._8_8_;
                    *(long *)pauVar36[3] = auVar69._0_8_;
                    pauVar36 = pauVar36 + 4;
                  } while (pauVar36 < pauVar35 + uVar51);
                }
              }
              lVar55 = lVar55 + 1;
            } while (lVar55 != 0x20);
          }
          else {
            uVar43 = (ulong)(uVar51 << 4) - 1;
            uVar38 = ((uint)(uVar43 >> 4) & 0xfffffff) + 1;
            uVar61 = (ulong)(uVar57 + 3) & 3;
            lVar55 = 0;
            do {
              fVar68 = local_3d0[lVar55 * 4];
              fVar68 = DAT_01d4bfe0 + fVar68 * (DAT_01d4c244 * fVar68 + 0.5);
              fVar89 = *(float *)*pauVar35;
              fVar68 = fVar68 * fVar68;
              *(float *)((long)local_3d0 + lVar58 + 4) =
                   fVar68 + *(float *)((long)local_3d0 + lVar58 + 4);
              *(float *)*pauVar35 = ((fVar89 + 1.0) - fVar68) * fVar73;
              if (uVar52 != 1) {
                if ((ulong)uVar52 - 2 < 3) {
                  lVar63 = 1;
                }
                else {
                  lVar63 = 1;
                  pfVar65 = (float *)((long)local_3d0 + lVar58 + 8);
                  do {
                    lVar63 = lVar63 + 4;
                    pfVar65[-1] = pfVar65[-1] * fVar73;
                    *pfVar65 = *pfVar65 * fVar73;
                    pfVar65[1] = pfVar65[1] * fVar73;
                    pfVar65[2] = pfVar65[2] * fVar73;
                    pfVar65 = pfVar65 + 4;
                  } while (uVar52 - uVar61 != lVar63);
                }
                if ((uVar57 + 3 & 3) != 0) {
                  pfVar65 = (float *)(*pauVar35 + lVar63 * 4);
                  lVar63 = -uVar61;
                  do {
                    lVar63 = lVar63 + 1;
                    *pfVar65 = *pfVar65 * fVar73;
                    pfVar65 = pfVar65 + 1;
                  } while (lVar63 != 0);
                }
              }
              if (pauVar35 < pauVar35 + uVar51) {
                pauVar36 = pauVar35;
                if ((uVar38 & 3) != 0) {
                  lVar63 = -((ulong)uVar38 & 3);
                  pauVar41 = pauVar35;
                  do {
                    pauVar36 = pauVar41 + 1;
                    lVar63 = lVar63 + 1;
                    auVar69 = NEON_frsqrte(*pauVar41,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar41 + 8) = auVar69._8_8_;
                    *(long *)*pauVar41 = auVar69._0_8_;
                    pauVar41 = pauVar36;
                  } while (lVar63 != 0);
                }
                if (0x2f < uVar43) {
                  do {
                    auVar70 = NEON_frsqrte(pauVar36[1],4);
                    auVar69 = NEON_frsqrte(*pauVar36,4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar36 + 8) = auVar69._8_8_;
                    *(long *)*pauVar36 = auVar69._0_8_;
                    *(long *)(pauVar36[1] + 8) = auVar70._8_8_;
                    *(long *)pauVar36[1] = auVar70._0_8_;
                    auVar69 = pauVar36[3];
                    auVar70 = NEON_frsqrte(pauVar36[2],4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    *(long *)(pauVar36[2] + 8) = auVar70._8_8_;
                    *(long *)pauVar36[2] = auVar70._0_8_;
                    auVar69 = NEON_frsqrte(auVar69,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(pauVar36[3] + 8) = auVar69._8_8_;
                    *(long *)pauVar36[3] = auVar69._0_8_;
                    pauVar36 = pauVar36 + 4;
                  } while (pauVar36 < pauVar35 + uVar51);
                }
              }
              lVar55 = lVar55 + 1;
            } while (lVar55 != 0x20);
          }
        }
        else {
          uVar43 = (ulong)(uVar38 << 4) - 1;
          lVar63 = (long)local_c0 - 1;
          uVar57 = ((uint)(uVar43 >> 4) & 0xfffffff) + 1;
          lVar58 = 0;
          do {
            fVar68 = local_3d0[lVar58 * 4];
            uVar52 = 0xffffffff;
            do {
              do {
                uVar51 = uVar52;
                uVar52 = uVar51 + 1;
                pfVar65 = (float *)(lVar55 + (ulong)uVar52 * 0x10);
                fVar89 = *pfVar65 * fVar68 + local_3d0[lVar58 * 4 + 2] * pfVar65[1];
                fVar91 = pfVar65[2] * fVar68 + local_3d0[lVar58 * 4 + 2] * pfVar65[3];
              } while (fVar89 < 0.0);
            } while (fVar91 < 0.0);
            lVar67 = (ulong)*(ushort *)(&DAT_01d56800 + (ulong)uVar52 * 4 + lVar63 * 0x20 + 2) * 4;
            lVar66 = (ulong)*(ushort *)(&DAT_01d56800 + (ulong)(uVar51 + 2) * 4 + lVar63 * 0x20 + 2)
                     * 4;
            fVar68 = (1.0 / (fVar91 * fVar91 + fVar89 * fVar89)) * fVar73;
            *(float *)(*pauVar35 + lVar67) =
                 *(float *)(*pauVar35 + lVar67) + fVar89 * fVar89 * fVar68;
            *(float *)(*pauVar35 + lVar66) =
                 *(float *)(*pauVar35 + lVar66) + fVar91 * fVar91 * fVar68;
            pauVar36 = pauVar35 + local_d0;
            if (pauVar35 < pauVar36) {
              pauVar41 = pauVar35;
              if ((uVar57 & 3) != 0) {
                lVar66 = -((ulong)uVar57 & 3);
                pauVar48 = pauVar35;
                do {
                  pauVar41 = pauVar48 + 1;
                  lVar66 = lVar66 + 1;
                  auVar69 = NEON_frsqrte(*pauVar48,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)(*pauVar48 + 8) = auVar69._8_8_;
                  *(long *)*pauVar48 = auVar69._0_8_;
                  pauVar48 = pauVar41;
                } while (lVar66 != 0);
              }
              if (0x2f < uVar43) {
                do {
                  auVar70 = NEON_frsqrte(pauVar41[1],4);
                  auVar69 = NEON_frsqrte(*pauVar41,4);
                  auVar70 = NEON_frecpe(auVar70,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)(*pauVar41 + 8) = auVar69._8_8_;
                  *(long *)*pauVar41 = auVar69._0_8_;
                  *(long *)(pauVar41[1] + 8) = auVar70._8_8_;
                  *(long *)pauVar41[1] = auVar70._0_8_;
                  auVar69 = pauVar41[3];
                  auVar70 = NEON_frsqrte(pauVar41[2],4);
                  auVar70 = NEON_frecpe(auVar70,4);
                  *(long *)(pauVar41[2] + 8) = auVar70._8_8_;
                  *(long *)pauVar41[2] = auVar70._0_8_;
                  auVar69 = NEON_frsqrte(auVar69,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)(pauVar41[3] + 8) = auVar69._8_8_;
                  *(long *)pauVar41[3] = auVar69._0_8_;
                  pauVar41 = pauVar41 + 4;
                } while (pauVar41 < pauVar36);
              }
            }
            lVar58 = lVar58 + 1;
          } while (lVar58 != 0x20);
        }
      }
      else {
        lVar63 = 0;
        if ((int)local_c0 == 0) {
          do {
            FUN_004c1a30(lVar55,0,pauVar35);
            lVar63 = lVar63 + 0x10;
            uVar60 = local_b8;
          } while (lVar63 != 0x200);
        }
        else {
          local_c8 = (long)local_c0 - 1;
          local_f8 = (undefined *)((ulong)(uVar38 << 4) - 1);
          local_d8 = (undefined1 (*) [16])((ulong)local_c0 & 7);
          lVar67 = (long)local_c0 - (long)local_d8;
          local_e8 = (undefined1 *)((ulong)local_c0 & 3);
          lVar66 = (long)local_c0 - (long)local_e8;
          local_e0 = (undefined4 *)-(long)local_d8;
          local_f0 = (undefined1 *)-(long)local_e8;
          local_100 = (undefined1 *)((ulong)(((uint)((ulong)local_f8 >> 4) & 0xfffffff) + 1) & 3);
          local_108 = (float *)-(long)local_100;
          pauVar36 = pauVar35;
          do {
            pauVar41 = (undefined1 (*) [16])(*pauVar36 + lVar63 * uVar60 * 4);
            FUN_004c1a30(lVar55,local_c0,pauVar41);
            uVar60 = local_b8;
            pauVar36 = local_120;
            if (local_c8 < 7) {
              lVar45 = 0;
              fVar68 = 0.0;
            }
            else {
              fVar68 = 0.0;
              lVar45 = 0;
              pfVar65 = (float *)((long)local_3d0 + lVar58 + 0x10);
              do {
                pfVar49 = pfVar65 + -4;
                pfVar1 = pfVar65 + -3;
                pfVar46 = pfVar65 + -2;
                pfVar5 = pfVar65 + -1;
                fVar89 = *pfVar65;
                pfVar50 = pfVar65 + 1;
                pfVar62 = pfVar65 + 2;
                pfVar53 = pfVar65 + 3;
                pfVar65 = pfVar65 + 8;
                fVar68 = *pfVar49 + fVar68 + *pfVar1 + *pfVar46 + *pfVar5 + fVar89 + *pfVar50 +
                         *pfVar62 + *pfVar53;
                lVar45 = lVar45 + 8;
              } while (lVar67 != lVar45);
            }
            if (local_d8 != (undefined1 (*) [16])0x0) {
              pfVar65 = (float *)(*pauVar35 + lVar45 * 4);
              puVar42 = local_e0;
              do {
                fVar68 = *pfVar65 + fVar68;
                puVar42 = (undefined4 *)((long)puVar42 + 1);
                pfVar65 = pfVar65 + 1;
              } while (puVar42 != (undefined4 *)0x0);
            }
            if (0.0 < fVar68) {
              fVar68 = fVar73 / fVar68;
              lVar45 = 0;
              if (2 < local_c8) {
                pfVar65 = (float *)((long)local_3d0 + lVar58 + 8);
                do {
                  lVar45 = lVar45 + 4;
                  pfVar65[-1] = pfVar65[-1] * fVar68;
                  pfVar65[-2] = pfVar65[-2] * fVar68;
                  *pfVar65 = *pfVar65 * fVar68;
                  pfVar65[1] = pfVar65[1] * fVar68;
                  pfVar65 = pfVar65 + 4;
                } while (lVar66 != lVar45);
              }
              if (local_e8 != (undefined1 *)0x0) {
                pfVar65 = (float *)(*pauVar35 + lVar45 * 4);
                lVar45 = (long)local_f0;
                do {
                  lVar45 = lVar45 + 1;
                  *pfVar65 = *pfVar65 * fVar68;
                  pfVar65 = pfVar65 + 1;
                } while (lVar45 != 0);
              }
              pauVar48 = pauVar41 + local_d0;
              if (pauVar41 < pauVar48) {
                if (local_100 != (undefined1 *)0x0) {
                  pfVar65 = local_108;
                  pauVar47 = pauVar41;
                  do {
                    pauVar41 = pauVar47 + 1;
                    pfVar65 = (float *)((long)pfVar65 + 1);
                    auVar69 = NEON_frsqrte(*pauVar47,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar47 + 8) = auVar69._8_8_;
                    *(long *)*pauVar47 = auVar69._0_8_;
                    pauVar47 = pauVar41;
                  } while (pfVar65 != (float *)0x0);
                }
                if (0x2f < local_f8) {
                  do {
                    auVar70 = NEON_frsqrte(pauVar41[1],4);
                    auVar69 = NEON_frsqrte(*pauVar41,4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(*pauVar41 + 8) = auVar69._8_8_;
                    *(long *)*pauVar41 = auVar69._0_8_;
                    *(long *)(pauVar41[1] + 8) = auVar70._8_8_;
                    *(long *)pauVar41[1] = auVar70._0_8_;
                    auVar69 = pauVar41[3];
                    auVar70 = NEON_frsqrte(pauVar41[2],4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    *(long *)(pauVar41[2] + 8) = auVar70._8_8_;
                    *(long *)pauVar41[2] = auVar70._0_8_;
                    auVar69 = NEON_frsqrte(auVar69,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)(pauVar41[3] + 8) = auVar69._8_8_;
                    *(long *)pauVar41[3] = auVar69._0_8_;
                    pauVar41 = pauVar41 + 4;
                  } while (pauVar41 < pauVar48);
                }
              }
            }
            lVar63 = lVar63 + 1;
          } while (lVar63 != 0x20);
        }
      }
      uVar57 = (uint)local_118;
      if (uVar57 != 0) {
        uVar51 = *(uint *)(&DAT_01d568dc + (local_118 & 0xffffffff) * 4);
        uVar52 = (uint)local_110 & 0xff;
        local_148 = (undefined4 *)(CONCAT44(local_148._4_4_,uVar52 + 3) & 0xffffffff000001fc);
        local_140 = CONCAT44(local_140._4_4_,uVar51);
        iVar59 = (int)uVar60;
        if ((local_110 & 0xff) == 0) {
          if ((int)local_c0 != 0) {
            uVar52 = 0;
            uVar43 = 0;
            do {
              if ((uVar51 & 1 << (ulong)((uint)uVar43 & 0x1f)) == 0) {
                fVar73 = (float)local_138[uVar43 * 0x20];
                fVar68 = *(float *)((long)local_138 + (uVar43 << 7 | 4));
                fVar89 = *(float *)((long)local_138 + (uVar43 << 7 | 8));
                fVar91 = *(float *)((long)local_138 + (uVar43 << 7 | 0xc));
                fVar101 = *(float *)((long)local_138 + (uVar43 << 7 | 0x10));
                fVar104 = *(float *)((long)local_138 + (uVar43 << 7 | 0x14));
                fVar95 = *(float *)((long)local_138 + (uVar43 << 7 | 0x18));
                fVar98 = *(float *)((long)local_138 + (uVar43 << 7 | 0x1c));
                fVar78 = *(float *)((long)local_138 + (uVar43 << 7 | 0x20));
                fVar81 = *(float *)((long)local_138 + (uVar43 << 7 | 0x24));
                fVar82 = *(float *)((long)local_138 + (uVar43 << 7 | 0x28));
                fVar87 = *(float *)((long)local_138 + (uVar43 << 7 | 0x2c));
                fVar90 = *(float *)((long)local_138 + (uVar43 << 7 | 0x30));
                fVar92 = *(float *)((long)local_138 + (uVar43 << 7 | 0x34));
                fVar96 = *(float *)((long)local_138 + (uVar43 << 7 | 0x38));
                fVar100 = *(float *)((long)local_138 + (uVar43 << 7 | 0x3c));
                fVar102 = *(float *)((long)local_138 + (uVar43 << 7 | 0x40));
                fVar105 = *(float *)((long)local_138 + (uVar43 << 7 | 0x44));
                fVar106 = *(float *)((long)local_138 + (uVar43 << 7 | 0x48));
                fVar108 = *(float *)((long)local_138 + (uVar43 << 7 | 0x4c));
                fVar110 = *(float *)((long)local_138 + (uVar43 << 7 | 0x50));
                fVar112 = *(float *)((long)local_138 + (uVar43 << 7 | 0x54));
                fVar113 = *(float *)((long)local_138 + (uVar43 << 7 | 0x58));
                fVar114 = *(float *)((long)local_138 + (uVar43 << 7 | 0x5c));
                fVar107 = *(float *)((long)local_138 + (uVar43 << 7 | 0x60));
                fVar109 = *(float *)((long)local_138 + (uVar43 << 7 | 100));
                fVar111 = *(float *)((long)local_138 + (uVar43 << 7 | 0x68));
                fVar99 = *(float *)((long)local_138 + (uVar43 << 7 | 0x6c));
                fVar74 = *(float *)((long)local_138 + (uVar43 << 7 | 0x70));
                fVar75 = *(float *)((long)local_138 + (uVar43 << 7 | 0x74));
                fVar76 = *(float *)((long)local_138 + (uVar43 << 7 | 0x78));
                fVar77 = *(float *)((long)local_138 + (uVar43 << 7 | 0x7c));
                uVar61 = 0;
                do {
                  lVar55 = uVar61 * 4;
                  uVar40 = uVar61 + 1;
                  local_b0[uVar52 * (int)local_148 + uVar61] =
                       *(float *)(*local_120 + lVar55) * fVar73 +
                       fVar68 * *(float *)(*local_120 + lVar55 + (uVar60 & 0xffffffff) * 4) +
                       fVar89 * *(float *)(*local_120 + lVar55 + (ulong)(uint)(iVar59 << 1) * 4) +
                       fVar91 * *(float *)(*local_120 + lVar55 + (uVar60 & 0xffffffff) * 0xc) +
                       fVar101 * *(float *)(*local_120 + lVar55 + (ulong)(uint)(iVar59 << 2) * 4) +
                       fVar104 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x14)
                       + fVar95 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x18
                                            ) +
                       fVar98 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x1c)
                       + fVar78 * *(float *)(*local_120 + lVar55 + (ulong)(uint)(iVar59 << 3) * 4) +
                       fVar81 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x24)
                       + fVar82 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x28
                                            ) +
                       fVar87 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x2c)
                       + fVar90 * *(float *)(local_120[(uVar60 & 0xffffffff) * 3] + lVar55) +
                       fVar92 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x34)
                       + fVar96 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x38
                                            ) +
                       fVar100 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x3c)
                       + fVar102 * *(float *)(*local_120 + lVar55 + (ulong)(uint)(iVar59 << 4) * 4)
                       + fVar105 * *(float *)((long)local_120 +
                                             lVar55 + (uVar60 & 0xffffffff) * 0x44) +
                       fVar106 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x48)
                       + fVar108 * *(float *)((long)local_120 +
                                             lVar55 + (uVar60 & 0xffffffff) * 0x4c) +
                       fVar110 * *(float *)(local_120[(uVar60 & 0xffffffff) * 5] + lVar55) +
                       fVar112 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x54)
                       + fVar113 * *(float *)((long)local_120 +
                                             lVar55 + (uVar60 & 0xffffffff) * 0x58) +
                       fVar114 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x5c)
                       + fVar107 * *(float *)(local_120[(uVar60 & 0xffffffff) * 6] + lVar55) +
                       fVar109 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 100)
                       + fVar111 * *(float *)((long)local_120 +
                                             lVar55 + (uVar60 & 0xffffffff) * 0x68) +
                       fVar99 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x6c)
                       + fVar74 * *(float *)(local_120[(uVar60 & 0xffffffff) * 7] + lVar55) +
                       fVar75 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x74)
                       + fVar76 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x78
                                            ) +
                       fVar77 * *(float *)((long)local_120 + lVar55 + (uVar60 & 0xffffffff) * 0x7c);
                  uVar61 = uVar40;
                } while (local_c0 != (undefined4 *)uVar40);
                uVar52 = uVar52 + 1;
              }
              uVar43 = uVar43 + 1;
            } while ((uVar43 < local_130) && (uVar52 < uVar57));
          }
        }
        else {
          local_e8 = *local_120 + (uVar60 & 0xffffffff) * 4;
          local_f0 = *local_120 + (ulong)(uint)(iVar59 << 1) * 4;
          local_160 = (long)local_120 + (uVar60 & 0xffffffff) * 0x14;
          local_150 = (ulong)(uVar52 << 2);
          local_178 = (long)local_120 + (uVar60 & 0xffffffff) * 0x18;
          local_f8 = (undefined *)((long)local_120 + (uVar60 & 0xffffffff) * 0x1c);
          local_100 = *local_120 + (ulong)(uint)(iVar59 << 3) * 4;
          local_108 = (float *)((long)local_120 + (uVar60 & 0xffffffff) * 0x24);
          local_e0 = (undefined4 *)(*local_120 + (uVar60 & 0xffffffff) * 0xc);
          local_158 = (undefined4 *)(*local_120 + (ulong)(uint)(iVar59 << 2) * 4);
          local_188 = *local_120 + (ulong)(uint)(iVar59 << 4) * 4;
          local_190 = local_120 + (uVar60 & 0xffffffff) * 6;
          local_110 = (long)local_120 + (uVar60 & 0xffffffff) * 0x28;
          local_168 = (undefined4 *)((long)local_120 + (uVar60 & 0xffffffff) * 0x2c);
          local_d8 = local_120 + (uVar60 & 0xffffffff) * 3;
          local_198 = local_120 + (uVar60 & 0xffffffff) * 7;
          local_1a8 = (long)local_120 + (uVar60 & 0xffffffff) * 0x7c;
          local_170 = (long)local_120 + (uVar60 & 0xffffffff) * 0x34;
          local_1a0 = (long)local_120 + (uVar60 & 0xffffffff) * 0x38;
          local_180 = (long)local_120 + (uVar60 & 0xffffffff) * 0x3c;
          local_1b0 = (undefined4 *)((long)local_120 + (uVar60 & 0xffffffff) * 0x44);
          local_1c0[1] = (long)local_120 + (uVar60 & 0xffffffff) * 0x48;
          local_1c0[0] = (long)local_120 + (uVar60 & 0xffffffff) * 0x4c;
          local_1c8 = local_120 + (uVar60 & 0xffffffff) * 5;
          uVar60 = 0;
          do {
            if ((uVar51 & 1 << (ulong)((uint)uVar60 & 0x1f)) == 0) {
              local_128 = (undefined4 *)((ulong)local_128._4_4_ << 0x20);
                    /* WARNING: Subroutine does not return */
              memset(local_b0,0,local_150);
            }
            uVar60 = uVar60 + 1;
          } while ((uVar60 < local_130) && (uVar57 != 0));
        }
      }
    }
    return;
  }
  if (param_11 == 0) {
    return;
  }
  param_7 = param_6 >> 0xc & param_7;
  uVar51 = param_7 - (param_7 >> 1 & 0x55555555);
  uVar51 = (uVar51 & 0x33333333) + (uVar51 >> 2 & 0x33333333);
  local_100 = (undefined1 *)(ulong)(param_6 & 7);
  uVar38 = param_6 & 7;
  if (param_7 != param_6 >> 0xc) {
    uVar38 = (uVar51 + (uVar51 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 & 7;
  }
  uVar60 = (ulong)uVar38;
  if (uVar38 == 0) {
    return;
  }
  fVar68 = 1.0 / (float)uVar38;
  if (((uVar52 & 0xf00) != 0x100) || ((uVar52 & 0xff9c0000) != 0)) {
    if (fVar73 == 0.0) {
      pfVar65 = (float *)((long)local_1d0 - (ulong)(uVar38 << 4));
      local_108 = pfVar65;
      FUN_004ad020(uVar38,param_4,param_10,param_9);
      uVar43 = 1;
      uVar51 = 1;
      uVar60 = local_b8;
    }
    else {
      puVar44 = *(uint **)(param_11 + 0x88);
      uVar51 = *(uint *)(param_11 + 0x90);
      puVar37 = puVar44;
      if (uVar51 == 0) {
LAB_004aa7b0:
        if (puVar37 == puVar44 + (ulong)uVar51 * 6) goto LAB_004aa7c8;
        puVar37 = puVar37 + 2;
      }
      else {
        lVar55 = (ulong)uVar51 * 0x18;
        do {
          if (*puVar37 == (uVar38 | 0x80000000)) goto LAB_004aa7b0;
          lVar55 = lVar55 + -0x18;
          puVar37 = puVar37 + 6;
        } while (lVar55 != 0);
LAB_004aa7c8:
        puVar37 = (uint *)FUN_0047b800(param_11);
        if (puVar37 == (uint *)0x0) {
          return;
        }
      }
      uVar51 = puVar37[2];
      uVar43 = (ulong)uVar51;
      pfVar65 = local_1d0 + uVar43 * -4;
      fVar73 = DAT_01d4bfa0 * param_3 + 1.0;
      param_3 = param_3 * DAT_01d4bbbc;
      lVar58 = *(long *)puVar37;
      auVar69 = NEON_fmov(0x3f800000,4);
      lVar55 = 0;
      do {
        pauVar35 = (undefined1 (*) [16])(lVar58 + lVar55);
        puVar3 = (undefined8 *)((long)pfVar65 + lVar55);
        auVar70 = *pauVar35;
        auVar84 = pauVar35[1];
        auVar8 = pauVar35[2];
        auVar85 = pauVar35[3];
        auVar97 = NEON_ext(auVar84,auVar84,8,1);
        auVar93 = NEON_ext(auVar70,auVar70,8,1);
        auVar88 = NEON_ext(auVar8,auVar8,8,1);
        auVar103 = NEON_ext(auVar85,auVar85,8,1);
        fVar89 = auVar93._0_4_;
        fVar101 = auVar97._0_4_;
        fVar91 = auVar88._0_4_;
        fVar104 = auVar103._0_4_;
        fVar89 = ((fVar89 * fVar89 * 0.719088 + -0.35786) * fVar89 * fVar89 + 1.085865) * fVar89;
        fVar101 = ((fVar101 * fVar101 * 0.719088 + -0.35786) * fVar101 * fVar101 + 1.085865) *
                  fVar101;
        fVar91 = ((fVar91 * fVar91 * 0.719088 + -0.35786) * fVar91 * fVar91 + 1.085865) * fVar91;
        fVar104 = ((fVar104 * fVar104 * 0.719088 + -0.35786) * fVar104 * fVar104 + 1.085865) *
                  fVar104;
        fVar95 = param_3 + fVar89 * fVar73;
        fVar98 = param_3 + fVar101 * fVar73;
        fVar107 = param_3 + fVar91 * fVar73;
        fVar109 = param_3 + fVar104 * fVar73;
        auVar97._0_4_ = auVar69._0_4_ + (fVar89 * fVar89 * 0.041666668 + -0.5) * fVar89 * fVar89;
        auVar97._4_4_ = auVar69._4_4_ + (fVar101 * fVar101 * 0.041666668 + -0.5) * fVar101 * fVar101
        ;
        auVar97._8_4_ = auVar69._8_4_ + (fVar91 * fVar91 * 0.041666668 + -0.5) * fVar91 * fVar91;
        auVar97._12_4_ =
             auVar69._12_4_ + (fVar104 * fVar104 * 0.041666668 + -0.5) * fVar104 * fVar104;
        fVar111 = fVar95 * fVar95;
        fVar99 = fVar98 * fVar98;
        fVar74 = fVar107 * fVar107;
        fVar75 = fVar109 * fVar109;
        auVar88 = NEON_frecpe(auVar97,4);
        lVar55 = lVar55 + 0x40;
        fVar95 = fVar95 + fVar95 * fVar111 * -0.16666667;
        fVar98 = fVar98 + fVar98 * fVar99 * -0.16666667;
        fVar107 = fVar107 + fVar107 * fVar74 * -0.16666667;
        fVar109 = fVar109 + fVar109 * fVar75 * -0.16666667;
        auVar93 = NEON_frecps(auVar97,auVar88,4);
        fVar89 = auVar93._0_4_ * auVar88._0_4_;
        fVar91 = auVar93._4_4_ * auVar88._4_4_;
        fVar101 = auVar93._8_4_ * auVar88._8_4_;
        fVar104 = auVar93._12_4_ * auVar88._12_4_;
        fVar89 = fVar89 + fVar89 * (fVar111 * 0.041666668 + -0.5) * fVar111;
        fVar91 = fVar91 + fVar91 * (fVar99 * 0.041666668 + -0.5) * fVar99;
        fVar101 = fVar101 + fVar101 * (fVar74 * 0.041666668 + -0.5) * fVar74;
        fVar104 = fVar104 + fVar104 * (fVar75 * 0.041666668 + -0.5) * fVar75;
        auVar93._0_4_ = fVar89 * auVar70._0_4_;
        auVar93._4_4_ = fVar91 * auVar84._0_4_;
        auVar93._8_4_ = fVar101 * auVar8._0_4_;
        auVar93._12_4_ = fVar104 * auVar85._0_4_;
        auVar70._0_4_ = fVar89 * auVar70._4_4_;
        auVar70._4_4_ = fVar91 * auVar84._4_4_;
        auVar70._8_4_ = fVar101 * auVar8._4_4_;
        auVar70._12_4_ = fVar104 * auVar85._4_4_;
        uVar79 = CONCAT44(auVar70._0_4_,auVar93._0_4_);
        uVar80 = CONCAT44(auVar70._4_4_,auVar93._4_4_);
        auVar84 = NEON_ext(auVar93,auVar93,8,1);
        auVar70 = NEON_ext(auVar70,auVar70,8,1);
        puVar3[1] = CONCAT44(fVar95,fVar95);
        *puVar3 = uVar79;
        puVar3[3] = CONCAT44(fVar98,fVar98);
        puVar3[2] = uVar80;
        puVar3[5] = CONCAT44(fVar107,fVar107);
        puVar3[4] = CONCAT44(auVar70._0_4_,auVar84._0_4_);
        puVar3[7] = CONCAT44(fVar109,fVar109);
        puVar3[6] = CONCAT44(auVar70._4_4_,auVar84._4_4_);
      } while (pauVar35 + 4 < (undefined1 (*) [16])(lVar58 + (ulong)(uVar51 << 2) * 4));
      uVar61 = (ulong)(uVar51 * uVar38);
      pfVar49 = pfVar65 + uVar61 * -4;
      pauVar35 = (undefined1 (*) [16])(pfVar65 + (uVar51 << 2));
      pauVar36 = pauVar35;
      if (pauVar35 <= (undefined1 (*) [16])(&local_190 + uVar43 * -2)) {
        pauVar36 = (undefined1 (*) [16])(&local_190 + uVar43 * -2);
      }
      uVar40 = 0;
      pfVar46 = pfVar49;
      do {
        pfVar62 = (float *)(&DAT_01d56d74 + uVar40 * 0xc + (ulong)(uVar38 - 1) * 0x54);
        lVar55 = 0;
        fVar101 = *pfVar62;
        fVar91 = -fVar101;
        fVar73 = pfVar62[2];
        fVar89 = pfVar62[1];
        do {
          pauVar41 = (undefined1 (*) [16])((long)pfVar65 + lVar55);
          puVar3 = (undefined8 *)((long)pfVar46 + lVar55);
          lVar55 = lVar55 + 0x40;
          auVar69 = *pauVar41;
          auVar70 = pauVar41[1];
          auVar84 = pauVar41[2];
          auVar8 = pauVar41[3];
          auVar93 = NEON_ext(auVar70,auVar70,8,1);
          auVar85 = NEON_ext(auVar69,auVar69,8,1);
          auVar97 = NEON_ext(auVar84,auVar84,8,1);
          auVar88 = NEON_ext(auVar8,auVar8,8,1);
          fVar104 = auVar85._0_4_;
          fVar98 = auVar93._0_4_;
          fVar95 = auVar97._0_4_;
          fVar107 = auVar88._0_4_;
          auVar85._0_4_ = auVar69._4_4_ + fVar104 * fVar89;
          auVar85._4_4_ = auVar70._4_4_ + fVar98 * fVar89;
          auVar85._8_4_ = auVar84._4_4_ + fVar95 * fVar89;
          auVar85._12_4_ = auVar8._4_4_ + fVar107 * fVar89;
          auVar88._0_4_ = fVar104 * fVar101 + auVar69._0_4_ * fVar73;
          auVar88._4_4_ = fVar98 * fVar101 + auVar70._0_4_ * fVar73;
          auVar88._8_4_ = fVar95 * fVar101 + auVar84._0_4_ * fVar73;
          auVar88._12_4_ = fVar107 * fVar101 + auVar8._0_4_ * fVar73;
          fVar104 = fVar104 * fVar73 + auVar69._0_4_ * fVar91;
          fVar98 = fVar98 * fVar73 + auVar70._0_4_ * fVar91;
          fVar95 = fVar95 * fVar73 + auVar84._0_4_ * fVar91;
          fVar107 = fVar107 * fVar73 + auVar8._0_4_ * fVar91;
          uVar79 = CONCAT44(auVar85._0_4_,auVar88._0_4_);
          uVar80 = CONCAT44(auVar85._4_4_,auVar88._4_4_);
          auVar70 = NEON_ext(auVar88,auVar88,8,1);
          auVar69 = NEON_ext(auVar85,auVar85,8,1);
          puVar3[1] = CONCAT44(fVar104,fVar104);
          *puVar3 = uVar79;
          puVar3[3] = CONCAT44(fVar98,fVar98);
          puVar3[2] = uVar80;
          puVar3[5] = CONCAT44(fVar95,fVar95);
          puVar3[4] = CONCAT44(auVar69._0_4_,auVar70._0_4_);
          puVar3[7] = CONCAT44(fVar107,fVar107);
          puVar3[6] = CONCAT44(auVar69._4_4_,auVar70._4_4_);
        } while (pauVar41 + 4 < pauVar35);
        uVar40 = uVar40 + 1;
        pfVar46 = (float *)((long)pfVar46 +
                           ((ulong)(*pauVar36 + ~(ulong)pfVar65) & 0xffffffffffffffc0) + 0x40);
      } while (uVar40 != uVar60);
      pfVar65 = pfVar49 + uVar61 * -4;
      local_108 = pfVar65;
      FUN_004acd00(pfVar49,uVar61,param_4,param_10);
      uVar60 = local_b8;
    }
    uVar38 = uVar52 >> 8 & 0xf;
    local_b8._4_4_ = (undefined4)(uVar60 >> 0x20);
    if (uVar38 == 2) {
      uVar57 = uVar57 & 0xff;
      uVar61 = (ulong)uVar57;
      local_b8 = CONCAT44(local_b8._4_4_,uVar57 + 3) & 0xffffffff000001fc;
      uVar60 = (ulong)((int)local_100 - 1);
      uVar52 = (int)uVar43 * 4;
      if ((param_8 & 0xff) == 0) {
        uVar43 = 0;
        iVar59 = 0;
        do {
          if ((param_7 & 0xffff & *(uint *)(&DAT_01d56800 + uVar43 * 4 + uVar60 * 0x20)) != 0) {
            puVar42 = local_b0 +
                      (*(uint *)(&DAT_01d56800 + uVar43 * 4 + uVar60 * 0x20) >> 0x10) *
                      (int)local_b8;
            pfVar65 = local_108 + iVar59 * uVar52;
            pfVar49 = pfVar65 + uVar52;
            do {
              FUN_00433610(0,puVar42);
              pfVar65 = pfVar65 + 4;
            } while (pfVar65 < pfVar49);
            iVar59 = iVar59 + 1;
          }
          uVar43 = uVar43 + 1;
        } while (uVar43 < local_100);
        return;
      }
      local_e0 = local_b0 + 2;
      local_c8 = uVar61 - 1;
      local_d0 = uVar61 & 3;
      local_d8 = (undefined1 (*) [16])-local_d0;
      local_c0 = (undefined4 *)(&DAT_01d56800 + uVar60 * 0x20);
      lVar55 = uVar61 - local_d0;
      fVar68 = fVar68 * (1.0 / (float)uVar43);
      uVar60 = 0;
      iVar59 = 0;
      do {
        if ((param_7 & 0xffff & *(uint *)((long)local_c0 + uVar60 * 4)) != 0) {
          uVar43 = (ulong)((*(uint *)((long)local_c0 + uVar60 * 4) >> 0x10) * (int)local_b8);
          puVar42 = local_b0 + uVar43;
          pfVar65 = local_108 + iVar59 * uVar52;
          pfVar49 = pfVar65 + uVar52;
          do {
            FUN_00433610(uVar57,puVar42);
            pfVar65 = pfVar65 + 4;
          } while (pfVar65 < pfVar49);
          if (local_c8 < 3) {
            lVar58 = 0;
          }
          else {
            lVar58 = 0;
            pfVar65 = (float *)(local_e0 + uVar43);
            do {
              lVar58 = lVar58 + 4;
              pfVar65[-2] = pfVar65[-2] * fVar68;
              pfVar65[-1] = pfVar65[-1] * fVar68;
              *pfVar65 = *pfVar65 * fVar68;
              pfVar65[1] = pfVar65[1] * fVar68;
              pfVar65 = pfVar65 + 4;
            } while (lVar55 != lVar58);
          }
          if (local_d0 != 0) {
            pfVar65 = (float *)(local_b0 + lVar58 + uVar43);
            pauVar35 = local_d8;
            do {
              pauVar35 = (undefined1 (*) [16])((long)pauVar35 + 1);
              *pfVar65 = *pfVar65 * fVar68;
              pfVar65 = pfVar65 + 1;
            } while (pauVar35 != (undefined1 (*) [16])0x0);
          }
          iVar59 = iVar59 + 1;
        }
        uVar60 = uVar60 + 1;
      } while (uVar60 < local_100);
      return;
    }
    if (uVar38 != 1) {
      return;
    }
    uVar38 = uVar52 >> 0xc & 0xfffffffb;
    uVar38 = uVar52 & 0xf00 | uVar38 << 0xc | uVar52 - ((uVar52 >> 0xc) - uVar38 >> 2) & 0xff;
    local_b8 = uVar60;
    if ((uVar52 >> 0xe & 1) == 0) {
      puVar44 = *(uint **)(param_11 + 0x78);
      uVar52 = *(uint *)(param_11 + 0x80);
      puVar37 = puVar44;
      if (uVar52 == 0) {
LAB_004ab83c:
        if (puVar37 != puVar44 + (ulong)uVar52 * 4) {
LAB_004ab894:
          local_e0 = (undefined4 *)0x0;
          uVar60 = *(ulong *)(puVar37 + 2);
          local_b8 = CONCAT44(local_b8._4_4_,(int)local_c0);
          goto joined_r0x004accd8;
        }
      }
      else {
        lVar55 = (ulong)uVar52 << 4;
        do {
          if (*puVar37 == uVar38) goto LAB_004ab83c;
          lVar55 = lVar55 + -0x10;
          puVar37 = puVar37 + 4;
        } while (lVar55 != 0);
      }
LAB_004ab8b0:
      uVar60 = FUN_0047b520(param_11,uVar38);
      local_b8 = CONCAT44(local_b8._4_4_,(int)local_c0);
    }
    else {
      if (param_1 == 1.0) {
        puVar44 = *(uint **)(param_11 + 0x78);
        uVar38 = *(uint *)(param_11 + 0x80);
        puVar37 = puVar44;
        if (uVar38 == 0) {
LAB_004ab888:
          if (puVar37 != puVar44 + (ulong)uVar38 * 4) goto LAB_004ab894;
        }
        else {
          lVar55 = (ulong)uVar38 << 4;
          do {
            if (*puVar37 == uVar52) goto LAB_004ab888;
            lVar55 = lVar55 + -0x10;
            puVar37 = puVar37 + 4;
          } while (lVar55 != 0);
        }
        uVar38 = uVar52;
        goto LAB_004ab8b0;
      }
      puVar44 = *(uint **)(param_11 + 0x78);
      uVar4 = *(uint *)(param_11 + 0x80);
      puVar37 = puVar44;
      if (uVar4 == 0) {
LAB_004acb64:
        if (puVar37 == puVar44 + (ulong)uVar4 * 4) goto LAB_004acb80;
        uVar60 = *(ulong *)(puVar37 + 2);
      }
      else {
        lVar55 = (ulong)uVar4 << 4;
        do {
          if (*puVar37 == uVar38) goto LAB_004acb64;
          lVar55 = lVar55 + -0x10;
          puVar37 = puVar37 + 4;
        } while (lVar55 != 0);
LAB_004acb80:
        uVar60 = FUN_0047b520(param_11);
      }
      if (param_1 != 0.0) {
        puVar44 = *(uint **)(param_11 + 0x78);
        uVar38 = *(uint *)(param_11 + 0x80);
        puVar37 = puVar44;
        if (uVar38 == 0) {
LAB_004accc4:
          if (puVar37 != puVar44 + (ulong)uVar38 * 4) {
            local_e0 = *(undefined4 **)(puVar37 + 2);
            goto joined_r0x004accd8;
          }
        }
        else {
          lVar55 = (ulong)uVar38 << 4;
          do {
            if (*puVar37 == uVar52) goto LAB_004accc4;
            lVar55 = lVar55 + -0x10;
            puVar37 = puVar37 + 4;
          } while (lVar55 != 0);
        }
        local_e0 = (undefined4 *)FUN_0047b520(param_11,uVar52);
        goto joined_r0x004accd8;
      }
    }
    local_e0 = (undefined4 *)0x0;
joined_r0x004accd8:
    if (uVar60 == 0) {
      return;
    }
    uVar52 = (int)local_c0 + 3U >> 2;
    local_178 = (ulong)uVar52;
    local_d0 = (ulong)(uVar52 << 4);
    local_c8 = uVar60;
    if (local_e0 == (undefined4 *)0x0) {
      local_110 = (ulong)(uint)((int)local_c0 - (int)local_b8);
      local_f0 = (undefined1 *)(CONCAT44(local_f0._4_4_,param_7) & 0xffffffff0000ffff);
      local_118._4_4_ = (undefined4)(local_118 >> 0x20);
      local_118 = CONCAT44(local_118._4_4_,(uVar57 & 0xff) + 3) & 0xffffffff000001fc;
      local_120 = (undefined1 (*) [16])(ulong)(uVar51 << 2);
      local_128 = local_b0 + local_110 + 3;
      local_130 = (undefined *)(-2 - local_110);
      local_138 = (undefined4 *)~(ulong)local_b0;
      local_140 = (long)local_c0 - 1;
      local_180 = local_d0 - 1;
      local_148 = (undefined4 *)((ulong)local_c0 & 7);
      local_158 = (undefined4 *)((long)local_c0 - (long)local_148);
      local_160 = (ulong)local_c0 & 3;
      local_188 = (undefined1 *)((long)local_c0 - local_160);
      local_190 = (undefined1 (*) [16])((ulong)(((uint)(local_180 >> 4) & 0xfffffff) + 1) & 3);
      local_168 = local_b0 + 4;
      local_150 = -(long)local_148;
      local_170 = -local_160;
      local_f8 = &DAT_01d56800 + (ulong)((int)local_100 - 1) * 0x20;
      local_d8 = (undefined1 (*) [16])0x0;
      iVar59 = 0;
      local_198 = (undefined1 (*) [16])-(long)local_190;
      local_e0 = (undefined4 *)0x0;
      do {
        if (((uint)local_f0 & *(uint *)(local_f8 + (long)local_d8 * 4)) != 0) {
          local_e8 = (undefined1 *)
                     (ulong)((*(uint *)(local_f8 + (long)local_d8 * 4) >> 0x10) * (int)local_118);
          pauVar35 = (undefined1 (*) [16])(local_b0 + (long)local_e8);
          pfVar46 = (float *)((long)*pauVar35 + 8);
          pfVar49 = local_108 + (uint)(iVar59 * (int)local_120);
          pfVar62 = (float *)((long)*pauVar35 + local_c0 * 4);
          pfVar1 = pfVar46 + local_110;
          pfVar5 = (float *)(local_128 + (long)local_e8);
          if (local_128 + (long)local_e8 <= pfVar62) {
            pfVar5 = pfVar62;
          }
          uVar43 = (long)pfVar5 + (long)local_e8 * -4 + (long)local_138 + (long)local_130 * 4;
          uVar57 = ((uint)(uVar43 >> 2) & 0x3fffffff) + 1;
          pfVar5 = pfVar49 + (long)local_120;
          local_e0 = (undefined4 *)CONCAT44(local_e0._4_4_,iVar59);
          do {
            pfVar65 = (float *)((long)pfVar65 - (local_d0 + 0xf & 0xfffffffffffffff0));
            FUN_004c1a30(uVar60,local_b8 & 0xffffffff,pfVar65);
            fVar73 = *(float *)((long)*pauVar35 + 4);
            *(float *)*pauVar35 = *(float *)*pauVar35 + *pfVar65;
            pfVar50 = pfVar65 + 2;
            *(float *)((long)*pauVar35 + 4) = fVar73 + pfVar65[1];
            pfVar53 = pfVar1;
            if ((uVar57 & 3) != 0) {
              lVar55 = 0;
              lVar58 = -((ulong)uVar57 & 3);
              do {
                *(float *)((long)pfVar1 + lVar55) =
                     *(float *)((long)pfVar1 + lVar55) + *(float *)((long)pfVar50 + lVar55);
                lVar55 = lVar55 + 4;
                lVar58 = lVar58 + 1;
              } while (lVar58 != 0);
              pfVar50 = (float *)((long)pfVar50 + lVar55);
              pfVar53 = (float *)((long)pfVar1 + lVar55);
            }
            if (0xb < uVar43) {
              do {
                *pfVar53 = *pfVar53 + *pfVar50;
                pfVar53[1] = pfVar53[1] + pfVar50[1];
                pfVar53[2] = pfVar53[2] + pfVar50[2];
                pfVar9 = pfVar50 + 3;
                pfVar50 = pfVar50 + 4;
                pfVar53[3] = pfVar53[3] + *pfVar9;
                pfVar53 = pfVar53 + 4;
              } while (pfVar53 < pfVar62);
            }
            pfVar49 = pfVar49 + 4;
            uVar60 = local_c8;
          } while (pfVar49 < pfVar5);
          if ((int)local_c0 != 0) {
            if (local_140 < 7) {
              lVar55 = 0;
              fVar73 = 0.0;
            }
            else {
              pfVar49 = (float *)(local_168 + (long)local_e8);
              fVar73 = 0.0;
              lVar55 = 0;
              do {
                pfVar62 = pfVar49 + -4;
                pfVar50 = pfVar49 + -3;
                pfVar1 = pfVar49 + -2;
                pfVar53 = pfVar49 + -1;
                fVar89 = *pfVar49;
                pfVar9 = pfVar49 + 1;
                pfVar5 = pfVar49 + 2;
                pfVar10 = pfVar49 + 3;
                pfVar49 = pfVar49 + 8;
                fVar73 = *pfVar62 + fVar73 + *pfVar50 + *pfVar1 + *pfVar53 + fVar89 + *pfVar9 +
                         *pfVar5 + *pfVar10;
                lVar55 = lVar55 + 8;
              } while (local_158 != (undefined4 *)lVar55);
            }
            if (local_148 != (undefined4 *)0x0) {
              pfVar49 = (float *)(local_b0 + lVar55 + (long)local_e8);
              uVar43 = local_150;
              do {
                fVar73 = *pfVar49 + fVar73;
                uVar43 = uVar43 + 1;
                pfVar49 = pfVar49 + 1;
              } while (uVar43 != 0);
            }
            if (0.0 < fVar73) {
              fVar73 = fVar68 / fVar73;
              lVar55 = 0;
              if (2 < local_140) {
                do {
                  lVar55 = lVar55 + 4;
                  pfVar46[-2] = pfVar46[-2] * fVar73;
                  pfVar46[-1] = pfVar46[-1] * fVar73;
                  *pfVar46 = *pfVar46 * fVar73;
                  pfVar46[1] = pfVar46[1] * fVar73;
                  pfVar46 = pfVar46 + 4;
                } while (local_188 != (undefined1 *)lVar55);
              }
              if (local_160 != 0) {
                pfVar49 = (float *)(local_b0 + lVar55 + (long)local_e8);
                uVar43 = local_170;
                do {
                  uVar43 = uVar43 + 1;
                  *pfVar49 = *pfVar49 * fVar73;
                  pfVar49 = pfVar49 + 1;
                } while (uVar43 != 0);
              }
              pauVar36 = pauVar35 + local_178;
              if (pauVar35 < pauVar36) {
                if (local_190 != (undefined1 (*) [16])0x0) {
                  pauVar41 = local_198;
                  pauVar48 = pauVar35;
                  do {
                    pauVar35 = pauVar48 + 1;
                    pauVar41 = (undefined1 (*) [16])((long)pauVar41 + 1);
                    auVar69 = NEON_frsqrte(*pauVar48,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)((long)*pauVar48 + 8) = auVar69._8_8_;
                    *(long *)*pauVar48 = auVar69._0_8_;
                    pauVar48 = pauVar35;
                  } while (pauVar41 != (undefined1 (*) [16])0x0);
                }
                if (0x2f < local_180) {
                  do {
                    auVar70 = NEON_frsqrte(pauVar35[1],4);
                    auVar69 = NEON_frsqrte(*pauVar35,4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)((long)*pauVar35 + 8) = auVar69._8_8_;
                    *(long *)*pauVar35 = auVar69._0_8_;
                    *(long *)((long)pauVar35[1] + 8) = auVar70._8_8_;
                    *(long *)pauVar35[1] = auVar70._0_8_;
                    auVar69 = pauVar35[3];
                    auVar70 = NEON_frsqrte(pauVar35[2],4);
                    auVar70 = NEON_frecpe(auVar70,4);
                    *(long *)((long)pauVar35[2] + 8) = auVar70._8_8_;
                    *(long *)pauVar35[2] = auVar70._0_8_;
                    auVar69 = NEON_frsqrte(auVar69,4);
                    auVar69 = NEON_frecpe(auVar69,4);
                    *(long *)((long)pauVar35[3] + 8) = auVar69._8_8_;
                    *(long *)pauVar35[3] = auVar69._0_8_;
                    pauVar35 = pauVar35 + 4;
                  } while (pauVar35 < pauVar36);
                }
              }
            }
          }
          iVar59 = (int)local_e0 + 1;
        }
        local_d8 = (undefined1 (*) [16])((long)local_d8 + 1);
      } while (local_d8 < local_100);
      return;
    }
    local_128 = (undefined4 *)(CONCAT44(local_128._4_4_,param_7) & 0xffffffff0000ffff);
    local_138 = (undefined4 *)(CONCAT44(local_138._4_4_,(uVar57 & 0xff) + 3) & 0xffffffff000001fc);
    local_140 = (ulong)(uVar51 << 2);
    local_148 = local_b0 + 4;
    local_150 = ~(ulong)local_b0;
    local_158 = local_b0 + 1;
    local_168 = (undefined4 *)((long)local_c0 - 1);
    local_1a0 = local_d0 - 1;
    fVar73 = 1.0 - param_1;
    local_e8 = (undefined1 *)((ulong)((int)local_b8 * 4 + 0xcU & 0xfffffff0) + 0xf & 0x1fffffff0);
    local_170 = (ulong)local_c0 & 7;
    local_188 = (undefined1 *)((long)local_c0 - local_170);
    local_1a8 = (ulong)(((uint)(local_1a0 >> 4) & 0xfffffff) + 1) & 3;
    local_180 = -local_170;
    local_1b0 = local_b0 + 2;
    local_130 = &DAT_01d56800 + (ulong)((int)local_100 - 1) * 0x20;
    local_190 = (undefined1 (*) [16])((ulong)local_c0 & 3);
    local_160 = (long)local_c0 - (long)local_190;
    local_198 = (undefined1 (*) [16])-(long)local_190;
    local_110 = 0;
    iVar59 = 0;
    local_1c0[1] = -local_1a8;
    do {
      if (((uint)local_128 & *(uint *)(local_130 + local_110 * 4)) != 0) {
        local_118 = CONCAT44(local_118._4_4_,iVar59);
        local_120 = (undefined1 (*) [16])
                    (ulong)((*(uint *)(local_130 + local_110 * 4) >> 0x10) * (int)local_138);
        pfVar49 = local_108 + (uint)(iVar59 * (int)local_140);
        local_d8 = (undefined1 (*) [16])(pfVar49 + local_140);
        pauVar36 = (undefined1 (*) [16])(local_b0 + (long)local_120);
        pauVar41 = (undefined1 (*) [16])((long)*pauVar36 + local_c0 * 4);
        pauVar35 = (undefined1 (*) [16])(local_148 + (long)local_120);
        pauVar48 = pauVar41;
        if (pauVar41 <= pauVar35) {
          pauVar48 = pauVar35;
        }
        pauVar47 = pauVar41;
        if (pauVar41 <= (undefined1 (*) [16])(local_158 + (long)local_120)) {
          pauVar47 = (undefined1 (*) [16])(local_158 + (long)local_120);
        }
        uVar61 = (long)pauVar48 + (long)local_120 * -4 + (local_150 - 0xc);
        uVar43 = (long)pauVar47 + (long)local_120 * -4 + local_150;
        uVar57 = ((uint)(uVar61 >> 2) & 0x3fffffff) + 1;
        uVar52 = ((uint)(uVar43 >> 2) & 0x3fffffff) + 1;
        local_f0 = (undefined1 *)-((ulong)uVar57 & 3);
        local_f8 = (undefined *)-((ulong)uVar52 & 3);
        do {
          fVar104 = pfVar49[2];
          fVar89 = *pfVar49;
          fVar101 = pfVar49[1];
          pfVar65 = (float *)((long)pfVar65 - (long)local_e8);
          FUN_004c1a30(fVar104,-fVar89,fVar101,uVar60,local_b8 & 0xffffffff,pfVar65);
          fVar91 = *(float *)((long)*pauVar36 + 4);
          *(float *)*pauVar36 = *(float *)*pauVar36 + fVar73 * *pfVar65;
          pfVar46 = pfVar65 + 2;
          *(float *)((long)*pauVar36 + 4) = fVar91 + fVar73 * pfVar65[1];
          pauVar48 = (undefined1 (*) [16])((long)*pauVar36 + 0xc);
          if ((uVar57 & 3) != 0) {
            pfVar62 = pfVar46;
            pauVar47 = (undefined1 (*) [16])((long)*pauVar36 + 0xc);
            lVar55 = (long)local_f0;
            do {
              pfVar46 = pfVar62 + 1;
              lVar55 = lVar55 + 1;
              pauVar48 = (undefined1 (*) [16])((long)*pauVar47 + 4);
              *(float *)*pauVar47 = *(float *)*pauVar47 + fVar73 * *pfVar62;
              pfVar62 = pfVar46;
              pauVar47 = pauVar48;
            } while (lVar55 != 0);
          }
          if (0xb < uVar61) {
            do {
              fVar91 = *(float *)((long)*pauVar48 + 4);
              *(float *)*pauVar48 = *(float *)*pauVar48 + fVar73 * *pfVar46;
              *(float *)((long)*pauVar48 + 4) = fVar91 + fVar73 * pfVar46[1];
              *(float *)((long)*pauVar48 + 8) =
                   *(float *)((long)*pauVar48 + 8) + fVar73 * pfVar46[2];
              pfVar62 = pfVar46 + 3;
              pfVar46 = pfVar46 + 4;
              *(float *)((long)*pauVar48 + 0xc) =
                   *(float *)((long)*pauVar48 + 0xc) + fVar73 * *pfVar62;
              pauVar48 = pauVar48 + 1;
            } while (pauVar48 < pauVar41);
          }
          pfVar65 = (float *)((long)pfVar65 - (local_d0 + 0xf & 0xfffffffffffffff0));
          FUN_004c1a30(fVar104,-fVar89,fVar101,local_e0,local_c0,pfVar65);
          pauVar48 = pauVar36;
          pfVar46 = pfVar65;
          if ((uVar52 & 3) != 0) {
            pauVar47 = pauVar36;
            puVar54 = local_f8;
            pfVar62 = pfVar65;
            do {
              pfVar46 = pfVar62 + 1;
              puVar54 = (undefined *)((long)puVar54 + 1);
              pauVar48 = (undefined1 (*) [16])((long)*pauVar47 + 4);
              *(float *)*pauVar47 = *(float *)*pauVar47 + param_1 * *pfVar62;
              pauVar47 = pauVar48;
              pfVar62 = pfVar46;
            } while (puVar54 != (undefined *)0x0);
          }
          if (0xb < uVar43) {
            do {
              fVar89 = *(float *)((long)*pauVar48 + 4);
              *(float *)*pauVar48 = *(float *)*pauVar48 + param_1 * *pfVar46;
              *(float *)((long)*pauVar48 + 4) = fVar89 + param_1 * pfVar46[1];
              *(float *)((long)*pauVar48 + 8) =
                   *(float *)((long)*pauVar48 + 8) + param_1 * pfVar46[2];
              pfVar62 = pfVar46 + 3;
              pfVar46 = pfVar46 + 4;
              *(float *)((long)*pauVar48 + 0xc) =
                   *(float *)((long)*pauVar48 + 0xc) + param_1 * *pfVar62;
              pauVar48 = pauVar48 + 1;
            } while (pauVar48 < pauVar41);
          }
          pfVar49 = pfVar49 + 4;
          uVar60 = local_c8;
        } while (pfVar49 < local_d8);
        if ((int)local_c0 != 0) {
          if (local_168 < 7) {
            lVar55 = 0;
            fVar89 = 0.0;
          }
          else {
            fVar89 = 0.0;
            lVar55 = 0;
            do {
              pauVar41 = pauVar35 + -1;
              pauVar48 = pauVar35 + -1;
              pauVar47 = pauVar35 + -1;
              pauVar33 = pauVar35 + -1;
              puVar42 = (undefined4 *)*pauVar35;
              puVar56 = (undefined4 *)*pauVar35;
              puVar34 = (undefined4 *)*pauVar35;
              puVar2 = (undefined4 *)*pauVar35;
              pauVar35 = pauVar35 + 2;
              fVar89 = *(float *)*pauVar41 + fVar89 +
                       *(float *)((long)*pauVar48 + 4) + *(float *)((long)*pauVar47 + 8) +
                       *(float *)((long)*pauVar33 + 0xc) + (float)*puVar42 + (float)puVar56[1] +
                       (float)puVar34[2] + (float)puVar2[3];
              lVar55 = lVar55 + 8;
            } while (local_188 != (undefined1 *)lVar55);
          }
          if (local_170 != 0) {
            pfVar49 = (float *)(local_b0 + lVar55 + (long)local_120);
            uVar43 = local_180;
            do {
              fVar89 = *pfVar49 + fVar89;
              uVar43 = uVar43 + 1;
              pfVar49 = pfVar49 + 1;
            } while (uVar43 != 0);
          }
          if (0.0 < fVar89) {
            fVar89 = fVar68 / fVar89;
            lVar55 = 0;
            if (2 < local_168) {
              pfVar49 = (float *)(local_1b0 + (long)local_120);
              do {
                lVar55 = lVar55 + 4;
                pfVar49[-2] = pfVar49[-2] * fVar89;
                pfVar49[-1] = pfVar49[-1] * fVar89;
                *pfVar49 = *pfVar49 * fVar89;
                pfVar49[1] = pfVar49[1] * fVar89;
                pfVar49 = pfVar49 + 4;
              } while (local_160 != lVar55);
            }
            if (local_190 != (undefined1 (*) [16])0x0) {
              pfVar49 = (float *)(local_b0 + lVar55 + (long)local_120);
              pauVar35 = local_198;
              do {
                pauVar35 = (undefined1 (*) [16])((long)pauVar35 + 1);
                *pfVar49 = *pfVar49 * fVar89;
                pfVar49 = pfVar49 + 1;
              } while (pauVar35 != (undefined1 (*) [16])0x0);
            }
            pauVar35 = pauVar36 + local_178;
            if (pauVar36 < pauVar35) {
              if (local_1a8 != 0) {
                lVar55 = local_1c0[1];
                pauVar41 = pauVar36;
                do {
                  pauVar36 = pauVar41 + 1;
                  lVar55 = lVar55 + 1;
                  auVar69 = NEON_frsqrte(*pauVar41,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)((long)*pauVar41 + 8) = auVar69._8_8_;
                  *(long *)*pauVar41 = auVar69._0_8_;
                  pauVar41 = pauVar36;
                } while (lVar55 != 0);
              }
              if (0x2f < local_1a0) {
                do {
                  auVar70 = NEON_frsqrte(pauVar36[1],4);
                  auVar69 = NEON_frsqrte(*pauVar36,4);
                  auVar70 = NEON_frecpe(auVar70,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)((long)*pauVar36 + 8) = auVar69._8_8_;
                  *(long *)*pauVar36 = auVar69._0_8_;
                  *(long *)((long)pauVar36[1] + 8) = auVar70._8_8_;
                  *(long *)pauVar36[1] = auVar70._0_8_;
                  auVar69 = pauVar36[3];
                  auVar70 = NEON_frsqrte(pauVar36[2],4);
                  auVar70 = NEON_frecpe(auVar70,4);
                  *(long *)((long)pauVar36[2] + 8) = auVar70._8_8_;
                  *(long *)pauVar36[2] = auVar70._0_8_;
                  auVar69 = NEON_frsqrte(auVar69,4);
                  auVar69 = NEON_frecpe(auVar69,4);
                  *(long *)((long)pauVar36[3] + 8) = auVar69._8_8_;
                  *(long *)pauVar36[3] = auVar69._0_8_;
                  pauVar36 = pauVar36 + 4;
                } while (pauVar36 < pauVar35);
              }
            }
          }
        }
        iVar59 = (int)local_118 + 1;
      }
      local_110 = local_110 + 1;
    } while (local_110 < local_100);
    return;
  }
  if (fVar73 == 0.0) {
    pfVar65 = (float *)((long)local_1d0 - (ulong)(uVar38 << 4));
    FUN_004ad020(uVar38,param_4,param_10,param_9,pfVar65);
    uVar43 = 1;
    puVar37 = *(uint **)(param_11 + 0x78);
    uVar60 = (ulong)*(uint *)(param_11 + 0x80);
    if (*(uint *)(param_11 + 0x80) == 0) goto LAB_004ac6c8;
LAB_004ac69c:
    lVar55 = uVar60 << 4;
    puVar44 = puVar37;
    do {
      if (*puVar44 == uVar52) goto LAB_004ac6cc;
      lVar55 = lVar55 + -0x10;
      puVar44 = puVar44 + 4;
    } while (lVar55 != 0);
LAB_004ac6e4:
    lVar55 = FUN_0047b520(param_11,uVar52);
  }
  else {
    puVar44 = *(uint **)(param_11 + 0x88);
    uVar51 = *(uint *)(param_11 + 0x90);
    puVar37 = puVar44;
    if (uVar51 == 0) {
LAB_004ac384:
      if (puVar37 == puVar44 + (ulong)uVar51 * 6) goto LAB_004ac39c;
      puVar37 = puVar37 + 2;
    }
    else {
      lVar55 = (ulong)uVar51 * 0x18;
      do {
        if (*puVar37 == uVar38) goto LAB_004ac384;
        lVar55 = lVar55 + -0x18;
        puVar37 = puVar37 + 6;
      } while (lVar55 != 0);
LAB_004ac39c:
      puVar37 = (uint *)FUN_0047b800(param_11,uVar60);
      if (puVar37 == (uint *)0x0) {
        return;
      }
    }
    uVar51 = puVar37[2];
    uVar43 = (ulong)uVar51;
    pfVar65 = local_1d0 + uVar43 * -4;
    fVar73 = DAT_01d4bfa0 * param_3 + 1.0;
    param_3 = param_3 * DAT_01d4bbbc;
    lVar58 = *(long *)puVar37;
    auVar69 = NEON_fmov(0x3f800000,4);
    lVar55 = 0;
    do {
      pauVar35 = (undefined1 (*) [16])(lVar58 + lVar55);
      puVar3 = (undefined8 *)((long)pfVar65 + lVar55);
      auVar70 = *pauVar35;
      auVar84 = pauVar35[1];
      auVar8 = pauVar35[2];
      auVar85 = pauVar35[3];
      auVar97 = NEON_ext(auVar84,auVar84,8,1);
      auVar93 = NEON_ext(auVar70,auVar70,8,1);
      auVar88 = NEON_ext(auVar8,auVar8,8,1);
      auVar103 = NEON_ext(auVar85,auVar85,8,1);
      fVar89 = auVar93._0_4_;
      fVar101 = auVar97._0_4_;
      fVar91 = auVar88._0_4_;
      fVar104 = auVar103._0_4_;
      fVar89 = ((fVar89 * fVar89 * 0.719088 + -0.35786) * fVar89 * fVar89 + 1.085865) * fVar89;
      fVar101 = ((fVar101 * fVar101 * 0.719088 + -0.35786) * fVar101 * fVar101 + 1.085865) * fVar101
      ;
      fVar91 = ((fVar91 * fVar91 * 0.719088 + -0.35786) * fVar91 * fVar91 + 1.085865) * fVar91;
      fVar104 = ((fVar104 * fVar104 * 0.719088 + -0.35786) * fVar104 * fVar104 + 1.085865) * fVar104
      ;
      fVar95 = param_3 + fVar89 * fVar73;
      fVar98 = param_3 + fVar101 * fVar73;
      fVar107 = param_3 + fVar91 * fVar73;
      fVar109 = param_3 + fVar104 * fVar73;
      auVar94._0_4_ = auVar69._0_4_ + (fVar89 * fVar89 * 0.041666668 + -0.5) * fVar89 * fVar89;
      auVar94._4_4_ = auVar69._4_4_ + (fVar101 * fVar101 * 0.041666668 + -0.5) * fVar101 * fVar101;
      auVar94._8_4_ = auVar69._8_4_ + (fVar91 * fVar91 * 0.041666668 + -0.5) * fVar91 * fVar91;
      auVar94._12_4_ = auVar69._12_4_ + (fVar104 * fVar104 * 0.041666668 + -0.5) * fVar104 * fVar104
      ;
      fVar111 = fVar95 * fVar95;
      fVar99 = fVar98 * fVar98;
      fVar74 = fVar107 * fVar107;
      fVar75 = fVar109 * fVar109;
      auVar97 = NEON_frecpe(auVar94,4);
      lVar55 = lVar55 + 0x40;
      fVar95 = fVar95 + fVar95 * fVar111 * -0.16666667;
      fVar98 = fVar98 + fVar98 * fVar99 * -0.16666667;
      fVar107 = fVar107 + fVar107 * fVar74 * -0.16666667;
      fVar109 = fVar109 + fVar109 * fVar75 * -0.16666667;
      auVar93 = NEON_frecps(auVar94,auVar97,4);
      fVar89 = auVar93._0_4_ * auVar97._0_4_;
      fVar91 = auVar93._4_4_ * auVar97._4_4_;
      fVar101 = auVar93._8_4_ * auVar97._8_4_;
      fVar104 = auVar93._12_4_ * auVar97._12_4_;
      fVar89 = fVar89 + fVar89 * (fVar111 * 0.041666668 + -0.5) * fVar111;
      fVar91 = fVar91 + fVar91 * (fVar99 * 0.041666668 + -0.5) * fVar99;
      fVar101 = fVar101 + fVar101 * (fVar74 * 0.041666668 + -0.5) * fVar74;
      fVar104 = fVar104 + fVar104 * (fVar75 * 0.041666668 + -0.5) * fVar75;
      auVar86._0_4_ = fVar89 * auVar70._0_4_;
      auVar86._4_4_ = fVar91 * auVar84._0_4_;
      auVar86._8_4_ = fVar101 * auVar8._0_4_;
      auVar86._12_4_ = fVar104 * auVar85._0_4_;
      auVar103._0_4_ = fVar89 * auVar70._4_4_;
      auVar103._4_4_ = fVar91 * auVar84._4_4_;
      auVar103._8_4_ = fVar101 * auVar8._4_4_;
      auVar103._12_4_ = fVar104 * auVar85._4_4_;
      uVar79 = CONCAT44(auVar103._0_4_,auVar86._0_4_);
      uVar80 = CONCAT44(auVar103._4_4_,auVar86._4_4_);
      auVar84 = NEON_ext(auVar86,auVar86,8,1);
      auVar70 = NEON_ext(auVar103,auVar103,8,1);
      puVar3[1] = CONCAT44(fVar95,fVar95);
      *puVar3 = uVar79;
      puVar3[3] = CONCAT44(fVar98,fVar98);
      puVar3[2] = uVar80;
      puVar3[5] = CONCAT44(fVar107,fVar107);
      puVar3[4] = CONCAT44(auVar70._0_4_,auVar84._0_4_);
      puVar3[7] = CONCAT44(fVar109,fVar109);
      puVar3[6] = CONCAT44(auVar70._4_4_,auVar84._4_4_);
    } while (pauVar35 + 4 < (undefined1 (*) [16])(lVar58 + (ulong)(uVar51 << 2) * 4));
    uVar61 = (ulong)(uVar51 * uVar38);
    pfVar49 = pfVar65 + uVar61 * -4;
    pauVar35 = (undefined1 (*) [16])(pfVar65 + (uVar51 << 2));
    pauVar36 = pauVar35;
    if (pauVar35 <= (undefined1 (*) [16])(&local_190 + uVar43 * -2)) {
      pauVar36 = (undefined1 (*) [16])(&local_190 + uVar43 * -2);
    }
    uVar40 = 0;
    pfVar46 = pfVar49;
    do {
      pfVar62 = (float *)(&DAT_01d56d74 + uVar40 * 0xc + (ulong)(uVar38 - 1) * 0x54);
      lVar55 = 0;
      fVar101 = *pfVar62;
      fVar91 = -fVar101;
      fVar73 = pfVar62[2];
      fVar89 = pfVar62[1];
      do {
        pauVar41 = (undefined1 (*) [16])((long)pfVar65 + lVar55);
        puVar3 = (undefined8 *)((long)pfVar46 + lVar55);
        lVar55 = lVar55 + 0x40;
        auVar69 = *pauVar41;
        auVar70 = pauVar41[1];
        auVar84 = pauVar41[2];
        auVar8 = pauVar41[3];
        auVar93 = NEON_ext(auVar70,auVar70,8,1);
        auVar85 = NEON_ext(auVar69,auVar69,8,1);
        auVar97 = NEON_ext(auVar84,auVar84,8,1);
        auVar88 = NEON_ext(auVar8,auVar8,8,1);
        fVar104 = auVar85._0_4_;
        fVar98 = auVar93._0_4_;
        fVar95 = auVar97._0_4_;
        fVar107 = auVar88._0_4_;
        auVar71._0_4_ = auVar69._4_4_ + fVar104 * fVar89;
        auVar71._4_4_ = auVar70._4_4_ + fVar98 * fVar89;
        auVar71._8_4_ = auVar84._4_4_ + fVar95 * fVar89;
        auVar71._12_4_ = auVar8._4_4_ + fVar107 * fVar89;
        auVar72._0_4_ = fVar104 * fVar101 + auVar69._0_4_ * fVar73;
        auVar72._4_4_ = fVar98 * fVar101 + auVar70._0_4_ * fVar73;
        auVar72._8_4_ = fVar95 * fVar101 + auVar84._0_4_ * fVar73;
        auVar72._12_4_ = fVar107 * fVar101 + auVar8._0_4_ * fVar73;
        fVar104 = fVar104 * fVar73 + auVar69._0_4_ * fVar91;
        fVar98 = fVar98 * fVar73 + auVar70._0_4_ * fVar91;
        fVar95 = fVar95 * fVar73 + auVar84._0_4_ * fVar91;
        fVar107 = fVar107 * fVar73 + auVar8._0_4_ * fVar91;
        uVar79 = CONCAT44(auVar71._0_4_,auVar72._0_4_);
        uVar80 = CONCAT44(auVar71._4_4_,auVar72._4_4_);
        auVar70 = NEON_ext(auVar72,auVar72,8,1);
        auVar69 = NEON_ext(auVar71,auVar71,8,1);
        puVar3[1] = CONCAT44(fVar104,fVar104);
        *puVar3 = uVar79;
        puVar3[3] = CONCAT44(fVar98,fVar98);
        puVar3[2] = uVar80;
        *(float *)(puVar3 + 5) = fVar95;
        *(float *)((long)puVar3 + 0x2c) = fVar95;
        puVar3[4] = CONCAT44(auVar69._0_4_,auVar70._0_4_);
        puVar3[7] = CONCAT44(fVar107,fVar107);
        puVar3[6] = CONCAT44(auVar69._4_4_,auVar70._4_4_);
      } while (pauVar41 + 4 < pauVar35);
      uVar40 = uVar40 + 1;
      pfVar46 = (float *)((long)pfVar46 +
                         ((ulong)(*pauVar36 + ~(ulong)pfVar65) & 0xffffffffffffffc0) + 0x40);
    } while (uVar40 != uVar60);
    pfVar65 = pfVar49 + uVar61 * -4;
    FUN_004acd00(pfVar49,uVar61,param_4,param_10,pfVar65);
    puVar37 = *(uint **)(param_11 + 0x78);
    uVar60 = (ulong)*(uint *)(param_11 + 0x80);
    if (*(uint *)(param_11 + 0x80) != 0) goto LAB_004ac69c;
LAB_004ac6c8:
    puVar44 = puVar37;
LAB_004ac6cc:
    if (puVar44 == puVar37 + uVar60 * 4) goto LAB_004ac6e4;
    lVar55 = *(long *)(puVar44 + 2);
  }
  if (lVar55 == 0) {
    return;
  }
  lVar58 = 0;
  if ((param_1 < 1.0) &&
     (uVar51 = uVar52 >> 0xc & 0xffffb,
     uVar51 = uVar51 << 0xc | uVar52 - ((uVar52 >> 0xc) - uVar51 >> 2) & 0xff | 0x100,
     uVar52 != uVar51)) {
    puVar44 = *(uint **)(param_11 + 0x78);
    uVar38 = *(uint *)(param_11 + 0x80);
    puVar37 = puVar44;
    if (uVar38 == 0) {
LAB_004ac76c:
      if (puVar37 != puVar44 + (ulong)uVar38 * 4) {
        lVar58 = *(long *)(puVar37 + 2);
        goto LAB_004ac78c;
      }
    }
    else {
      lVar58 = (ulong)uVar38 << 4;
      do {
        if (*puVar37 == uVar51) goto LAB_004ac76c;
        lVar58 = lVar58 + -0x10;
        puVar37 = puVar37 + 4;
      } while (lVar58 != 0);
    }
    lVar58 = FUN_0047b520(param_11,uVar51);
  }
LAB_004ac78c:
  puVar42 = local_c0;
  fVar89 = DAT_01d4c244;
  fVar73 = DAT_01d4bfe0;
  fVar68 = fVar68 / (float)uVar43;
  uVar40 = (ulong)(uVar57 & 0xff);
  uVar57 = (uVar57 & 0xff) + 3;
  uVar4 = uVar57 >> 2;
  uVar61 = (ulong)(uVar4 << 4) - 1;
  lVar63 = (long)local_c0 - 2;
  uVar51 = ((uint)(uVar61 >> 4) & 0xfffffff) + 1;
  local_c0 = local_b0 + 2;
  local_b8 = -(uVar40 & 3);
  uVar60 = 0;
  iVar59 = 0;
  uVar38 = (int)uVar43 * 4;
  lVar66 = (long)puVar42 - 1;
  local_c8 = -((ulong)uVar51 & 3);
  do {
    if ((param_7 & 0xffff &
        *(uint *)(&DAT_01d56800 + uVar60 * 4 + (ulong)((int)local_100 - 1) * 0x20)) != 0) {
      uVar43 = (ulong)((*(uint *)(&DAT_01d56800 + uVar60 * 4 + (ulong)((int)local_100 - 1) * 0x20)
                       >> 0x10) * (uVar57 & 0x1fc));
      pfVar49 = pfVar65 + iVar59 * uVar38;
      pauVar35 = (undefined1 (*) [16])(local_b0 + uVar43);
      pfVar46 = pfVar49 + uVar38;
      do {
        fVar101 = pfVar49[2];
        fVar91 = *pfVar49;
        pfVar49 = pfVar49 + 4;
        if (((uVar52 & 0xfffff000) == 0x3000) && (*(int *)(param_11 + 0x54) == 1)) {
          fVar91 = fVar73 + fVar91 * (fVar89 * fVar91 + 0.5);
          fVar91 = fVar91 * fVar91;
          *(float *)*pauVar35 = (1.0 - fVar91) + *(float *)*pauVar35;
          pfVar62 = (float *)((long)*pauVar35 + 4);
        }
        else {
          uVar7 = 0xffffffff;
          if (lVar58 == 0) {
            do {
              do {
                uVar64 = uVar7;
                uVar7 = uVar64 + 1;
                pfVar62 = (float *)(lVar55 + (ulong)uVar7 * 0x10);
                fVar104 = *pfVar62 * fVar91 + fVar101 * pfVar62[1];
                fVar95 = pfVar62[2] * fVar91 + fVar101 * pfVar62[3];
              } while (fVar104 < 0.0);
            } while (fVar95 < 0.0);
            fVar101 = 1.0 / (fVar95 * fVar95 + fVar104 * fVar104);
            uVar6 = *(ushort *)(&DAT_01d56800 + (ulong)uVar7 * 4 + lVar66 * 0x20 + 2);
            fVar91 = fVar101 * fVar95 * fVar95;
            puVar54 = &DAT_01d56800 + (ulong)(uVar64 + 2) * 4 + lVar66 * 0x20;
            *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) =
                 *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) + fVar104 * fVar104 * fVar101;
          }
          else {
            do {
              do {
                uVar64 = uVar7;
                uVar7 = uVar64 + 1;
                pfVar62 = (float *)(lVar55 + (ulong)uVar7 * 0x10);
                fVar104 = *pfVar62 * fVar91 + fVar101 * pfVar62[1];
                fVar95 = pfVar62[2] * fVar91 + fVar101 * pfVar62[3];
              } while (fVar104 < 0.0);
            } while (fVar95 < 0.0);
            uVar6 = *(ushort *)(&DAT_01d56800 + (ulong)uVar7 * 4 + lVar66 * 0x20 + 2);
            fVar98 = (1.0 / (fVar95 * fVar95 + fVar104 * fVar104)) * param_1;
            *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) =
                 *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) + fVar104 * fVar104 * fVar98;
            uVar6 = *(ushort *)(&DAT_01d56800 + (ulong)(uVar64 + 2) * 4 + lVar66 * 0x20 + 2);
            *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) =
                 *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) + fVar95 * fVar95 * fVar98;
            uVar7 = 0xffffffff;
            do {
              do {
                uVar64 = uVar7;
                uVar7 = uVar64 + 1;
                pfVar62 = (float *)(lVar58 + (ulong)uVar7 * 0x10);
                fVar104 = *pfVar62 * fVar91 + fVar101 * pfVar62[1];
                fVar95 = pfVar62[2] * fVar91 + fVar101 * pfVar62[3];
              } while (fVar104 < 0.0);
            } while (fVar95 < 0.0);
            uVar6 = *(ushort *)(&UNK_01d56920 + (ulong)uVar7 * 4 + lVar63 * 0x20 + 2);
            fVar101 = (1.0 / (fVar95 * fVar95 + fVar104 * fVar104)) * (1.0 - param_1);
            fVar91 = fVar101 * fVar95 * fVar95;
            *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) =
                 *(float *)((long)*pauVar35 + (ulong)uVar6 * 4) + fVar104 * fVar104 * fVar101;
            puVar54 = &UNK_01d56920 + (ulong)(uVar64 + 2) * 4 + lVar63 * 0x20;
          }
          pfVar62 = (float *)((long)*pauVar35 + (ulong)*(ushort *)(puVar54 + 2) * 4);
        }
        *pfVar62 = *pfVar62 + fVar91;
      } while (pfVar49 < pfVar46);
      if ((param_8 & 0xff) != 0) {
        if (uVar40 - 1 < 3) {
          lVar67 = 0;
        }
        else {
          lVar67 = 0;
          pfVar49 = (float *)(local_b0 + 2 + uVar43);
          do {
            lVar67 = lVar67 + 4;
            pfVar49[-2] = pfVar49[-2] * fVar68;
            pfVar49[-1] = pfVar49[-1] * fVar68;
            *pfVar49 = *pfVar49 * fVar68;
            pfVar49[1] = pfVar49[1] * fVar68;
            pfVar49 = pfVar49 + 4;
          } while (uVar40 - (uVar40 & 3) != lVar67);
        }
        if ((param_8 & 3) != 0) {
          pfVar49 = (float *)(local_b0 + lVar67 + uVar43);
          lVar67 = local_b8;
          do {
            lVar67 = lVar67 + 1;
            *pfVar49 = *pfVar49 * fVar68;
            pfVar49 = pfVar49 + 1;
          } while (lVar67 != 0);
        }
      }
      pauVar36 = pauVar35 + uVar4;
      if (pauVar35 < pauVar36) {
        if ((uVar51 & 3) != 0) {
          lVar67 = local_c8;
          pauVar41 = pauVar35;
          do {
            pauVar35 = pauVar41 + 1;
            lVar67 = lVar67 + 1;
            auVar69 = NEON_frsqrte(*pauVar41,4);
            auVar69 = NEON_frecpe(auVar69,4);
            *(long *)((long)*pauVar41 + 8) = auVar69._8_8_;
            *(long *)*pauVar41 = auVar69._0_8_;
            pauVar41 = pauVar35;
          } while (lVar67 != 0);
        }
        if (0x2f < uVar61) {
          do {
            auVar70 = NEON_frsqrte(pauVar35[1],4);
            auVar69 = NEON_frsqrte(*pauVar35,4);
            auVar70 = NEON_frecpe(auVar70,4);
            auVar69 = NEON_frecpe(auVar69,4);
            *(long *)((long)*pauVar35 + 8) = auVar69._8_8_;
            *(long *)*pauVar35 = auVar69._0_8_;
            *(long *)((long)pauVar35[1] + 8) = auVar70._8_8_;
            *(long *)pauVar35[1] = auVar70._0_8_;
            auVar69 = pauVar35[3];
            auVar70 = NEON_frsqrte(pauVar35[2],4);
            auVar70 = NEON_frecpe(auVar70,4);
            *(long *)((long)pauVar35[2] + 8) = auVar70._8_8_;
            *(long *)pauVar35[2] = auVar70._0_8_;
            auVar69 = NEON_frsqrte(auVar69,4);
            auVar69 = NEON_frecpe(auVar69,4);
            *(long *)((long)pauVar35[3] + 8) = auVar69._8_8_;
            *(long *)pauVar35[3] = auVar69._0_8_;
            pauVar35 = pauVar35 + 4;
          } while (pauVar35 < pauVar36);
        }
      }
      iVar59 = iVar59 + 1;
    }
    uVar60 = uVar60 + 1;
  } while (uVar60 < local_100);
  return;
}


