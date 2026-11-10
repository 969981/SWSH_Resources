/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013ad050; name: FUN_013ad050
 */


void FUN_013ad050(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined1 *local_150;
  code *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  long local_130;
  undefined8 *puStack_128;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined1 *local_b0 [12];
  undefined8 local_48;
  
  puVar1 = PTR_DAT_02710848;
  lVar7 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(lVar7 + 0x58);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  uVar4 = FUN_00884820(*(undefined8 *)(param_2 + 0x78));
  uVar5 = FUN_00884820(lVar9);
  if (uVar4 < uVar5) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(param_2 + 0x64c) != 6;
  }
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  if ((bVar3) && (*(uint *)(param_2 + 0x64c) < 6)) {
    if ((*(long *)(param_2 + 0x68) != 0) &&
       (puVar8 = *(undefined8 **)(*(long *)(param_2 + 0x68) + 0x60), puVar8 != (undefined8 *)0x0)) {
      plVar6 = (long *)(**(code **)*puVar8)(puVar8);
      lVar7 = FUN_0132d9a0();
      for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
        if (plVar6 == (long *)lVar7) {
          puVar8 = puVar8 + -10;
          lVar7 = *(long *)(*(long *)puVar1 + 0x90);
          goto joined_r0x013ad2d4;
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
    lVar7 = *(long *)(*(long *)puVar1 + 0x90);
joined_r0x013ad2d4:
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
    }
    plVar6 = *(long **)(lVar7 + 0x58);
    if (plVar6 != (long *)0x0) {
      (**(code **)(plVar6[9] + 0x10))();
    }
    local_48 = (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined4 *)(param_2 + 0x64c));
    lVar9 = puVar8[0x6b];
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    local_150 = &LAB_013ad900;
    local_148 = FUN_013ada90;
    local_140 = &LAB_013adaa0;
    puStack_128 = &local_48;
    local_138 = &LAB_013adab0;
    local_d0 = PTR_LAB_027277e8;
    local_c8 = (code *)PTR_FUN_027277f0;
    local_c0 = PTR_LAB_027277f8;
    local_b8 = PTR_LAB_02727800;
    local_130 = param_2;
    local_b0[0] = (undefined1 *)&local_150;
    FUN_01307150(param_1,lVar9,&local_d0);
    pcVar2 = local_c8;
    if (local_c8 != (code *)0x0) {
      local_c0 = (undefined *)0x0;
      local_b8 = (undefined *)0x0;
      local_d0 = (undefined *)0x0;
      local_c8 = (code *)0x0;
      (*pcVar2)(local_b0);
    }
    pcVar2 = local_148;
    if (local_148 != (code *)0x0) {
      local_140 = (undefined1 *)0x0;
      local_138 = (undefined1 *)0x0;
      local_150 = (undefined1 *)0x0;
      local_148 = (code *)0x0;
      (*pcVar2)(&local_130);
    }
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
    }
    (**(code **)(plVar6[9] + 0x18))(plVar6 + 9);
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  else {
    *param_1 = 0;
  }
  return;
}


