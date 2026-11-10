/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0148a1a0; name: FUN_0148a1a0
 */


void FUN_0148a1a0(long param_1)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined *puVar16;
  byte bVar17;
  int *piVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  long local_128;
  long local_120;
  undefined4 local_118;
  uint uStack_114;
  uint local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined1 local_fc;
  undefined4 local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined8 local_b4;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70 [2];
  
  lVar19 = *(long *)(param_1 + 0x2b0);
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x10))();
  }
  lVar22 = *(long *)(lVar19 + 0x2e0);
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))((long *)(lVar19 + 0x48));
  uVar13 = FUN_01485a70(*(undefined8 *)(param_1 + 0x5d8));
  FUN_00ff86a0(&local_f8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),0);
  lVar19 = CONCAT44(iStack_f4,local_f8);
  lVar21 = *(long *)(lVar19 + 0x60);
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
    lVar19 = CONCAT44(iStack_f4,local_f8);
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
    local_f8 = 0;
    iStack_f4 = 0;
  }
  FUN_00ff86a0(&local_f8,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0xb0),2);
  lVar19 = CONCAT44(iStack_f4,local_f8);
  lVar23 = *(long *)(lVar19 + 0x60);
  if (lVar23 != 0) {
    (**(code **)(*(long *)(lVar23 + 0x48) + 0x10))();
    lVar19 = CONCAT44(iStack_f4,local_f8);
  }
  if (lVar19 != 0) {
    (**(code **)(*(long *)(lVar19 + 0x48) + 0x18))();
    local_f8 = 0;
    iStack_f4 = 0;
  }
  uVar4 = FUN_0087afd0(uVar13);
  FUN_014ca220(lVar22,0,uVar4,4,1,1);
  local_78 = lVar21;
  local_70[0] = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0xc784d62e9a630267,0xfc34389820c2b135,local_70);
    FUN_01489c10(param_1,0xc784d72e9a63041a,0xeb80c259335bd619,&local_78);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0xc784d62e9a630267,0xfc34389820c2b135,local_70);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_70[0] = 0;
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0xc784d72e9a63041a,0xeb80c259335bd619,&local_78);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_78 = 0;
  }
  uVar4 = FUN_0087ac70(uVar13);
  FUN_014ca220(lVar22,0,uVar4,4,0,1);
  local_80 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0xc784d62e9a630267,0xfc34379820c2af82,&local_80);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0xc784d62e9a630267,0xfc34379820c2af82,&local_80);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_80 = 0;
  }
  uVar4 = FUN_0087ac30(uVar13,1);
  FUN_014ca220(lVar22,0,uVar4,3,1,1);
  local_88 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x142cc48bd369d29,&local_88);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x142cc48bd369d29,&local_88);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_88 = 0;
  }
  uVar4 = FUN_0087ac30(uVar13,2);
  FUN_014ca220(lVar22,0,uVar4,3,1,1);
  local_90 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x1cc6a54e82feeb49,&local_90);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x1cc6a54e82feeb49,&local_90);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_90 = 0;
  }
  uVar4 = FUN_0087ac30(uVar13,5);
  FUN_014ca220(lVar22,0,uVar4,3,1,1);
  local_98 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x84ddc0f016f80214,&local_98);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x84ddc0f016f80214,&local_98);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_98 = 0;
  }
  uVar4 = FUN_0087ac30(uVar13,4);
  FUN_014ca220(lVar22,0,uVar4,3,1,1);
  local_a0 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x721ac0bb16cb246,&local_a0);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x721ac0bb16cb246,&local_a0);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_a0 = 0;
  }
  lVar19 = param_1 + 0x100;
  uVar4 = FUN_0087ac30(uVar13,3);
  FUN_014ca220(lVar22,0,uVar4,3,1,1);
  local_a8 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x1ec9bc54349d48e0,&local_a8);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x4f5b3e8c5c84d90f,0x1ec9bc54349d48e0,&local_a8);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_a8 = 0;
  }
  uVar14 = FUN_0087a740(uVar13);
  uVar24 = uVar14 & 0xffffffff;
  cVar3 = thunk_FUN_00877320(uVar14,0);
  if (cVar3 == -1) {
    puVar16 = &DAT_0216f038;
  }
  else if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f030;
  }
  else {
    puVar16 = &DAT_0216f028;
  }
  FUN_00ffd010(lVar19,puVar16);
  cVar3 = thunk_FUN_00877320(uVar24,1);
  if (cVar3 == -1) {
    puVar16 = &DAT_0216f050;
  }
  else if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f048;
  }
  else {
    puVar16 = &DAT_0216f040;
  }
  FUN_00ffd010(lVar19,puVar16);
  cVar3 = thunk_FUN_00877320(uVar24,2);
  if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f060;
  }
  else if (cVar3 == -1) {
    puVar16 = &DAT_0216f068;
  }
  else {
    puVar16 = &DAT_0216f058;
  }
  FUN_00ffd010(lVar19,puVar16);
  cVar3 = thunk_FUN_00877320(uVar24,3);
  if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f078;
  }
  else if (cVar3 == -1) {
    puVar16 = &DAT_0216f080;
  }
  else {
    puVar16 = &DAT_0216f070;
  }
  FUN_00ffd010(lVar19,puVar16);
  cVar3 = thunk_FUN_00877320(uVar24,4);
  if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f090;
  }
  else if (cVar3 == -1) {
    puVar16 = &DAT_0216f098;
  }
  else {
    puVar16 = &DAT_0216f088;
  }
  FUN_00ffd010(lVar19,puVar16);
  cVar3 = thunk_FUN_00877320(uVar24,5);
  if (cVar3 == '\x01') {
    puVar16 = &DAT_0216f0a8;
  }
  else if (cVar3 == -1) {
    puVar16 = &DAT_0216f0b0;
  }
  else {
    puVar16 = &DAT_0216f0a0;
  }
  FUN_00ffd010(lVar19,puVar16);
  iStack_f4 = 0;
  iStack_f0 = 0;
  local_f8 = CONCAT31(local_f8._1_3_,1);
  local_118 = 0x777ea906;
  uStack_114 = 0xad13f59b;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_118);
  if (lVar15 == 0) {
    fVar26 = 0.0;
    fVar25 = 0.0;
  }
  else {
    fVar25 = 0.0;
    fVar26 = 0.0;
    do {
      pfVar1 = (float *)(lVar15 + 0x30);
      pfVar2 = (float *)(lVar15 + 0x34);
      lVar15 = *(long *)(lVar15 + 0x18);
      fVar25 = fVar25 + *pfVar2;
      fVar26 = fVar26 + *pfVar1;
    } while (lVar15 != 0);
  }
  iStack_f4 = (int)fVar26;
  iStack_f0 = (int)fVar25;
  local_dc = 0x3f0080813f800000;
  local_cc = 0x3f0080813f800000;
  local_c4 = 0x3f8000003f800000;
  local_bc = 0x3f800000;
  local_ec = 0x14000000b2;
  local_e4 = 0;
  local_d4 = 0;
  local_b4 = 0x500000005;
  FUN_01493cb0(*(undefined8 *)(param_1 + 0x5e8),&local_f8);
  local_fc = 0;
  local_104 = 0;
  local_10c = 0;
  uStack_114 = 0;
  local_110 = 0;
  local_118 = 400;
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    uStack_114 = FUN_00879f50(uVar13,0);
  }
  else {
    uStack_114 = FUN_0087ac30(uVar13,0);
  }
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    local_110 = FUN_00879f50(uVar13,1);
  }
  else {
    local_110 = FUN_0087ac30(uVar13,1);
  }
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    uVar4 = FUN_00879f50(uVar13,2);
  }
  else {
    uVar4 = FUN_0087ac30(uVar13,2);
  }
  local_10c = CONCAT44(local_10c._4_4_,uVar4);
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    uVar4 = FUN_00879f50(uVar13,5);
  }
  else {
    uVar4 = FUN_0087ac30(uVar13,5);
  }
  local_10c = CONCAT44(uVar4,(undefined4)local_10c);
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    uVar4 = FUN_00879f50(uVar13,4);
  }
  else {
    uVar4 = FUN_0087ac30(uVar13,4);
  }
  local_104 = CONCAT44(local_104._4_4_,uVar4);
  piVar18 = *(int **)(param_1 + 0x5d8);
  if ((*piVar18 == 1) && (piVar18[4] == piVar18[1])) {
    uVar4 = FUN_00879f50(uVar13,3);
  }
  else {
    uVar4 = FUN_0087ac30(uVar13,3);
  }
  local_104._4_4_ = uVar4;
  FUN_01493cf0(*(undefined8 *)(param_1 + 0x5e8),&local_118,*(undefined1 *)(param_1 + 0x648));
  iStack_f4 = 0;
  iStack_f0 = 0;
  local_118 = 0x777ea906;
  uStack_114 = 0xad13f59b;
  local_f8._0_1_ = 1;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_118);
  if (lVar15 == 0) {
    iStack_f4 = 0;
    iStack_f0 = 0;
  }
  else {
    fVar25 = 0.0;
    fVar26 = 0.0;
    do {
      pfVar1 = (float *)(lVar15 + 0x30);
      pfVar2 = (float *)(lVar15 + 0x34);
      lVar15 = *(long *)(lVar15 + 0x18);
      fVar25 = fVar25 + *pfVar2;
      fVar26 = fVar26 + *pfVar1;
    } while (lVar15 != 0);
    iStack_f0 = (int)fVar25;
    iStack_f4 = (int)fVar26;
  }
  local_ec = 0x14000000b2;
  local_bc = 0x3f800000;
  local_e4 = 0x3f8000003f800000;
  local_dc = 0x3f00808100000000;
  local_d4 = 0x3f8000003f800000;
  local_cc = 0x3f00808100000000;
  local_c4 = 0x3f8000003f800000;
  local_b4 = 0x500000005;
  FUN_01493cb0(*(undefined8 *)(param_1 + 0x608),&local_f8);
  local_fc = 0;
  local_118 = 400;
  iVar5 = FUN_0087a670(uVar13,0);
  iVar6 = FUN_00879070(uVar13,0);
  uStack_114 = iVar6 + iVar5;
  iVar5 = FUN_0087a670(uVar13,1);
  iVar6 = FUN_00879070(uVar13,1);
  local_110 = iVar6 + iVar5;
  iVar5 = FUN_0087a670(uVar13,2);
  iVar6 = FUN_00879070(uVar13,2);
  local_10c = CONCAT44(local_10c._4_4_,iVar6 + iVar5);
  iVar5 = FUN_0087a670(uVar13,5);
  iVar6 = FUN_00879070(uVar13,5);
  local_10c._4_4_ = iVar6 + iVar5;
  iVar5 = FUN_0087a670(uVar13,4);
  iVar6 = FUN_00879070(uVar13,4);
  local_104 = CONCAT44(local_104._4_4_,iVar6 + iVar5);
  iVar5 = FUN_0087a670(uVar13,3);
  iVar6 = FUN_00879070(uVar13,3);
  local_104._4_4_ = iVar6 + iVar5;
  FUN_01493cf0(*(undefined8 *)(param_1 + 0x608),&local_118,*(undefined1 *)(param_1 + 0x648));
  iStack_f4 = 0;
  iStack_f0 = 0;
  local_f8 = CONCAT31(local_f8._1_3_,1);
  local_118 = 0x777ea906;
  uStack_114 = 0xad13f59b;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_118);
  if (lVar15 == 0) {
    iStack_f4 = 0;
    iStack_f0 = 0;
  }
  else {
    fVar25 = 0.0;
    fVar26 = 0.0;
    do {
      pfVar1 = (float *)(lVar15 + 0x30);
      pfVar2 = (float *)(lVar15 + 0x34);
      lVar15 = *(long *)(lVar15 + 0x18);
      fVar25 = fVar25 + *pfVar2;
      fVar26 = fVar26 + *pfVar1;
    } while (lVar15 != 0);
    iStack_f0 = (int)fVar25;
    iStack_f4 = (int)fVar26;
  }
  local_e4 = 0x3f25a5a63f800000;
  local_d4 = 0x3f58d8d93f2dadae;
  local_cc = 0x3f0080813f66e6e7;
  local_bc = 0x3f800000;
  local_ec = 0x14000000b2;
  local_dc = 0x3f00808100000000;
  local_c4 = 0x3f8000003f800000;
  local_b4 = 0x500000005;
  FUN_01493cb0(*(undefined8 *)(param_1 + 0x628),&local_f8);
  local_fc = 0;
  local_118 = 400;
  uVar7 = FUN_0087a6e0(uVar13,0);
  uStack_114 = uVar7;
  uVar8 = FUN_0087a6e0(uVar13,1);
  local_110 = uVar8;
  uVar9 = FUN_0087a6e0(uVar13,2);
  local_10c = CONCAT44(local_10c._4_4_,uVar9);
  uVar10 = FUN_0087a6e0(uVar13,5);
  local_10c = CONCAT44(uVar10,(undefined4)local_10c);
  uVar11 = FUN_0087a6e0(uVar13,4);
  local_104 = CONCAT44(local_104._4_4_,uVar11);
  uVar12 = FUN_0087a6e0(uVar13,3);
  puVar16 = PTR_DAT_0272a100;
  local_104 = CONCAT44(uVar12,(undefined4)local_104);
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),PTR_DAT_0272a100);
  bVar17 = 0;
  if (0xfb < uVar7) {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar16 + 0x10);
  if (uVar8 < 0xfc) {
    bVar17 = 0;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar16 + 0x20);
  if (uVar9 < 0xfc) {
    bVar17 = 0;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar16 + 0x30);
  if (uVar10 < 0xfc) {
    bVar17 = 0;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar16 + 0x40);
  if (uVar11 < 0xfc) {
    bVar17 = 0;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  lVar15 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),puVar16 + 0x50);
  if (uVar12 < 0xfc) {
    bVar17 = 0;
  }
  else {
    bVar17 = *(byte *)(param_1 + 0x649) ^ 1;
  }
  *(byte *)(lVar15 + 0x58) = *(byte *)(lVar15 + 0x58) & 0xfe | bVar17;
  if (0x1fd < uVar12 + uVar11 + uVar10 + uVar9 + uVar8 + uVar7) {
    local_fc = 1;
  }
  FUN_01493cf0(*(undefined8 *)(param_1 + 0x628),&local_118,*(undefined1 *)(param_1 + 0x648));
  uVar14 = FUN_00879890(uVar13);
  local_f8 = (undefined4)*(undefined8 *)(PTR_DAT_0272a108 + (uVar14 & 0xff) * 8);
  iStack_f4 = (int)((ulong)*(undefined8 *)(PTR_DAT_0272a108 + (uVar14 & 0xff) * 8) >> 0x20);
  FUN_00ffd010(lVar19,&local_f8);
  local_f8 = 0xbc954e36;
  iStack_f4 = 0xa26805c8;
  lVar19 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&local_f8);
  *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
  uVar4 = FUN_0087cdb0(uVar13);
  FUN_014c93c0(lVar22,0,uVar4);
  local_120 = lVar21;
  if (lVar21 == 0) {
    FUN_01489c10(param_1,0x3a9b90f471f54888,0x37438d03a613e3e8,&local_120);
  }
  else {
    plVar20 = (long *)(lVar21 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_01489c10(param_1,0x3a9b90f471f54888,0x37438d03a613e3e8,&local_120);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_120 = 0;
  }
  uVar4 = FUN_0087cdb0(uVar13);
  local_128 = lVar23;
  if (lVar23 == 0) {
    FUN_0148a090(param_1,uVar4,0x6524c4351dbccbc6,&local_128);
  }
  else {
    plVar20 = (long *)(lVar23 + 0x48);
    (**(code **)(*plVar20 + 0x10))(plVar20);
    FUN_0148a090(param_1,uVar4,0x6524c4351dbccbc6,&local_128);
    (**(code **)(*plVar20 + 0x18))(plVar20);
    local_128 = 0;
    (**(code **)(*plVar20 + 0x18))(plVar20);
  }
  if (lVar21 != 0) {
    (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
  }
  if (lVar22 != 0) {
    (**(code **)(*(long *)(lVar22 + 0x48) + 0x18))((long *)(lVar22 + 0x48));
  }
  return;
}


