/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e2610; name: FUN_013e2610
 */


void FUN_013e2610(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *local_200;
  code *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  long *local_1e0 [12];
  undefined1 *local_180;
  code *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  undefined8 *apuStack_160 [12];
  long local_100;
  undefined8 local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 **local_d0 [14];
  
  lVar5 = *(long *)(param_1 + 0x60);
  puVar6 = (undefined8 *)(lVar5 + 0x50);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  lVar3 = FUN_0132d9a0();
  for (; plVar2 != (long *)lVar3; plVar2 = (long *)*plVar2) {
  }
  lVar3 = *(long *)(lVar5 + 0x358);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x220);
  lVar5 = *(long *)(lVar8 + 0xa0);
  if (lVar5 != 0) {
    do {
      uVar4 = *(ulong *)(lVar8 + 0x98);
      local_f8 = *(undefined8 *)
                  (*(long *)((long)*(undefined8 **)(lVar8 + 0x68) + (uVar4 >> 6 & 0x3fffffffffffff8)
                            ) + (uVar4 & 0x1ff) * 8);
      *(ulong *)(lVar8 + 0x98) = uVar4 + 1;
      *(long *)(lVar8 + 0xa0) = lVar5 + -1;
      if (0x3ff < uVar4 + 1) {
        (**(code **)(**(long **)(lVar8 + 0xa8) + 0x18))
                  (*(long **)(lVar8 + 0xa8),**(undefined8 **)(lVar8 + 0x68),0x1000,8);
        *(long *)(lVar8 + 0x68) = *(long *)(lVar8 + 0x68) + 8;
        *(long *)(lVar8 + 0x98) = *(long *)(lVar8 + 0x98) + -0x200;
      }
      local_180 = &LAB_013e50c0;
      local_178 = FUN_013e5130;
      local_170 = &LAB_013e5140;
      local_168 = &LAB_013e5150;
      local_f0 = PTR_LAB_02727708;
      local_e8 = (code *)PTR_FUN_02727710;
      local_e0 = PTR_LAB_02727718;
      local_d8 = PTR_LAB_02727720;
      apuStack_160[0] = &local_f8;
      local_d0[0] = &local_180;
      FUN_01307150(&local_100,lVar3,&local_f0);
      pcVar1 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (undefined *)0x0;
        local_d8 = (undefined *)0x0;
        local_f0 = (undefined *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar1)(local_d0);
      }
      pcVar1 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = (undefined1 *)0x0;
        local_168 = (undefined1 *)0x0;
        local_180 = (undefined1 *)0x0;
        local_178 = (code *)0x0;
        (*pcVar1)(apuStack_160);
      }
      if (local_100 != 0) {
        local_1e0[0] = &local_100;
        local_200 = &LAB_013e5160;
        local_1f8 = FUN_013e5260;
        local_1f0 = &LAB_013e5270;
        local_1e8 = &LAB_013e5280;
        local_d0[0] = &local_200;
        local_f0 = PTR_LAB_02727810;
        local_e8 = (code *)PTR_FUN_02727818;
        local_e0 = PTR_LAB_02727820;
        local_d8 = PTR_LAB_02727828;
        FUN_01306a00(lVar3,&local_f0);
        pcVar1 = local_e8;
        if (local_e8 != (code *)0x0) {
          local_e0 = (undefined *)0x0;
          local_d8 = (undefined *)0x0;
          local_f0 = (undefined *)0x0;
          local_e8 = (code *)0x0;
          (*pcVar1)(local_d0);
        }
        pcVar1 = local_1f8;
        if (local_1f8 != (code *)0x0) {
          local_1f0 = (undefined1 *)0x0;
          local_1e8 = (undefined1 *)0x0;
          local_200 = (undefined1 *)0x0;
          local_1f8 = (code *)0x0;
          (*pcVar1)(local_1e0);
        }
        plVar2 = (long *)(**(code **)(**(long **)(lVar8 + 0xd8) + 0x10))
                                   (*(long **)(lVar8 + 0xd8),0x18,8);
        if (plVar2 == (long *)0x0) {
          (**(code **)(**(long **)(lVar8 + 0xd8) + 0xb8))();
        }
        *plVar2 = 0;
        uVar7 = *(undefined8 *)(lVar8 + 0xd8);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar7;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        plVar2[2] = local_100;
        if (local_100 != 0) {
          (**(code **)(*(long *)(local_100 + 0x48) + 0x10))();
        }
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        plVar2[1] = lVar8 + 0xc0;
        lVar5 = *(long *)(lVar8 + 0xc0);
        *plVar2 = lVar5;
        *(long **)(lVar5 + 8) = plVar2;
        *(long **)(lVar8 + 0xc0) = plVar2;
        *(long *)(lVar8 + 0xd0) = *(long *)(lVar8 + 0xd0) + 1;
        if (local_100 != 0) {
          (**(code **)(*(long *)(local_100 + 0x48) + 0x18))();
          local_100 = 0;
        }
      }
      lVar5 = *(long *)(lVar8 + 0xa0);
    } while (lVar5 != 0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


