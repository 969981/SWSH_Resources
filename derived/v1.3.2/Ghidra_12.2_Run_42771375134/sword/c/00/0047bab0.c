/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0047bab0; name: FUN_0047bab0
 */


undefined4 FUN_0047bab0(long param_1)

{
  MutexType *pMVar1;
  undefined **ppuVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined *puVar15;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  uint local_d4;
  undefined2 local_d0;
  byte local_ce;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long *local_68;
  
  puVar15 = PTR_DAT_027130b8;
  local_a0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0;
  local_98 = 0xff;
  local_90 = 0xff;
  local_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_c8 = PTR_DAT_027130b8 + 0x10;
  local_88 = 0;
  local_68 = (long *)0x0;
  uVar14 = *(uint *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x18) = 0xae0007;
  if (uVar14 != 0) {
    lVar11 = *(long *)PTR_DAT_02712ae8;
    pMVar1 = (MutexType *)(lVar11 + 0x2a0);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar11 + 0x2c8);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar14 / uVar3;
      }
      for (plVar12 = *(long **)(*(long *)(lVar11 + 0x2c0) + (ulong)(uVar14 - uVar4 * uVar3) * 8);
          plVar12 != (long *)0x0; plVar12 = (long *)plVar12[1]) {
        if (*(uint *)(plVar12 + 2) == uVar14) {
          *(int *)((long)plVar12 + 0x14) = *(int *)((long)plVar12 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          *(int *)(param_1 + 0x18) = (int)plVar12[6];
          pcVar9 = (code *)FUN_0045f2c0(*(undefined4 *)(param_1 + 0x18));
          puVar5 = (undefined4 *)PTR_DAT_02712b38;
          puVar6 = PTR_PTR_02713088;
          puVar7 = (undefined8 *)PTR_DAT_02713210;
          goto joined_r0x0047bf48;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
  }
  plVar12 = (long *)0x0;
  pcVar9 = (code *)FUN_0045f2c0(*(undefined4 *)(param_1 + 0x18));
  puVar5 = (undefined4 *)PTR_DAT_02712b38;
  puVar6 = PTR_PTR_02713088;
  puVar7 = (undefined8 *)PTR_DAT_02713210;
joined_r0x0047bf48:
  PTR_DAT_02712b38 = (undefined *)puVar5;
  PTR_PTR_02713088 = puVar6;
  PTR_DAT_02713210 = (undefined *)puVar7;
  if (pcVar9 != (code *)0x0) {
    if (plVar12 == (long *)0x0) {
      do {
        local_68 = (long *)(*pcVar9)(puVar6);
        puVar15 = PTR_DAT_027130b8;
        if (local_68 == (long *)0x0) break;
        local_d8 = *puVar5;
        local_d4 = *(uint *)(param_1 + 100);
        uVar14 = (local_ce & 0xf8) << 0x10 | (local_d4 & 0xff) << 8 | 0x50020;
        local_d0 = (undefined2)uVar14;
        local_ce = (byte)(uVar14 >> 0x10);
        iVar8 = (**(code **)(*local_68 + 0x38))(local_68,puVar6,param_1,local_c0,&local_d8);
        if (iVar8 == 1) goto LAB_0047bd64;
        FUN_00462550(&local_c8);
        pcVar9 = (code *)*puVar7;
        if (pcVar9 != (code *)0x0) {
          uVar10 = FUN_0042eec0();
          (*pcVar9)(uVar10,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,iVar8);
        }
        if (iVar8 != 4) goto LAB_0047bea0;
        *(undefined4 *)(param_1 + 0x18) = 0xae0007;
        pcVar9 = (code *)FUN_0045f2c0(0xae0007);
        puVar15 = PTR_DAT_027130b8;
      } while (pcVar9 != (code *)0x0);
    }
    else {
      do {
        local_68 = (long *)(*pcVar9)(puVar6);
        puVar15 = PTR_DAT_027130b8;
        if (local_68 == (long *)0x0) break;
        local_d8 = *puVar5;
        local_d4 = *(uint *)(param_1 + 100);
        uVar14 = (local_ce & 0xf8) << 0x10 | (local_d4 & 0xff) << 8 | 0x50020;
        local_d0 = (undefined2)uVar14;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_e8 = 0xff;
        local_ce = (byte)(uVar14 >> 0x10);
        local_f0 = 0xff;
        local_e0 = 0;
        FUN_00461800(&local_c8,plVar12,&local_108,0,0);
        iVar8 = (**(code **)(*local_68 + 0x38))(local_68,puVar6,param_1,local_c0,&local_d8);
        if (iVar8 == 1) goto LAB_0047bd64;
        FUN_00462550(&local_c8);
        pcVar9 = (code *)*puVar7;
        if (pcVar9 != (code *)0x0) {
          uVar10 = FUN_0042eec0();
          (*pcVar9)(uVar10,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,iVar8);
        }
        if (iVar8 != 4) goto LAB_0047bea0;
        *(undefined4 *)(param_1 + 0x18) = 0xae0007;
        pcVar9 = (code *)FUN_0045f2c0(0xae0007);
        puVar15 = PTR_DAT_027130b8;
      } while (pcVar9 != (code *)0x0);
    }
  }
  uVar13 = 0;
joined_r0x0047bf90:
  if (plVar12 != (long *)0x0) {
LAB_0047bebc:
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
LAB_0047becc:
  local_c8 = puVar15 + 0x10;
  (**(code **)(puVar15 + 0x38))(&local_c8);
  local_c8 = PTR_DAT_027130b0 + 0x10;
  (**(code **)(PTR_DAT_027130b0 + 0x38))(&local_c8);
  return uVar13;
LAB_0047bd64:
  puVar15 = PTR_DAT_027130b8;
  if ((local_d4 & 0xf00) == 0x100) {
    uVar14 = local_d4 >> 0xc;
    if (((local_d4 >> 0x10 ^ local_d4 >> 0x15) & 1) != 0) {
      uVar14 = local_d4 >> 0xc & 0xffffffcf | 0x600;
    }
    uVar3 = uVar14 - (uVar14 >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    uVar14 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | uVar14 << 0xc | 0x100;
    iVar8 = *(int *)(param_1 + 0x58);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x58);
    uVar14 = local_d4;
  }
  if (iVar8 != 0) goto joined_r0x0047be04;
  *(undefined4 *)(param_1 + 0x58) = 0xe611314a;
  if (local_68 == (long *)0x0) goto LAB_0047beb4;
LAB_0047be08:
  iVar8 = (**(code **)(*local_68 + 0x18))();
  if (iVar8 == 1) {
    ppuVar2 = (undefined **)(param_1 + 0x98);
    uVar13 = 1;
    if (&local_c8 != ppuVar2) {
      FUN_00462590(ppuVar2,&local_c8);
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0xff;
      local_e8 = 0xff;
      local_e0 = 0;
      FUN_004619b0(ppuVar2,&local_108,0);
      *(uint *)(param_1 + 0x3c) = uVar14;
      *(undefined4 *)(param_1 + 0x120) = 1;
      pcVar9 = *(code **)PTR_DAT_02713210;
      if (pcVar9 != (code *)0x0) {
        uVar10 = FUN_0042eec0();
        uVar13 = 1;
        (*pcVar9)(uVar10,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,1);
        goto joined_r0x0047bf90;
      }
    }
    goto LAB_0047beb8;
  }
  pcVar9 = *(code **)PTR_DAT_02713210;
  if (pcVar9 != (code *)0x0) {
    uVar10 = FUN_0042eec0();
    (*pcVar9)(uVar10,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),0,iVar8);
  }
  (**(code **)(local_c8 + 0x28))(&local_c8);
  uVar13 = 0;
  goto joined_r0x0047bf90;
LAB_0047bea0:
  uVar14 = 0;
  puVar15 = PTR_DAT_027130b8;
joined_r0x0047be04:
  PTR_DAT_027130b8 = puVar15;
  if (local_68 != (long *)0x0) goto LAB_0047be08;
LAB_0047beb4:
  uVar13 = 0;
LAB_0047beb8:
  if (plVar12 == (long *)0x0) goto LAB_0047becc;
  goto LAB_0047bebc;
}


