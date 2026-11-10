/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004efc10; name: FUN_004efc10
 */


void FUN_004efc10(long param_1,long param_2,void *param_3,long param_4)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  memcpy((void *)(param_4 + 0x70),(void *)(param_2 + 8),0x28);
  memcpy((void *)(param_4 + 0x98),(void *)(param_2 + 0x30),0x28);
  memcpy((void *)(param_4 + 0xc0),(void *)(param_2 + 0x58),0x28);
  memcpy((void *)(param_4 + 0xe8),(void *)(param_2 + 0x80),0x28);
  memcpy((void *)(param_4 + 0x110),(void *)(param_2 + 0xa8),0x28);
  memcpy((void *)(param_4 + 0x138),(void *)(param_2 + 0xd0),0x28);
  memcpy((void *)(param_4 + 0x160),(void *)(param_2 + 0xf8),0x28);
  memcpy((void *)(param_4 + 0x188),(void *)(param_2 + 0x120),0x28);
  memcpy((void *)(param_4 + 0x1b0),param_3,0x28);
  *(undefined4 *)(param_4 + 0x1d8) = 9;
  *(undefined8 *)(param_4 + 0x1dc) = *(undefined8 *)(param_4 + 0x70);
  *(undefined8 *)(param_4 + 0x1e4) = *(undefined8 *)(param_4 + 0x78);
  *(undefined8 *)(param_4 + 0x1ec) = *(undefined8 *)(param_4 + 0x80);
  uVar1 = NEON_fminnm(*(undefined4 *)(param_4 + 0x1dc),*(undefined4 *)(param_4 + 0x98));
  fVar3 = *(float *)(param_4 + 0x1e8);
  if (*(float *)(param_4 + 0x1e8) <= *(float *)(param_4 + 0xa4)) {
    fVar3 = *(float *)(param_4 + 0xa4);
  }
  uVar4 = NEON_fminnm(*(undefined4 *)(param_4 + 0x1e0),*(undefined4 *)(param_4 + 0x9c));
  fVar8 = *(float *)(param_4 + 0x1ec);
  if (*(float *)(param_4 + 0x1ec) <= *(float *)(param_4 + 0xa8)) {
    fVar8 = *(float *)(param_4 + 0xa8);
  }
  uVar7 = NEON_fminnm(*(undefined4 *)(param_4 + 0x1e4),*(undefined4 *)(param_4 + 0xa0));
  fVar9 = *(float *)(param_4 + 0x1f0);
  if (*(float *)(param_4 + 0x1f0) <= *(float *)(param_4 + 0xac)) {
    fVar9 = *(float *)(param_4 + 0xac);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0xc4));
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0xc0));
  if (fVar3 <= *(float *)(param_4 + 0xcc)) {
    fVar3 = *(float *)(param_4 + 0xcc);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 200));
  if (fVar9 <= *(float *)(param_4 + 0xd4)) {
    fVar9 = *(float *)(param_4 + 0xd4);
  }
  if (fVar8 <= *(float *)(param_4 + 0xd0)) {
    fVar8 = *(float *)(param_4 + 0xd0);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0xec));
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0xe8));
  if (fVar3 <= *(float *)(param_4 + 0xf4)) {
    fVar3 = *(float *)(param_4 + 0xf4);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 0xf0));
  if (fVar9 <= *(float *)(param_4 + 0xfc)) {
    fVar9 = *(float *)(param_4 + 0xfc);
  }
  if (fVar8 <= *(float *)(param_4 + 0xf8)) {
    fVar8 = *(float *)(param_4 + 0xf8);
  }
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0x110));
  if (fVar3 <= *(float *)(param_4 + 0x11c)) {
    fVar3 = *(float *)(param_4 + 0x11c);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0x114));
  if (fVar8 <= *(float *)(param_4 + 0x120)) {
    fVar8 = *(float *)(param_4 + 0x120);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 0x118));
  if (fVar9 <= *(float *)(param_4 + 0x124)) {
    fVar9 = *(float *)(param_4 + 0x124);
  }
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0x138));
  if (fVar3 <= *(float *)(param_4 + 0x144)) {
    fVar3 = *(float *)(param_4 + 0x144);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0x13c));
  if (fVar8 <= *(float *)(param_4 + 0x148)) {
    fVar8 = *(float *)(param_4 + 0x148);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 0x140));
  if (fVar9 <= *(float *)(param_4 + 0x14c)) {
    fVar9 = *(float *)(param_4 + 0x14c);
  }
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0x160));
  if (fVar3 <= *(float *)(param_4 + 0x16c)) {
    fVar3 = *(float *)(param_4 + 0x16c);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0x164));
  if (fVar8 <= *(float *)(param_4 + 0x170)) {
    fVar8 = *(float *)(param_4 + 0x170);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 0x168));
  if (fVar9 <= *(float *)(param_4 + 0x174)) {
    fVar9 = *(float *)(param_4 + 0x174);
  }
  uVar1 = NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0x188));
  if (fVar3 <= *(float *)(param_4 + 0x194)) {
    fVar3 = *(float *)(param_4 + 0x194);
  }
  uVar4 = NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0x18c));
  if (fVar8 <= *(float *)(param_4 + 0x198)) {
    fVar8 = *(float *)(param_4 + 0x198);
  }
  uVar7 = NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 400));
  if (fVar9 <= *(float *)(param_4 + 0x19c)) {
    fVar9 = *(float *)(param_4 + 0x19c);
  }
  fVar2 = (float)NEON_fminnm(uVar1,*(undefined4 *)(param_4 + 0x1b0));
  if (fVar3 <= *(float *)(param_4 + 0x1bc)) {
    fVar3 = *(float *)(param_4 + 0x1bc);
  }
  fVar5 = (float)NEON_fminnm(uVar4,*(undefined4 *)(param_4 + 0x1b4));
  if (fVar8 <= *(float *)(param_4 + 0x1c0)) {
    fVar8 = *(float *)(param_4 + 0x1c0);
  }
  *(float *)(param_4 + 0x1dc) = fVar2;
  *(float *)(param_4 + 0x1e8) = fVar3;
  *(float *)(param_4 + 0x1e0) = fVar5;
  fVar3 = (fVar3 - fVar2) * 0.5;
  fVar2 = (float)NEON_fminnm(uVar7,*(undefined4 *)(param_4 + 0x1b8));
  if (fVar9 <= *(float *)(param_4 + 0x1c4)) {
    fVar9 = *(float *)(param_4 + 0x1c4);
  }
  fVar6 = (fVar8 - fVar5) * 0.5;
  fVar5 = (fVar9 - fVar2) * 0.5;
  fVar3 = fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5;
  *(float *)(param_4 + 0x1e4) = fVar2;
  *(float *)(param_4 + 0x1ec) = fVar8;
  *(float *)(param_4 + 0x1f0) = fVar9;
  *(float *)(param_4 + 500) = fVar3 * *(float *)(param_1 + 0x10) * SQRT(fVar3);
  return;
}


