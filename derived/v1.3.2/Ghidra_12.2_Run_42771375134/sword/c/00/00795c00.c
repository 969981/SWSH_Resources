/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00795c00; name: FUN_00795c00
 */


void FUN_00795c00(undefined1 *param_1,int *param_2)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  ushort uVar6;
  ushort uVar7;
  undefined8 uVar8;
  bool bVar9;
  ushort *puVar10;
  ulong uVar11;
  ushort *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  FUN_00796e80(param_1);
  puVar10 = (ushort *)((long)param_2 - (long)*param_2);
  uVar6 = *puVar10;
  if (uVar6 < 7) {
    *param_1 = 0;
LAB_00795ca0:
    *(undefined4 *)(param_1 + 4) = 0;
LAB_00795ca4:
    *(undefined4 *)(param_1 + 8) = 0;
LAB_00795ca8:
    *(undefined4 *)(param_1 + 0xc) = 0;
LAB_00795cac:
    *(undefined4 *)(param_1 + 0x10) = 0;
LAB_00795cb0:
    *(undefined4 *)(param_1 + 0x14) = 0;
LAB_00795cb4:
    *(undefined4 *)(param_1 + 0x18) = 0;
LAB_00795cb8:
    *(undefined4 *)(param_1 + 0x1c) = 0;
LAB_00795cbc:
    *(undefined4 *)(param_1 + 0x20) = 0;
LAB_00795cc0:
    *(undefined4 *)(param_1 + 0x24) = 0;
LAB_00795cc4:
    *(undefined4 *)(param_1 + 0x28) = 0;
LAB_00795cc8:
    *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_00795ccc:
    *(undefined4 *)(param_1 + 0x30) = 0;
LAB_00795cd0:
    *(undefined4 *)(param_1 + 0x34) = 0;
LAB_00795cd4:
    *(undefined4 *)(param_1 + 0x38) = 0;
LAB_00795cd8:
    *(undefined4 *)(param_1 + 0x3c) = 0;
LAB_00795cdc:
    *(undefined4 *)(param_1 + 0x40) = 0;
LAB_00795ce0:
    *(undefined4 *)(param_1 + 0x44) = 0;
LAB_00795ce4:
    *(undefined4 *)(param_1 + 0x48) = 0;
LAB_00795ce8:
    *(undefined4 *)(param_1 + 0x58) = 0;
LAB_00795cec:
    *(undefined4 *)(param_1 + 0x5c) = 0;
LAB_00795cf0:
    *(undefined4 *)(param_1 + 0x60) = 0;
LAB_00795cf4:
    *(undefined4 *)(param_1 + 0x70) = 0;
LAB_00795cf8:
    *(undefined4 *)(param_1 + 0x74) = 0;
LAB_00795cfc:
    *(undefined4 *)(param_1 + 0x78) = 0;
    param_1[0x80] = 0;
LAB_00795d04:
    param_1[0x81] = 0;
LAB_00795d08:
    *(undefined4 *)(param_1 + 0x84) = 0;
LAB_00795d0c:
    *(undefined4 *)(param_1 + 0x88) = 0;
LAB_00795d10:
    *(undefined4 *)(param_1 + 0x8c) = 0;
LAB_00795d14:
    *(undefined4 *)(param_1 + 0x90) = 0;
LAB_00795d18:
    param_1[0x94] = 0;
LAB_00795d1c:
    param_1[0x95] = 0;
LAB_00795d20:
    *(undefined4 *)(param_1 + 0x98) = 0;
LAB_00795d24:
    *(undefined4 *)(param_1 + 0x9c) = 0;
LAB_00795d28:
    param_1[0xa0] = 0;
LAB_00795d2c:
    param_1[0xa1] = 0;
LAB_00795d30:
    *(undefined4 *)(param_1 + 0xa4) = 0;
LAB_00795d34:
    *(undefined4 *)(param_1 + 0xa8) = 0;
LAB_00795d38:
    *(undefined4 *)(param_1 + 0xac) = 0;
LAB_00795d3c:
    *(undefined4 *)(param_1 + 0xb0) = 0;
LAB_00795d40:
    *(undefined4 *)(param_1 + 0xb4) = 0;
LAB_00795d44:
    param_1[0xb8] = 0;
LAB_00795d48:
    *(undefined4 *)(param_1 + 0xbc) = 0;
LAB_00795d4c:
    *(undefined4 *)(param_1 + 0xc0) = 0;
LAB_00795d50:
    *(undefined4 *)(param_1 + 0xc4) = 0;
LAB_00795d54:
    *(undefined4 *)(param_1 + 200) = 0;
LAB_00795d58:
    *(undefined4 *)(param_1 + 0xcc) = 0;
LAB_00795d5c:
    *(undefined4 *)(param_1 + 0xd0) = 0;
LAB_00795d60:
    *(undefined4 *)(param_1 + 0xd4) = 0;
LAB_00795d64:
    param_1[0xf6] = 0;
LAB_00795d68:
    *(undefined4 *)(param_1 + 0xf8) = 0;
LAB_00795d6c:
    *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
LAB_00795d74:
    *(undefined4 *)(param_1 + 0x100) = 0x41f00000;
LAB_00795d7c:
    *(undefined4 *)(param_1 + 0x104) = 0x41a00000;
LAB_00795d84:
    *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
LAB_00795d8c:
    *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
LAB_00795d94:
    *(undefined4 *)(param_1 + 0x110) = 0;
LAB_00795d98:
    *(undefined4 *)(param_1 + 0x114) = 0;
LAB_00795d9c:
    *(undefined4 *)(param_1 + 0x1b0) = 0;
LAB_00795da0:
    *(undefined4 *)(param_1 + 0x1b4) = 0;
LAB_00795da4:
    param_1[0x1b8] = 0;
    *(undefined4 *)(param_1 + 0x1bc) = 1;
LAB_00795db0:
    *(undefined4 *)(param_1 + 0x1c0) = 0x40000000;
LAB_00795db8:
    *(undefined4 *)(param_1 + 0x1c4) = 0x3f800000;
LAB_00795dc0:
    *(undefined4 *)(param_1 + 0x1c8) = 0x3d4ccccd;
LAB_00795dcc:
    *(undefined4 *)(param_1 + 0x1cc) = 0x3d4ccccd;
LAB_00795dd8:
    *(undefined8 *)(param_1 + 0x1d0) = 0x3d4ccccd00000000;
    *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
    if (uVar6 < 0x93) {
      return;
    }
    uVar6 = puVar10[0x49];
  }
  else {
    bVar9 = false;
    if ((ulong)puVar10[3] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[3]) != '\0';
    }
    *param_1 = bVar9;
    if (uVar6 < 9) goto LAB_00795ca0;
    if ((ulong)puVar10[4] == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      if (10 < uVar6) goto LAB_00795c68;
      goto LAB_00795ca4;
    }
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[4]);
    if (uVar6 < 0xb) goto LAB_00795ca4;
LAB_00795c68:
    if ((ulong)puVar10[5] == 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      if (0xc < uVar6) goto LAB_00795c80;
      goto LAB_00795ca8;
    }
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((long)param_2 + (ulong)puVar10[5]);
    if (uVar6 < 0xd) goto LAB_00795ca8;
LAB_00795c80:
    if ((ulong)puVar10[6] == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      if (0xe < uVar6) goto LAB_00795ff0;
      goto LAB_00795cac;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[6]);
    if (uVar6 < 0xf) goto LAB_00795cac;
LAB_00795ff0:
    if ((ulong)puVar10[7] == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (0x10 < uVar6) goto LAB_00796048;
      goto LAB_00795cb0;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((long)param_2 + (ulong)puVar10[7]);
    if (uVar6 < 0x11) goto LAB_00795cb0;
LAB_00796048:
    if ((ulong)puVar10[8] == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0x12 < uVar6) goto LAB_007960a0;
      goto LAB_00795cb4;
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)param_2 + (ulong)puVar10[8]);
    if (uVar6 < 0x13) goto LAB_00795cb4;
LAB_007960a0:
    if ((ulong)puVar10[9] == 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (0x14 < uVar6) goto LAB_007960fc;
      goto LAB_00795cb8;
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)param_2 + (ulong)puVar10[9]);
    if (uVar6 < 0x15) goto LAB_00795cb8;
LAB_007960fc:
    if ((ulong)puVar10[10] == 0) {
      *(undefined4 *)(param_1 + 0x1c) = 0;
      if (0x16 < uVar6) goto LAB_0079614c;
      goto LAB_00795cbc;
    }
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[10]);
    if (uVar6 < 0x17) goto LAB_00795cbc;
LAB_0079614c:
    if ((ulong)puVar10[0xb] == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (0x18 < uVar6) goto LAB_00796178;
      goto LAB_00795cc0;
    }
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0xb]);
    if (uVar6 < 0x19) goto LAB_00795cc0;
LAB_00796178:
    if ((ulong)puVar10[0xc] == 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
      if (0x1a < uVar6) goto LAB_007961a4;
      goto LAB_00795cc4;
    }
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0xc]);
    if (uVar6 < 0x1b) goto LAB_00795cc4;
LAB_007961a4:
    if ((ulong)puVar10[0xd] == 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      if (0x1c < uVar6) goto LAB_007961d0;
      goto LAB_00795cc8;
    }
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0xd]);
    if (uVar6 < 0x1d) goto LAB_00795cc8;
LAB_007961d0:
    if ((ulong)puVar10[0xe] == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      if (0x1e < uVar6) goto LAB_007961fc;
      goto LAB_00795ccc;
    }
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0xe]);
    if (uVar6 < 0x1f) goto LAB_00795ccc;
LAB_007961fc:
    if ((ulong)puVar10[0xf] == 0) {
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (0x20 < uVar6) goto LAB_00796228;
      goto LAB_00795cd0;
    }
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0xf]);
    if (uVar6 < 0x21) goto LAB_00795cd0;
LAB_00796228:
    if ((ulong)puVar10[0x10] == 0) {
      *(undefined4 *)(param_1 + 0x34) = 0;
      if (0x22 < uVar6) goto LAB_00796254;
      goto LAB_00795cd4;
    }
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x10]);
    if (uVar6 < 0x23) goto LAB_00795cd4;
LAB_00796254:
    if ((ulong)puVar10[0x11] == 0) {
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (0x24 < uVar6) goto LAB_00796280;
      goto LAB_00795cd8;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x11]);
    if (uVar6 < 0x25) goto LAB_00795cd8;
LAB_00796280:
    if ((ulong)puVar10[0x12] == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
      if (0x26 < uVar6) goto LAB_007962ac;
      goto LAB_00795cdc;
    }
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x12]);
    if (uVar6 < 0x27) goto LAB_00795cdc;
LAB_007962ac:
    if ((ulong)puVar10[0x13] == 0) {
      *(undefined4 *)(param_1 + 0x40) = 0;
      if (0x28 < uVar6) goto LAB_007962d8;
      goto LAB_00795ce0;
    }
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x13]);
    if (uVar6 < 0x29) goto LAB_00795ce0;
LAB_007962d8:
    uVar13 = 0;
    if ((ulong)puVar10[0x14] != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x14]);
    }
    *(undefined4 *)(param_1 + 0x44) = uVar13;
    if (uVar6 < 0x2b) goto LAB_00795ce4;
    if ((ulong)puVar10[0x15] != 0) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x15]);
      if (0x7e < uVar6) goto LAB_0079631c;
LAB_00796348:
      if (0x2c < uVar6) goto LAB_00796350;
      goto LAB_00795ce8;
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (uVar6 < 0x7f) goto LAB_00796348;
LAB_0079631c:
    if (((ulong)puVar10[0x3f] == 0) ||
       (puVar3 = (undefined4 *)((long)param_2 + (ulong)puVar10[0x3f]), puVar3 == (undefined4 *)0x0))
    {
LAB_00796350:
      uVar11 = (ulong)puVar10[0x16];
      if (uVar11 == 0) goto LAB_0079636c;
LAB_00796358:
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)((long)param_2 + uVar11);
      if (0x2e < uVar6) goto LAB_0079637c;
      goto LAB_00795cec;
    }
    *(undefined4 *)(param_1 + 0x4c) = *puVar3;
    uVar13 = puVar3[2];
    *(undefined4 *)(param_1 + 0x50) = puVar3[1];
    *(undefined4 *)(param_1 + 0x54) = uVar13;
    uVar11 = (ulong)puVar10[0x16];
    if (uVar11 != 0) goto LAB_00796358;
LAB_0079636c:
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (uVar6 < 0x2f) goto LAB_00795cec;
LAB_0079637c:
    if ((ulong)puVar10[0x17] == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      if (0x30 < uVar6) goto LAB_007963a8;
      goto LAB_00795cf0;
    }
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x17]);
    if (uVar6 < 0x31) goto LAB_00795cf0;
LAB_007963a8:
    if ((ulong)puVar10[0x18] != 0) {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x18]);
      if (0x80 < uVar6) goto LAB_007963d4;
LAB_00796400:
      if (0x32 < uVar6) goto LAB_00796408;
      goto LAB_00795cf4;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    if (uVar6 < 0x81) goto LAB_00796400;
LAB_007963d4:
    if (((ulong)puVar10[0x40] == 0) ||
       (puVar3 = (undefined4 *)((long)param_2 + (ulong)puVar10[0x40]), puVar3 == (undefined4 *)0x0))
    {
LAB_00796408:
      uVar11 = (ulong)puVar10[0x19];
      if (uVar11 == 0) goto LAB_00796424;
LAB_00796410:
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)((long)param_2 + uVar11);
      if (0x34 < uVar6) goto LAB_00796434;
      goto LAB_00795cf8;
    }
    *(undefined4 *)(param_1 + 100) = *puVar3;
    uVar13 = puVar3[2];
    *(undefined4 *)(param_1 + 0x68) = puVar3[1];
    *(undefined4 *)(param_1 + 0x6c) = uVar13;
    uVar11 = (ulong)puVar10[0x19];
    if (uVar11 != 0) goto LAB_00796410;
LAB_00796424:
    *(undefined4 *)(param_1 + 0x70) = 0;
    if (uVar6 < 0x35) goto LAB_00795cf8;
LAB_00796434:
    if ((ulong)puVar10[0x1a] == 0) {
      *(undefined4 *)(param_1 + 0x74) = 0;
      if (0x36 < uVar6) goto LAB_00796460;
      goto LAB_00795cfc;
    }
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x1a]);
    if (uVar6 < 0x37) goto LAB_00795cfc;
LAB_00796460:
    if ((ulong)puVar10[0x1b] != 0) {
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x1b]);
      if (0x82 < uVar6) goto LAB_0079648c;
LAB_007964b0:
      param_1[0x80] = 0;
      if (0x3a < uVar6) {
        uVar11 = (ulong)puVar10[0x1d];
        bVar9 = false;
        if (uVar11 != 0) goto LAB_007964c4;
        goto LAB_007964d0;
      }
      goto LAB_00795d04;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (uVar6 < 0x83) goto LAB_007964b0;
LAB_0079648c:
    bVar9 = false;
    if ((ulong)puVar10[0x41] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x41]) != '\0';
    }
    param_1[0x80] = bVar9;
    uVar11 = (ulong)puVar10[0x1d];
    if (uVar11 == 0) {
      bVar9 = false;
    }
    else {
LAB_007964c4:
      bVar9 = *(char *)((long)param_2 + uVar11) != '\0';
    }
LAB_007964d0:
    param_1[0x81] = bVar9;
    if (uVar6 < 0x3d) goto LAB_00795d08;
    uVar13 = 0;
    if ((ulong)puVar10[0x1e] != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x1e]);
    }
    *(undefined4 *)(param_1 + 0x84) = uVar13;
    if (uVar6 < 0x3f) goto LAB_00795d0c;
    if ((ulong)puVar10[0x1f] == 0) {
      *(undefined4 *)(param_1 + 0x88) = 0;
      if (0x40 < uVar6) goto LAB_00796520;
      goto LAB_00795d10;
    }
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x1f]);
    if (uVar6 < 0x41) goto LAB_00795d10;
LAB_00796520:
    if ((ulong)puVar10[0x20] == 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      if (0x42 < uVar6) goto LAB_0079654c;
      goto LAB_00795d14;
    }
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x20]);
    if (uVar6 < 0x43) goto LAB_00795d14;
LAB_0079654c:
    if ((ulong)puVar10[0x21] == 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      if (0x44 < uVar6) goto LAB_00796578;
      goto LAB_00795d18;
    }
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x21]);
    if (uVar6 < 0x45) goto LAB_00795d18;
LAB_00796578:
    bVar9 = false;
    if ((ulong)puVar10[0x22] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x22]) != '\0';
    }
    param_1[0x94] = bVar9;
    if (uVar6 < 0x47) goto LAB_00795d1c;
    bVar9 = false;
    if ((ulong)puVar10[0x23] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x23]) != '\0';
    }
    param_1[0x95] = bVar9;
    if (uVar6 < 0x49) goto LAB_00795d20;
    if ((ulong)puVar10[0x24] == 0) {
      *(undefined4 *)(param_1 + 0x98) = 0;
      if (0x4a < uVar6) goto LAB_007965e4;
      goto LAB_00795d24;
    }
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x24]);
    if (uVar6 < 0x4b) goto LAB_00795d24;
LAB_007965e4:
    if ((ulong)puVar10[0x25] == 0) {
      *(undefined4 *)(param_1 + 0x9c) = 0;
      if (0x4c < uVar6) goto LAB_00796610;
      goto LAB_00795d28;
    }
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x25]);
    if (uVar6 < 0x4d) goto LAB_00795d28;
LAB_00796610:
    bVar9 = false;
    if ((ulong)puVar10[0x26] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x26]) != '\0';
    }
    param_1[0xa0] = bVar9;
    if (uVar6 < 0x4f) goto LAB_00795d2c;
    bVar9 = false;
    if ((ulong)puVar10[0x27] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x27]) != '\0';
    }
    param_1[0xa1] = bVar9;
    if (uVar6 < 0x51) goto LAB_00795d30;
    if ((ulong)puVar10[0x28] == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0;
      if (0x52 < uVar6) goto LAB_0079667c;
      goto LAB_00795d34;
    }
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x28]);
    if (uVar6 < 0x53) goto LAB_00795d34;
LAB_0079667c:
    if ((ulong)puVar10[0x29] == 0) {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      if (0x54 < uVar6) goto LAB_007966a8;
      goto LAB_00795d38;
    }
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x29]);
    if (uVar6 < 0x55) goto LAB_00795d38;
LAB_007966a8:
    if ((ulong)puVar10[0x2a] == 0) {
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (0x56 < uVar6) goto LAB_007966d4;
      goto LAB_00795d3c;
    }
    *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x2a]);
    if (uVar6 < 0x57) goto LAB_00795d3c;
LAB_007966d4:
    if ((ulong)puVar10[0x2b] == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      if (0x58 < uVar6) goto LAB_00796700;
      goto LAB_00795d40;
    }
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x2b]);
    if (uVar6 < 0x59) goto LAB_00795d40;
LAB_00796700:
    uVar13 = 0;
    if ((ulong)puVar10[0x2c] != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x2c]);
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar13;
    if (uVar6 < 0x5b) goto LAB_00795d44;
    bVar9 = false;
    if ((ulong)puVar10[0x2d] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x2d]) != '\0';
    }
    param_1[0xb8] = bVar9;
    if (uVar6 < 0x5d) goto LAB_00795d48;
    if ((ulong)puVar10[0x2e] == 0) {
      *(undefined4 *)(param_1 + 0xbc) = 0;
      if (0x5e < uVar6) goto LAB_00796764;
      goto LAB_00795d4c;
    }
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x2e]);
    if (uVar6 < 0x5f) goto LAB_00795d4c;
LAB_00796764:
    if ((ulong)puVar10[0x2f] == 0) {
      *(undefined4 *)(param_1 + 0xc0) = 0;
      if (0x60 < uVar6) goto LAB_00796790;
      goto LAB_00795d50;
    }
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x2f]);
    if (uVar6 < 0x61) goto LAB_00795d50;
LAB_00796790:
    if ((ulong)puVar10[0x30] == 0) {
      *(undefined4 *)(param_1 + 0xc4) = 0;
      if (0x62 < uVar6) goto LAB_007967bc;
      goto LAB_00795d54;
    }
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x30]);
    if (uVar6 < 99) goto LAB_00795d54;
LAB_007967bc:
    if ((ulong)puVar10[0x31] == 0) {
      *(undefined4 *)(param_1 + 200) = 0;
      if (100 < uVar6) goto LAB_007967e8;
      goto LAB_00795d58;
    }
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x31]);
    if (uVar6 < 0x65) goto LAB_00795d58;
LAB_007967e8:
    if ((ulong)puVar10[0x32] == 0) {
      *(undefined4 *)(param_1 + 0xcc) = 0;
      if (0x66 < uVar6) goto LAB_00796814;
      goto LAB_00795d5c;
    }
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x32]);
    if (uVar6 < 0x67) goto LAB_00795d5c;
LAB_00796814:
    if ((ulong)puVar10[0x33] == 0) {
      *(undefined4 *)(param_1 + 0xd0) = 0;
      if (0x68 < uVar6) goto LAB_00796840;
      goto LAB_00795d60;
    }
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x33]);
    if (uVar6 < 0x69) goto LAB_00795d60;
LAB_00796840:
    if ((ulong)puVar10[0x34] == 0) {
      *(undefined4 *)(param_1 + 0xd4) = 0;
      if (0x6a < uVar6) goto LAB_0079686c;
      goto LAB_00795d64;
    }
    *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x34]);
    if (uVar6 < 0x6b) goto LAB_00795d64;
LAB_0079686c:
    bVar9 = false;
    if ((ulong)puVar10[0x35] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x35]) != '\0';
    }
    param_1[0xf6] = bVar9;
    if (uVar6 < 0x6d) goto LAB_00795d68;
    uVar13 = 0;
    if ((ulong)puVar10[0x36] != 0) {
      uVar13 = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x36]);
    }
    *(undefined4 *)(param_1 + 0xf8) = uVar13;
    if (uVar6 < 0x6f) goto LAB_00795d6c;
    if ((ulong)puVar10[0x37] == 0) {
      *(undefined4 *)(param_1 + 0xfc) = 0x3f800000;
      if (0x70 < uVar6) goto LAB_007968d0;
      goto LAB_00795d74;
    }
    *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x37]);
    if (uVar6 < 0x71) goto LAB_00795d74;
LAB_007968d0:
    if ((ulong)puVar10[0x38] == 0) {
      *(undefined4 *)(param_1 + 0x100) = 0x41f00000;
      if (0x72 < uVar6) goto LAB_007968fc;
      goto LAB_00795d7c;
    }
    *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x38]);
    if (uVar6 < 0x73) goto LAB_00795d7c;
LAB_007968fc:
    if ((ulong)puVar10[0x39] == 0) {
      *(undefined4 *)(param_1 + 0x104) = 0x41a00000;
      if (0x74 < uVar6) goto LAB_00796928;
      goto LAB_00795d84;
    }
    *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x39]);
    if (uVar6 < 0x75) goto LAB_00795d84;
LAB_00796928:
    if ((ulong)puVar10[0x3a] == 0) {
      *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
      if (0x76 < uVar6) goto LAB_00796954;
      goto LAB_00795d8c;
    }
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x3a]);
    if (uVar6 < 0x77) goto LAB_00795d8c;
LAB_00796954:
    if ((ulong)puVar10[0x3b] == 0) {
      *(undefined4 *)(param_1 + 0x10c) = 0x3f800000;
      if (0x78 < uVar6) goto LAB_00796980;
      goto LAB_00795d94;
    }
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x3b]);
    if (uVar6 < 0x79) goto LAB_00795d94;
LAB_00796980:
    if ((ulong)puVar10[0x3c] == 0) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      if (0x7a < uVar6) goto LAB_007969ac;
      goto LAB_00795d98;
    }
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x3c]);
    if (uVar6 < 0x7b) goto LAB_00795d98;
LAB_007969ac:
    if ((ulong)puVar10[0x3d] == 0) {
      *(undefined4 *)(param_1 + 0x114) = 0;
      if (0x7c < uVar6) goto LAB_007969d8;
      goto LAB_00795d9c;
    }
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x3d]);
    if (uVar6 < 0x7d) goto LAB_00795d9c;
LAB_007969d8:
    if (((ulong)puVar10[0x3e] != 0) &&
       (puVar1 = (uint *)((long)param_2 + (ulong)puVar10[0x3e]),
       piVar2 = (int *)((long)puVar1 + (ulong)*puVar1), piVar2 != (int *)0x0)) {
      puVar12 = (ushort *)((long)piVar2 - (long)*piVar2);
      puVar3 = (undefined4 *)((long)piVar2 + (ulong)puVar12[2]);
      uVar13 = *puVar3;
      puVar5 = (undefined4 *)0x0;
      if (puVar12[2] != 0) {
        puVar5 = puVar3;
      }
      uVar14 = puVar5[1];
      uVar7 = *puVar12;
      *(ulong *)(param_1 + 0x128) = CONCAT44(puVar3[3],puVar5[2]);
      *(ulong *)(param_1 + 0x120) = CONCAT44(uVar14,uVar13);
      uVar13 = 0;
      uVar14 = 0;
      if ((ulong)puVar12[3] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[3]);
      }
      *(undefined4 *)(param_1 + 0x130) = uVar14;
      if ((ulong)puVar12[4] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[4]);
      }
      *(undefined4 *)(param_1 + 0x134) = uVar13;
      uVar13 = 0;
      if ((ulong)puVar12[5] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[5]);
      }
      *(undefined4 *)(param_1 + 0x138) = uVar13;
      puVar3 = (undefined4 *)((long)piVar2 + (ulong)puVar12[6]);
      uVar13 = *puVar3;
      puVar5 = (undefined4 *)0x0;
      if (puVar12[6] != 0) {
        puVar5 = puVar3;
      }
      uVar14 = puVar5[1];
      *(ulong *)(param_1 + 0x148) = CONCAT44(puVar3[3],puVar5[2]);
      *(ulong *)(param_1 + 0x140) = CONCAT44(uVar14,uVar13);
      uVar13 = 0;
      uVar14 = 0;
      if ((ulong)puVar12[7] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[7]);
      }
      *(undefined4 *)(param_1 + 0x150) = uVar14;
      uVar14 = 0;
      if ((ulong)puVar12[8] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[8]);
      }
      *(undefined4 *)(param_1 + 0x154) = uVar14;
      if ((ulong)puVar12[9] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[9]);
      }
      *(undefined4 *)(param_1 + 0x158) = uVar13;
      bVar9 = false;
      if ((ulong)puVar12[10] != 0) {
        bVar9 = *(char *)((long)piVar2 + (ulong)puVar12[10]) != '\0';
      }
      param_1[0x15c] = bVar9;
      puVar3 = (undefined4 *)((long)piVar2 + (ulong)puVar12[0xb]);
      uVar13 = *puVar3;
      puVar5 = (undefined4 *)0x0;
      if (puVar12[0xb] != 0) {
        puVar5 = puVar3;
      }
      uVar14 = puVar5[1];
      *(ulong *)(param_1 + 0x168) = CONCAT44(puVar3[3],puVar5[2]);
      *(ulong *)(param_1 + 0x160) = CONCAT44(uVar14,uVar13);
      if ((ulong)puVar12[0xc] == 0) {
        *(undefined4 *)(param_1 + 0x170) = 0;
        uVar11 = (ulong)puVar12[0xd];
        uVar13 = 0;
        if (uVar11 != 0) goto LAB_00796b44;
      }
      else {
        *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0xc]);
        uVar11 = (ulong)puVar12[0xd];
        if (uVar11 == 0) {
          uVar13 = 0;
        }
        else {
LAB_00796b44:
          uVar13 = *(undefined4 *)((long)piVar2 + uVar11);
        }
      }
      uVar14 = 0;
      *(undefined4 *)(param_1 + 0x174) = uVar13;
      uVar13 = 0;
      if ((ulong)puVar12[0xe] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0xe]);
      }
      *(undefined4 *)(param_1 + 0x178) = uVar13;
      if ((ulong)puVar12[0xf] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0xf]);
      }
      *(undefined4 *)(param_1 + 0x17c) = uVar14;
      bVar9 = false;
      if ((ulong)puVar12[0x10] != 0) {
        bVar9 = *(char *)((long)piVar2 + (ulong)puVar12[0x10]) != '\0';
      }
      uVar13 = 0;
      param_1[0x180] = bVar9;
      uVar14 = 0;
      if ((ulong)puVar12[0x11] != 0) {
        uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0x11]);
      }
      *(undefined4 *)(param_1 + 0x184) = uVar14;
      if ((ulong)puVar12[0x12] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0x12]);
      }
      *(undefined4 *)(param_1 + 0x188) = uVar13;
      bVar9 = false;
      if ((ulong)puVar12[0x13] != 0) {
        bVar9 = *(char *)((long)piVar2 + (ulong)puVar12[0x13]) != '\0';
      }
      param_1[0x18c] = bVar9;
      puVar3 = (undefined4 *)((long)piVar2 + (ulong)puVar12[0x14]);
      uVar13 = *puVar3;
      puVar5 = (undefined4 *)0x0;
      if (puVar12[0x14] != 0) {
        puVar5 = puVar3;
      }
      uVar14 = puVar5[1];
      *(ulong *)(param_1 + 0x198) = CONCAT44(puVar3[3],puVar5[2]);
      *(ulong *)(param_1 + 400) = CONCAT44(uVar14,uVar13);
      if (uVar7 < 0x2b) {
        *(undefined4 *)(param_1 + 0x1a0) = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        if ((ulong)puVar12[0x15] != 0) {
          uVar14 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0x15]);
        }
        *(undefined4 *)(param_1 + 0x1a0) = uVar14;
        if ((0x2c < uVar7) && ((ulong)puVar12[0x16] != 0)) {
          uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar12[0x16]);
        }
      }
      *(undefined4 *)(param_1 + 0x1a4) = uVar13;
    }
    if (uVar6 < 0x85) goto LAB_00795d9c;
    if ((ulong)puVar10[0x42] == 0) {
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      if (0x86 < uVar6) goto LAB_00796c74;
      goto LAB_00795da0;
    }
    *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x42]);
    if (uVar6 < 0x87) goto LAB_00795da0;
LAB_00796c74:
    if ((ulong)puVar10[0x43] == 0) {
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      if (0x88 < uVar6) goto LAB_00796ca0;
      goto LAB_00795da4;
    }
    *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x43]);
    if (uVar6 < 0x89) goto LAB_00795da4;
LAB_00796ca0:
    bVar9 = false;
    if ((ulong)puVar10[0x44] != 0) {
      bVar9 = *(char *)((long)param_2 + (ulong)puVar10[0x44]) != '\0';
    }
    param_1[0x1b8] = bVar9;
    if (uVar6 < 0x95) {
      *(undefined4 *)(param_1 + 0x1bc) = 1;
      if (0x8a < uVar6) goto LAB_00796cf8;
      goto LAB_00795db0;
    }
    if ((ulong)puVar10[0x4a] == 0) {
      *(undefined4 *)(param_1 + 0x1bc) = 1;
LAB_00796cf8:
      uVar11 = (ulong)puVar10[0x45];
      if (uVar11 == 0) goto LAB_00796d14;
LAB_00796d00:
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)((long)param_2 + uVar11);
      if (0x8c < uVar6) goto LAB_00796d24;
      goto LAB_00795db8;
    }
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x4a]);
    uVar11 = (ulong)puVar10[0x45];
    if (uVar11 != 0) goto LAB_00796d00;
LAB_00796d14:
    *(undefined4 *)(param_1 + 0x1c0) = 0x40000000;
    if (uVar6 < 0x8d) goto LAB_00795db8;
LAB_00796d24:
    if ((ulong)puVar10[0x46] == 0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0x3f800000;
      if (0x8e < uVar6) goto LAB_00796d50;
      goto LAB_00795dc0;
    }
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x46]);
    if (uVar6 < 0x8f) goto LAB_00795dc0;
LAB_00796d50:
    if ((ulong)puVar10[0x47] == 0) {
      *(undefined4 *)(param_1 + 0x1c8) = DAT_01d4c158;
      if (0x90 < uVar6) goto LAB_00796d80;
      goto LAB_00795dcc;
    }
    *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x47]);
    if (uVar6 < 0x91) goto LAB_00795dcc;
LAB_00796d80:
    if ((ulong)puVar10[0x48] == 0) {
      *(undefined4 *)(param_1 + 0x1cc) = DAT_01d4c158;
      if (0x96 < uVar6) goto LAB_00796dac;
      goto LAB_00795dd8;
    }
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x48]);
    if (uVar6 < 0x97) goto LAB_00795dd8;
LAB_00796dac:
    if ((ulong)puVar10[0x4b] == 0) {
      *(undefined4 *)(param_1 + 0x1d0) = 0;
      if (uVar6 < 0x99) goto LAB_00796e58;
LAB_00796dd8:
      if ((ulong)puVar10[0x4c] == 0) {
        *(undefined4 *)(param_1 + 0x1d4) = DAT_01d4c158;
        if (0x9a < uVar6) goto LAB_00796e0c;
        goto LAB_00796e68;
      }
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x4c]);
      if (uVar6 < 0x9b) goto LAB_00796e68;
LAB_00796e0c:
      if (((ulong)puVar10[0x4d] != 0) &&
         (puVar4 = (undefined8 *)((long)param_2 + (ulong)puVar10[0x4d]), puVar4 != (undefined8 *)0x0
         )) {
        uVar8 = *puVar4;
        *(ulong *)(param_1 + 0x1e8) = (ulong)*(uint *)(puVar4 + 1);
        *(undefined8 *)(param_1 + 0x1e0) = uVar8;
      }
      if ((uVar6 < 0x9d) || ((ulong)puVar10[0x4e] == 0)) goto LAB_00796e68;
      *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x4e]);
      uVar6 = puVar10[0x49];
    }
    else {
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)((long)param_2 + (ulong)puVar10[0x4b]);
      if (0x98 < uVar6) goto LAB_00796dd8;
LAB_00796e58:
      *(undefined4 *)(param_1 + 0x1d4) = 0x3d4ccccd;
LAB_00796e68:
      *(undefined4 *)(param_1 + 0x1f0) = 0x3f800000;
      uVar6 = puVar10[0x49];
    }
  }
  if ((ulong)uVar6 == 0) {
    return;
  }
  puVar1 = (uint *)((long)param_2 + (ulong)uVar6);
  piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar10 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar6 = *puVar10;
  if (uVar6 < 5) {
    param_1[0x200] = 0;
    uVar13 = 0x3f800000;
  }
  else {
    bVar9 = false;
    if ((ulong)puVar10[2] != 0) {
      bVar9 = *(char *)((long)piVar2 + (ulong)puVar10[2]) != '\0';
    }
    uVar13 = 0x3f800000;
    param_1[0x200] = bVar9;
    if ((6 < uVar6) && ((ulong)puVar10[3] != 0)) {
      uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[3]);
    }
  }
  *(undefined4 *)(param_1 + 0x204) = uVar13;
  uVar8 = *(undefined8 *)((long)piVar2 + (ulong)puVar10[4]);
  *(ulong *)(param_1 + 0x218) =
       (ulong)*(uint *)((undefined8 *)((long)piVar2 + (ulong)puVar10[4]) + 1);
  *(undefined8 *)(param_1 + 0x210) = uVar8;
  uVar8 = *(undefined8 *)((long)piVar2 + (ulong)puVar10[5]);
  *(ulong *)(param_1 + 0x228) =
       (ulong)*(uint *)((undefined8 *)((long)piVar2 + (ulong)puVar10[5]) + 1);
  *(undefined8 *)(param_1 + 0x220) = uVar8;
  if (uVar6 < 0xd) {
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
LAB_00795ef4:
    *(undefined4 *)(param_1 + 0x234) = 0x3e800000;
LAB_00795efc:
    *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
LAB_00795f04:
    *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
  }
  else {
    if ((ulong)puVar10[6] == 0) {
      *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[6]);
    }
    if (uVar6 < 0xf) goto LAB_00795ef4;
    if ((ulong)puVar10[7] == 0) {
      *(undefined4 *)(param_1 + 0x234) = 0x3e800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[7]);
    }
    if (uVar6 < 0x11) goto LAB_00795efc;
    if ((ulong)puVar10[8] == 0) {
      *(undefined4 *)(param_1 + 0x238) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[8]);
    }
    if (uVar6 < 0x13) goto LAB_00795f04;
    if ((ulong)puVar10[9] == 0) {
      *(undefined4 *)(param_1 + 0x23c) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[9]);
    }
    if (0x14 < uVar6) {
      if ((ulong)puVar10[10] == 0) {
        *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
      }
      else {
        *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[10]);
      }
      uVar13 = 0x3f000000;
      if (0x16 < uVar6) {
        uVar13 = 0x3f000000;
        if ((ulong)puVar10[0xb] != 0) {
          uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[0xb]);
        }
      }
      goto LAB_00795f18;
    }
  }
  *(undefined4 *)(param_1 + 0x240) = 0x3f800000;
  uVar13 = 0x3f000000;
LAB_00795f18:
  *(undefined4 *)(param_1 + 0x244) = uVar13;
  uVar8 = *(undefined8 *)((long)piVar2 + (ulong)puVar10[0xc]);
  *(ulong *)(param_1 + 600) =
       (ulong)*(uint *)((undefined8 *)((long)piVar2 + (ulong)puVar10[0xc]) + 1);
  *(undefined8 *)(param_1 + 0x250) = uVar8;
  if (uVar6 < 0x1b) {
    *(undefined4 *)(param_1 + 0x260) = 0x41700000;
    uVar13 = 0x3f000000;
  }
  else {
    if ((ulong)puVar10[0xd] == 0) {
      *(undefined4 *)(param_1 + 0x260) = 0x41700000;
    }
    else {
      *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)((long)piVar2 + (ulong)puVar10[0xd]);
    }
    uVar13 = 0x3f000000;
    if (0x1c < uVar6) {
      uVar13 = 0x3f000000;
      if ((ulong)puVar10[0xe] != 0) {
        uVar13 = *(undefined4 *)((long)piVar2 + (ulong)puVar10[0xe]);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x264) = uVar13;
  return;
}


