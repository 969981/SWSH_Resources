/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ceba00; name: FUN_00ceba00
 */


void FUN_00ceba00(long param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  long alStack_1b0 [12];
  undefined1 *local_150;
  code *local_148;
  code *local_140;
  undefined1 *local_138;
  long alStack_130 [12];
  undefined1 *local_d0;
  code *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  long alStack_b0 [12];
  
  local_d0 = (undefined1 *)0x970ffa262cc5f8b1;
  uVar3 = FUN_00ffde30(param_1 + 0x100,&local_d0);
  *(undefined8 *)(param_1 + 0x5e8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_00cead20(*(undefined8 *)(param_1 + 0x5d8));
  local_150 = (undefined1 *)CONCAT62(local_150._2_6_,uVar2);
  local_d0 = *(undefined1 **)(param_1 + 8);
  lVar4 = FUN_00cec520(&local_1d0,uVar3,&local_150,&local_d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  *(long *)(param_1 + 0x5f0) = lVar4;
  puVar1 = PTR_DAT_02710860;
  uVar6 = *(ulong *)(lVar4 + 0xf0);
  if ((int)uVar6 != 0) {
    uVar8 = 0;
    do {
      local_1d0._0_5_ = (uint5)uVar8;
      uVar9 = *(ulong *)(lVar4 + 0xe8);
      if (uVar9 < uVar6) {
        lVar10 = *(long *)(lVar4 + 0xe0);
        uVar3 = *(undefined8 *)(lVar4 + 0xa0);
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = uVar3;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
        *(undefined1 **)(lVar10 + uVar9 * 8) = local_1d0;
        *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
        *(long *)(lVar4 + 0xe8) = *(long *)(lVar4 + 0xe8) + 1;
      }
      else {
        local_d0 = (undefined1 *)(*(long *)(lVar4 + 0xe0) + uVar9 * 8);
        FUN_008caa00(&local_150,lVar4 + 0xa0,&local_d0,1,&local_1d0);
      }
      lVar4 = *(long *)(param_1 + 0x5f0);
      uVar6 = *(ulong *)(lVar4 + 0xf0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)uVar6);
  }
  lVar4 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar4 + 0x1c8);
  local_d0 = &LAB_00cec6f0;
  local_c8 = FUN_00cec830;
  local_b8 = &LAB_00cec850;
  local_c0 = FUN_00cec840;
  alStack_b0[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00cebbb0:
    (*local_c0)(alStack_b0,lVar4 + 0x1e0);
    *(undefined1 **)(lVar4 + 0x1d8) = local_b8;
    *(code **)(lVar4 + 0x1c8) = local_c8;
    *(code **)(lVar4 + 0x1d0) = local_c0;
    *(undefined8 *)(lVar4 + 0x1c0) = local_d0;
  }
  else {
    *(undefined8 *)(lVar4 + 0x1d0) = 0;
    *(undefined8 *)(lVar4 + 0x1d8) = 0;
    *(undefined8 *)(lVar4 + 0x1c0) = 0;
    *(undefined8 *)(lVar4 + 0x1c8) = 0;
    (*pcVar7)(lVar4 + 0x1e0);
    if (local_c0 != (code *)0x0) goto LAB_00cebbb0;
  }
  *(undefined1 *)(lVar4 + 0x7a2) = 0;
  lVar4 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar4 + 0x248);
  local_150 = &LAB_00cec860;
  local_148 = FUN_00cec8a0;
  local_140 = FUN_00cec8b0;
  local_138 = &LAB_00cec8c0;
  alStack_130[0] = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00cebc3c:
    (*local_140)(alStack_130,lVar4 + 0x260);
    *(undefined1 **)(lVar4 + 600) = local_138;
    *(code **)(lVar4 + 0x248) = local_148;
    *(code **)(lVar4 + 0x250) = local_140;
    *(undefined8 *)(lVar4 + 0x240) = local_150;
  }
  else {
    *(undefined8 *)(lVar4 + 0x250) = 0;
    *(undefined8 *)(lVar4 + 600) = 0;
    *(undefined8 *)(lVar4 + 0x240) = 0;
    *(undefined8 *)(lVar4 + 0x248) = 0;
    (*pcVar7)(lVar4 + 0x260);
    if (local_140 != (code *)0x0) goto LAB_00cebc3c;
  }
  lVar4 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar4 + 200);
  local_1d0 = &LAB_00cec8d0;
  local_1c8 = FUN_00cecaa0;
  local_1b8 = &LAB_00cecac0;
  local_1c0 = FUN_00cecab0;
  alStack_1b0[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined8 *)(lVar4 + 0xd8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    (*pcVar7)(lVar4 + 0xe0);
    if (local_1c0 == (code *)0x0) goto LAB_00cebcf4;
  }
  (*local_1c0)(alStack_1b0,lVar4 + 0xe0);
  *(undefined1 **)(lVar4 + 0xd8) = local_1b8;
  *(code **)(lVar4 + 200) = local_1c8;
  *(code **)(lVar4 + 0xd0) = local_1c0;
  *(undefined8 *)(lVar4 + 0xc0) = local_1d0;
LAB_00cebcf4:
  pcVar7 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    local_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar7)(alStack_1b0);
  }
  pcVar7 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar7)(alStack_130);
  }
  pcVar7 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar7)(alStack_b0);
  }
  return;
}


