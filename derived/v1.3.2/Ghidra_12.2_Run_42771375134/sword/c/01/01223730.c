/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01223730; name: FUN_01223730
 */


void FUN_01223730(byte *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  ulong uVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 local_54;
  undefined4 local_4c;
  undefined6 local_48;
  undefined2 uStack_42;
  undefined6 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined6 local_2c;
  undefined2 uStack_26;
  undefined6 uStack_24;
  undefined8 local_1c;
  undefined4 local_14;
  undefined6 local_10;
  undefined2 uStack_a;
  undefined6 uStack_8;
  
  pbVar11 = (byte *)*param_2;
  if (pbVar11 == (byte *)0x0) {
    bVar14 = 0;
    bVar12 = 0;
    bVar13 = 0;
  }
  else {
    uVar15 = param_2[1];
    if ((uVar15 & 0x1fffffffffffffff) == 0) {
      bVar12 = 0;
      bVar13 = 0;
    }
    else {
      bVar12 = *pbVar11 & 3;
      bVar14 = *pbVar11 >> 2 & 3;
      bVar13 = 0;
      if (bVar14 != 3) {
        bVar13 = bVar14;
      }
    }
    if (uVar15 << 3 < 0x10) {
      bVar14 = 0;
    }
    else {
      bVar14 = pbVar11[1];
      if (0x17 < uVar15 << 3) {
        bVar16 = pbVar11[2];
        goto LAB_012237a4;
      }
    }
  }
  bVar16 = 0;
LAB_012237a4:
  uVar8 = *(undefined8 *)(pbVar11 + 4);
  uVar9 = *(undefined8 *)(pbVar11 + 0x15);
  bVar4 = pbVar11[3];
  uVar17 = *(uint *)(pbVar11 + 0xc);
  uVar18 = *(uint *)(pbVar11 + 0x1d);
  bVar5 = pbVar11[0x14];
  uVar7 = *(undefined8 *)(pbVar11 + 0x26);
  uVar19 = *(uint *)(pbVar11 + 0x2e);
  bVar6 = pbVar11[0x25];
  uVar1 = *(undefined4 *)(pbVar11 + 0x10);
  uVar2 = *(undefined4 *)(pbVar11 + 0x21);
  uVar3 = *(undefined4 *)(pbVar11 + 0x32);
  bVar10 = 0;
  if (pbVar11 != (byte *)0x0) {
    if ((ulong)(param_2[1] << 3) < 0x1b8) {
      bVar10 = 0;
    }
    else {
      bVar10 = pbVar11[0x36];
    }
  }
  *param_1 = bVar12;
  param_1[1] = bVar13;
  param_1[2] = bVar14;
  param_1[3] = bVar16;
  param_1[0x10] = bVar4 & 0x1f;
  param_1[0x11] = bVar4 >> 5;
  *(ulong *)(param_1 + 0x18) = CONCAT62(uStack_8,uStack_a);
  *(ulong *)(param_1 + 0x12) = CONCAT26(uStack_a,local_10);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(ulong *)(param_1 + 0x28) = (ulong)uVar17;
  *(undefined8 *)(param_1 + 0x20) = uVar8;
  *(undefined4 *)(param_1 + 0x3c) = local_14;
  *(undefined8 *)(param_1 + 0x34) = local_1c;
  param_1[0x40] = bVar5 & 0x1f;
  param_1[0x41] = bVar5 >> 5;
  *(ulong *)(param_1 + 0x48) = CONCAT62(uStack_24,uStack_26);
  *(ulong *)(param_1 + 0x58) = (ulong)uVar18;
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  *(ulong *)(param_1 + 0x42) = CONCAT26(uStack_26,local_2c);
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = local_30;
  *(undefined8 *)(param_1 + 100) = local_38;
  param_1[0x70] = bVar6 & 0x1f;
  param_1[0x71] = bVar6 >> 5;
  *(ulong *)(param_1 + 0x78) = CONCAT62(uStack_40,uStack_42);
  *(ulong *)(param_1 + 0x72) = CONCAT26(uStack_42,local_48);
  *(ulong *)(param_1 + 0x88) = (ulong)uVar19;
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  *(undefined4 *)(param_1 + 0x90) = uVar3;
  *(undefined4 *)(param_1 + 0x9c) = local_4c;
  *(undefined8 *)(param_1 + 0x94) = local_54;
  param_1[0xa0] = bVar10;
  return;
}


