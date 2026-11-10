/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008c4490; name: FUN_008c4490
 */


void FUN_008c4490(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
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
  
  local_d0 = *(undefined1 **)(param_1 + 8);
  local_150 = (undefined1 *)CONCAT44(local_150._4_4_,7);
  lVar2 = FUN_008ca010(&local_1d0,local_d0,&local_150,&local_d0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5d8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5d8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5d8) = 0;
  }
  *(long *)(param_1 + 0x5d8) = lVar2;
  puVar1 = PTR_DAT_02710860;
  uVar4 = *(ulong *)(lVar2 + 0xf0);
  if ((int)uVar4 != 0) {
    uVar6 = 0;
    do {
      local_1d0._0_5_ = (uint5)uVar6;
      uVar7 = *(ulong *)(lVar2 + 0xe8);
      if (uVar7 < uVar4) {
        lVar8 = *(long *)(lVar2 + 0xe0);
        uVar9 = *(undefined8 *)(lVar2 + 0xa0);
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
        if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = uVar9;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
        *(undefined1 **)(lVar8 + uVar7 * 8) = local_1d0;
        *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
        *(long *)(lVar2 + 0xe8) = *(long *)(lVar2 + 0xe8) + 1;
      }
      else {
        local_d0 = (undefined1 *)(*(long *)(lVar2 + 0xe0) + uVar7 * 8);
        FUN_008caa00(&local_150,lVar2 + 0xa0,&local_d0,1,&local_1d0);
      }
      lVar2 = *(long *)(param_1 + 0x5d8);
      uVar4 = *(ulong *)(lVar2 + 0xf0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)uVar4);
  }
  local_d0 = (undefined1 *)0x970ffa262cc5f8b1;
  uVar9 = FUN_00ffde30(param_1 + 0x100,&local_d0);
  *(undefined8 *)(param_1 + 0x5e8) = uVar9;
  FUN_016c2c80(uVar9,0,0);
  FUN_016c2c90(*(undefined8 *)(param_1 + 0x5e8),0);
  lVar2 = *(long *)(param_1 + 0x5e8);
  pcVar5 = *(code **)(lVar2 + 0x1c8);
  local_d0 = &LAB_008cabe0;
  local_c8 = FUN_008cbb60;
  local_b8 = &LAB_008cbb80;
  local_c0 = FUN_008cbb70;
  alStack_b0[0] = param_1;
  if (pcVar5 == (code *)0x0) {
LAB_008c4650:
    (*local_c0)(alStack_b0,lVar2 + 0x1e0);
    *(undefined1 **)(lVar2 + 0x1d8) = local_b8;
    *(code **)(lVar2 + 0x1c8) = local_c8;
    *(code **)(lVar2 + 0x1d0) = local_c0;
    *(undefined8 *)(lVar2 + 0x1c0) = local_d0;
  }
  else {
    *(undefined8 *)(lVar2 + 0x1d0) = 0;
    *(undefined8 *)(lVar2 + 0x1d8) = 0;
    *(undefined8 *)(lVar2 + 0x1c0) = 0;
    *(undefined8 *)(lVar2 + 0x1c8) = 0;
    (*pcVar5)(lVar2 + 0x1e0);
    if (local_c0 != (code *)0x0) goto LAB_008c4650;
  }
  *(undefined1 *)(lVar2 + 0x7a2) = 1;
  lVar2 = *(long *)(param_1 + 0x5e8);
  pcVar5 = *(code **)(lVar2 + 0x248);
  local_150 = &LAB_008cbb90;
  local_148 = FUN_008cbbb0;
  local_138 = &LAB_008cbbd0;
  local_140 = FUN_008cbbc0;
  alStack_130[0] = param_1;
  if (pcVar5 == (code *)0x0) {
LAB_008c46dc:
    (*local_140)(alStack_130,lVar2 + 0x260);
    *(undefined1 **)(lVar2 + 600) = local_138;
    *(code **)(lVar2 + 0x248) = local_148;
    *(code **)(lVar2 + 0x250) = local_140;
    *(undefined8 *)(lVar2 + 0x240) = local_150;
  }
  else {
    *(undefined8 *)(lVar2 + 0x250) = 0;
    *(undefined8 *)(lVar2 + 600) = 0;
    *(undefined8 *)(lVar2 + 0x240) = 0;
    *(undefined8 *)(lVar2 + 0x248) = 0;
    (*pcVar5)(lVar2 + 0x260);
    if (local_140 != (code *)0x0) goto LAB_008c46dc;
  }
  lVar2 = *(long *)(param_1 + 0x5e8);
  pcVar5 = *(code **)(lVar2 + 200);
  local_1d0 = &LAB_008cbbe0;
  local_1c8 = FUN_008cc630;
  local_1b8 = &LAB_008cc650;
  local_1c0 = FUN_008cc640;
  alStack_1b0[0] = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar2 + 0xd0) = 0;
    *(undefined8 *)(lVar2 + 0xd8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    (*pcVar5)(lVar2 + 0xe0);
    if (local_1c0 == (code *)0x0) goto LAB_008c4794;
  }
  (*local_1c0)(alStack_1b0,lVar2 + 0xe0);
  *(undefined1 **)(lVar2 + 0xd8) = local_1b8;
  *(code **)(lVar2 + 200) = local_1c8;
  *(code **)(lVar2 + 0xd0) = local_1c0;
  *(undefined8 *)(lVar2 + 0xc0) = local_1d0;
LAB_008c4794:
  FUN_016c00b0(*(undefined8 *)(param_1 + 0x5e8),1,5);
  FUN_016c3330(*(undefined8 *)(param_1 + 0x5e8),0x40,0x80);
  pcVar5 = local_1c8;
  if (local_1c8 != (code *)0x0) {
    local_1c0 = (code *)0x0;
    local_1b8 = (undefined1 *)0x0;
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (code *)0x0;
    (*pcVar5)(alStack_1b0);
  }
  pcVar5 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined1 *)0x0;
    local_150 = (undefined1 *)0x0;
    local_148 = (code *)0x0;
    (*pcVar5)(alStack_130);
  }
  pcVar5 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined1 *)0x0;
    local_d0 = (undefined1 *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar5)(alStack_b0);
  }
  return;
}


