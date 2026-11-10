/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003e9440; name: FUN_003e9440
 */


void FUN_003e9440(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  long *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  
  uVar12 = *(uint *)(param_1 + 0x28);
  if ((*(byte *)(param_1 + 0x110e) >> 1 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x30) * 8;
    uVar12 = uVar12 - *(uint *)(param_1 + 0x30);
  }
  plVar16 = *(long **)(param_1 + 0x10f0);
  uVar6 = (ulong)*(uint *)(param_1 + 0x10f8);
  Hint_Prefetch(lVar9,0,0,0);
  if (*(uint *)(param_1 + 0x10f8) != 0) {
    plVar15 = plVar16;
    do {
      puVar10 = (ulong *)*plVar15;
      *(undefined4 *)(puVar10 + 1) = 0;
      uVar11 = *puVar10;
      uVar6 = uVar6 - 1;
      Hint_Prefetch(uVar11 & 0xffffffffffffff80,0,0,0);
      Hint_Prefetch(uVar11 + 0x80 & 0xffffffffffffff80,0,0,0);
      plVar15 = plVar15 + 1;
    } while (uVar6 != 0);
  }
  uVar1 = uVar12 & 0xffffffe0;
  if (uVar1 != 0) {
    uVar6 = 0;
    lVar14 = lVar9;
    do {
      lVar17 = 0;
      Hint_Prefetch(lVar9 + 0x100,0,0,0);
      do {
        while (uVar6 + lVar17 < (ulong)(uVar12 - 1)) {
          uVar7 = *(undefined8 *)(lVar14 + lVar17 * 8 + 8);
          Hint_Prefetch(uVar7,0,0,0);
          lVar13 = *(long *)(lVar14 + lVar17 * 8);
          iVar5 = FUN_003bead0(uVar7,lVar13);
          if (iVar5 == 0) goto LAB_003e9544;
LAB_003e9518:
          lVar17 = lVar17 + 1;
          if (lVar17 == 0x20) goto LAB_003e9628;
        }
        lVar13 = *(long *)(lVar14 + lVar17 * 8);
        iVar5 = FUN_003bead0(lVar13);
        if (iVar5 != 0) goto LAB_003e9518;
LAB_003e9544:
        local_90 = (long *)FUN_003d9790(lVar13);
        local_88 = local_90[2];
        (**(code **)(*local_90 + 0xa8))(&local_b0);
        local_80 = local_b0;
        uVar7 = local_80;
        local_78 = local_a8;
        uVar3 = local_78;
        local_70 = local_a0;
        uVar4 = local_70;
        local_68 = local_98;
        plVar15 = (long *)plVar16[*(byte *)(lVar13 + 0xb)];
        uVar2 = *(uint *)(plVar15 + 1);
        if (uVar2 < (*(uint *)((long)plVar15 + 0xc) & 0x7fffffff)) {
          plVar8 = (long *)(*plVar15 + (ulong)uVar2 * 0x30);
          plVar8[1] = local_88;
          *plVar8 = (long)local_90;
          local_80._0_4_ = (undefined4)local_b0;
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_80;
          local_80._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x14) = local_80._4_4_;
          local_78._0_4_ = (undefined4)local_a8;
          *(undefined4 *)(plVar8 + 3) = (undefined4)local_78;
          local_78._4_4_ = (undefined4)((ulong)local_a8 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x1c) = local_78._4_4_;
          local_70._0_4_ = (undefined4)local_a0;
          *(undefined4 *)(plVar8 + 4) = (undefined4)local_70;
          local_70._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x24) = local_70._4_4_;
          *(undefined4 *)(plVar8 + 5) = local_98;
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          local_80 = uVar7;
          local_78 = uVar3;
          local_70 = uVar4;
        }
        else {
          FUN_003ef370(plVar15,&local_90);
        }
        Hint_Prefetch(*plVar15 + (ulong)uVar2 * 0x30 + 0xb0 & 0xffffffffffffff80,0,0,0);
        lVar17 = lVar17 + 1;
      } while (lVar17 != 0x20);
LAB_003e9628:
      uVar6 = uVar6 + 0x20;
      lVar14 = lVar14 + 0x100;
    } while (uVar6 < uVar1);
  }
  if (uVar1 < uVar12) {
    uVar6 = (ulong)uVar1;
    do {
      while (uVar12 - 1 <= uVar6) {
        lVar14 = *(long *)(lVar9 + uVar6 * 8);
        iVar5 = FUN_003bead0(lVar14);
        if (iVar5 != 0) goto LAB_003e9670;
LAB_003e969c:
        local_90 = (long *)FUN_003d9790(lVar14);
        local_88 = local_90[2];
        (**(code **)(*local_90 + 0xa8))(&local_b0);
        local_80 = local_b0;
        uVar7 = local_80;
        local_78 = local_a8;
        uVar3 = local_78;
        local_70 = local_a0;
        uVar4 = local_70;
        local_68 = local_98;
        plVar15 = (long *)plVar16[*(byte *)(lVar14 + 0xb)];
        uVar1 = *(uint *)(plVar15 + 1);
        if (uVar1 < (*(uint *)((long)plVar15 + 0xc) & 0x7fffffff)) {
          plVar8 = (long *)(*plVar15 + (ulong)uVar1 * 0x30);
          plVar8[1] = local_88;
          *plVar8 = (long)local_90;
          local_80._0_4_ = (undefined4)local_b0;
          *(undefined4 *)(plVar8 + 2) = (undefined4)local_80;
          local_80._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x14) = local_80._4_4_;
          local_78._0_4_ = (undefined4)local_a8;
          *(undefined4 *)(plVar8 + 3) = (undefined4)local_78;
          local_78._4_4_ = (undefined4)((ulong)local_a8 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x1c) = local_78._4_4_;
          local_70._0_4_ = (undefined4)local_a0;
          *(undefined4 *)(plVar8 + 4) = (undefined4)local_70;
          local_70._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
          *(undefined4 *)((long)plVar8 + 0x24) = local_70._4_4_;
          *(undefined4 *)(plVar8 + 5) = local_98;
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          local_80 = uVar7;
          local_78 = uVar3;
          local_70 = uVar4;
        }
        else {
          FUN_003ef370(plVar15,&local_90);
        }
        Hint_Prefetch(*plVar15 + (ulong)uVar1 * 0x30 + 0xb0 & 0xffffffffffffff80,0,0,0);
        uVar6 = uVar6 + 1;
        if (uVar12 == uVar6) {
          return;
        }
      }
      uVar7 = *(undefined8 *)(lVar9 + uVar6 * 8 + 8);
      Hint_Prefetch(uVar7,0,0,0);
      lVar14 = *(long *)(lVar9 + uVar6 * 8);
      iVar5 = FUN_003bead0(uVar7,lVar14);
      if (iVar5 == 0) goto LAB_003e969c;
LAB_003e9670:
      uVar6 = uVar6 + 1;
    } while (uVar12 != uVar6);
  }
  return;
}


