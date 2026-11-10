/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008b1490; name: FUN_008b1490
 */


void FUN_008b1490(long param_1)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long local_e0 [7];
  undefined1 local_a8;
  undefined4 local_a6;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  long local_90 [4];
  undefined1 local_70;
  byte local_6f;
  undefined1 local_6e;
  undefined4 local_6d;
  undefined1 local_69;
  
  uVar9 = *(undefined8 *)(param_1 + 0x78);
  local_98 = 0x300000002;
  uVar5 = FUN_008c7c50(uVar9);
  if ((uVar5 & 1) == 0) {
    uVar5 = 2;
    uVar6 = FUN_008c7c60(uVar9);
  }
  else {
    uVar5 = 3;
    local_90[0]._0_4_ = 4;
    uVar6 = FUN_008c7c60(uVar9);
  }
  if ((uVar6 & 1) != 0) {
    *(undefined4 *)((long)&local_98 + uVar5 * 4) = 5;
    uVar5 = (ulong)((int)uVar5 + 1);
  }
  *(undefined4 *)((long)&local_98 + uVar5 * 4) = 7;
  if ((int)uVar5 + 1U < 5) {
    lVar11 = uVar5 + 1;
    uVar1 = -(int)uVar5 & 3;
    if (uVar1 != 0) {
      lVar8 = -(ulong)uVar1;
      do {
        *(undefined4 *)((long)&local_98 + lVar11 * 4) = 8;
        lVar11 = lVar11 + 1;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0);
    }
    if (2 < 3 - uVar5) {
      lVar8 = 5 - lVar11;
      puVar10 = (undefined8 *)((long)local_90 + lVar11 * 4);
      do {
        puVar10[-1] = 0x800000008;
        *puVar10 = 0x800000008;
        lVar8 = lVar8 + -4;
        puVar10 = puVar10 + 2;
      } while (lVar8 != 0);
    }
  }
  puVar10 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar7 = (long *)(**(code **)*puVar10)(puVar10);
  if (((*PTR_DAT_02717528 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_02717528), iVar4 != 0))
  {
    uVar9 = FUN_00b8c810();
    *(undefined8 *)PTR_DAT_02717530 = uVar9;
    __cxa_guard_release(PTR_DAT_02717528);
  }
  for (; plVar7 != (long *)PTR_DAT_02717530; plVar7 = (long *)*plVar7) {
  }
  FUN_00ff86a0(local_e0,puVar10[0xd],0);
  lVar11 = *(long *)(local_e0[0] + 0x60);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (local_e0[0] != 0) {
    (**(code **)(*(long *)(local_e0[0] + 0x48) + 0x18))();
    local_e0[0] = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0x2b0);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar8 + 0x2e0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(lVar8 + 0x2e8);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(lVar8 + 0x2f0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_a8 = 1;
  local_e0[5] = 0;
  local_e0[6] = 0;
  local_e0[3] = 0;
  local_e0[4] = 0;
  local_e0[0] = 0;
  local_a6 = 0xffff;
  local_e0[1] = 0;
  local_e0[2] = 0;
  FUN_0077eb10(lVar11,&DAT_02144cc8,lVar14);
  FUN_014c62d0(lVar13,lVar12,lVar14);
  lVar17 = 0;
  iVar4 = 0;
  do {
    iVar2 = *(int *)((long)&local_98 + lVar17);
    lVar16 = *(long *)(param_1 + (long)iVar4 * 8 + 0x88);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    if (iVar2 == 8) {
      bVar3 = true;
    }
    else {
      uVar1 = iVar2 - 2;
      lVar15 = (long)iVar4;
      local_90[2] = 0x5d35bbd8a373d499;
      if (uVar1 < 4) {
        local_90[2] = (&DAT_01d4d780)[(int)uVar1];
      }
      FUN_0077eb10(lVar11,local_90 + 2,lVar16);
      bVar3 = false;
      iVar4 = iVar4 + 1;
      local_e0[lVar15] = lVar16;
    }
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
    }
  } while ((!bVar3) && (bVar3 = lVar17 != 0x10, lVar17 = lVar17 + 4, bVar3));
  FUN_008c4b10(*(undefined8 *)(param_1 + 0x78),0);
  FUN_008c99a0(*(undefined8 *)(param_1 + 0x78),0);
  local_70 = 0;
  local_90[3] = 0;
  local_69 = local_9c;
  local_6e = 0;
  local_6d = local_a0;
  local_6f = *(byte *)(param_1 + 200) ^ 1;
  local_90[2] = lVar12;
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0xc0),0);
  (**(code **)(**(long **)(param_1 + 0xc0) + 0x88))
            (*(long **)(param_1 + 0xc0),local_90 + 2,local_e0);
  *(undefined1 *)(param_1 + 200) = 1;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))();
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


