/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00b92d00; name: FUN_00b92d00
 */


void FUN_00b92d00(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  long local_188;
  undefined *local_180;
  code *local_178;
  code *local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined *local_100;
  code *local_f8;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined4 local_74;
  undefined4 local_70;
  uint uStack_6c;
  
  local_74 = 100;
  local_100 = *(undefined **)(param_1 + 8);
  lVar8 = FUN_00b935a0(&local_180,local_100,&local_74,&local_100);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5d8) = 0;
  }
  *(long *)(param_1 + 0x5d8) = lVar8;
  puVar2 = PTR_DAT_02710860;
  if (*(long *)(param_1 + 0x5e8) != *(long *)(param_1 + 0x5e0)) {
    uVar12 = 0;
    while( true ) {
      local_70 = (undefined4)uVar12;
      uStack_6c = uStack_6c & 0xffffff00;
      uVar1 = *(ulong *)(lVar8 + 0xe8);
      if (uVar1 < *(ulong *)(lVar8 + 0xf0)) {
        lVar13 = *(long *)(lVar8 + 0xe0);
        uVar14 = *(undefined8 *)(lVar8 + 0xa0);
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar2);
        if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar14;
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        *(ulong *)(lVar13 + uVar1 * 8) = CONCAT44(uStack_6c,local_70);
        *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        *(long *)(lVar8 + 0xe8) = *(long *)(lVar8 + 0xe8) + 1;
      }
      else {
        local_100 = (undefined *)(*(long *)(lVar8 + 0xe0) + uVar1 * 8);
        FUN_008caa00(&local_180,lVar8 + 0xa0,&local_100,1,&local_70);
      }
      uVar12 = uVar12 + 1;
      if ((ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 7) <= uVar12) break;
      lVar8 = *(long *)(param_1 + 0x5d8);
    }
  }
  local_100 = (undefined *)0x801e693dd9658f72;
  plVar10 = (long *)FUN_00ffde30(param_1 + 0x100,&local_100);
  iVar6 = FUN_016c0020();
  uVar7 = FUN_016c0010(plVar10);
  puVar5 = PTR_LAB_0271b2a0;
  puVar4 = PTR_FUN_0271b298;
  puVar3 = PTR_FUN_0271b290;
  puVar2 = PTR_LAB_0271b288;
  uVar12 = (ulong)uVar7;
  if (iVar6 == 0) {
    uVar12 = (ulong)(uVar7 - ((ulong)(*(long *)(param_1 + 0x5e8) - *(long *)(param_1 + 0x5e0) >> 7)
                             <= uVar12));
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + -1;
  }
  pcVar11 = (code *)plVar10[0x49];
  puStack_d8 = PTR_LAB_0271b280;
  local_d0 = 0;
  local_100 = PTR_LAB_0271b288;
  local_f8 = (code *)PTR_FUN_0271b290;
  local_f0 = (code *)PTR_FUN_0271b298;
  local_e8 = PTR_LAB_0271b2a0;
  local_e0 = param_1;
  if (pcVar11 == (code *)0x0) {
LAB_00b92f0c:
    (*local_f0)(&local_e0,plVar10 + 0x4c);
    plVar10[0x4b] = (long)local_e8;
    plVar10[0x49] = (long)local_f8;
    plVar10[0x4a] = (long)local_f0;
    plVar10[0x48] = (long)local_100;
  }
  else {
    plVar10[0x4a] = 0;
    plVar10[0x4b] = 0;
    plVar10[0x48] = 0;
    plVar10[0x49] = 0;
    (*pcVar11)(plVar10 + 0x4c);
    if (local_f0 != (code *)0x0) goto LAB_00b92f0c;
  }
  pcVar11 = (code *)plVar10[0x19];
  local_180 = puVar2;
  local_178 = (code *)puVar3;
  local_170 = (code *)puVar4;
  local_168 = puVar5;
  local_158 = PTR_LAB_0271b2a8;
  uStack_150 = 0;
  local_160 = param_1;
  if (pcVar11 != (code *)0x0) {
    plVar10[0x1a] = 0;
    plVar10[0x1b] = 0;
    plVar10[0x18] = 0;
    plVar10[0x19] = 0;
    (*pcVar11)(plVar10 + 0x1c);
    if (local_170 == (code *)0x0) goto LAB_00b92fa8;
  }
  (*local_170)(&local_160,plVar10 + 0x1c);
  plVar10[0x1b] = (long)local_168;
  plVar10[0x19] = (long)local_178;
  plVar10[0x1a] = (long)local_170;
  plVar10[0x18] = (long)local_180;
LAB_00b92fa8:
  local_188 = *(long *)(param_1 + 0x5d8);
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(plVar10,&local_188);
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
  FUN_016c2ca0(plVar10,1);
  FUN_016c2c80(plVar10,uVar12,1);
  FUN_016c2c90(plVar10,iVar6);
  FUN_016bef00(plVar10);
  (**(code **)(*plVar10 + 0x50))(plVar10);
  pcVar11 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined *)0x0;
    local_180 = (undefined *)0x0;
    local_178 = (code *)0x0;
    (*pcVar11)(&local_160);
  }
  pcVar11 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar11)(&local_e0);
  }
  return;
}


