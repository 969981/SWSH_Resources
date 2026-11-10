/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0132a650; name: FUN_0132a650
 */


void FUN_0132a650(long *param_1,undefined8 *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long local_1d8 [9];
  undefined1 *local_190;
  code *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  long **local_168;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long *local_b0 [12];
  long *local_48;
  
  lVar8 = *param_3;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_110 = *param_2;
  uStack_108 = param_2[1];
  local_100 = param_2[2];
  uStack_f8 = param_2[3];
  local_f0 = param_2[4];
  uStack_e8 = param_2[5];
  local_e0 = param_2[6];
  uStack_d8 = param_2[7];
  local_1d8[0] = 0;
  local_1d8[7] = 0;
  local_1d8[8] = 0;
  local_1d8[5] = 0;
  local_1d8[6] = 0;
  local_1d8[3] = 0;
  local_1d8[4] = 0;
  local_48 = local_1d8;
  local_170 = &local_110;
  local_168 = &local_48;
  local_190 = &LAB_0132b280;
  local_188 = FUN_0132b380;
  local_180 = &LAB_0132b470;
  local_178 = &LAB_0132b480;
  local_b0[0] = local_1d8 + 9;
  local_1d8[1] = 0;
  local_1d8[2] = 0;
  local_d0 = PTR_LAB_02727728;
  local_c8 = (code *)PTR_FUN_02727730;
  local_c0 = PTR_LAB_02727738;
  local_b8 = PTR_LAB_02727740;
  FUN_01306a00(lVar8,&local_d0);
  pcVar3 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (undefined *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar3)(local_b0);
  }
  pcVar3 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = (undefined1 *)0x0;
    local_178 = (undefined1 *)0x0;
    local_190 = (undefined1 *)0x0;
    local_188 = (code *)0x0;
    (*pcVar3)(&local_170);
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  plVar10 = local_1d8;
  param_1[4] = 0;
  puVar2 = PTR_DAT_02715080;
  puVar1 = PTR_DAT_02715078;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  do {
    plVar7 = param_1;
    if ((*plVar10 != 0) && (*(int *)(*plVar10 + 0x54) != 0)) {
      if ((*plVar10 == 0) ||
         (puVar9 = *(undefined8 **)(*plVar10 + 0x60), puVar9 == (undefined8 *)0x0)) {
        lVar8 = FUN_00d3fd50(0,&local_d0);
      }
      else {
        plVar6 = (long *)(**(code **)*puVar9)(puVar9);
        if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
          uVar5 = FUN_00a87090();
          *(undefined8 *)puVar2 = uVar5;
          __cxa_guard_release(puVar1);
        }
        for (; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
          if (plVar6 == (long *)puVar2) {
            lVar8 = FUN_00d3fd50(puVar9 + -10,&local_d0);
            goto joined_r0x0132a7e8;
          }
        }
        lVar8 = FUN_00d3fd50(0,&local_d0);
      }
joined_r0x0132a7e8:
      if (lVar8 != 0) {
        plVar7 = param_1 + 1;
        *param_1 = lVar8;
      }
    }
    plVar10 = plVar10 + 1;
    param_1 = plVar7;
    if (plVar10 == local_1d8 + 9) {
      if (local_1d8[8] != 0) {
        (**(code **)(*(long *)(local_1d8[8] + 0x48) + 0x18))();
        local_1d8[8] = 0;
      }
      if (local_1d8[7] != 0) {
        (**(code **)(*(long *)(local_1d8[7] + 0x48) + 0x18))();
        local_1d8[7] = 0;
      }
      if (local_1d8[6] != 0) {
        (**(code **)(*(long *)(local_1d8[6] + 0x48) + 0x18))();
        local_1d8[6] = 0;
      }
      if (local_1d8[5] != 0) {
        (**(code **)(*(long *)(local_1d8[5] + 0x48) + 0x18))();
        local_1d8[5] = 0;
      }
      if (local_1d8[4] != 0) {
        (**(code **)(*(long *)(local_1d8[4] + 0x48) + 0x18))();
        local_1d8[4] = 0;
      }
      if (local_1d8[3] != 0) {
        (**(code **)(*(long *)(local_1d8[3] + 0x48) + 0x18))();
        local_1d8[3] = 0;
      }
      if (local_1d8[2] != 0) {
        (**(code **)(*(long *)(local_1d8[2] + 0x48) + 0x18))();
        local_1d8[2] = 0;
      }
      if (local_1d8[1] != 0) {
        (**(code **)(*(long *)(local_1d8[1] + 0x48) + 0x18))();
        local_1d8[1] = 0;
      }
      if (local_1d8[0] != 0) {
        (**(code **)(*(long *)(local_1d8[0] + 0x48) + 0x18))();
      }
      return;
    }
  } while( true );
}


