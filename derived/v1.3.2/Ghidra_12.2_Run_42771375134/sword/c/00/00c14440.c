/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c14440; name: FUN_00c14440
 */


void FUN_00c14440(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long local_1e8;
  undefined *local_1e0;
  code *local_1d8;
  code *local_1d0;
  undefined *local_1c8;
  long local_1c0;
  undefined *local_1b8;
  undefined8 uStack_1b0;
  undefined *local_160;
  code *local_158;
  code *local_150;
  undefined *local_148;
  long local_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined *local_e0;
  code *local_d8;
  code *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined4 local_54;
  
  local_e0 = *(undefined **)(param_1 + 8);
  local_54 = param_2;
  lVar5 = FUN_0166fe50(&local_160,local_e0,&local_54,&local_e0);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x850) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x850) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x850) = 0;
  }
  *(long *)(param_1 + 0x850) = lVar5;
  puVar1 = PTR_DAT_02710860;
  uVar7 = *(ulong *)(lVar5 + 0xf0);
  if (0 < (int)uVar7) {
    uVar9 = 0;
    do {
      local_1e0._0_5_ = (uint5)uVar9;
      uVar10 = *(ulong *)(lVar5 + 0xe8);
      if (uVar10 < uVar7) {
        lVar11 = *(long *)(lVar5 + 0xe0);
        uVar12 = *(undefined8 *)(lVar5 + 0xa0);
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar6 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = uVar12;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
        *(undefined **)(lVar11 + uVar10 * 8) = local_1e0;
        *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
        *(long *)(lVar5 + 0xe8) = *(long *)(lVar5 + 0xe8) + 1;
      }
      else {
        local_e0 = (undefined *)(*(long *)(lVar5 + 0xe0) + uVar10 * 8);
        FUN_008caa00(&local_160,lVar5 + 0xa0,&local_e0,1,&local_1e0);
      }
      lVar5 = *(long *)(param_1 + 0x850);
      uVar7 = *(ulong *)(lVar5 + 0xf0);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar7);
  }
  puVar4 = PTR_LAB_0271bbd0;
  puVar3 = PTR_FUN_0271bbc8;
  puVar2 = PTR_FUN_0271bbc0;
  puVar1 = PTR_LAB_0271bbb8;
  lVar5 = *(long *)(param_1 + 0x848);
  pcVar8 = *(code **)(lVar5 + 0x248);
  puStack_b8 = PTR_LAB_0271bbb0;
  local_b0 = 0;
  local_e0 = PTR_LAB_0271bbb8;
  local_d8 = (code *)PTR_FUN_0271bbc0;
  local_d0 = (code *)PTR_FUN_0271bbc8;
  local_c8 = PTR_LAB_0271bbd0;
  local_c0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_00c145d8:
    (*local_d0)(&local_c0,lVar5 + 0x260);
    *(undefined **)(lVar5 + 600) = local_c8;
    *(code **)(lVar5 + 0x248) = local_d8;
    *(code **)(lVar5 + 0x250) = local_d0;
    *(undefined8 *)(lVar5 + 0x240) = local_e0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 600) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    (*pcVar8)(lVar5 + 0x260);
    if (local_d0 != (code *)0x0) goto LAB_00c145d8;
  }
  lVar5 = *(long *)(param_1 + 0x848);
  pcVar8 = *(code **)(lVar5 + 200);
  local_160 = puVar1;
  local_158 = (code *)puVar2;
  local_138 = PTR_LAB_0271bbd8;
  uStack_130 = 0;
  local_150 = (code *)puVar3;
  local_148 = puVar4;
  local_140 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_00c14650:
    (*local_150)(&local_140,lVar5 + 0xe0);
    *(undefined **)(lVar5 + 0xd8) = local_148;
    *(code **)(lVar5 + 200) = local_158;
    *(code **)(lVar5 + 0xd0) = local_150;
    *(undefined8 *)(lVar5 + 0xc0) = local_160;
  }
  else {
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    (*pcVar8)(lVar5 + 0xe0);
    if (local_150 != (code *)0x0) goto LAB_00c14650;
  }
  lVar5 = *(long *)(param_1 + 0x848);
  pcVar8 = *(code **)(lVar5 + 0x1c8);
  local_1e0 = puVar1;
  local_1d8 = (code *)puVar2;
  local_1b8 = PTR_LAB_0271bbe0;
  uStack_1b0 = 0;
  local_1d0 = (code *)puVar3;
  local_1c8 = puVar4;
  local_1c0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x1d0) = 0;
    *(undefined8 *)(lVar5 + 0x1d8) = 0;
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
    *(undefined8 *)(lVar5 + 0x1c8) = 0;
    (*pcVar8)(lVar5 + 0x1e0);
    if (local_1d0 == (code *)0x0) goto LAB_00c146f0;
  }
  (*local_1d0)(&local_1c0,lVar5 + 0x1e0);
  *(undefined **)(lVar5 + 0x1d8) = local_1c8;
  *(code **)(lVar5 + 0x1c8) = local_1d8;
  *(code **)(lVar5 + 0x1d0) = local_1d0;
  *(undefined8 *)(lVar5 + 0x1c0) = local_1e0;
LAB_00c146f0:
  *(undefined1 *)(lVar5 + 0x7a2) = 0;
  uVar12 = *(undefined8 *)(param_1 + 0x848);
  local_1e8 = *(long *)(param_1 + 0x850);
  if (local_1e8 != 0) {
    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(uVar12,&local_1e8);
  if (local_1e8 != 0) {
    (**(code **)(*(long *)(local_1e8 + 0x48) + 0x18))();
    local_1e8 = 0;
  }
  FUN_016c2ca0(*(undefined8 *)(param_1 + 0x848),0);
  FUN_016c2c80(*(undefined8 *)(param_1 + 0x848),0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x848),0);
  FUN_016bef00(*(undefined8 *)(param_1 + 0x848));
  (**(code **)(**(long **)(param_1 + 0x848) + 0x50))();
  FUN_016b2da0(*(undefined8 *)(param_1 + 0x848),1);
  pcVar8 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (code *)0x0;
    local_1c8 = (undefined *)0x0;
    local_1e0 = (undefined *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar8)(&local_1c0);
  }
  pcVar8 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (code *)0x0;
    local_148 = (undefined *)0x0;
    local_160 = (undefined *)0x0;
    local_158 = (code *)0x0;
    (*pcVar8)(&local_140);
  }
  pcVar8 = local_d8;
  if (local_d8 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined *)0x0;
    local_e0 = (undefined *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar8)(&local_c0);
  }
  return;
}


