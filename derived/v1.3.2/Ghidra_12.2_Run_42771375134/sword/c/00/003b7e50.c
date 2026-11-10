/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003b7e50; name: FUN_003b7e50
 */


undefined8 FUN_003b7e50(long param_1,long param_2)

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
  ulong uVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined8 uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  
  iVar9 = *(int *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0x94);
  iVar4 = *(int *)(param_1 + 0x98);
  iVar6 = *(int *)(param_1 + 0x9c);
  uVar14 = *(undefined8 *)(param_1 + 0x50);
  lVar15 = *(long *)(param_2 + 0x40);
  iVar7 = *(int *)(param_1 + 0xa0);
  FUN_003fc170(param_2,&local_60);
  FUN_003afa90(&local_d0,uVar14);
  fVar17 = (fStack_4c - fStack_bc) + (fStack_4c - fStack_bc);
  fVar20 = local_c4 * local_c4 + -0.5;
  fVar19 = (local_50 - local_c0) + (local_50 - local_c0);
  fVar18 = (local_48 - local_b8) + (local_48 - local_b8);
  fVar16 = (fVar19 * -local_d0 - fVar17 * local_cc) - fVar18 * fStack_c8;
  local_a8 = ((local_c4 * local_58 - fStack_54 * fStack_c8) - fStack_5c * local_d0) +
             local_60 * local_cc;
  fStack_a4 = local_c4 * fStack_54 + local_60 * local_d0 + fStack_5c * local_cc +
              local_58 * fStack_c8;
  local_a0 = (fVar20 * fVar19 + local_c4 * (fVar17 * fStack_c8 - fVar18 * local_cc)) -
             fVar16 * local_d0;
  fStack_9c = (fVar20 * fVar17 + local_c4 * (fVar18 * local_d0 - fVar19 * fStack_c8)) -
              fVar16 * local_cc;
  local_98 = (fVar20 * fVar18 + local_c4 * (fVar19 * local_cc - fVar17 * local_d0)) -
             fVar16 * fStack_c8;
  local_b0 = CONCAT44(((local_c4 * fStack_5c - fStack_54 * local_cc) - local_60 * fStack_c8) +
                      local_58 * local_d0,
                      ((local_c4 * local_60 - fStack_54 * local_d0) - local_58 * local_cc) +
                      fStack_5c * fStack_c8);
  FUN_001ae520(&local_90,&local_b0,lVar15 + 0x4c);
  iVar8 = *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0xa4) = iVar8 + 1;
  local_b0 = 0;
  uVar3 = iVar5 + iVar9 + iVar4 + iVar6 + iVar7 + iVar8;
  plVar2 = (long *)(param_1 + 0xb0);
  uVar13 = *(uint *)(param_1 + 0xb8);
  if (uVar13 < (*(uint *)(param_1 + 0xbc) & 0x7fffffff)) {
    *(undefined8 *)(*(long *)(param_1 + 0xb0) + (ulong)uVar13 * 8) = 0;
    uVar1 = uVar13 + 1;
    *(uint *)(param_1 + 0xb8) = uVar1;
  }
  else {
    FUN_003b9c40(plVar2,&local_b0);
    uVar1 = *(uint *)(param_1 + 0xb8);
    uVar13 = uVar1 - 1;
  }
  if (uVar3 < uVar13) {
    uVar10 = (ulong)uVar13;
    uVar11 = uVar1;
    if (((uVar1 + 1) - uVar3 & 1) != 0) {
      *(undefined8 *)(*plVar2 + uVar10 * 8) = *(undefined8 *)(*plVar2 + (ulong)(uVar1 - 2) * 8);
      uVar10 = uVar10 - 1;
      uVar11 = uVar13;
    }
    if (uVar1 - 2 != uVar3) {
      uVar13 = (int)uVar10 - 1;
      do {
        lVar15 = uVar10 * 8;
        *(undefined8 *)(*plVar2 + lVar15) = *(undefined8 *)(*plVar2 + (ulong)(uVar11 - 2) * 8);
        iVar9 = (int)uVar10;
        uVar10 = uVar10 - 2;
        *(undefined8 *)(*plVar2 + lVar15 + -8) = *(undefined8 *)(*plVar2 + (ulong)(iVar9 - 2) * 8);
        uVar11 = uVar13;
        uVar13 = uVar13 - 2;
      } while (uVar3 < (uint)uVar10);
    }
  }
  *(long *)(*(long *)(param_1 + 0xb0) + (ulong)uVar3 * 8) = param_2;
  uVar3 = *(uint *)(param_1 + 200);
  if (uVar3 < (*(uint *)(param_1 + 0xcc) & 0x7fffffff)) {
    puVar12 = (undefined4 *)(*(long *)(param_1 + 0xc0) + (ulong)uVar3 * 0x30);
    *puVar12 = local_90;
    puVar12[1] = local_8c;
    puVar12[2] = local_88;
    puVar12[3] = local_84;
    puVar12[4] = local_80;
    puVar12[5] = local_7c;
    puVar12[6] = local_78;
    puVar12[7] = local_74;
    puVar12[8] = local_70;
    puVar12[9] = local_6c;
    puVar12[10] = local_68;
    puVar12[0xb] = local_64;
    *(uint *)(param_1 + 200) = uVar3 + 1;
  }
  else {
    FUN_003b9630(param_1 + 0xc0,&local_90);
  }
  return 1;
}


