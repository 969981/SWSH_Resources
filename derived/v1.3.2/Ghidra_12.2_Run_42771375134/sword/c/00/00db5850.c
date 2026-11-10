/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00db5850; name: FUN_00db5850
 */


void FUN_00db5850(long *param_1,long param_2,long *param_3,int *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  ushort *puVar10;
  undefined4 uVar11;
  float fVar12;
  uint uVar13;
  undefined1 auVar14 [16];
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  uint uVar19;
  byte local_80 [64];
  
  FUN_006d8b50();
  param_1[0x31] = 0;
  puVar1 = PTR_DAT_02719768 + 0x198;
  puVar2 = PTR_DAT_02719768 + 0x1d8;
  *param_1 = (long)(PTR_DAT_02719768 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  lVar6 = *param_3;
  lVar3 = param_3[1];
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined1 *)(param_1 + 0x39) = 1;
  *(undefined4 *)((long)param_1 + 0x1dc) = 0;
  *(undefined4 *)((long)param_1 + 0x1c4) = 0;
  param_1[0x32] = lVar6;
  param_1[0x33] = lVar3;
  *(undefined8 *)((long)param_1 + 0x1d4) = 0;
  *(undefined8 *)((long)param_1 + 0x1cc) = 0;
  puVar1 = PTR_DAT_02719770;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x3c] = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x40] = param_2;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  FUN_00db85f0(param_1 + 0x3d,0x20);
  param_1[0x43] = 0x1000001;
  FUN_006c5c60(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4f] = 0;
  param_1[0x4e] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x55] = 0;
  param_1[0x54] = 0;
  puVar1 = PTR_DAT_02710860;
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x58] = lVar6;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x80) == 0)) ||
     (lVar6 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8), lVar6 == 0)) {
    lVar6 = FUN_0075ecb0();
  }
  param_1[0x5e] = lVar6;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x69] = 0;
  uVar11 = 0;
  uVar17 = 0;
  param_1[0x68] = 0;
  uVar15 = 0;
  uVar19 = 0;
  param_1[0x67] = 0;
  param_1[0x66] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined2 *)(param_1 + 0x6a) = 1;
  param_1[0x6d] = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0x453b8000;
  *(undefined4 *)((long)param_1 + 0x374) = *(undefined4 *)PTR_DAT_0271e7d0;
  param_1[0x6f] = 0x300000000;
  *(undefined4 *)((long)param_1 + 0x38c) = 0;
  param_1[0x72] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  param_1[0x70] = 0;
  puVar10 = (ushort *)((long)param_4 - (long)*param_4);
  uVar4 = *puVar10;
  if (4 < uVar4) {
    uVar17 = 0;
    uVar15 = 0;
    if ((ulong)puVar10[2] != 0) {
      uVar15 = *(undefined4 *)((long)param_4 + (ulong)puVar10[2]);
    }
    if (uVar4 < 7) {
      uVar19 = 0;
    }
    else {
      uVar19 = 0;
      uVar17 = 0;
      if ((ulong)puVar10[3] != 0) {
        uVar17 = *(undefined4 *)((long)param_4 + (ulong)puVar10[3]);
      }
      if ((8 < uVar4) && ((ulong)puVar10[4] != 0)) {
        uVar19 = *(uint *)((long)param_4 + (ulong)puVar10[4]);
      }
    }
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  param_1[0x17] = (ulong)uVar19;
  param_1[0x16] = CONCAT44(uVar17,uVar15);
  if ((0xc < *(ushort *)((long)param_4 - (long)*param_4)) &&
     (uVar7 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[6], uVar7 != 0)) {
    uVar11 = *(undefined4 *)((long)param_4 + uVar7);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar11;
  puVar10 = (ushort *)((long)param_4 - (long)*param_4);
  uVar4 = *puVar10;
  if (uVar4 < 0xd) {
    fVar12 = 0.0;
    fVar16 = 0.0;
    fVar18 = 0.0;
    if (10 < uVar4) {
      uVar5 = puVar10[5];
      goto joined_r0x00db5afc;
    }
  }
  else {
    if ((ulong)puVar10[6] == 0) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = *(float *)((long)param_4 + (ulong)puVar10[6]) * DAT_01d4bb38;
    }
    fVar12 = fVar12 / DAT_01d4c284;
    uVar5 = puVar10[5];
joined_r0x00db5afc:
    fVar16 = 0.0;
    if ((ulong)uVar5 != 0) {
      fVar16 = *(float *)((long)param_4 + (ulong)uVar5) * DAT_01d4bb38;
    }
    fVar18 = 0.0;
    fVar16 = fVar16 / DAT_01d4c284;
    if ((0xe < uVar4) && ((ulong)puVar10[7] != 0)) {
      fVar18 = *(float *)((long)param_4 + (ulong)puVar10[7]) * DAT_01d4bb38;
    }
  }
  auVar14 = FUN_00a92cd0(fVar12,fVar16,fVar18 / DAT_01d4c284);
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined1 (*) [16])(param_1 + 0x14) = auVar14;
  puVar10 = (ushort *)((long)param_4 - (long)*param_4);
  uVar4 = *puVar10;
  if (uVar4 < 0x11) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0;
    if ((ulong)puVar10[8] != 0) {
      uVar11 = *(undefined4 *)((long)param_4 + (ulong)puVar10[8]);
    }
    if (0x12 < uVar4) {
      uVar13 = 0;
      if ((ulong)puVar10[9] != 0) {
        uVar13 = *(uint *)((long)param_4 + (ulong)puVar10[9]);
      }
      uVar19 = 0;
      if ((0x14 < uVar4) && ((ulong)puVar10[10] != 0)) {
        uVar19 = *(uint *)((long)param_4 + (ulong)puVar10[10]);
      }
      goto LAB_00db5bc4;
    }
  }
  uVar13 = 0;
  uVar19 = uVar13;
LAB_00db5bc4:
  param_1[0x37] = (ulong)uVar19;
  param_1[0x36] = CONCAT44(uVar13,uVar11);
  param_1[0x1b] = param_1[0x37];
  param_1[0x1a] = param_1[0x36];
  *(undefined1 *)(param_1 + 0x18) = 1;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x17) {
    uVar7 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xb];
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = *(ulong *)((long)param_4 + uVar8);
    }
  }
  param_1[0x34] = uVar7;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x1b) {
    lVar6 = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xd];
    lVar6 = 0;
    if (uVar8 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar8);
    }
  }
  param_1[0x31] = lVar6;
  if (*(ushort *)((long)param_4 - (long)*param_4) < 0x19) {
    param_1[0x35] = 0;
  }
  else {
    uVar8 = (ulong)((ushort *)((long)param_4 - (long)*param_4))[0xc];
    lVar6 = 0;
    if (uVar8 != 0) {
      lVar6 = *(long *)((long)param_4 + uVar8);
    }
    param_1[0x35] = lVar6;
  }
  if (uVar7 == 0) {
    uVar7 = 0xcbf29ce484222645;
    snprintf((char *)local_80,0x40,"FieldObject_%lu",(ulong)param_1);
    if (local_80[0] != 0) {
      pbVar9 = (byte *)((ulong)local_80 | 1);
      do {
        uVar7 = (uVar7 ^ local_80[0]) * 0x100000001b3;
        local_80[0] = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (local_80[0] != 0);
    }
    param_1[0x34] = uVar7;
  }
  FUN_010257f0(param_1,param_3);
  return;
}


