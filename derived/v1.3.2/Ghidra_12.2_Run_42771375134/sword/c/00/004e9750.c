/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e9750; name: FUN_004e9750
 */


void FUN_004e9750(long param_1,undefined8 param_2,long param_3,long param_4,undefined4 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  long lStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined8 local_d0;
  long local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  
  lVar3 = *(long *)(param_4 + 8);
  if (*(uint *)(lVar3 + 0x40) < 3) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  }
  local_a0 = *(undefined4 *)(lVar4 + 0x78);
  local_9c = *(undefined4 *)(lVar4 + 0x7c);
  local_98 = *(undefined4 *)(lVar4 + 0x80);
  local_b0 = *(undefined4 *)(lVar4 + 0x6c);
  local_ac = *(undefined4 *)(lVar4 + 0x70);
  uStack_a8 = *(undefined4 *)(lVar4 + 0x74);
  uVar5 = (ulong)*(uint *)(param_1 + 0x30);
  uVar6 = uVar5 * 4 + 0xf & 0x7fffffff0;
  local_c8 = (long)auStack_d8 + (8 - uVar6);
  lVar11 = local_c8 - uVar6;
  lVar4 = lVar11 - (uVar5 * 8 + 0xf & 0xffffffff0);
  lVar9 = lVar4 - (uVar5 * 0x28 + 0xf & 0x7ffffffff0);
  uVar12 = DAT_01d4bb38;
  if (*(uint *)(param_1 + 0x30) == 0) {
    bVar7 = false;
    uVar5 = 0;
    fVar15 = 0.0;
    fVar14 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar13 = 0.0;
    plVar8 = *(long **)(param_1 + 0x28);
    fVar15 = 0.0;
    uVar10 = *(undefined8 *)(param_3 + (ulong)(*(int *)(param_3 + 0x100) - 1) * 0x18 + 0x40);
    fVar14 = 0.0;
    uVar5 = 0;
    bVar7 = false;
    local_d0 = param_2;
    do {
      lVar3 = *plVar8;
      if ((*(char *)(lVar3 + 0x98) != '\0') &&
         (uVar6 = FUN_004eb2e0(lVar3,uVar10), (uVar6 & 1) != 0)) {
        fVar14 = *(float *)(lVar3 + 0x4c) + fVar14;
        fVar15 = *(float *)(lVar3 + 0x48) + fVar15;
        local_c0 = 0.0;
        uVar2 = *(undefined8 *)(param_4 + 0x30);
        fVar13 = *(float *)(lVar3 + 0x50) + fVar13;
        lVar1 = local_c8 + uVar5 * 4;
        *(undefined4 *)(lVar9 + -8) = param_5;
        *(ulong *)(lVar9 + -0x20) = lVar11 + uVar5 * 4;
        *(ulong *)(lVar9 + -0x18) = lVar4 + uVar5 * 8;
        *(float **)(lVar9 + -0x10) = &local_c0;
        FUN_004e9d80(param_1,lVar3,param_4,uVar2,&local_a0,&local_b0,lVar9 + uVar5 * 0x28,lVar1);
        uVar12 = NEON_fminnm(uVar12,local_c0);
        uVar5 = (ulong)((int)uVar5 + 1);
        bVar7 = true;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8));
    lVar3 = *(long *)(param_4 + 8);
    param_2 = local_d0;
  }
  lVar1 = local_c8;
  local_b8 = 1.0 / (float)uVar5;
  local_c0 = local_b8 * fVar15;
  fStack_bc = local_b8 * fVar14;
  local_b8 = local_b8 * fVar13;
  uVar10 = *(undefined8 *)(lVar3 + 0x48);
  if (!bVar7) {
    uVar12 = 0;
  }
  *(int *)(lVar9 + -0x18) = (int)uVar5;
  *(long *)(lVar9 + -0x20) = lVar11;
  *(undefined4 *)(lVar9 + -0x10) = param_5;
  FUN_004e9c00(uVar12,param_1,param_2,uVar10,&local_c0,0,lVar4,lVar9,lVar1);
  return;
}


