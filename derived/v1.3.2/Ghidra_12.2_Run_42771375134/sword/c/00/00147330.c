/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147330; name: FUN_00147330
 */


void FUN_00147330(int *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *param_1 = *(int *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 0x20);
  param_1[6] = (int)(*(float *)(param_2 + 0x30) - *(float *)(param_2 + 0x3c));
  param_1[9] = (int)(*(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x3c));
  param_1[7] = (int)(*(float *)(param_2 + 0x34) - *(float *)(param_2 + 0x40));
  param_1[10] = (int)(*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x40));
  param_1[8] = (int)(*(float *)(param_2 + 0x38) - *(float *)(param_2 + 0x44));
  fVar7 = *(float *)(param_2 + 0x38);
  fVar8 = *(float *)(param_2 + 0x44);
  param_1[0xc] = 0;
  param_1[0xb] = (int)(fVar7 + fVar8);
  uVar2 = *(uint *)(param_2 + 0x118);
  lVar5 = 0;
  if ((ulong)uVar2 != 0) {
    lVar5 = *(long *)(param_2 + 0x110);
  }
  *(long *)(param_1 + 0x14) = lVar5;
  *(ulong *)(param_1 + 0x16) = lVar5 + (ulong)uVar2 * 0x14;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x28);
  param_1[0x1a] = *(int *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_3 + 0x38);
  param_1[0x1e] = *(int *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 0x48);
  param_1[0x22] = *(int *)(param_3 + 0x50);
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_3 + 0x58);
  param_1[0x26] = *(int *)(param_3 + 0x60);
  fVar7 = DAT_01d4c4dc;
  fVar8 = *(float *)(param_2 + 0xa0);
  fVar9 = *(float *)(param_2 + 0xf4);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x68);
  param_1[0x2a] = *(int *)(param_3 + 0x70);
  fVar7 = fVar8 * fVar9 * fVar7;
  fVar8 = expf(fVar7 * *(float *)(param_2 + 0x120));
  param_1[0x2b] = (int)(1.0 - fVar8);
  param_1[0x2c] = (int)(*(float *)(param_2 + 0x124) * *(float *)(param_3 + 0x78));
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_3 + 0x80);
  param_1[0x30] = *(uint *)(param_3 + 0x88) / 3;
  fVar8 = expf(fVar7 * *(float *)(param_2 + 0x194));
  param_1[0x31] = (int)(1.0 - fVar8);
  fVar8 = expf(fVar7 * *(float *)(param_2 + 0x198));
  param_1[0x32] = (int)(1.0 - fVar8);
  uVar1 = 0;
  if (*(int *)(param_2 + 0x130) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x128);
  }
  *(undefined8 *)(param_1 + 0x34) = uVar1;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x140) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x138);
  }
  *(undefined8 *)(param_1 + 0x36) = uVar1;
  fVar8 = expf(fVar7 * *(float *)(param_2 + 0x150));
  param_1[0x38] = (int)(1.0 - fVar8);
  uVar1 = 0;
  if (*(int *)(param_2 + 0x160) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x158);
  }
  *(undefined8 *)(param_1 + 0x3a) = uVar1;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x170) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x168);
  }
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x180) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x178);
  }
  *(undefined8 *)(param_1 + 0x3e) = uVar1;
  iVar4 = *(int *)(param_2 + 0x1b8);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x1b0);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  iVar3 = *(int *)(param_2 + 0x1c8);
  uVar6 = *(undefined8 *)(param_2 + 0x1c0);
  param_1[0x44] = iVar4;
  if (iVar3 != 0) {
    uVar1 = uVar6;
  }
  *(undefined8 *)(param_1 + 0x42) = uVar1;
  iVar4 = *(int *)(param_2 + 0x1a8);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x1a0);
  }
  *(undefined8 *)(param_1 + 0x46) = uVar1;
  param_1[0x48] = iVar4;
  iVar4 = *(int *)(param_2 + 0x1e8);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x1e0);
  }
  *(undefined8 *)(param_1 + 0x4a) = uVar1;
  iVar3 = *(int *)(param_2 + 0x1f8);
  uVar6 = *(undefined8 *)(param_2 + 0x1f0);
  param_1[0x4e] = iVar4;
  if (iVar3 != 0) {
    uVar1 = uVar6;
  }
  *(undefined8 *)(param_1 + 0x4c) = uVar1;
  iVar4 = *(int *)(param_2 + 0x1d8);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x1d0);
  }
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  param_1[0x52] = iVar4;
  uVar2 = *(uint *)(param_2 + 0x208);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x200);
  }
  *(undefined8 *)(param_1 + 0x54) = uVar1;
  if (*(int *)(param_2 + 0x218) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x210);
  }
  *(undefined8 *)(param_1 + 0x56) = uVar1;
  param_1[0x58] = uVar2 / 3;
  iVar4 = *(int *)(param_2 + 0x238);
  lVar5 = 0;
  if (iVar4 != 0) {
    lVar5 = *(long *)(param_2 + 0x230);
  }
  *(long *)(param_1 + 0x5a) = lVar5;
  *(ulong *)(param_1 + 0x5c) = lVar5 + (ulong)(uint)(iVar4 << 2) * 2;
  iVar4 = *(int *)(param_2 + 0x248);
  uVar1 = 0;
  if (iVar4 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x240);
  }
  *(undefined8 *)(param_1 + 0x5e) = uVar1;
  param_1[0x60] = iVar4;
  *(undefined1 *)(param_1 + 0x61) = *(undefined1 *)(param_2 + 0x220);
  param_1[99] = *(int *)(param_2 + 0x224);
  param_1[0x62] = *(int *)(param_2 + 0x228);
  param_1[100] = *(int *)(param_2 + 0x254);
  fVar7 = expf(fVar7 * *(float *)(param_2 + 600));
  param_1[0x65] = (int)(1.0 - fVar7);
  iVar4 = *(int *)(param_2 + 0x268);
  if (iVar4 == 0) {
    param_1[0x68] = 0;
    param_1[0x69] = 0;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x260);
    *(long *)(param_1 + 0x68) = lVar5;
    if (lVar5 != 0) goto LAB_0014767c;
  }
  iVar4 = *param_1;
LAB_0014767c:
  param_1[0x66] = iVar4;
  uVar1 = 0;
  if (*(int *)(param_2 + 0x278) != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x270);
  }
  *(undefined8 *)(param_1 + 0x6a) = uVar1;
  param_1[0x6c] = *(int *)(param_2 + 0x28c);
  param_1[0x6d] = *(int *)(param_2 + 0x290);
  return;
}


