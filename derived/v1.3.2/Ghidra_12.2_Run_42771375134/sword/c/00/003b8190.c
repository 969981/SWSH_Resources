/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b8190; name: FUN_003b8190
 */


undefined8 FUN_003b8190(long param_1,long param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  
  iVar10 = *(int *)(param_1 + 0x90);
  iVar6 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x98);
  iVar7 = *(int *)(param_1 + 0x9c);
  iVar5 = *(int *)(param_1 + 0xa0);
  iVar8 = *(int *)(param_1 + 0xa4);
  uVar15 = *(undefined8 *)(param_1 + 0x50);
  lVar16 = *(long *)(param_2 + 0x40);
  FUN_003fc170(param_2,&local_60);
  FUN_003afa90(&local_b0,uVar15);
  plVar2 = (long *)(param_1 + 0xb0);
  fVar19 = (local_50 - local_a0) + (local_50 - local_a0);
  fVar17 = (local_4c - fStack_9c) + (local_4c - fStack_9c);
  fVar18 = (local_48 - local_98) + (local_48 - local_98);
  fVar20 = fStack_a4 * fStack_a4 + -0.5;
  fVar22 = (fVar19 * -(float)local_b0 - fVar17 * local_b0._4_4_) - fVar18 * local_a8;
  local_6c = (fVar20 * fVar19 + fStack_a4 * (fVar17 * local_a8 - fVar18 * local_b0._4_4_)) -
             fVar22 * (float)local_b0;
  local_64 = (fVar20 * fVar18 + fStack_a4 * (fVar19 * local_b0._4_4_ - fVar17 * (float)local_b0)) -
             fVar22 * local_a8;
  local_68 = (fVar20 * fVar17 + fStack_a4 * (fVar18 * (float)local_b0 - fVar19 * local_a8)) -
             fVar22 * local_b0._4_4_;
  fVar22 = ((fStack_a4 * local_60 - local_54 * (float)local_b0) - local_58 * local_b0._4_4_) +
           local_5c * local_a8;
  fVar23 = ((fStack_a4 * local_5c - local_54 * local_b0._4_4_) - local_60 * local_a8) +
           local_58 * (float)local_b0;
  fVar20 = fVar23 + fVar23;
  fVar24 = ((fStack_a4 * local_58 - local_54 * local_a8) - local_5c * (float)local_b0) +
           local_60 * local_b0._4_4_;
  fVar17 = fStack_a4 * local_54 + local_60 * (float)local_b0 + local_5c * local_b0._4_4_ +
           local_58 * local_a8;
  fVar19 = fVar22 + fVar22;
  fVar21 = fVar24 * (fVar24 + fVar24);
  fVar18 = fVar17 * (fVar24 + fVar24);
  local_88 = *(float *)(lVar16 + 0x5c);
  local_90 = local_88 * ((1.0 - fVar23 * fVar20) - fVar21);
  local_8c = local_88 * (fVar19 * fVar23 + fVar18);
  local_88 = local_88 * (fVar19 * fVar24 - fVar17 * fVar20);
  fVar22 = 1.0 - fVar22 * fVar19;
  local_7c = *(float *)(lVar16 + 0x58);
  local_84 = local_7c * (fVar19 * fVar23 - fVar18);
  local_80 = local_7c * (fVar22 - fVar21);
  local_7c = local_7c * (fVar19 * fVar17 + fVar24 * fVar20);
  local_70 = *(float *)(lVar16 + 0x60);
  local_78 = local_70 * (fVar19 * fVar24 + fVar17 * fVar20);
  local_74 = local_70 * (fVar24 * fVar20 - fVar19 * fVar17);
  local_70 = local_70 * (fVar22 - fVar23 * fVar20);
  iVar9 = *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xa8) = iVar9 + 1;
  local_b0 = 0;
  uVar3 = iVar6 + iVar10 + iVar4 + iVar7 + iVar5 + iVar8 + iVar9;
  uVar14 = *(uint *)(param_1 + 0xb8);
  if (uVar14 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
    *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar14 * 8) = 0;
    uVar1 = uVar14 + 1;
    *(uint *)(param_1 + 0xb8) = uVar1;
  }
  else {
    FUN_003b9c40(plVar2,&local_b0);
    uVar1 = *(uint *)(param_1 + 0xb8);
    uVar14 = uVar1 - 1;
  }
  if (uVar3 < uVar14) {
    uVar11 = (ulong)uVar14;
    uVar12 = uVar1;
    if (((uVar1 + 1) - uVar3 & 1) != 0) {
      *(undefined8 *)(*plVar2 + uVar11 * 8) = *(undefined8 *)(*plVar2 + (ulong)(uVar1 - 2) * 8);
      uVar11 = uVar11 - 1;
      uVar12 = uVar14;
    }
    if (uVar1 - 2 != uVar3) {
      uVar14 = (int)uVar11 - 1;
      do {
        lVar16 = uVar11 * 8;
        *(undefined8 *)(*plVar2 + lVar16) = *(undefined8 *)(*plVar2 + (ulong)(uVar12 - 2) * 8);
        iVar10 = (int)uVar11;
        uVar11 = uVar11 - 2;
        *(undefined8 *)(*plVar2 + lVar16 + -8) = *(undefined8 *)(*plVar2 + (ulong)(iVar10 - 2) * 8);
        uVar12 = uVar14;
        uVar14 = uVar14 - 2;
      } while (uVar3 < (uint)uVar11);
    }
  }
  *(long *)(*(long *)(param_1 + 0xb0) + (ulong)uVar3 * 8) = param_2;
  uVar3 = *(uint *)(param_1 + 200);
  if (uVar3 < (*(uint *)(param_1 + 0xcc) & 0x7fffffff)) {
    pfVar13 = (float *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 0x30);
    *pfVar13 = local_90;
    pfVar13[1] = local_8c;
    pfVar13[2] = local_88;
    pfVar13[3] = local_84;
    pfVar13[4] = local_80;
    pfVar13[5] = local_7c;
    pfVar13[6] = local_78;
    pfVar13[7] = local_74;
    pfVar13[8] = local_70;
    pfVar13[9] = local_6c;
    pfVar13[10] = local_68;
    pfVar13[0xb] = local_64;
    *(uint *)(param_1 + 200) = uVar3 + 1;
  }
  else {
    FUN_003b9630(param_1 + 0xc0,&local_90);
  }
  return 1;
}


