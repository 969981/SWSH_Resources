/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014f7aa0; name: FUN_014f7aa0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_014f7aa0(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  undefined1 *local_e0;
  code *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  long local_c0 [12];
  undefined8 local_58;
  
  lVar8 = param_1 + 0x100;
  uVar6 = FUN_00ffdc80(lVar8,"grid_messageWin");
  local_e0 = (undefined1 *)0x0;
  FUN_016b7990(uVar6,&local_e0,1,0);
  if (*(char *)(*(long *)(param_1 + 0x620) + 0x5c) == '\0') {
    pcVar9 = "msg_ui_report_select_02";
  }
  else {
    pcVar9 = "msg_ui_report_select_04";
  }
  FUN_014f7350(param_1,"pane_L_button_00_T_00",pcVar9);
  FUN_014f7350(param_1,"pane_L_button_01_T_00","msg_ui_report_select_03");
  FUN_014f74d0(param_1);
  puVar1 = PTR_DAT_02710848;
  lVar13 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (*(char *)(*(long *)(param_1 + 0x620) + 0x5c) == '\0') {
    FUN_014f7350(param_1,"pane_T_param_01","msg_ui_report_title_01");
    lVar16 = *(long *)(param_1 + 0x610);
    plVar15 = *(long **)(lVar13 + 0x790);
    lVar14 = *(long *)(lVar16 + 0x2e0);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      lVar16 = *(long *)(param_1 + 0x610);
    }
    lVar16 = *(long *)(lVar16 + 0x2f0);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
    }
    lVar10 = *plVar15;
  }
  else {
    FUN_014f7350(param_1,"pane_T_param_01","msg_ui_report_title_06");
    lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1c0);
    if (lVar14 == 0) {
      local_e0 = _DAT_00000068;
    }
    else {
      plVar15 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      local_e0 = *(undefined1 **)(lVar14 + 0x68);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    uVar6 = FUN_01009790(lVar13,&local_e0);
    lVar14 = *(long *)(param_1 + 0x2b0);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar16 = *(long *)(lVar14 + 0x2e0);
    if (lVar16 == 0) {
      FUN_014c9f10(0,0,uVar6);
    }
    else {
      plVar15 = (long *)(lVar16 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_014c9f10(lVar16,0,uVar6);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    local_58 = 0xb51603e29e8da41b;
    lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
    plVar15 = (long *)(param_1 + 0x610);
    if (lVar14 == 0) {
      FUN_0077eb10(uVar6,&local_58,0);
      lVar10 = *plVar15;
      lVar14 = *(long *)(lVar10 + 0x2e0);
    }
    else {
      plVar17 = (long *)(lVar14 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      FUN_0077eb10(uVar6,&local_58,lVar14);
      (**(code **)(*plVar17 + 0x18))(plVar17);
      lVar10 = *plVar15;
      lVar14 = *(long *)(lVar10 + 0x2e0);
    }
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
      lVar10 = *plVar15;
    }
    lVar16 = *(long *)(lVar10 + 0x2f0);
    if (lVar16 != 0) {
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
      lVar10 = *plVar15;
    }
    lVar10 = *(long *)(lVar10 + 0x2e8);
  }
  plVar15 = (long *)(lVar10 + 0x48);
  if (lVar10 != 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  FUN_014c62d0(lVar14,lVar16,lVar10);
  (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))(plVar15);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2f0);
  if (lVar14 == 0) {
    uVar6 = FUN_0077d470(0);
    FUN_00ffd6a0(lVar8,"pane_T_param_05",uVar6,10);
  }
  else {
    plVar15 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    uVar6 = FUN_0077d470(lVar14);
    FUN_00ffd6a0(lVar8,"pane_T_param_05",uVar6,10);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  FUN_014f7350(param_1,"pane_T_param_02","msg_ui_report_title_02");
  FUN_014f7850(param_1);
  lVar13 = *(long *)(*(long *)puVar1 + 0x90);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710798;
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar14 == 0) {
    bVar3 = FUN_01510f00(0,0x711644f9ed6e814d);
  }
  else {
    plVar15 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    bVar3 = FUN_01510f00(lVar14,0x711644f9ed6e814d);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  *(byte *)(*(long *)(param_1 + 0x658) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x658) + 0x58) & 0xfe | bVar3 & 1;
  *(byte *)(*(long *)(param_1 + 0x660) + 0x58) =
       *(byte *)(*(long *)(param_1 + 0x660) + 0x58) & 0xfe | bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    FUN_014f7350(param_1,"pane_T_param_07","msg_ui_report_title_03");
    plVar15 = *(long **)(param_1 + 8);
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar13 + 0x80)) goto LAB_014f88dc;
    *(long **)(lVar13 + *(ulong *)(lVar13 + 0x80) * 8) = plVar15;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + 1;
    lVar14 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
    if (lVar14 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    FUN_0077d050(lVar14,0x28);
    *(long **)(lVar14 + 8) = plVar15;
    *(long *)(lVar14 + 0x10) = lVar14;
    *(undefined8 *)(lVar14 + 0x18) = 0x80;
    *(undefined8 *)(lVar14 + 0x20) = 8;
    *(long *)(lVar13 + 0x80) = *(long *)(lVar13 + 0x80) + -1;
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
    }
    lVar13 = *(long *)(*(long *)puVar1 + 0x1f8);
    if (lVar13 == 0) {
      uVar4 = FUN_01535080(0,0);
    }
    else {
      plVar15 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      uVar4 = FUN_01535080(lVar13,0);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
    FUN_014ca220(*(undefined8 *)(param_1 + 0x608),0,uVar4,3,0,1);
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    local_e0 = (undefined1 *)0x387225c24203a27e;
    lVar13 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
    if (lVar13 == 0) {
      FUN_0077eb10(uVar6,&local_e0,0);
    }
    else {
      plVar15 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar15 + 0x10))(plVar15);
      FUN_0077eb10(uVar6,&local_e0,lVar13);
      (**(code **)(*plVar15 + 0x18))(plVar15);
    }
    lVar13 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    plVar15 = (long *)(lVar13 + 0x48);
    if (lVar13 != 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    FUN_014c62d0(uVar6,lVar14,lVar13);
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))(plVar15);
    uVar6 = FUN_0077d470(lVar14);
    FUN_00ffd6a0(lVar8,"pane_T_param_08",uVar6,10);
    if (lVar14 != 0) {
      (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
    }
  }
  FUN_014f7350(param_1,"pane_T_param_09","msg_ui_report_title_04");
  uVar7 = FUN_014f88e0();
  lVar13 = *(long *)(*(long *)puVar1 + 0x298);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  puVar1 = PTR_DAT_02710860;
  plVar15 = *(long **)(param_1 + 8);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
LAB_014f88dc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar15;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  lVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
  if (lVar16 == 0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_0077d050(lVar16,0x50);
  *(long **)(lVar16 + 8) = plVar15;
  *(long *)(lVar16 + 0x10) = lVar16;
  *(undefined8 *)(lVar16 + 0x18) = 0x80;
  *(undefined8 *)(lVar16 + 0x20) = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    uVar11 = 0xf0243ab80599;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    iVar5 = FUN_01529800(lVar13);
    FUN_014ca220(uVar6,0,iVar5 + 0x76c,4,2,1);
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    iVar5 = FUN_01529810(lVar13);
    FUN_014ca220(uVar6,1,iVar5 + 1,2,2,1);
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    uVar4 = FUN_01529820(lVar13);
    FUN_014ca220(uVar6,2,uVar4,2,2,1);
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    uVar11 = 0xef243ab803e6;
  }
  local_e0 = (undefined1 *)(uVar11 | 0xd9a9000000000000);
  lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar14 == 0) {
    FUN_0077eb10(uVar6,&local_e0,0);
  }
  else {
    plVar15 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0077eb10(uVar6,&local_e0,lVar14);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar6 = *(undefined8 *)(param_1 + 0x608);
  plVar15 = (long *)(lVar14 + 0x48);
  if (lVar14 != 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  FUN_014c62d0(uVar6,lVar16,lVar14);
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))(plVar15);
  uVar6 = FUN_0077d470(lVar16);
  FUN_00ffd6a0(lVar8,"pane_T_param_10",uVar6,10);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  plVar15 = *(long **)(param_1 + 8);
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
  if (0xf < *(ulong *)(lVar14 + 0x80)) goto LAB_014f88dc;
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar15;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  lVar16 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
  if (lVar16 == 0) {
    (**(code **)(*plVar15 + 0xb8))(plVar15);
  }
  FUN_0077d050(lVar16,0x28);
  *(long **)(lVar16 + 8) = plVar15;
  *(long *)(lVar16 + 0x10) = lVar16;
  *(undefined8 *)(lVar16 + 0x18) = 0x80;
  *(undefined8 *)(lVar16 + 0x20) = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  FUN_014c75c0(*(undefined8 *)(param_1 + 0x608));
  if ((uVar7 & 1) == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    uVar7 = 0xa5a8fc1dedd7;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    uVar4 = FUN_01529830(lVar13);
    FUN_014ca220(uVar6,0,uVar4,2,2,1);
    uVar6 = *(undefined8 *)(param_1 + 0x608);
    uVar4 = FUN_01529840(lVar13);
    FUN_014ca220(uVar6,1,uVar4,2,2,1);
    uVar6 = *(undefined8 *)(param_1 + 0x618);
    uVar7 = 0xa7a8fc1df13d;
  }
  local_e0 = (undefined1 *)(uVar7 | 0x3d0c000000000000);
  lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  if (lVar14 == 0) {
    FUN_0077eb10(uVar6,&local_e0,0);
  }
  else {
    plVar15 = (long *)(lVar14 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_0077eb10(uVar6,&local_e0,lVar14);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x610) + 0x2e8);
  uVar6 = *(undefined8 *)(param_1 + 0x608);
  plVar15 = (long *)(lVar14 + 0x48);
  if (lVar14 != 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  FUN_014c62d0(uVar6,lVar16,lVar14);
  (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))(plVar15);
  uVar6 = FUN_0077d470(lVar16);
  FUN_00ffd6a0(lVar8,"pane_T_param_11",uVar6,10);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  *(byte *)(*(long *)(param_1 + 0x630) + 0x58) =
       (*(byte *)(*(long *)(param_1 + 0x630) + 0x58) & 0xfe |
       *(byte *)(*(long *)(param_1 + 0x620) + 0x5c)) ^ 1;
  *(byte *)(*(long *)(param_1 + 0x638) + 0x58) =
       (*(byte *)(*(long *)(param_1 + 0x638) + 0x58) & 0xfe |
       *(byte *)(*(long *)(param_1 + 0x620) + 0x5c)) ^ 1;
  *(byte *)(*(long *)(param_1 + 0x640) + 0x58) = *(byte *)(*(long *)(param_1 + 0x640) + 0x58) | 1;
  *(byte *)(*(long *)(param_1 + 0x648) + 0x58) = *(byte *)(*(long *)(param_1 + 0x648) + 0x58) | 1;
  local_e0 = (undefined1 *)0x4e037850425419da;
  lVar13 = FUN_00ffda40(lVar8,&local_e0);
  pcVar12 = *(code **)(lVar13 + 0x158);
  local_e0 = &LAB_014f9730;
  local_d8 = FUN_014f9790;
  local_d0 = FUN_014f97a0;
  local_c8 = &LAB_014f97b0;
  local_c0[0] = param_1;
  if (pcVar12 == (code *)0x0) {
LAB_014f8860:
    (*local_d0)(local_c0,lVar13 + 0x170);
    *(undefined1 **)(lVar13 + 0x168) = local_c8;
    *(code **)(lVar13 + 0x158) = local_d8;
    *(code **)(lVar13 + 0x160) = local_d0;
    *(undefined8 *)(lVar13 + 0x150) = local_e0;
    pcVar12 = local_d8;
  }
  else {
    *(undefined8 *)(lVar13 + 0x160) = 0;
    *(undefined8 *)(lVar13 + 0x168) = 0;
    *(undefined8 *)(lVar13 + 0x150) = 0;
    *(undefined8 *)(lVar13 + 0x158) = 0;
    (*pcVar12)(lVar13 + 0x170);
    pcVar12 = local_d8;
    if (local_d0 != (code *)0x0) goto LAB_014f8860;
  }
  local_d8 = pcVar12;
  if (pcVar12 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar12)(local_c0);
  }
  local_e0 = (undefined1 *)0x4e03795042541b8d;
  lVar8 = FUN_00ffda40(lVar8,&local_e0);
  FUN_006cf0a0(&local_e0,&DAT_026a80a0);
  puVar2 = local_c8;
  *(undefined1 **)(lVar8 + 0x100) = local_e0;
  *(code **)(lVar8 + 0x108) = local_d8;
  *(code **)(lVar8 + 0x110) = local_d0;
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar8 + 0x118);
  *(undefined1 **)(lVar8 + 0x118) = puVar2;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = (undefined1 *)0x0;
  }
  *(undefined8 *)(lVar8 + 0xf8) = 0x2000000000000;
  FUN_006cf0a0(&local_e0,&DAT_026a80a0);
  puVar2 = local_c8;
  *(undefined1 **)(lVar8 + 0x120) = local_e0;
  *(code **)(lVar8 + 0x128) = local_d8;
  *(code **)(lVar8 + 0x130) = local_d0;
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(lVar8 + 0x138);
  *(undefined1 **)(lVar8 + 0x138) = puVar2;
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
  }
  if (local_c8 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
  }
  pcVar12 = *(code **)(lVar8 + 0x158);
  local_e0 = &LAB_014f97c0;
  local_d8 = FUN_014f9820;
  local_d0 = FUN_014f9830;
  local_c8 = &LAB_014f9840;
  local_c0[0] = param_1;
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar8 + 0x160) = 0;
    *(undefined8 *)(lVar8 + 0x168) = 0;
    *(undefined8 *)(lVar8 + 0x150) = 0;
    *(undefined8 *)(lVar8 + 0x158) = 0;
    (*pcVar12)(lVar8 + 0x170);
    pcVar12 = local_d8;
    if (local_d0 == (code *)0x0) goto joined_r0x014f88d4;
  }
  (*local_d0)(local_c0,lVar8 + 0x170);
  *(undefined1 **)(lVar8 + 0x168) = local_c8;
  *(code **)(lVar8 + 0x158) = local_d8;
  *(code **)(lVar8 + 0x160) = local_d0;
  *(undefined8 *)(lVar8 + 0x150) = local_e0;
  pcVar12 = local_d8;
joined_r0x014f88d4:
  if (pcVar12 != (code *)0x0) {
    local_d0 = (code *)0x0;
    local_c8 = (undefined1 *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_d8 = (code *)0x0;
    (*pcVar12)(local_c0);
  }
  return;
}


