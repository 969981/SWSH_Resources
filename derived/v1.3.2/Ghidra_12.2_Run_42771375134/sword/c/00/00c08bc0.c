/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c08bc0; name: FUN_00c08bc0
 */


void FUN_00c08bc0(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_1 + 0x5e0);
  if (lVar10 == 0) {
    return;
  }
  local_68 = 0x7b95b8f1eac5d27f;
  lVar11 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
  if (lVar11 == 0) {
    FUN_0077eb10(lVar10,&local_68,0);
    lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar10 == 0) goto LAB_00c08cbc;
LAB_00c08c54:
    plVar12 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    uVar2 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_btlcup_icon_00_T_icon_entry_00",uVar2,10);
    (**(code **)(*plVar12 + 0x18))(plVar12);
  }
  else {
    plVar12 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    FUN_0077eb10(lVar10,&local_68,lVar11);
    (**(code **)(*plVar12 + 0x18))(plVar12);
    lVar10 = *(long *)(*(long *)(param_1 + 0x5f8) + 0x2e8);
    if (lVar10 != 0) goto LAB_00c08c54;
LAB_00c08cbc:
    uVar2 = FUN_0077d470(0);
    FUN_00ffd6a0(param_1 + 0x100,"pane_L_btlcup_icon_00_T_icon_entry_00",uVar2,10);
  }
  puVar1 = PTR_DAT_02710860;
  lVar11 = param_1 + 0x100;
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00c09478:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar3 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar3 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar3,0x400);
  *(long **)(lVar3 + 8) = plVar12;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x80;
  *(undefined8 *)(lVar3 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95b6f1eac5cf19;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar3);
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c09478;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar4 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar4 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar4,0x400);
  *(long **)(lVar4 + 8) = plVar12;
  *(long *)(lVar4 + 0x10) = lVar4;
  *(undefined8 *)(lVar4 + 0x18) = 0x80;
  *(undefined8 *)(lVar4 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95b5f1eac5cd66;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar4);
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c09478;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar5 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar5 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar5,0x400);
  *(long **)(lVar5 + 8) = plVar12;
  *(long *)(lVar5 + 0x10) = lVar5;
  *(undefined8 *)(lVar5 + 0x18) = 0x80;
  *(undefined8 *)(lVar5 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95b4f1eac5cbb3;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar5);
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c09478;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar6 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar6,0x400);
  *(long **)(lVar6 + 8) = plVar12;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x80;
  *(undefined8 *)(lVar6 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95b3f1eac5ca00;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar6);
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c09478;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar7 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar7 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar7,0x400);
  *(long **)(lVar7 + 8) = plVar12;
  *(long *)(lVar7 + 0x10) = lVar7;
  *(undefined8 *)(lVar7 + 0x18) = 0x80;
  *(undefined8 *)(lVar7 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95baf1eac5d5e5;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar7);
  plVar12 = *(long **)(param_1 + 8);
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00c09478;
  *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar12;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12,0x80,8);
  if (lVar8 == 0) {
    (**(code **)(*plVar12 + 0xb8))(plVar12);
  }
  FUN_0077d050(lVar8,0x400);
  *(long **)(lVar8 + 8) = plVar12;
  *(long *)(lVar8 + 0x10) = lVar8;
  *(undefined8 *)(lVar8 + 0x18) = 0x80;
  *(undefined8 *)(lVar8 + 0x20) = 8;
  *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  local_68 = 0x7b95b9f1eac5d432;
  FUN_0077eb10(*(undefined8 *)(param_1 + 0x5e0),&local_68,lVar8);
  switch(param_2) {
  case 0:
    lVar10 = lVar3;
    break;
  case 1:
    lVar10 = lVar4;
    break;
  case 2:
    lVar10 = lVar3;
    goto LAB_00c09264;
  case 3:
    lVar10 = lVar4;
LAB_00c09264:
    uVar2 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_00_T_button_l_00",uVar2,10);
    uVar2 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_01_T_button_l_00",uVar2,10);
    lVar10 = lVar8;
LAB_00c0930c:
    uVar2 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_02_T_button_l_00",uVar2,10);
    *(byte *)(*(long *)(param_1 + 0x850) + 0x58) = *(byte *)(*(long *)(param_1 + 0x850) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x858) + 0x58) = *(byte *)(*(long *)(param_1 + 0x858) + 0x58) | 1;
    lVar10 = *(long *)(param_1 + 0x860);
    bVar9 = *(byte *)(lVar10 + 0x58) | 1;
LAB_00c093cc:
    *(byte *)(lVar10 + 0x58) = bVar9;
    lVar10 = *(long *)(param_1 + 0x868);
    bVar9 = *(byte *)(lVar10 + 0x58) & 0xfe;
    goto LAB_00c093dc;
  case 4:
    lVar10 = lVar3;
    goto LAB_00c092c4;
  case 5:
    lVar10 = lVar4;
LAB_00c092c4:
    uVar2 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_00_T_button_l_00",uVar2,10);
    uVar2 = FUN_0077d470(lVar5);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_01_T_button_l_00",uVar2,10);
    lVar10 = lVar6;
    goto LAB_00c0930c;
  case 6:
    lVar10 = lVar3;
    goto LAB_00c0935c;
  case 7:
    lVar10 = lVar4;
LAB_00c0935c:
    uVar2 = FUN_0077d470(lVar10);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_00_T_button_l_00",uVar2,10);
    uVar2 = FUN_0077d470(lVar7);
    FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_01_T_button_l_00",uVar2,10);
    *(byte *)(*(long *)(param_1 + 0x850) + 0x58) = *(byte *)(*(long *)(param_1 + 0x850) + 0x58) | 1;
    *(byte *)(*(long *)(param_1 + 0x858) + 0x58) = *(byte *)(*(long *)(param_1 + 0x858) + 0x58) | 1;
    lVar10 = *(long *)(param_1 + 0x860);
    bVar9 = *(byte *)(lVar10 + 0x58) & 0xfe;
    goto LAB_00c093cc;
  default:
    goto switchD_00c09184_default;
  }
  uVar2 = FUN_0077d470(lVar10);
  FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_00_T_button_l_00",uVar2,10);
  uVar2 = FUN_0077d470(lVar5);
  FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_01_T_button_l_00",uVar2,10);
  uVar2 = FUN_0077d470(lVar6);
  FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_02_T_button_l_00",uVar2,10);
  uVar2 = FUN_0077d470(lVar8);
  FUN_00ffd6a0(lVar11,"pane_L_menu_btlcup_button_03_T_button_l_00",uVar2,10);
  *(byte *)(*(long *)(param_1 + 0x850) + 0x58) = *(byte *)(*(long *)(param_1 + 0x850) + 0x58) | 1;
  *(byte *)(*(long *)(param_1 + 0x858) + 0x58) = *(byte *)(*(long *)(param_1 + 0x858) + 0x58) | 1;
  *(byte *)(*(long *)(param_1 + 0x860) + 0x58) = *(byte *)(*(long *)(param_1 + 0x860) + 0x58) | 1;
  lVar10 = *(long *)(param_1 + 0x868);
  bVar9 = *(byte *)(lVar10 + 0x58) | 1;
LAB_00c093dc:
  *(byte *)(lVar10 + 0x58) = bVar9;
switchD_00c09184_default:
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  }
  return;
}


