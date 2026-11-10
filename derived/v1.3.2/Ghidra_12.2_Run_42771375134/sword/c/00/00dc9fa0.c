/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dc9fa0; name: FUN_00dc9fa0
 */


/* WARNING: Removing unreachable block (ram,0x00dcad44) */
/* WARNING: Removing unreachable block (ram,0x00dcadd8) */

void FUN_00dc9fa0(long *param_1,long param_2,long *param_3,int *param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7,undefined4 param_8)

{
  undefined *puVar1;
  char *__format;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  code *pcVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  ushort *puVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  long lVar19;
  byte *pbVar20;
  ulong uVar21;
  undefined8 *puVar22;
  char *__format_00;
  long lVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined *local_220;
  long local_218;
  undefined8 local_210;
  code *local_208;
  code *local_200;
  undefined8 local_1f8;
  undefined1 auStack_1f0 [96];
  undefined8 local_190;
  code *local_188;
  code *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [96];
  undefined8 local_110;
  undefined8 local_100;
  code *local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [96];
  undefined4 local_80;
  
  uVar21 = 0xcbf29ce484222645;
  FUN_006d8b50();
  *(undefined4 *)((long)param_1 + 0x184) = 0;
  puVar1 = PTR_DAT_0271e970;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x43] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x42] = 0;
  param_1[0x41] = 0;
  param_1[0x36] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  param_1[0x47] = 0;
  param_1[9] = (long)(puVar1 + 0x98);
  param_1[10] = (long)(puVar1 + 0xd8);
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x46] = (long)(PTR_DAT_02715b00 + 0x10);
  param_1[0x68] = 0;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x9f] = 0;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = (long)(PTR_DAT_02715e48 + 0x10);
  param_1[0xac] = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xbe] = -0x340d631b7bddd9bb;
  param_1[0xbf] = (long)&DAT_01d38550;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe5] = 0;
  param_1[0xe4] = 0;
  param_1[0xd7] = 0;
  param_1[0xd6] = 0;
  param_1[0xd5] = 0;
  param_1[0xd4] = 0;
  param_1[0xd3] = 0;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xcd] = 0;
  param_1[0xcc] = 0;
  param_1[0xcb] = 0;
  param_1[0xca] = 0;
  param_1[0xc9] = 0;
  param_1[200] = 0;
  param_1[199] = 0;
  param_1[0xc6] = 0;
  param_1[0xc5] = 0;
  param_1[0xc4] = 0;
  param_1[0xc3] = 0;
  param_1[0xc2] = 0;
  param_1[0xc1] = 0;
  puVar1 = PTR_DAT_027150e0 + 0x10;
  param_1[0xc0] = 0;
  param_1[0xd2] = (long)puVar1;
  param_1[0xf4] = 0;
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xf6] = 0;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x111] = 0;
  param_1[0x110] = 0;
  param_1[0x10f] = 0;
  param_1[0x10e] = 0;
  param_1[0x10d] = 0;
  param_1[0x10c] = 0;
  param_1[0x10b] = 0;
  param_1[0x10a] = 0;
  param_1[0x109] = 0;
  param_1[0x108] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  param_1[299] = 0;
  param_1[0x12a] = 0;
  param_1[0x129] = 0;
  param_1[0x128] = 0;
  param_1[0x11b] = 0;
  param_1[0x11a] = 0;
  param_1[0x119] = 0;
  param_1[0x118] = 0;
  param_1[0x117] = 0;
  param_1[0x116] = (long)(PTR_DAT_02715070 + 0x10);
  param_1[0x138] = 0;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0;
  param_1[0x13b] = 0;
  param_1[0x13a] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  param_1[0x14a] = 0;
  param_1[0x14d] = param_2;
  param_1[0x14e] = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  *(undefined2 *)(param_1 + 0x150) = 0;
  *(undefined1 *)((long)param_1 + 0xa82) = 1;
  *(undefined1 *)((long)param_1 + 0xa83) = 0;
  param_1[0x151] = *param_7;
  lVar12 = param_7[1];
  param_1[0x152] = lVar12;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x153) = param_8;
  param_1[0x154] = -0x340d631b7bddd9bb;
  param_1[0x155] = (long)&DAT_01d38550;
  param_1[0x157] = 0;
  param_1[0x156] = 0;
  *(undefined4 *)(param_1 + 0x158) = 0x459c4000;
  *(undefined1 *)((long)param_1 + 0xac4) = 0;
  param_1[0x160] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x15f] = 0;
  param_1[0x15e] = 0;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar12 = FUN_0075ecb0();
  }
  param_1[0x161] = lVar12;
  param_1[0x162] = 0;
  *(undefined4 *)(param_1 + 0x163) = 0;
  param_1[0x166] = 0;
  param_1[0x165] = 0;
  param_1[0x164] = 0;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar12 = FUN_0075ecb0();
  }
  param_1[0x167] = lVar12;
  param_1[0x168] = 0;
  *(undefined4 *)(param_1 + 0x169) = 0;
  *(undefined1 *)(param_1 + 0x16a) = 0;
  param_1[0x16d] = 0;
  param_1[0x16c] = 0;
  param_1[0x16b] = 0;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar12 = FUN_0075ecb0();
  }
  param_1[0x16e] = lVar12;
  param_1[0x16f] = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  param_1[0x173] = 0;
  param_1[0x172] = 0;
  param_1[0x171] = 0;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0x80) == 0)) ||
     (lVar12 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8), lVar12 == 0)) {
    lVar12 = FUN_0075ecb0();
  }
  param_1[0x174] = lVar12;
  param_1[0x175] = 0;
  *(undefined4 *)(param_1 + 0x176) = 0;
  *(ulong *)(param_1[0x2e] + 0x138) = *(ulong *)(param_1[0x2e] + 0x138) | 1;
  *(ulong *)(param_1[0x2f] + 0x138) = *(ulong *)(param_1[0x2f] + 0x138) | 1;
  puVar15 = (ushort *)((long)param_4 - (long)*param_4);
  if (*puVar15 < 5) {
    lVar12 = 0;
    __format_00 = &DAT_00000004;
  }
  else {
    lVar12 = 0;
    if ((ulong)puVar15[2] != 0) {
      puVar2 = (uint *)((long)param_4 + (ulong)puVar15[2]);
      lVar12 = (long)puVar2 + (ulong)*puVar2;
    }
    __format_00 = (char *)(lVar12 + 4);
    if (*puVar15 < 7) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      if ((ulong)puVar15[3] != 0) {
        puVar2 = (uint *)((long)param_4 + (ulong)puVar15[3]);
        lVar12 = (long)puVar2 + (ulong)*puVar2;
      }
    }
  }
  __format = (char *)(lVar12 + 4);
  pcVar13 = __format;
  if (*__format_00 != '\0') {
    pcVar13 = __format_00;
  }
  uVar11 = FUN_00dcaea0(pcVar13);
  pcVar13 = __format;
  if (*__format_00 != '\0') {
    pcVar13 = __format_00;
  }
  pcVar13 = strrchr(pcVar13,0x2f);
  pbVar18 = (byte *)0x0;
  if (pcVar13 != (char *)0x0) {
    pbVar18 = (byte *)(pcVar13 + 1);
  }
  sVar14 = strlen((char *)pbVar18);
  bVar5 = *pbVar18;
  uVar16 = 0xcbf29ce484222645;
  if (bVar5 != 0) {
    uVar16 = 0xcbf29ce484222645;
    pbVar20 = pbVar18;
    do {
      pbVar20 = pbVar20 + 1;
      uVar16 = (uVar16 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar20;
    } while (bVar5 != 0);
  }
  param_1[0x154] = uVar16;
  param_1[0x155] = (long)pbVar18;
  param_1[0x156] = sVar14;
  if (param_1[0x157] != 0) {
    plVar17 = (long *)(param_1[0x157] + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    param_1[0x157] = 0;
  }
  param_1[0x157] = 0;
  snprintf((char *)(param_1 + 0x36),0x80,__format_00,(ulong)uVar11);
  snprintf((char *)(param_1 + 0x7a),0x80,__format,(ulong)uVar11);
  lVar12 = 0;
  if (8 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar16 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[4];
    lVar12 = 0;
    if (uVar16 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar16);
      lVar12 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  snprintf((char *)(param_1 + 0xc2),0x80,(char *)(lVar12 + 4),(ulong)uVar11);
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0xb) {
    lVar12 = 0;
  }
  else {
    uVar16 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[5];
    lVar12 = 0;
    if (uVar16 != 0) {
      puVar2 = (uint *)((long)param_4 + uVar16);
      lVar12 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  snprintf((char *)(param_1 + 0x106),0x80,(char *)(lVar12 + 4),(ulong)uVar11);
  uVar6 = *(ushort *)((long)param_4 + (0x10 - (long)*param_4));
  puVar3 = (undefined4 *)((long)param_4 + (ulong)uVar6);
  uVar24 = *puVar3;
  puVar4 = (undefined4 *)0x0;
  if (uVar6 != 0) {
    puVar4 = puVar3;
  }
  lVar23 = 0;
  uVar25 = puVar4[1];
  param_1[0x33] = (ulong)(uint)puVar3[2];
  param_1[0x32] = CONCAT44(uVar25,uVar24);
  uVar6 = *(ushort *)((long)param_4 + (0x10 - (long)*param_4));
  lVar12 = (long)param_4 + (ulong)uVar6;
  lVar19 = 0;
  if (uVar6 != 0) {
    lVar19 = lVar12;
  }
  lVar19 = *(long *)(lVar19 + 0xc);
  param_1[0x35] = (ulong)*(uint *)(lVar12 + 0x14);
  param_1[0x34] = lVar19;
  puVar1 = PTR_DAT_02710860;
  if (0x12 < *(ushort *)((long)param_4 - (long)*param_4)) {
    uVar16 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[9];
    if (uVar16 == 0) {
      lVar23 = 0;
    }
    else {
      puVar2 = (uint *)((long)param_4 + uVar16);
      lVar23 = (long)puVar2 + (ulong)*puVar2;
    }
  }
  sVar14 = strlen((char *)(lVar23 + 4));
  bVar5 = *(byte *)(lVar23 + 4);
  if (bVar5 != 0) {
    pbVar18 = (byte *)(lVar23 + 5);
    do {
      uVar21 = (uVar21 ^ bVar5) * 0x100000001b3;
      bVar5 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar5 != 0);
  }
  param_1[0xbe] = uVar21;
  param_1[0xbf] = lVar23 + 4;
  param_1[0xc0] = sVar14;
  if (param_1[0xc1] != 0) {
    plVar17 = (long *)(param_1[0xc1] + 0x48);
    (**(code **)(*plVar17 + 0x18))(plVar17);
    param_1[0xc1] = 0;
  }
  param_1[0xc1] = 0;
  puVar10 = PTR_DAT_0271e940;
  puVar15 = (ushort *)((long)param_4 - (long)*param_4);
  puVar2 = (uint *)((long)param_4 + (ulong)puVar15[6]);
  lVar12 = (long)puVar2 + (ulong)*puVar2;
  if (*(char *)(lVar12 + 4) != '\0') {
    local_230 = 0;
    local_228 = 0;
    local_240 = 0;
    local_238 = 0;
    local_218 = 0;
    local_250 = 0;
    local_248 = 0;
    lVar23 = 0;
    if (puVar15[6] != 0 && 0xc < *puVar15) {
      lVar23 = lVar12;
    }
    local_260 = 0;
    local_258 = 0;
    local_270 = 0;
    local_268 = 0;
    local_280 = 0;
    local_278 = 0;
    local_290 = 0;
    local_288 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_180 = (code *)0x0;
    local_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    local_200 = (code *)0x0;
    local_1f8 = 0;
    local_210 = 0;
    local_208 = (code *)0x0;
    local_220 = PTR_DAT_0271e940 + 0x10;
    local_110 = 0;
    local_80 = 0xffffffff;
    local_f0 = (code *)0x0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    snprintf((char *)&local_2a0,0x80,(char *)(lVar23 + 4),(ulong)uVar11);
    local_80 = 2;
    puVar22 = (undefined8 *)param_1[0x14b];
    if (puVar22 == (undefined8 *)param_1[0x14c]) {
      FUN_00dd0990(param_1 + 0x14a,&local_2a0);
      pcVar9 = local_f8;
    }
    else {
      lVar23 = param_1[0x14d];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_00dcae9c;
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar23;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar22[3] = local_288;
      puVar22[1] = local_298;
      puVar22[7] = local_268;
      puVar22[5] = local_278;
      puVar22[0xb] = local_248;
      puVar22[9] = local_258;
      puVar22[0xf] = local_228;
      puVar22[0xd] = local_238;
      puVar22[2] = local_290;
      *puVar22 = local_2a0;
      puVar22[6] = local_270;
      puVar22[4] = local_280;
      puVar22[10] = local_250;
      puVar22[8] = local_260;
      puVar22[0xe] = local_230;
      puVar22[0xc] = local_240;
      puVar22[0x10] = PTR_DAT_0271e948 + 0x10;
      puVar22[0x11] = local_218;
      if (local_218 != 0) {
        (**(code **)(*(long *)(local_218 + 0x48) + 0x10))();
      }
      puVar22[0x12] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x13] = 0;
      if (local_200 != (code *)0x0) {
        (*local_200)(auStack_1f0,puVar22 + 0x16);
        puVar22[0x15] = local_1f8;
        puVar22[0x13] = local_208;
        puVar22[0x14] = local_200;
        puVar22[0x12] = local_210;
      }
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      if (local_180 != (code *)0x0) {
        (*local_180)(auStack_170,puVar22 + 0x26);
        puVar22[0x25] = local_178;
        puVar22[0x23] = local_188;
        puVar22[0x24] = local_180;
        puVar22[0x22] = local_190;
      }
      puVar22[0x10] = puVar10 + 0x10;
      puVar22[0x32] = local_110;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      if (local_f0 != (code *)0x0) {
        (*local_f0)(auStack_e0,puVar22 + 0x38);
        puVar22[0x37] = local_e8;
        puVar22[0x35] = local_f8;
        puVar22[0x36] = local_f0;
        puVar22[0x34] = local_100;
      }
      *(undefined4 *)(puVar22 + 0x44) = local_80;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      param_1[0x14b] = param_1[0x14b] + 0x230;
      pcVar9 = local_f8;
    }
    local_f8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_f0 = (code *)0x0;
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar9)(auStack_e0);
    }
    local_220 = PTR_DAT_0271e948 + 0x10;
    if (local_218 == 0) {
      local_218 = 0;
      pcVar9 = local_188;
    }
    else {
      FUN_006e2100(local_218,&local_220);
      lVar12 = local_218;
      local_218 = 0;
      pcVar9 = local_188;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        pcVar9 = local_188;
      }
    }
    local_188 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = 0;
      local_190 = 0;
      local_188 = (code *)0x0;
      (*pcVar9)(auStack_170);
    }
    pcVar9 = local_208;
    if (local_208 != (code *)0x0) {
      local_200 = (code *)0x0;
      local_1f8 = 0;
      local_210 = 0;
      local_208 = (code *)0x0;
      (*pcVar9)(auStack_1f0);
    }
    if (local_218 != 0) {
      (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
      local_218 = 0;
    }
    puVar15 = (ushort *)((long)param_4 - (long)*param_4);
  }
  puVar10 = PTR_DAT_0271e940;
  puVar2 = (uint *)((long)param_4 + (ulong)puVar15[7]);
  lVar12 = (long)puVar2 + (ulong)*puVar2;
  if (*(char *)(lVar12 + 4) != '\0') {
    local_230 = 0;
    local_228 = 0;
    local_240 = 0;
    local_238 = 0;
    local_218 = 0;
    local_250 = 0;
    local_248 = 0;
    lVar23 = 0;
    if (puVar15[7] != 0 && 0xe < *puVar15) {
      lVar23 = lVar12;
    }
    local_260 = 0;
    local_258 = 0;
    local_270 = 0;
    local_268 = 0;
    local_280 = 0;
    local_278 = 0;
    local_290 = 0;
    local_288 = 0;
    local_2a0 = 0;
    local_298 = 0;
    local_180 = (code *)0x0;
    local_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    local_200 = (code *)0x0;
    local_1f8 = 0;
    local_210 = 0;
    local_208 = (code *)0x0;
    local_220 = PTR_DAT_0271e940 + 0x10;
    local_110 = 0;
    local_80 = 0xffffffff;
    local_f0 = (code *)0x0;
    local_e8 = 0;
    local_100 = 0;
    local_f8 = (code *)0x0;
    snprintf((char *)&local_2a0,0x80,(char *)(lVar23 + 4),(ulong)uVar11);
    local_80 = 4;
    puVar22 = (undefined8 *)param_1[0x14b];
    if (puVar22 == (undefined8 *)param_1[0x14c]) {
      FUN_00dd0990(param_1 + 0x14a,&local_2a0);
      pcVar9 = local_f8;
    }
    else {
      lVar23 = param_1[0x14d];
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_00dcae9c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar23;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar22[3] = local_288;
      puVar22[1] = local_298;
      puVar22[7] = local_268;
      puVar22[5] = local_278;
      puVar22[0xb] = local_248;
      puVar22[9] = local_258;
      puVar22[0xf] = local_228;
      puVar22[0xd] = local_238;
      puVar22[2] = local_290;
      *puVar22 = local_2a0;
      puVar22[6] = local_270;
      puVar22[4] = local_280;
      puVar22[10] = local_250;
      puVar22[8] = local_260;
      puVar22[0xe] = local_230;
      puVar22[0xc] = local_240;
      puVar22[0x10] = PTR_DAT_0271e948 + 0x10;
      puVar22[0x11] = local_218;
      if (local_218 != 0) {
        (**(code **)(*(long *)(local_218 + 0x48) + 0x10))();
      }
      puVar22[0x12] = 0;
      puVar22[0x14] = 0;
      puVar22[0x15] = 0;
      puVar22[0x13] = 0;
      if (local_200 != (code *)0x0) {
        (*local_200)(auStack_1f0,puVar22 + 0x16);
        puVar22[0x15] = local_1f8;
        puVar22[0x13] = local_208;
        puVar22[0x14] = local_200;
        puVar22[0x12] = local_210;
      }
      puVar22[0x24] = 0;
      puVar22[0x25] = 0;
      puVar22[0x22] = 0;
      puVar22[0x23] = 0;
      if (local_180 != (code *)0x0) {
        (*local_180)(auStack_170,puVar22 + 0x26);
        puVar22[0x25] = local_178;
        puVar22[0x23] = local_188;
        puVar22[0x24] = local_180;
        puVar22[0x22] = local_190;
      }
      puVar22[0x10] = puVar10 + 0x10;
      puVar22[0x32] = local_110;
      puVar22[0x36] = 0;
      puVar22[0x37] = 0;
      puVar22[0x34] = 0;
      puVar22[0x35] = 0;
      if (local_f0 != (code *)0x0) {
        (*local_f0)(auStack_e0,puVar22 + 0x38);
        puVar22[0x37] = local_e8;
        puVar22[0x35] = local_f8;
        puVar22[0x36] = local_f0;
        puVar22[0x34] = local_100;
      }
      *(undefined4 *)(puVar22 + 0x44) = local_80;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      param_1[0x14b] = param_1[0x14b] + 0x230;
      pcVar9 = local_f8;
    }
    local_f8 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_f0 = (code *)0x0;
      local_e8 = 0;
      local_100 = 0;
      local_f8 = (code *)0x0;
      (*pcVar9)(auStack_e0);
    }
    local_220 = PTR_DAT_0271e948 + 0x10;
    if (local_218 == 0) {
      local_218 = 0;
      pcVar9 = local_188;
    }
    else {
      FUN_006e2100(local_218,&local_220);
      lVar12 = local_218;
      local_218 = 0;
      pcVar9 = local_188;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
        pcVar9 = local_188;
      }
    }
    local_188 = pcVar9;
    if (pcVar9 != (code *)0x0) {
      local_180 = (code *)0x0;
      local_178 = 0;
      local_190 = 0;
      local_188 = (code *)0x0;
      (*pcVar9)(auStack_170);
    }
    pcVar9 = local_208;
    if (local_208 != (code *)0x0) {
      local_200 = (code *)0x0;
      local_1f8 = 0;
      local_210 = 0;
      local_208 = (code *)0x0;
      (*pcVar9)(auStack_1f0);
    }
    if (local_218 != 0) {
      (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
      local_218 = 0;
    }
  }
  FUN_00dcafd0(param_1,param_4,param_6);
  lVar23 = param_1[0x2e];
  lVar12 = nn::os::GetCurrentThread();
  plVar17 = (long *)(lVar23 + 0x158);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x14c));
        while (*plVar17 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00dcad64;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00dcad64:
  lVar19 = *param_3;
  lVar12 = lVar19;
  if (*(long *)(lVar19 + 0x120) != 0) {
    lVar12 = *(long *)(lVar19 + 0x120);
  }
  if (*(long *)(lVar19 + 0x128) != 0) {
    lVar19 = *(long *)(lVar19 + 0x128);
  }
  FUN_006d15e0(lVar23,lVar12,lVar19);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x14c));
  lVar23 = param_1[0x2f];
  lVar12 = nn::os::GetCurrentThread();
  plVar17 = (long *)(lVar23 + 0x158);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar23 + 0x14c));
        while (*plVar17 == 0) {
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar8) {
            *plVar17 = lVar12;
            cVar7 = ExclusiveMonitorsStatus();
          }
          if (cVar7 == '\0') goto LAB_00dcadf8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = lVar12;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
LAB_00dcadf8:
  lVar19 = param_3[1];
  lVar12 = lVar19;
  if (*(long *)(lVar19 + 0x120) != 0) {
    lVar12 = *(long *)(lVar19 + 0x120);
  }
  if (*(long *)(lVar19 + 0x128) != 0) {
    lVar19 = *(long *)(lVar19 + 0x128);
  }
  FUN_006d15e0(lVar23,lVar12,lVar19);
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar8) {
      *plVar17 = 0;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  nn::os::SignalLightEvent((LightEventType *)(lVar23 + 0x14c));
  return;
}


