/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 001a9720; name: FUN_001a9720
 */


void FUN_001a9720(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x60) + 0x10);
  fVar2 = *(float *)(lVar1 + 0x1c);
  if (*(float *)(param_1 + 0x88) <= *(float *)(lVar1 + 0x1c)) {
    fVar2 = *(float *)(param_1 + 0x88);
  }
  fVar3 = *(float *)(lVar1 + 0x20);
  if (*(float *)(param_1 + 0x8c) <= *(float *)(lVar1 + 0x20)) {
    fVar3 = *(float *)(param_1 + 0x8c);
  }
  fVar5 = *(float *)(param_1 + 0x90);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  fVar6 = *(float *)(lVar1 + 0x24);
  if (fVar5 <= *(float *)(lVar1 + 0x24)) {
    fVar6 = fVar5;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  fVar5 = *(float *)(lVar1 + 0x28);
  if (*(float *)(lVar1 + 0x28) <= *(float *)(param_1 + 0x94)) {
    fVar5 = *(float *)(param_1 + 0x94);
  }
  fVar4 = *(float *)(lVar1 + 0x2c);
  if (*(float *)(lVar1 + 0x2c) <= *(float *)(param_1 + 0x98)) {
    fVar4 = *(float *)(param_1 + 0x98);
  }
  fVar8 = *(float *)(param_1 + 0x9c);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  fVar7 = *(float *)(lVar1 + 0x30);
  if (*(float *)(lVar1 + 0x30) <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0xc0) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0xc0);
  }
  fVar8 = *(float *)(param_1 + 200);
  if (*(float *)(param_1 + 0xc4) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0xc4);
  }
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0xcc)) {
    fVar5 = *(float *)(param_1 + 0xcc);
  }
  fVar8 = *(float *)(param_1 + 0xd4);
  if (fVar4 <= *(float *)(param_1 + 0xd0)) {
    fVar4 = *(float *)(param_1 + 0xd0);
  }
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0xf8) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0xf8);
  }
  fVar8 = *(float *)(param_1 + 0x100);
  if (*(float *)(param_1 + 0xfc) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0xfc);
  }
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x104)) {
    fVar5 = *(float *)(param_1 + 0x104);
  }
  if (fVar4 <= *(float *)(param_1 + 0x108)) {
    fVar4 = *(float *)(param_1 + 0x108);
  }
  fVar8 = *(float *)(param_1 + 0x10c);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0x130) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x130);
  }
  if (*(float *)(param_1 + 0x134) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x134);
  }
  fVar8 = *(float *)(param_1 + 0x138);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x13c)) {
    fVar5 = *(float *)(param_1 + 0x13c);
  }
  if (fVar4 <= *(float *)(param_1 + 0x140)) {
    fVar4 = *(float *)(param_1 + 0x140);
  }
  fVar8 = *(float *)(param_1 + 0x144);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0x168) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x168);
  }
  if (*(float *)(param_1 + 0x16c) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x16c);
  }
  fVar8 = *(float *)(param_1 + 0x170);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x174)) {
    fVar5 = *(float *)(param_1 + 0x174);
  }
  if (fVar4 <= *(float *)(param_1 + 0x178)) {
    fVar4 = *(float *)(param_1 + 0x178);
  }
  fVar8 = *(float *)(param_1 + 0x17c);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0x1a0) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x1a0);
  }
  if (*(float *)(param_1 + 0x1a4) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x1a4);
  }
  fVar8 = *(float *)(param_1 + 0x1a8);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x1ac)) {
    fVar5 = *(float *)(param_1 + 0x1ac);
  }
  if (fVar4 <= *(float *)(param_1 + 0x1b0)) {
    fVar4 = *(float *)(param_1 + 0x1b0);
  }
  fVar8 = *(float *)(param_1 + 0x1b4);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0x1d8) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x1d8);
  }
  if (*(float *)(param_1 + 0x1dc) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x1dc);
  }
  fVar8 = *(float *)(param_1 + 0x1e0);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x1e4)) {
    fVar5 = *(float *)(param_1 + 0x1e4);
  }
  if (fVar4 <= *(float *)(param_1 + 0x1e8)) {
    fVar4 = *(float *)(param_1 + 0x1e8);
  }
  fVar8 = *(float *)(param_1 + 0x1ec);
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  if (fVar7 <= fVar8) {
    fVar7 = fVar8;
  }
  *(float *)(lVar1 + 0x30) = fVar7;
  if (*(float *)(param_1 + 0x210) <= fVar2) {
    fVar2 = *(float *)(param_1 + 0x210);
  }
  if (*(float *)(param_1 + 0x214) <= fVar3) {
    fVar3 = *(float *)(param_1 + 0x214);
  }
  fVar8 = *(float *)(param_1 + 0x218);
  *(float *)(lVar1 + 0x1c) = fVar2;
  *(float *)(lVar1 + 0x20) = fVar3;
  if (fVar8 <= fVar6) {
    fVar6 = fVar8;
  }
  *(float *)(lVar1 + 0x24) = fVar6;
  if (fVar5 <= *(float *)(param_1 + 0x21c)) {
    fVar5 = *(float *)(param_1 + 0x21c);
  }
  if (fVar4 <= *(float *)(param_1 + 0x220)) {
    fVar4 = *(float *)(param_1 + 0x220);
  }
  if (fVar7 <= *(float *)(param_1 + 0x224)) {
    fVar7 = *(float *)(param_1 + 0x224);
  }
  *(float *)(lVar1 + 0x28) = fVar5;
  *(float *)(lVar1 + 0x2c) = fVar4;
  *(float *)(lVar1 + 0x30) = fVar7;
  return;
}


