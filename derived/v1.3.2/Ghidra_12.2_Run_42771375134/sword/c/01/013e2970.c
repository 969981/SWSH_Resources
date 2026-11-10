/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013e2970; name: FUN_013e2970
 */


void FUN_013e2970(long param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  long local_260;
  undefined **ppuStack_258;
  long local_1f8;
  long local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [96];
  long local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long *local_d0 [12];
  undefined1 auStack_70 [16];
  
  lVar7 = *(long *)(param_1 + 0x60);
  plVar2 = (long *)(*(code *)**(undefined8 **)(lVar7 + 0x50))((undefined8 *)(lVar7 + 0x50));
  lVar3 = FUN_0132d9a0();
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (plVar2 == (long *)lVar3) {
      lVar3 = *(long *)(lVar7 + 0x358);
      goto joined_r0x013e2da0;
    }
  }
  lVar7 = 0;
  lVar3 = lRam0000000000000358;
joined_r0x013e2da0:
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar8 = *(long *)(param_1 + 0x220);
  if (*(long *)(lVar8 + 0x40) != 0) {
    do {
      local_d0[0] = &local_170;
      local_160 = 0;
      uStack_158 = 0;
      local_170 = 0;
      local_168 = (code *)0x0;
      local_f0 = PTR_LAB_027293f8;
      local_e8 = (code *)PTR_FUN_02729400;
      local_e0 = PTR_LAB_02729408;
      local_d8 = PTR_LAB_02729410;
      lVar4 = FUN_01307550(lVar3,&local_f0);
      pcVar1 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (undefined *)0x0;
        local_d8 = (undefined *)0x0;
        local_f0 = (undefined *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar1)(local_d0);
      }
      local_d0[0] = &local_1f0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = (code *)0x0;
      local_f0 = PTR_LAB_02729418;
      local_e8 = (code *)PTR_FUN_02729420;
      local_e0 = PTR_LAB_02729428;
      local_d8 = PTR_LAB_02729430;
      lVar5 = FUN_01307720(lVar3,&local_f0);
      pcVar1 = local_e8;
      if (local_e8 != (code *)0x0) {
        local_e0 = (undefined *)0x0;
        local_d8 = (undefined *)0x0;
        local_f0 = (undefined *)0x0;
        local_e8 = (code *)0x0;
        (*pcVar1)(local_d0);
      }
      pcVar1 = local_1e8;
      if (local_1e8 != (code *)0x0) {
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1f0 = 0;
        local_1e8 = (code *)0x0;
        (*pcVar1)(auStack_1d0);
      }
      pcVar1 = local_168;
      if (local_168 != (code *)0x0) {
        local_160 = 0;
        uStack_158 = 0;
        local_170 = 0;
        local_168 = (code *)0x0;
        (*pcVar1)(auStack_150);
      }
      if (((3 < (ulong)(lVar5 + lVar4)) || (uVar6 = FUN_012c91f0(2,4), (uVar6 & 1) == 0)) ||
         (uVar6 = FUN_012c91f0(5,0xd), (uVar6 & 1) == 0)) break;
      uVar6 = *(ulong *)(lVar8 + 0x38);
      uVar9 = *(undefined8 *)
               (*(long *)((long)*(undefined8 **)(lVar8 + 8) + (uVar6 >> 6 & 0x3fffffffffffff8)) +
               (uVar6 & 0x1ff) * 8);
      *(ulong *)(lVar8 + 0x38) = uVar6 + 1;
      *(long *)(lVar8 + 0x40) = *(long *)(lVar8 + 0x40) + -1;
      if (0x3ff < uVar6 + 1) {
        (**(code **)(**(long **)(lVar8 + 0x48) + 0x18))
                  (*(long **)(lVar8 + 0x48),**(undefined8 **)(lVar8 + 8),0x1000,8);
        *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 8;
        *(long *)(lVar8 + 0x38) = *(long *)(lVar8 + 0x38) + -0x200;
      }
      lVar4 = *(long *)(lVar7 + 0x3d8);
      if (lVar4 == 0) {
        auVar10 = FUN_0136e0f0(0,uVar9);
        lVar4 = *(long *)(lVar7 + 0x3d8);
        if (lVar4 == 0) goto LAB_013e2c48;
LAB_013e2bf0:
        plVar2 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        lVar4 = FUN_0136e0b0(lVar4,uVar9);
        (**(code **)(*plVar2 + 0x18))(plVar2);
      }
      else {
        plVar2 = (long *)(lVar4 + 0x48);
        (**(code **)(*plVar2 + 0x10))(plVar2);
        auVar10 = FUN_0136e0f0(lVar4,uVar9);
        (**(code **)(*plVar2 + 0x18))(plVar2);
        lVar4 = *(long *)(lVar7 + 0x3d8);
        if (lVar4 != 0) goto LAB_013e2bf0;
LAB_013e2c48:
        lVar4 = FUN_0136e0b0(0,uVar9);
      }
      if (lVar4 != 0) {
        FUN_013e2db0(&local_f0,param_1,auVar10._0_8_,auVar10._8_8_,lVar4);
        uVar9 = FUN_012d5170(local_f0,auStack_70);
        lVar4 = *(long *)(lVar7 + 0x620);
        if (lVar4 == 0) {
          FUN_0132bff0(0,uVar9);
        }
        else {
          plVar2 = (long *)(lVar4 + 0x48);
          (**(code **)(*plVar2 + 0x10))(plVar2);
          FUN_0132bff0(lVar4,uVar9);
          (**(code **)(*plVar2 + 0x18))(plVar2);
        }
        ppuStack_258 = &local_f0;
        local_280 = &LAB_013e4b70;
        local_278 = FUN_013e4c90;
        local_270 = &LAB_013e50a0;
        local_268 = &LAB_013e50b0;
        local_260 = param_1;
        FUN_01309760(&local_1f8,uVar9,&local_280);
        if (local_1f8 != 0) {
          (**(code **)(*(long *)(local_1f8 + 0x48) + 0x18))();
          local_1f8 = 0;
        }
        pcVar1 = local_278;
        if (local_278 != (code *)0x0) {
          local_270 = (undefined1 *)0x0;
          local_268 = (undefined1 *)0x0;
          local_280 = (undefined1 *)0x0;
          local_278 = (code *)0x0;
          (*pcVar1)(&local_260);
        }
        if (local_f0 != (undefined *)0x0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
          local_f0 = (undefined *)0x0;
        }
      }
    } while (*(long *)(lVar8 + 0x40) != 0);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


