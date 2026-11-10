/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebd850; name: FUN_00ebd850
 */


undefined1 FUN_00ebd850(long param_1)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 local_ec;
  long local_e8;
  undefined1 *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined4 *apuStack_c0 [12];
  
  puVar3 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(param_1 + 200) + 0x60))();
  (**(code **)(**(long **)(param_1 + 0xd8) + 0x30))();
  if ((*(long *)(param_1 + 0x770) == 0) || (*(int *)(*(long *)(param_1 + 0x770) + 0x54) == 0)) {
    plVar11 = *(long **)(*(long *)(param_1 + 200) + 0xb8);
    for (plVar10 = *(long **)(*(long *)(param_1 + 200) + 0xb0); plVar10 != plVar11;
        plVar10 = plVar10 + 1) {
      plVar5 = (long *)FUN_00e813b0(*plVar10 + 0x50);
      if ((plVar5 != (long *)0x0) &&
         (uVar6 = (**(code **)(*(long *)*plVar10 + 0x88))(), (uVar6 & 1) == 0)) {
        (**(code **)(*plVar5 + 0x10))(&local_e0,plVar5);
        if (*(long *)(param_1 + 0x770) != 0) {
          (**(code **)(*(long *)(*(long *)(param_1 + 0x770) + 0x48) + 0x18))();
          *(undefined8 *)(param_1 + 0x770) = 0;
        }
        *(undefined1 **)(param_1 + 0x770) = local_e0;
        break;
      }
    }
  }
  FUN_00dbb220(*(undefined8 *)(param_1 + 200));
  FUN_00e1ad80(*(undefined8 *)(param_1 + 0xa8));
  FUN_00f51550(*(undefined8 *)PTR_DAT_0271fc30);
  FUN_00ebc3b0(param_1);
  lVar8 = *(long *)(*(long *)puVar3 + 0x68);
  if (lVar8 == 0) {
    uVar6 = FUN_010198e0(0);
  }
  else {
    plVar10 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    uVar6 = FUN_010198e0(lVar8);
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  if ((uVar6 & 1) == 0) {
    uVar9 = *(undefined8 *)PTR_DAT_027108c8;
    local_e8 = lVar7;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    FUN_01029f10(uVar9,&local_e8,1);
    if (local_e8 != 0) {
      (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
      local_e8 = 0;
    }
  }
  puVar1 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
  for (puVar12 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0); puVar12 != puVar1;
      puVar12 = puVar12 + 1) {
    uVar6 = (**(code **)(*(long *)*puVar12 + 0x88))();
    if ((uVar6 & 1) == 0) {
      (**(code **)(*(long *)*puVar12 + 200))();
    }
  }
  thunk_FUN_00dfa120(*(undefined8 *)(param_1 + 0xb0));
  FUN_00fb9cc0(*(undefined8 *)(param_1 + 0xc0));
  FUN_00fc5560(*(undefined8 *)(param_1 + 0xe0));
  (**(code **)(**(long **)(param_1 + 200) + 0x20))();
  FUN_00fb03d0(*(undefined8 *)PTR_DAT_0271fe18);
  if (*(long *)(param_1 + 0x630) != 0) {
    FUN_016b0450();
    FUN_016acfc0(*(undefined8 *)(param_1 + 0x630));
    FUN_016ad050(*(undefined8 *)(param_1 + 0x630));
    FUN_016ad0b0(*(undefined8 *)(param_1 + 0x630));
  }
  thunk_FUN_00ecc7a0(*(undefined8 *)(param_1 + 0xe8));
  uVar6 = FUN_01052960(*(undefined8 *)(param_1 + 0x100));
  if ((uVar6 & 1) != 0) {
    local_ec = FUN_01052950(*(undefined8 *)(param_1 + 0x100));
    puVar12 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb0);
    puVar1 = *(undefined8 **)(*(long *)(param_1 + 200) + 0xb8);
    if (puVar12 != puVar1) {
      do {
        uVar6 = (**(code **)(*(long *)*puVar12 + 0x88))();
        if ((uVar6 & 1) == 0) {
          plVar11 = (long *)*puVar12;
          plVar10 = (long *)(**(code **)plVar11[10])(plVar11 + 10);
          lVar8 = FUN_0156b190();
          for (; plVar10 != (long *)0x0; plVar10 = (long *)*plVar10) {
            if (plVar10 == (long *)lVar8) {
              local_e0 = &LAB_00ec0840;
              local_c8 = &LAB_00ec0880;
              local_d8 = FUN_00ec0860;
              local_d0 = &LAB_00ec0870;
              apuStack_c0[0] = &local_ec;
              (**(code **)(*plVar11 + 0x100))(plVar11,&local_e0);
              pcVar4 = local_d8;
              if (local_d8 != (code *)0x0) {
                local_d0 = (undefined1 *)0x0;
                local_c8 = (undefined1 *)0x0;
                local_e0 = (undefined1 *)0x0;
                local_d8 = (code *)0x0;
                (*pcVar4)(apuStack_c0);
              }
              break;
            }
          }
        }
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar1);
    }
    lVar8 = *(long *)(*(long *)(param_1 + 0xd8) + 0x108);
    if (lVar8 != 0) {
      puVar12 = *(undefined8 **)(*(long *)(param_1 + 0xd8) + 0x100);
      lVar8 = lVar8 << 3;
      do {
        uVar6 = (**(code **)(*(long *)*puVar12 + 0x40))();
        if ((uVar6 & 1) == 0) {
          local_d0 = &LAB_00ec08c0;
          local_c8 = &LAB_00ec08d0;
          local_e0 = &LAB_00ec0890;
          local_d8 = FUN_00ec08b0;
          apuStack_c0[0] = &local_ec;
          FUN_00dcd4a0(*puVar12,&local_e0);
          pcVar4 = local_d8;
          if (local_d8 != (code *)0x0) {
            local_d0 = (undefined1 *)0x0;
            local_c8 = (undefined1 *)0x0;
            local_e0 = (undefined1 *)0x0;
            local_d8 = (code *)0x0;
            (*pcVar4)(apuStack_c0);
          }
        }
        puVar12 = puVar12 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x8c);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  return uVar2;
}


