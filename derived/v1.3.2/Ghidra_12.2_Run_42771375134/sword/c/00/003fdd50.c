/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003fdd50; name: FUN_003fdd50
 */


void FUN_003fdd50(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_3d0 [928];
  
  FUN_00217a60(auStack_3d0);
  memcpy(param_2,auStack_3d0,0x39c);
  lVar11 = 0;
  piVar12 = (int *)((long)param_2 + 0x374);
  do {
    piVar1 = (int *)((long)param_1 + lVar11 + 0x48);
    *(int *)((long)param_2 + lVar11 + 0x2cc) = *(int *)((long)param_2 + lVar11 + 0x2cc) + piVar1[-6]
    ;
    if (lVar11 != 0) {
      piVar12[-0x2a] = piVar12[-0x2a] + piVar1[-6];
    }
    *(int *)((long)param_2 + lVar11 + 0x2d0) = *(int *)((long)param_2 + lVar11 + 0x2d0) + piVar1[-5]
    ;
    if (lVar11 != 0x1c) {
      piVar12[-0x23] = piVar12[-0x23] + piVar1[-5];
    }
    *(int *)((long)param_2 + lVar11 + 0x2d4) = *(int *)((long)param_2 + lVar11 + 0x2d4) + piVar1[-4]
    ;
    if (lVar11 != 0x38) {
      piVar12[-0x1c] = piVar12[-0x1c] + piVar1[-4];
    }
    *(int *)((long)param_2 + lVar11 + 0x2d8) = *(int *)((long)param_2 + lVar11 + 0x2d8) + piVar1[-3]
    ;
    if (lVar11 != 0x54) {
      piVar12[-0x15] = piVar12[-0x15] + piVar1[-3];
    }
    *(int *)((long)param_2 + lVar11 + 0x2dc) = *(int *)((long)param_2 + lVar11 + 0x2dc) + piVar1[-2]
    ;
    if (lVar11 != 0x70) {
      piVar12[-0xe] = piVar12[-0xe] + piVar1[-2];
    }
    *(int *)((long)param_2 + lVar11 + 0x2e0) = *(int *)((long)param_2 + lVar11 + 0x2e0) + piVar1[-1]
    ;
    piVar12[-7] = piVar12[-7] + piVar1[-1];
    *(int *)((long)param_2 + lVar11 + 0x2e4) = *(int *)((long)param_2 + lVar11 + 0x2e4) + *piVar1;
    lVar11 = lVar11 + 0x1c;
    *piVar12 = *piVar12 + *piVar1;
    piVar12 = piVar12 + 1;
  } while (lVar11 != 0x8c);
  *(undefined4 *)(param_2 + 0xd) = *param_1;
  *(undefined4 *)((long)param_2 + 0x74) = param_1[3];
  *(undefined4 *)((long)param_2 + 0x6c) = param_1[1];
  *(undefined4 *)(param_2 + 0xf) = param_1[4];
  *(undefined4 *)(param_2 + 0xe) = param_1[2];
  *(undefined4 *)((long)param_2 + 0x7c) = param_1[5];
  *(undefined4 *)(param_2 + 0x10) = *param_3;
  *(undefined4 *)(param_2 + 0x41) = param_3[0x62];
  *(undefined4 *)((long)param_2 + 0x144) = param_3[0x31];
  uVar2 = param_3[1];
  *(undefined4 *)((long)param_2 + 0x84) = uVar2;
  *(undefined4 *)((long)param_2 + 0x9c) = uVar2;
  uVar2 = param_3[99];
  *(undefined4 *)((long)param_2 + 0x20c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x224) = uVar2;
  uVar2 = param_3[0x32];
  *(undefined4 *)(param_2 + 0x29) = uVar2;
  *(undefined4 *)(param_2 + 0x2c) = uVar2;
  uVar2 = param_3[2];
  *(undefined4 *)(param_2 + 0x11) = uVar2;
  *(undefined4 *)(param_2 + 0x17) = uVar2;
  uVar2 = param_3[100];
  *(undefined4 *)(param_2 + 0x42) = uVar2;
  *(undefined4 *)(param_2 + 0x48) = uVar2;
  uVar2 = param_3[0x33];
  *(undefined4 *)((long)param_2 + 0x14c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x17c) = uVar2;
  uVar2 = param_3[3];
  *(undefined4 *)((long)param_2 + 0x8c) = uVar2;
  *(undefined4 *)((long)param_2 + 0xd4) = uVar2;
  uVar2 = param_3[0x65];
  *(undefined4 *)((long)param_2 + 0x214) = uVar2;
  *(undefined4 *)((long)param_2 + 0x25c) = uVar2;
  uVar2 = param_3[0x34];
  *(undefined4 *)(param_2 + 0x2a) = uVar2;
  *(undefined4 *)(param_2 + 0x33) = uVar2;
  uVar2 = param_3[4];
  *(undefined4 *)(param_2 + 0x12) = uVar2;
  *(undefined4 *)(param_2 + 0x1e) = uVar2;
  uVar2 = param_3[0x66];
  *(undefined4 *)(param_2 + 0x43) = uVar2;
  *(undefined4 *)(param_2 + 0x4f) = uVar2;
  uVar2 = param_3[0x35];
  *(undefined4 *)((long)param_2 + 0x154) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1b4) = uVar2;
  uVar2 = param_3[5];
  *(undefined4 *)((long)param_2 + 0x94) = uVar2;
  *(undefined4 *)((long)param_2 + 0x10c) = uVar2;
  uVar2 = param_3[0x67];
  *(undefined4 *)((long)param_2 + 0x21c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x294) = uVar2;
  uVar2 = param_3[0x36];
  *(undefined4 *)(param_2 + 0x2b) = uVar2;
  *(undefined4 *)(param_2 + 0x3a) = uVar2;
  uVar2 = param_3[6];
  *(undefined4 *)(param_2 + 0x13) = uVar2;
  *(undefined4 *)(param_2 + 0x25) = uVar2;
  uVar2 = param_3[0x68];
  *(undefined4 *)(param_2 + 0x44) = uVar2;
  *(undefined4 *)(param_2 + 0x56) = uVar2;
  uVar2 = param_3[0x37];
  *(undefined4 *)((long)param_2 + 0x15c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1ec) = uVar2;
  *(undefined4 *)(param_2 + 0x14) = param_3[8];
  *(undefined4 *)(param_2 + 0x45) = param_3[0x6a];
  *(undefined4 *)((long)param_2 + 0x164) = param_3[0x39];
  uVar2 = param_3[9];
  *(undefined4 *)((long)param_2 + 0xa4) = uVar2;
  *(undefined4 *)((long)param_2 + 0xbc) = uVar2;
  uVar2 = param_3[0x6b];
  *(undefined4 *)((long)param_2 + 0x22c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x244) = uVar2;
  uVar2 = param_3[0x3a];
  *(undefined4 *)(param_2 + 0x2d) = uVar2;
  *(undefined4 *)(param_2 + 0x30) = uVar2;
  uVar2 = param_3[10];
  *(undefined4 *)(param_2 + 0x15) = uVar2;
  *(undefined4 *)(param_2 + 0x1b) = uVar2;
  uVar2 = param_3[0x6c];
  *(undefined4 *)(param_2 + 0x46) = uVar2;
  *(undefined4 *)(param_2 + 0x4c) = uVar2;
  uVar2 = param_3[0x3b];
  *(undefined4 *)((long)param_2 + 0x16c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x19c) = uVar2;
  uVar2 = param_3[0xb];
  *(undefined4 *)((long)param_2 + 0xac) = uVar2;
  *(undefined4 *)((long)param_2 + 0xf4) = uVar2;
  uVar2 = param_3[0x6d];
  *(undefined4 *)((long)param_2 + 0x234) = uVar2;
  *(undefined4 *)((long)param_2 + 0x27c) = uVar2;
  uVar2 = param_3[0x3c];
  *(undefined4 *)(param_2 + 0x2e) = uVar2;
  *(undefined4 *)(param_2 + 0x37) = uVar2;
  uVar2 = param_3[0xc];
  *(undefined4 *)(param_2 + 0x16) = uVar2;
  *(undefined4 *)(param_2 + 0x22) = uVar2;
  uVar2 = param_3[0x6e];
  *(undefined4 *)(param_2 + 0x47) = uVar2;
  *(undefined4 *)(param_2 + 0x53) = uVar2;
  uVar2 = param_3[0x3d];
  *(undefined4 *)((long)param_2 + 0x174) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1d4) = uVar2;
  uVar2 = param_3[0xd];
  *(undefined4 *)((long)param_2 + 0xb4) = uVar2;
  *(undefined4 *)((long)param_2 + 300) = uVar2;
  uVar2 = param_3[0x6f];
  *(undefined4 *)((long)param_2 + 0x23c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x2b4) = uVar2;
  uVar2 = param_3[0x3e];
  *(undefined4 *)(param_2 + 0x2f) = uVar2;
  *(undefined4 *)(param_2 + 0x3e) = uVar2;
  *(undefined4 *)(param_2 + 0x18) = param_3[0x10];
  *(undefined4 *)(param_2 + 0x49) = param_3[0x72];
  *(undefined4 *)((long)param_2 + 0x184) = param_3[0x41];
  uVar2 = param_3[0x11];
  *(undefined4 *)((long)param_2 + 0xc4) = uVar2;
  *(undefined4 *)((long)param_2 + 0xdc) = uVar2;
  uVar2 = param_3[0x73];
  *(undefined4 *)((long)param_2 + 0x24c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x264) = uVar2;
  uVar2 = param_3[0x42];
  *(undefined4 *)(param_2 + 0x31) = uVar2;
  *(undefined4 *)(param_2 + 0x34) = uVar2;
  uVar2 = param_3[0x12];
  *(undefined4 *)(param_2 + 0x19) = uVar2;
  *(undefined4 *)(param_2 + 0x1f) = uVar2;
  uVar2 = param_3[0x74];
  *(undefined4 *)(param_2 + 0x4a) = uVar2;
  *(undefined4 *)(param_2 + 0x50) = uVar2;
  uVar2 = param_3[0x43];
  *(undefined4 *)((long)param_2 + 0x18c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1bc) = uVar2;
  uVar2 = param_3[0x13];
  *(undefined4 *)((long)param_2 + 0xcc) = uVar2;
  *(undefined4 *)((long)param_2 + 0x114) = uVar2;
  uVar2 = param_3[0x75];
  *(undefined4 *)((long)param_2 + 0x254) = uVar2;
  *(undefined4 *)((long)param_2 + 0x29c) = uVar2;
  uVar2 = param_3[0x44];
  *(undefined4 *)(param_2 + 0x32) = uVar2;
  *(undefined4 *)(param_2 + 0x3b) = uVar2;
  uVar2 = param_3[0x14];
  *(undefined4 *)(param_2 + 0x1a) = uVar2;
  *(undefined4 *)(param_2 + 0x26) = uVar2;
  uVar2 = param_3[0x76];
  *(undefined4 *)(param_2 + 0x4b) = uVar2;
  *(undefined4 *)(param_2 + 0x57) = uVar2;
  uVar2 = param_3[0x45];
  *(undefined4 *)((long)param_2 + 0x194) = uVar2;
  *(undefined4 *)((long)param_2 + 500) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = param_3[0x18];
  *(undefined4 *)(param_2 + 0x4d) = param_3[0x7a];
  *(undefined4 *)((long)param_2 + 0x1a4) = param_3[0x49];
  uVar2 = param_3[0x19];
  *(undefined4 *)((long)param_2 + 0xe4) = uVar2;
  *(undefined4 *)((long)param_2 + 0xfc) = uVar2;
  uVar2 = param_3[0x7b];
  *(undefined4 *)((long)param_2 + 0x26c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x284) = uVar2;
  uVar2 = param_3[0x4a];
  *(undefined4 *)(param_2 + 0x35) = uVar2;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  uVar2 = param_3[0x1a];
  *(undefined4 *)(param_2 + 0x1d) = uVar2;
  *(undefined4 *)(param_2 + 0x23) = uVar2;
  uVar2 = param_3[0x7c];
  *(undefined4 *)(param_2 + 0x4e) = uVar2;
  *(undefined4 *)(param_2 + 0x54) = uVar2;
  uVar2 = param_3[0x4b];
  *(undefined4 *)((long)param_2 + 0x1ac) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1dc) = uVar2;
  uVar2 = param_3[0x1b];
  *(undefined4 *)((long)param_2 + 0xec) = uVar2;
  *(undefined4 *)((long)param_2 + 0x134) = uVar2;
  uVar2 = param_3[0x7d];
  *(undefined4 *)((long)param_2 + 0x274) = uVar2;
  *(undefined4 *)((long)param_2 + 700) = uVar2;
  uVar2 = param_3[0x4c];
  *(undefined4 *)(param_2 + 0x36) = uVar2;
  *(undefined4 *)(param_2 + 0x3f) = uVar2;
  *(undefined4 *)(param_2 + 0x20) = param_3[0x20];
  *(undefined4 *)(param_2 + 0x51) = param_3[0x82];
  *(undefined4 *)((long)param_2 + 0x1c4) = param_3[0x51];
  uVar2 = param_3[0x21];
  *(undefined4 *)((long)param_2 + 0x104) = uVar2;
  *(undefined4 *)((long)param_2 + 0x11c) = uVar2;
  uVar2 = param_3[0x83];
  *(undefined4 *)((long)param_2 + 0x28c) = uVar2;
  *(undefined4 *)((long)param_2 + 0x2a4) = uVar2;
  uVar2 = param_3[0x52];
  *(undefined4 *)(param_2 + 0x39) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar2;
  uVar2 = param_3[0x22];
  *(undefined4 *)(param_2 + 0x21) = uVar2;
  *(undefined4 *)(param_2 + 0x27) = uVar2;
  uVar2 = param_3[0x84];
  *(undefined4 *)(param_2 + 0x52) = uVar2;
  *(undefined4 *)(param_2 + 0x58) = uVar2;
  uVar2 = param_3[0x53];
  *(undefined4 *)((long)param_2 + 0x1cc) = uVar2;
  *(undefined4 *)((long)param_2 + 0x1fc) = uVar2;
  *(undefined4 *)(param_2 + 0x24) = param_3[0x28];
  *(undefined4 *)(param_2 + 0x55) = param_3[0x8a];
  *(undefined4 *)((long)param_2 + 0x1e4) = param_3[0x59];
  uVar2 = param_3[0x29];
  *(undefined4 *)((long)param_2 + 0x124) = uVar2;
  *(undefined4 *)((long)param_2 + 0x13c) = uVar2;
  uVar2 = param_3[0x8b];
  *(undefined4 *)((long)param_2 + 0x2ac) = uVar2;
  *(undefined4 *)((long)param_2 + 0x2c4) = uVar2;
  uVar2 = param_3[0x5a];
  *(undefined4 *)(param_2 + 0x3d) = uVar2;
  *(undefined4 *)(param_2 + 0x40) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = param_3[0x30];
  *(undefined4 *)(param_2 + 0x59) = param_3[0x92];
  *(undefined4 *)((long)param_2 + 0x204) = param_3[0x61];
  iVar3 = param_3[0x9c];
  uVar2 = param_3[0x95];
  uVar14 = *(undefined8 *)(param_3 + 0x96);
  uVar4 = param_3[0x98];
  uVar13 = *(undefined8 *)(param_3 + 0x99);
  uVar5 = param_3[0x9b];
  uVar6 = param_3[0x9d];
  uVar7 = param_3[0x9e];
  uVar8 = param_3[0x9f];
  uVar9 = param_3[0xa0];
  uVar10 = param_3[0xa1];
  param_2[9] = *(undefined8 *)(param_3 + 0x93);
  *param_2 = uVar14;
  *(undefined4 *)(param_2 + 1) = uVar4;
  param_2[7] = uVar13;
  *(undefined4 *)(param_2 + 10) = uVar2;
  *(undefined4 *)((long)param_2 + 0x54) = uVar6;
  *(undefined4 *)(param_2 + 0xb) = uVar7;
  *(undefined4 *)((long)param_2 + 0x5c) = uVar8;
  *(undefined4 *)(param_2 + 0xc) = uVar9;
  *(undefined4 *)((long)param_2 + 100) = uVar10;
  *(undefined4 *)(param_2 + 8) = uVar5;
  *(int *)((long)param_2 + 0x44) = iVar3 << 0xe;
  return;
}


