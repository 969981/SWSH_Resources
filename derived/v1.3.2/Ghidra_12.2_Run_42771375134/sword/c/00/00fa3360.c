/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa3360; name: FUN_00fa3360
 */


void FUN_00fa3360(char *param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  ushort uVar2;
  bool bVar3;
  undefined8 uVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  ushort *puVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint uVar17;
  
  lVar9 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar4 = *(undefined8 *)(lVar9 + 0x7b8);
  param_1[0x50] = '\0';
  param_1[0x51] = '\0';
  param_1[0x52] = '\0';
  param_1[0x53] = '\0';
  param_1[0x54] = '\0';
  param_1[0x55] = '\0';
  param_1[0x56] = '\0';
  param_1[0x57] = '\0';
  pcVar12 = param_1 + 0x48;
  pcVar12[0] = '\0';
  pcVar12[1] = '\0';
  pcVar12[2] = '\0';
  pcVar12[3] = '\0';
  pcVar12[4] = '\0';
  pcVar12[5] = '\0';
  pcVar12[6] = '\0';
  pcVar12[7] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x40] = '\0';
  param_1[0x41] = '\0';
  param_1[0x42] = '\0';
  param_1[0x43] = '\0';
  param_1[0x44] = '\0';
  param_1[0x45] = '\0';
  param_1[0x30] = '\0';
  param_1[0x31] = '\0';
  param_1[0x32] = '\0';
  param_1[0x33] = '\0';
  param_1[0x34] = '\0';
  param_1[0x35] = '\0';
  param_1[0x36] = '\0';
  param_1[0x37] = '\0';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  param_1[0x20] = '\0';
  param_1[0x21] = '\0';
  param_1[0x22] = '\0';
  param_1[0x23] = '\0';
  param_1[0x24] = '\0';
  param_1[0x25] = '\0';
  param_1[0x26] = '\0';
  param_1[0x27] = '\0';
  param_1[0x28] = '\0';
  param_1[0x29] = '\0';
  param_1[0x2a] = '\0';
  param_1[0x2b] = '\0';
  param_1[0x2c] = '\0';
  param_1[0x2d] = '\0';
  param_1[0x2e] = '\0';
  param_1[0x2f] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  param_1[0x1c] = '\0';
  param_1[0x1d] = '\0';
  param_1[0x1e] = '\0';
  param_1[0x1f] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  param_1[0x58] = '\0';
  param_1[0x59] = '\0';
  param_1[0x5a] = '\0';
  param_1[0x5b] = '\0';
  param_1[0x5c] = '\0';
  param_1[0x5d] = '\0';
  param_1[0x5e] = '\0';
  param_1[0x5f] = '\0';
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x78] = 'E';
  param_1[0x79] = '&';
  param_1[0x7a] = '\"';
  param_1[0x7b] = -0x7c;
  param_1[0x7c] = -0x1c;
  param_1[0x7d] = -100;
  param_1[0x7e] = -0xe;
  param_1[0x7f] = -0x35;
  param_1[0x80] = 'E';
  param_1[0x81] = '&';
  param_1[0x82] = '\"';
  param_1[0x83] = -0x7c;
  param_1[0x84] = -0x1c;
  param_1[0x85] = -100;
  param_1[0x86] = -0xe;
  param_1[0x87] = -0x35;
  pcVar11 = param_1 + 0x88;
  pcVar11[0] = '\0';
  pcVar11[1] = '\0';
  pcVar11[2] = '\0';
  pcVar11[3] = '\0';
  pcVar11[4] = '\0';
  pcVar11[5] = '\0';
  pcVar11[6] = '\0';
  pcVar11[7] = '\0';
  param_1[0xa0] = '\0';
  param_1[0xa1] = '\0';
  param_1[0xa2] = '\0';
  param_1[0xa3] = '\0';
  param_1[0xa4] = '\0';
  param_1[0xa5] = '\0';
  param_1[0xa6] = '\0';
  param_1[0xa7] = '\0';
  pcVar10 = param_1 + 0x98;
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  param_1[0x8d] = '\0';
  param_1[0x8e] = '\0';
  param_1[0x8f] = '\0';
  param_1[0x90] = '\0';
  param_1[0x91] = '\0';
  param_1[0x92] = '\0';
  param_1[0x93] = '\0';
  param_1[0x94] = '\0';
  param_1[0x170] = '\0';
  param_1[0x138] = '\0';
  param_1[0x139] = '\0';
  param_1[0x13a] = '\0';
  param_1[0x13b] = '\0';
  param_1[0x13c] = '\0';
  param_1[0x13d] = '\0';
  param_1[0x13e] = '\0';
  param_1[0x13f] = '\0';
  param_1[0x140] = '\0';
  param_1[0x141] = '\0';
  param_1[0x142] = '\0';
  param_1[0x143] = '\0';
  param_1[0x144] = '\0';
  param_1[0x145] = '\0';
  param_1[0x146] = '\0';
  param_1[0x147] = '\0';
  param_1[0x128] = '\0';
  param_1[0x129] = '\0';
  param_1[0x12a] = '\0';
  param_1[299] = '\0';
  param_1[300] = '\0';
  param_1[0x12d] = '\0';
  param_1[0x12e] = '\0';
  param_1[0x12f] = '\0';
  param_1[0x130] = '\0';
  param_1[0x131] = '\0';
  param_1[0x132] = '\0';
  param_1[0x133] = '\0';
  param_1[0x134] = '\0';
  param_1[0x135] = '\0';
  param_1[0x136] = '\0';
  param_1[0x137] = '\0';
  param_1[0x118] = '\0';
  param_1[0x119] = '\0';
  param_1[0x11a] = '\0';
  param_1[0x11b] = '\0';
  param_1[0x11c] = '\0';
  param_1[0x11d] = '\0';
  param_1[0x11e] = '\0';
  param_1[0x11f] = '\0';
  param_1[0x120] = '\0';
  param_1[0x121] = '\0';
  param_1[0x122] = '\0';
  param_1[0x123] = '\0';
  param_1[0x124] = '\0';
  param_1[0x125] = '\0';
  param_1[0x126] = '\0';
  param_1[0x127] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0xf8] = '\0';
  param_1[0xf9] = '\0';
  param_1[0xfa] = '\0';
  param_1[0xfb] = '\0';
  param_1[0xfc] = '\0';
  param_1[0xfd] = '\0';
  param_1[0xfe] = '\0';
  param_1[0xff] = '\0';
  param_1[0x100] = '\0';
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  param_1[0xe8] = '\0';
  param_1[0xe9] = '\0';
  param_1[0xea] = '\0';
  param_1[0xeb] = '\0';
  param_1[0xec] = '\0';
  param_1[0xed] = '\0';
  param_1[0xee] = '\0';
  param_1[0xef] = '\0';
  param_1[0xf0] = '\0';
  param_1[0xf1] = '\0';
  param_1[0xf2] = '\0';
  param_1[0xf3] = '\0';
  param_1[0xf4] = '\0';
  param_1[0xf5] = '\0';
  param_1[0xf6] = '\0';
  param_1[0xf7] = '\0';
  param_1[0xd8] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xda] = '\0';
  param_1[0xdb] = '\0';
  param_1[0xdc] = '\0';
  param_1[0xdd] = '\0';
  param_1[0xde] = '\0';
  param_1[0xdf] = '\0';
  param_1[0xe0] = '\0';
  param_1[0xe1] = '\0';
  param_1[0xe2] = '\0';
  param_1[0xe3] = '\0';
  param_1[0xe4] = '\0';
  param_1[0xe5] = '\0';
  param_1[0xe6] = '\0';
  param_1[0xe7] = '\0';
  param_1[200] = '\0';
  param_1[0xc9] = '\0';
  param_1[0xca] = '\0';
  param_1[0xcb] = '\0';
  param_1[0xcc] = '\0';
  param_1[0xcd] = '\0';
  param_1[0xce] = '\0';
  param_1[0xcf] = '\0';
  param_1[0xd0] = '\0';
  param_1[0xd1] = '\0';
  param_1[0xd2] = '\0';
  param_1[0xd3] = '\0';
  param_1[0xd4] = '\0';
  param_1[0xd5] = '\0';
  param_1[0xd6] = '\0';
  param_1[0xd7] = '\0';
  param_1[0xb8] = '\0';
  param_1[0xb9] = '\0';
  param_1[0xba] = '\0';
  param_1[0xbb] = '\0';
  param_1[0xbc] = '\0';
  param_1[0xbd] = '\0';
  param_1[0xbe] = '\0';
  param_1[0xbf] = '\0';
  param_1[0xc0] = '\0';
  param_1[0xc1] = '\0';
  param_1[0xc2] = '\0';
  param_1[0xc3] = '\0';
  param_1[0xc4] = '\0';
  param_1[0xc5] = '\0';
  param_1[0xc6] = '\0';
  param_1[199] = '\0';
  param_1[0xa8] = '\0';
  param_1[0xa9] = '\0';
  param_1[0xaa] = '\0';
  param_1[0xab] = '\0';
  param_1[0xac] = '\0';
  param_1[0xad] = '\0';
  param_1[0xae] = '\0';
  param_1[0xaf] = '\0';
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xb2] = '\0';
  param_1[0xb3] = '\0';
  param_1[0xb4] = '\0';
  param_1[0xb5] = '\0';
  param_1[0xb6] = '\0';
  param_1[0xb7] = '\0';
  param_1[0x160] = '\0';
  param_1[0x161] = '\0';
  param_1[0x162] = '\0';
  param_1[0x163] = '\0';
  param_1[0x164] = '\0';
  param_1[0x165] = '\0';
  param_1[0x166] = '\0';
  param_1[0x167] = '\0';
  param_1[0x168] = '\0';
  param_1[0x169] = '\0';
  param_1[0x16a] = '\0';
  param_1[0x16b] = '\0';
  param_1[0x16c] = '\0';
  param_1[0x16d] = '\0';
  param_1[0x16e] = '\0';
  param_1[0x16f] = '\0';
  param_1[0x150] = '\0';
  param_1[0x151] = '\0';
  param_1[0x152] = '\0';
  param_1[0x153] = '\0';
  param_1[0x154] = '\0';
  param_1[0x155] = '\0';
  param_1[0x156] = '\0';
  param_1[0x157] = '\0';
  param_1[0x158] = '\0';
  param_1[0x159] = '\0';
  param_1[0x15a] = '\0';
  param_1[0x15b] = '\0';
  param_1[0x15c] = '\0';
  param_1[0x15d] = '\0';
  param_1[0x15e] = '\0';
  param_1[0x15f] = '\0';
  piVar5 = (int *)FUN_00fa2380(uVar4,param_2,param_3);
  if (piVar5 != (int *)0x0) {
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x43) {
      lVar7 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x21];
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)piVar5 + uVar6);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    snprintf(param_1,0x40,"%s",lVar7 + 4);
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x3f) {
      uVar13 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1f];
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x40) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x1b) {
      bVar3 = false;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xd];
      bVar3 = false;
      if (uVar6 != 0) {
        bVar3 = *(char *)((long)piVar5 + uVar6) != '\0';
      }
    }
    param_1[0x44] = bVar3;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x1d) {
      bVar3 = false;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0xe];
      bVar3 = false;
      if (uVar6 != 0) {
        bVar3 = *(char *)((long)piVar5 + uVar6) != '\0';
      }
    }
    param_1[0x45] = bVar3;
    uVar13 = 0;
    uVar14 = 0;
    if (0x26 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x13];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)pcVar12 = uVar14;
    uVar14 = 0;
    if (0x24 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x12];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = uVar14;
    uVar14 = 0;
    if (6 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[3];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x50) = uVar14;
    uVar14 = 0;
    if (4 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x54) = uVar14;
    uVar14 = 0;
    if (0x4e < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x27];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x58) = uVar14;
    uVar14 = 0;
    if (0x34 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1a];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar14;
    uVar14 = 0;
    if (0x32 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x19];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x60) = uVar14;
    uVar14 = 0;
    if (0x50 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x28];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 100) = uVar14;
    uVar14 = 0;
    if (0x54 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2a];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x68) = uVar14;
    if ((0x52 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x29], uVar6 != 0)) {
      uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
    }
    *(undefined4 *)(param_1 + 0x6c) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x21) {
      uVar13 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x10];
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x70) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x23) {
      uVar13 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x11];
      uVar13 = 0;
      if (uVar6 != 0) {
        uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x74) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xd) {
      uVar4 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[6];
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = *(undefined8 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x78) = uVar4;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0xf) {
      uVar4 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[7];
      uVar4 = 0;
      if (uVar6 != 0) {
        uVar4 = *(undefined8 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    uVar13 = 0;
    uVar14 = 0;
    if (0x5e < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2f];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)pcVar11 = uVar14;
    uVar14 = 0;
    if (0x5c < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2e];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x8c) = uVar14;
    if ((0x56 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2b], uVar6 != 0)) {
      uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
    }
    *(undefined4 *)(param_1 + 0x90) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x61) {
      bVar3 = false;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x30];
      bVar3 = false;
      if (uVar6 != 0) {
        bVar3 = *(char *)((long)piVar5 + uVar6) != '\0';
      }
    }
    param_1[0x94] = bVar3;
    uVar13 = 0;
    uVar14 = 0;
    if (0x2a < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x15];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)pcVar10 = uVar14;
    uVar14 = 0;
    if (0x2c < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x16];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x9c) = uVar14;
    uVar14 = 0;
    if (0x2e < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x17];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xa0) = uVar14;
    uVar14 = 0;
    if (0x46 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x23];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xa4) = uVar14;
    uVar14 = 0;
    if (0x10 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[8];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xa8) = uVar14;
    uVar14 = 0;
    if (0x36 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1b];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xac) = uVar14;
    uVar14 = 0;
    if (0x38 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1c];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xb0) = uVar14;
    uVar14 = 0;
    if (0x3a < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1d];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar14;
    uVar14 = 0;
    if (0x3c < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x1e];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0xb8) = uVar14;
    if ((0x40 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
       (uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x20], uVar6 != 0)) {
      uVar13 = *(undefined4 *)((long)piVar5 + uVar6);
    }
    *(undefined4 *)(param_1 + 0xbc) = uVar13;
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x45) {
      lVar7 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x22];
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)piVar5 + uVar6);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    snprintf(param_1 + 0xc0,0x40,"%s",lVar7 + 4);
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x29) {
      lVar7 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x14];
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)piVar5 + uVar6);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    snprintf(param_1 + 0x100,0x40,"%s",lVar7 + 4);
    uVar13 = 0;
    uVar14 = 0;
    if (0x58 < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2c];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x140) = uVar14;
    uVar14 = 0;
    if (0x5a < *(ushort *)((long)piVar5 - (long)*piVar5)) {
      uVar6 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[0x2d];
      uVar14 = 0;
      if (uVar6 != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + uVar6);
      }
    }
    *(undefined4 *)(param_1 + 0x144) = uVar14;
    puVar8 = (ushort *)((long)piVar5 - (long)*piVar5);
    uVar2 = *puVar8;
    uVar16 = 0;
    uVar14 = 0;
    uVar17 = 0;
    if (0x12 < uVar2) {
      uVar16 = 0;
      uVar14 = 0;
      if ((ulong)puVar8[9] != 0) {
        uVar14 = *(undefined4 *)((long)piVar5 + (ulong)puVar8[9]);
      }
      if (uVar2 < 0x15) {
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        uVar16 = 0;
        if ((ulong)puVar8[10] != 0) {
          uVar16 = *(undefined4 *)((long)piVar5 + (ulong)puVar8[10]);
        }
        if ((0x16 < uVar2) && ((ulong)puVar8[0xb] != 0)) {
          uVar17 = *(uint *)((long)piVar5 + (ulong)puVar8[0xb]);
        }
      }
    }
    uVar15 = 0;
    uVar6 = 0;
    *(ulong *)(param_1 + 0x158) = (ulong)uVar17;
    *(ulong *)(param_1 + 0x150) = CONCAT44(uVar16,uVar14);
    puVar8 = (ushort *)((long)piVar5 - (long)*piVar5);
    uVar2 = *puVar8;
    if (0x48 < uVar2) {
      uVar13 = 0;
      uVar15 = 0;
      if ((ulong)puVar8[0x24] != 0) {
        uVar15 = *(undefined4 *)((long)piVar5 + (ulong)puVar8[0x24]);
      }
      if (uVar2 < 0x4b) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        uVar13 = 0;
        if ((ulong)puVar8[0x25] != 0) {
          uVar13 = *(undefined4 *)((long)piVar5 + (ulong)puVar8[0x25]);
        }
        if ((0x4c < uVar2) && ((ulong)puVar8[0x26] != 0)) {
          uVar6 = (ulong)*(uint *)((long)piVar5 + (ulong)puVar8[0x26]);
        }
      }
    }
    param_1[0x170] = '\x01';
    *(ulong *)(param_1 + 0x168) = uVar6;
    *(ulong *)(param_1 + 0x160) = CONCAT44(uVar13,uVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00fa3c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  return;
}


