/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b92040; name: FUN_00b92040
 */


void FUN_00b92040(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long local_178;
  undefined *local_170;
  code *local_168;
  code *local_160;
  undefined *local_158;
  long local_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined *local_f0;
  code *local_e8;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined4 local_64;
  undefined4 local_58;
  uint uStack_54;
  
  local_64 = 100;
  local_f0 = *(undefined **)(param_1 + 8);
  lVar6 = FUN_00b935a0(&local_170,local_f0,&local_64,&local_f0);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5d8) = 0;
  }
  *(long *)(param_1 + 0x5d8) = lVar6;
  puVar2 = PTR_DAT_02710860;
  if (*(long *)(param_1 + 0x5e8) != *(long *)(param_1 + 0x5e0)) {
    uVar10 = 0;
    while( true ) {
      local_58 = (undefined4)uVar10;
      uStack_54 = uStack_54 & 0xffffff00;
      uVar1 = *(ulong *)(lVar6 + 0xe8);
      if (uVar1 < *(ulong *)(lVar6 + 0xf0)) {
        lVar11 = *(long *)(lVar6 + 0xe0);
        uVar12 = *(undefined8 *)(lVar6 + 0xa0);
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar12;
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        *(ulong *)(lVar11 + uVar1 * 8) = CONCAT44(uStack_54,local_58);
        *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        *(long *)(lVar6 + 0xe8) = *(long *)(lVar6 + 0xe8) + 1;
      }
      else {
        local_f0 = (undefined *)(*(long *)(lVar6 + 0xe0) + uVar1 * 8);
        FUN_008caa00(&local_170,lVar6 + 0xa0,&local_f0,1,&local_58);
      }
      uVar10 = uVar10 + 1;
      if ((ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 7) <= uVar10) break;
      lVar6 = *(long *)(param_1 + 0x5d8);
    }
  }
  local_f0 = (undefined *)0x801e693dd9658f72;
  plVar8 = (long *)FUN_00ffde30(param_1 + 0x100,&local_f0);
  puVar5 = PTR_LAB_0271b2a0;
  puVar4 = PTR_FUN_0271b298;
  puVar3 = PTR_FUN_0271b290;
  puVar2 = PTR_LAB_0271b288;
  pcVar9 = (code *)plVar8[0x49];
  puStack_c8 = PTR_LAB_0271b280;
  local_c0 = 0;
  local_f0 = PTR_LAB_0271b288;
  local_e8 = (code *)PTR_FUN_0271b290;
  local_e0 = (code *)PTR_FUN_0271b298;
  local_d8 = PTR_LAB_0271b2a0;
  local_d0 = param_1;
  if (pcVar9 == (code *)0x0) {
LAB_00b92214:
    (*local_e0)(&local_d0,plVar8 + 0x4c);
    plVar8[0x4b] = (long)local_d8;
    plVar8[0x49] = (long)local_e8;
    plVar8[0x4a] = (long)local_e0;
    plVar8[0x48] = (long)local_f0;
  }
  else {
    plVar8[0x4a] = 0;
    plVar8[0x4b] = 0;
    plVar8[0x48] = 0;
    plVar8[0x49] = 0;
    (*pcVar9)(plVar8 + 0x4c);
    if (local_e0 != (code *)0x0) goto LAB_00b92214;
  }
  pcVar9 = (code *)plVar8[0x19];
  local_170 = puVar2;
  local_168 = (code *)puVar3;
  local_160 = (code *)puVar4;
  local_158 = puVar5;
  local_148 = PTR_LAB_0271b2a8;
  uStack_140 = 0;
  local_150 = param_1;
  if (pcVar9 != (code *)0x0) {
    plVar8[0x1a] = 0;
    plVar8[0x1b] = 0;
    plVar8[0x18] = 0;
    plVar8[0x19] = 0;
    (*pcVar9)(plVar8 + 0x1c);
    if (local_160 == (code *)0x0) goto LAB_00b922ac;
  }
  (*local_160)(&local_150,plVar8 + 0x1c);
  plVar8[0x1b] = (long)local_158;
  plVar8[0x19] = (long)local_168;
  plVar8[0x1a] = (long)local_160;
  plVar8[0x18] = (long)local_170;
LAB_00b922ac:
  local_178 = *(long *)(param_1 + 0x5d8);
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(plVar8,&local_178);
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  FUN_016c2ca0(plVar8,0);
  FUN_016c2c80(plVar8,0,0);
  FUN_016c2c90(plVar8,0);
  FUN_016bef00(plVar8);
  (**(code **)(*plVar8 + 0x50))(plVar8);
  pcVar9 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = (code *)0x0;
    local_158 = (undefined *)0x0;
    local_170 = (undefined *)0x0;
    local_168 = (code *)0x0;
    (*pcVar9)(&local_150);
  }
  pcVar9 = local_e8;
  if (local_e8 != (code *)0x0) {
    local_e0 = (code *)0x0;
    local_d8 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar9)(&local_d0);
  }
  return;
}


