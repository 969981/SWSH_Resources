/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c028c0; name: FUN_00c028c0
 */


/* WARNING: Removing unreachable block (ram,0x00c04a98) */
/* WARNING: Removing unreachable block (ram,0x00c04a9c) */
/* WARNING: Removing unreachable block (ram,0x00c03324) */
/* WARNING: Removing unreachable block (ram,0x00c03328) */
/* WARNING: Removing unreachable block (ram,0x00c03680) */
/* WARNING: Removing unreachable block (ram,0x00c03684) */
/* WARNING: Removing unreachable block (ram,0x00c03598) */
/* WARNING: Removing unreachable block (ram,0x00c0359c) */
/* WARNING: Removing unreachable block (ram,0x00c0360c) */
/* WARNING: Removing unreachable block (ram,0x00c03610) */
/* WARNING: Removing unreachable block (ram,0x00c038d8) */
/* WARNING: Removing unreachable block (ram,0x00c038dc) */
/* WARNING: Removing unreachable block (ram,0x00c0394c) */
/* WARNING: Removing unreachable block (ram,0x00c03950) */
/* WARNING: Removing unreachable block (ram,0x00c03bd0) */
/* WARNING: Removing unreachable block (ram,0x00c03bd4) */
/* WARNING: Removing unreachable block (ram,0x00c04158) */
/* WARNING: Removing unreachable block (ram,0x00c0415c) */
/* WARNING: Removing unreachable block (ram,0x00c04574) */
/* WARNING: Removing unreachable block (ram,0x00c04578) */
/* WARNING: Removing unreachable block (ram,0x00c045e8) */
/* WARNING: Removing unreachable block (ram,0x00c045ec) */
/* WARNING: Removing unreachable block (ram,0x00c047d8) */
/* WARNING: Removing unreachable block (ram,0x00c047dc) */
/* WARNING: Removing unreachable block (ram,0x00c049e0) */
/* WARNING: Removing unreachable block (ram,0x00c049e4) */
/* WARNING: Removing unreachable block (ram,0x00c048f8) */
/* WARNING: Removing unreachable block (ram,0x00c048fc) */
/* WARNING: Removing unreachable block (ram,0x00c0496c) */
/* WARNING: Removing unreachable block (ram,0x00c04970) */
/* WARNING: Removing unreachable block (ram,0x00c04728) */
/* WARNING: Removing unreachable block (ram,0x00c0472c) */
/* WARNING: Removing unreachable block (ram,0x00c046b4) */
/* WARNING: Removing unreachable block (ram,0x00c046b8) */
/* WARNING: Removing unreachable block (ram,0x00c044a8) */
/* WARNING: Removing unreachable block (ram,0x00c044ac) */
/* WARNING: Removing unreachable block (ram,0x00c03e98) */
/* WARNING: Removing unreachable block (ram,0x00c03e9c) */
/* WARNING: Removing unreachable block (ram,0x00c03b2c) */
/* WARNING: Removing unreachable block (ram,0x00c03b30) */
/* WARNING: Removing unreachable block (ram,0x00c03a6c) */
/* WARNING: Removing unreachable block (ram,0x00c03a70) */
/* WARNING: Removing unreachable block (ram,0x00c039f8) */
/* WARNING: Removing unreachable block (ram,0x00c039fc) */
/* WARNING: Removing unreachable block (ram,0x00c037ac) */
/* WARNING: Removing unreachable block (ram,0x00c037b0) */
/* WARNING: Removing unreachable block (ram,0x00c03738) */
/* WARNING: Removing unreachable block (ram,0x00c0373c) */
/* WARNING: Removing unreachable block (ram,0x00c03820) */
/* WARNING: Removing unreachable block (ram,0x00c03824) */
/* WARNING: Removing unreachable block (ram,0x00c0346c) */
/* WARNING: Removing unreachable block (ram,0x00c03470) */
/* WARNING: Removing unreachable block (ram,0x00c033f8) */
/* WARNING: Removing unreachable block (ram,0x00c033fc) */
/* WARNING: Removing unreachable block (ram,0x00c034e0) */
/* WARNING: Removing unreachable block (ram,0x00c034e4) */
/* WARNING: Removing unreachable block (ram,0x00c04b0c) */
/* WARNING: Removing unreachable block (ram,0x00c04b10) */
/* WARNING: Removing unreachable block (ram,0x00c0484c) */
/* WARNING: Removing unreachable block (ram,0x00c04850) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c028c0(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  code *pcVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  byte *pbVar12;
  long local_70;
  long local_68;
  undefined **local_60;
  long lStack_58;
  undefined **local_50;
  long lStack_48;
  undefined ***local_40;
  ulong local_38;
  
  FUN_00beba00(param_1 + 0x700);
  lStack_58 = param_1;
  lStack_48 = param_1;
  switch(param_2) {
  case 0:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (4 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_top_win_01_0263b3e0;
    goto LAB_00c03210;
  default:
    goto switchD_00c028fc_caseD_1;
  case 2:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_00";
    local_50 = &PTR_LAB_02639e88;
    break;
  case 3:
  case 0xe:
  case 0x21:
  case 0x80:
    pcVar7 = "msg_ui_btlspot_win_01";
    goto LAB_00c032b4;
  case 4:
    pcVar7 = "msg_ui_btlspot_win_02";
    goto LAB_00c032b4;
  case 5:
  case 0x11:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) == 0) {
      pcVar7 = "msg_ui_btlspot_sys_win_01";
    }
    else {
      if (*(int *)(param_1 + 0xb50) != 1) goto LAB_00c032bc;
      pcVar7 = "msg_ui_btlspot_sys_win_02";
    }
    goto LAB_00c03214;
  case 7:
  case 0x14:
  case 0x1b:
  case 0x56:
    pcVar7 = "msg_ui_btlspot_win_03";
    goto LAB_00c032b4;
  case 8:
  case 0x17:
  case 0x52:
    pcVar7 = "msg_ui_btlspot_win_64";
    goto LAB_00c032b4;
  case 9:
  case 0x18:
  case 0x53:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_70";
    local_50 = &PTR_LAB_02639f18;
    break;
  case 10:
  case 0x19:
  case 0x54:
    pcVar7 = "msg_ui_btlspot_win_65";
    goto LAB_00c032b4;
  case 0xb:
  case 0x1a:
  case 0x89:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_04";
    local_50 = &PTR_LAB_02639f60;
    break;
  case 0xc:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_05";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e231f42a66b1f50;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_02639fa8;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232042a66b2103;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_02639ff0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x798) = 2;
    local_50 = (undefined **)0x5e232142a66b22b6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b8));
    local_50 = &PTR_LAB_0263a038;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x840);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0xd:
  case 0x1f:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_39";
    local_50 = &PTR_LAB_0263a080;
    break;
  case 0xf:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_53";
    local_50 = &PTR_LAB_02639ed0;
    break;
  case 0x10:
    *(undefined4 *)(param_1 + 0x700) = 1;
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_66";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(undefined8 *)(param_1 + 0x730) = uVar5;
    *(short *)(param_1 + 0x738) = (short)*(undefined4 *)(param_1 + 0xb54);
    *(short *)(param_1 + 0x73a) = (short)*(undefined4 *)(param_1 + 0xb58);
    goto LAB_00c032b8;
  case 0x13:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_06";
    local_50 = &PTR_LAB_0263a0c8;
    break;
  case 0x15:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_07";
    local_50 = &PTR_LAB_0263a110;
    break;
  case 0x1c:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_08";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e231f42a66b1f50;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263a158;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232042a66b2103;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263a1a0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x798) = 2;
    local_50 = (undefined **)0x5e232142a66b22b6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b8));
    local_50 = &PTR_LAB_0263a1e8;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x840);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x1d:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_05";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e231f42a66b1f50;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263a230;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232042a66b2103;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263a278;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x798) = 2;
    local_50 = (undefined **)0x5e232142a66b22b6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b8));
    local_50 = &PTR_LAB_0263a2c0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x840);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x1e:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_34";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e262942a66d6625;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263a308;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e262842a66d6472;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263a350;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x20:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_40";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e262942a66d6625;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263a398;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e262842a66d6472;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263a3e0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x22:
    *(undefined4 *)(param_1 + 0x700) = 3;
    *(undefined8 *)(param_1 + 0x720) = 0x100000003;
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_41";
    *(undefined4 *)(param_1 + 0x71c) = *(undefined4 *)(param_1 + 0xb54);
    local_50 = &PTR_LAB_0263a428;
    FUN_00c05590(&local_50,param_1 + 0x760);
    goto LAB_00c02bb4;
  case 0x23:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_43";
    FUN_014c9900(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),1);
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),1,*(undefined4 *)(param_1 + 0xb58),3,1,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_50 = &PTR_LAB_0263a470;
    FUN_00c05590(&local_50,param_1 + 0x760);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x24:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_49";
    local_50 = &PTR_LAB_0263a4b8;
    break;
  case 0x25:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_50";
    local_50 = &PTR_LAB_0263a500;
    break;
  case 0x26:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_51";
    FUN_014c9900(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_50 = &PTR_LAB_0263a548;
    FUN_00c05590(&local_50,param_1 + 0x760);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x27:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_52";
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),2,0,1);
    plVar11 = *(long **)(param_1 + 8);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_0077d050(lVar4,0x400);
    *(long **)(lVar4 + 8) = plVar11;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar4 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xb58);
      local_68 = 0;
      local_70 = *(long *)(param_1 + 0xb28);
    }
    else {
      plVar11 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar2 = *(undefined4 *)(param_1 + 0xb58);
      local_68 = lVar4;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      local_70 = *(long *)(param_1 + 0xb28);
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_00c04d20(uVar2,&local_68,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_014c7a10(*(undefined8 *)(param_1 + 0xb38),1,lVar4,0,0);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_60 = &PTR_LAB_0263a590;
    local_40 = &local_60;
    FUN_00c05590(&local_60,param_1 + 0x760);
    if (&local_60 == local_40) {
      pcVar8 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_00c03dfc;
      pcVar8 = (code *)(*local_40)[5];
    }
    (*pcVar8)();
LAB_00c03dfc:
    FUN_00c02130(param_1);
    return;
  case 0x28:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_57";
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),7,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_50 = &PTR_LAB_0263a5d8;
    FUN_00c05590(&local_50,param_1 + 0x760);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x29:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_61";
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),2,0,1);
    plVar11 = *(long **)(param_1 + 8);
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar10 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar11;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar11 + 0x10))(plVar11,0x80,8);
    if (lVar4 == 0) {
      (**(code **)(*plVar11 + 0xb8))(plVar11);
    }
    FUN_0077d050(lVar4,0x400);
    *(long **)(lVar4 + 8) = plVar11;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x80;
    *(undefined8 *)(lVar4 + 0x20) = 8;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
    if (lVar4 == 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xb58);
      local_68 = 0;
      local_70 = *(long *)(param_1 + 0xb28);
    }
    else {
      plVar11 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar11 + 0x10))(plVar11);
      uVar2 = *(undefined4 *)(param_1 + 0xb58);
      local_68 = lVar4;
      (**(code **)(*plVar11 + 0x10))(plVar11);
      local_70 = *(long *)(param_1 + 0xb28);
    }
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
    }
    FUN_00c04d20(uVar2,&local_68,&local_70);
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    FUN_014c7a10(*(undefined8 *)(param_1 + 0xb38),1,lVar4,0,0);
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_60 = &PTR_LAB_0263a620;
    local_40 = &local_60;
    FUN_00c05590(&local_60,param_1 + 0x760);
    if (&local_60 == local_40) {
      pcVar8 = (code *)(*local_40)[4];
    }
    else {
      if (local_40 == (undefined ***)0x0) goto LAB_00c040bc;
      pcVar8 = (code *)(*local_40)[5];
    }
    (*pcVar8)();
LAB_00c040bc:
    FUN_00c02130(param_1);
    return;
  case 0x2a:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_62";
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),7,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_50 = &PTR_LAB_0263a668;
    FUN_00c05590(&local_50,param_1 + 0x760);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x2b:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_67";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(short *)(param_1 + 0x738) = (short)*(undefined4 *)(param_1 + 0xb54);
    lVar10 = *(long *)(param_1 + 0xb30);
    *(undefined8 *)(param_1 + 0x730) = uVar5;
    *(short *)(param_1 + 0x73a) = (short)*(undefined4 *)(param_1 + 0xb58);
    if (lVar10 == 0) {
      uVar6 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      uVar6 = *(undefined8 *)(param_1 + 0xb30);
      uVar5 = *(undefined8 *)(param_1 + 0x730);
    }
    pbVar12 = *(byte **)(param_1 + 0x708);
    FUN_0077d520(uVar6,uVar5);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb38),0,*(undefined8 *)(param_1 + 0xb30),
                 *(undefined1 *)(param_1 + 0x738),*(undefined1 *)(param_1 + 0x73a));
    bVar3 = *pbVar12;
    local_38 = 0xcbf29ce484222645;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_38 = (local_38 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_38,*(undefined8 *)(param_1 + 0xb30));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),lVar10,*(undefined8 *)(param_1 + 0xb30));
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),1,*(undefined4 *)(param_1 + 0xb5c),2,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    *(undefined1 *)(param_1 + 0x750) = 0;
    FUN_00c02130(param_1);
    return;
  case 0x2c:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_68";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(short *)(param_1 + 0x738) = (short)*(undefined4 *)(param_1 + 0xb54);
    lVar10 = *(long *)(param_1 + 0xb30);
    *(undefined8 *)(param_1 + 0x730) = uVar5;
    *(short *)(param_1 + 0x73a) = (short)*(undefined4 *)(param_1 + 0xb58);
    if (lVar10 == 0) {
      uVar6 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      uVar6 = *(undefined8 *)(param_1 + 0xb30);
      uVar5 = *(undefined8 *)(param_1 + 0x730);
    }
    pbVar12 = *(byte **)(param_1 + 0x708);
    FUN_0077d520(uVar6,uVar5);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb38),0,*(undefined8 *)(param_1 + 0xb30),
                 *(undefined1 *)(param_1 + 0x738),*(undefined1 *)(param_1 + 0x73a));
    bVar3 = *pbVar12;
    local_38 = 0xcbf29ce484222645;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_38 = (local_38 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_38,*(undefined8 *)(param_1 + 0xb30));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),lVar10,*(undefined8 *)(param_1 + 0xb30));
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),1,*(undefined4 *)(param_1 + 0xb5c),7,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    *(undefined1 *)(param_1 + 0x750) = 0;
    FUN_00c02130(param_1);
    return;
  case 0x2d:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_03";
    local_50 = &PTR_LAB_0263a6b0;
    break;
  case 0x2e:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_06";
    local_50 = &PTR_LAB_0263a6f8;
    break;
  case 0x2f:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_07";
    local_50 = &PTR_LAB_0263a740;
    break;
  case 0x30:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_08";
    local_50 = &PTR_LAB_0263a788;
    break;
  case 0x31:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_09";
    local_50 = &PTR_LAB_0263a7d0;
    break;
  case 0x32:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_10";
    local_50 = &PTR_LAB_0263a818;
    break;
  case 0x33:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_11";
    local_50 = &PTR_LAB_0263a860;
    break;
  case 0x34:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_04";
    local_50 = &PTR_LAB_0263a8a8;
    break;
  case 0x35:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_rank_change_05";
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),0,*(undefined4 *)(param_1 + 0xb54),7,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    local_50 = &PTR_LAB_0263a8f0;
    FUN_00c05590(&local_50,param_1 + 0x760);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x36:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_71";
    local_50 = &PTR_LAB_0263a938;
    break;
  case 0x37:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (3 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b410;
    goto LAB_00c03210;
  case 0x38:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (3 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b430;
    goto LAB_00c03210;
  case 0x39:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (2 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b450;
    goto LAB_00c03210;
  case 0x3a:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (2 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b470;
    goto LAB_00c03210;
  case 0x3b:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (2 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b490;
    goto LAB_00c03210;
  case 0x3c:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    lVar10 = (long)(int)*(uint *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (2 < *(uint *)(param_1 + 0xb50)) goto LAB_00c032bc;
    ppuVar9 = &PTR_s_msg_ui_btlspot_competition_win_0_0263b4b0;
LAB_00c03210:
    pcVar7 = ppuVar9[lVar10];
    goto LAB_00c03214;
  case 0x3d:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    iVar1 = *(int *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (iVar1 == 0) {
      pcVar7 = "msg_ui_btlspot_competition_win_01";
    }
    else {
LAB_00c02ec8:
      if (iVar1 != 1) goto LAB_00c032bc;
      pcVar7 = "msg_ui_btlspot_competition_win_05";
    }
    goto LAB_00c03214;
  case 0x3e:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    iVar1 = *(int *)(param_1 + 0xb50);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (iVar1 != 0) goto LAB_00c02ec8;
    pcVar7 = "msg_ui_btlspot_competition_win_02";
    goto LAB_00c03214;
  case 0x40:
  case 0x44:
  case 0x67:
    pcVar7 = "msg_ui_btlspot_win_09";
    goto LAB_00c032b4;
  case 0x41:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_10";
    local_50 = &PTR_LAB_0263a980;
    break;
  case 0x42:
  case 0x43:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) == 0) {
      pcVar7 = "msg_ui_btlspot_competition_start_menu_win_02";
    }
    else {
      if (*(int *)(param_1 + 0xb50) != 1) goto LAB_00c032bc;
      pcVar7 = "msg_ui_btlspot_competition_start_menu_win_03";
    }
    goto LAB_00c03214;
  case 0x45:
    *(undefined4 *)(param_1 + 0x700) = 2;
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_11";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_1 + 0xb68);
    *(undefined8 *)(param_1 + 0x710) = uVar5;
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e232242a66b2469;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263a9c8;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232342a66b261c;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263aa10;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x46:
    *(undefined4 *)(param_1 + 0x700) = 2;
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_12";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(undefined4 *)(param_1 + 0x718) = *(undefined4 *)(param_1 + 0xb68);
    *(undefined8 *)(param_1 + 0x710) = uVar5;
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e232242a66b2469;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263aa58;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232342a66b261c;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263aaa0;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x47:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_13";
    local_50 = &PTR_LAB_0263aae8;
    break;
  case 0x48:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_14";
    local_50 = &PTR_LAB_0263ab30;
    break;
  case 0x49:
  case 0x4d:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_15";
    local_50 = &PTR_LAB_0263ab78;
    break;
  case 0x4a:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_16";
    local_50 = &PTR_LAB_0263abc0;
    break;
  case 0x4b:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_17";
    local_50 = &PTR_LAB_0263ac08;
    break;
  case 0x4c:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_18";
    local_50 = &PTR_LAB_0263ac50;
    break;
  case 0x4e:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_19";
    local_50 = &PTR_LAB_0263ac98;
    break;
  case 0x4f:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_20";
    local_50 = &PTR_LAB_0263ace0;
    break;
  case 0x50:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_21";
    local_50 = &PTR_LAB_0263ad28;
    break;
  case 0x51:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_22";
    local_50 = &PTR_LAB_0263ad70;
    break;
  case 0x55:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_23";
    local_50 = &PTR_LAB_0263adb8;
    break;
  case 0x57:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_08";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e231f42a66b1f50;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263ae00;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232142a66b22b6;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263ae48;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x58:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) == 0) {
      pcVar7 = "msg_ui_btlspot_competition_search_menu_win_01";
    }
    else {
      if (*(int *)(param_1 + 0xb50) != 1) goto LAB_00c032bc;
      pcVar7 = "msg_ui_btlspot_competition_search_menu_win_02";
    }
    goto LAB_00c03214;
  case 0x59:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_competition_search_menu_03";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e232442a66b27cf;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263ae90;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e232542a66b2982;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263aed8;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x798) = 2;
    local_50 = (undefined **)0x5e232642a66b2b35;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b8));
    local_50 = &PTR_LAB_0263af20;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x840);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x5b:
    pcVar7 = "msg_ui_btlspot_win_24";
    goto LAB_00c032b4;
  case 0x5c:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_25";
    local_50 = &PTR_LAB_0263af68;
    break;
  case 0x5d:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_26";
    local_50 = &PTR_LAB_0263afb0;
    break;
  case 0x62:
  case 99:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_competition_overview_confirm_00";
    *(undefined1 *)(param_1 + 0x750) = 0;
    *(undefined4 *)(param_1 + 0x790) = 0;
    local_50 = (undefined **)0x5e232742a66b2ce8;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7a8));
    local_50 = &PTR_LAB_0263aff8;
    FUN_00c056f0(&local_50,param_1 + 0x7e0);
    (*(code *)local_50[4])();
    *(undefined4 *)(param_1 + 0x794) = 1;
    local_50 = (undefined **)0x5e262242a66d5a40;
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_50,*(undefined8 *)(param_1 + 0x7b0));
    local_50 = &PTR_LAB_0263b040;
    lStack_48 = param_1;
    FUN_00c056f0(&local_50,param_1 + 0x810);
    (*(code *)local_50[4])();
    FUN_00c02130(param_1);
    return;
  case 0x68:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_30";
    local_50 = &PTR_LAB_0263b088;
    break;
  case 0x69:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_31";
    local_50 = &PTR_LAB_0263b0d0;
    break;
  case 0x6a:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_32";
    local_50 = &PTR_LAB_0263b118;
    break;
  case 0x6b:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_33";
    local_50 = &PTR_LAB_0263b160;
    break;
  case 0x6c:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) == 0) goto LAB_00c032a0;
    if (*(int *)(param_1 + 0xb50) != 1) goto LAB_00c032bc;
    goto LAB_00c03278;
  case 0x6d:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) != 0) goto LAB_00c032bc;
LAB_00c032a0:
    pcVar7 = "msg_ui_btlspot_sys_win_05";
    goto LAB_00c03214;
  case 0x6e:
    *(undefined1 *)(param_1 + 0x752) = 1;
    *(undefined1 *)(param_1 + 0x751) = *(undefined1 *)(param_1 + 0xb70);
    *(undefined1 *)(param_1 + 0x750) = 0;
    if (*(int *)(param_1 + 0xb50) != 0) goto LAB_00c032bc;
LAB_00c03278:
    pcVar7 = "msg_ui_btlspot_sys_win_06";
LAB_00c03214:
    *(char **)(param_1 + 0x708) = pcVar7;
LAB_00c032bc:
    FUN_00c02130(param_1);
    return;
  case 0x71:
    pcVar7 = "msg_ui_btlspot_win_35";
LAB_00c032b4:
    *(char **)(param_1 + 0x708) = pcVar7;
LAB_00c032b8:
    *(undefined1 *)(param_1 + 0x750) = 0;
    goto LAB_00c032bc;
  case 0x72:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_36";
    local_50 = &PTR_LAB_0263b1a8;
    break;
  case 0x73:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_37";
    local_50 = &PTR_LAB_0263b1f0;
    break;
  case 0x74:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_38";
    local_50 = &PTR_LAB_0263b238;
    break;
  case 0x7c:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_28";
    local_50 = &PTR_LAB_0263b280;
    break;
  case 0x7d:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_54";
    local_50 = &PTR_LAB_0263b2c8;
    break;
  case 0x7e:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_55";
    local_50 = &PTR_LAB_0263b310;
    break;
  case 0x7f:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_63";
    local_50 = &PTR_LAB_0263b358;
    break;
  case 0x81:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_69";
    uVar5 = FUN_0077d470(*(undefined8 *)(param_1 + 0xb60));
    *(short *)(param_1 + 0x738) = (short)*(undefined4 *)(param_1 + 0xb54);
    lVar10 = *(long *)(param_1 + 0xb30);
    *(undefined8 *)(param_1 + 0x730) = uVar5;
    *(short *)(param_1 + 0x73a) = (short)*(undefined4 *)(param_1 + 0xb58);
    if (lVar10 == 0) {
      uVar6 = 0;
    }
    else {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      uVar6 = *(undefined8 *)(param_1 + 0xb30);
      uVar5 = *(undefined8 *)(param_1 + 0x730);
    }
    pbVar12 = *(byte **)(param_1 + 0x708);
    FUN_0077d520(uVar6,uVar5);
    FUN_014c9110(*(undefined8 *)(param_1 + 0xb38),0,*(undefined8 *)(param_1 + 0xb30),
                 *(undefined1 *)(param_1 + 0x738),*(undefined1 *)(param_1 + 0x73a));
    bVar3 = *pbVar12;
    local_38 = 0xcbf29ce484222645;
    while (bVar3 != 0) {
      pbVar12 = pbVar12 + 1;
      local_38 = (local_38 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar12;
    }
    FUN_0077eb10(*(undefined8 *)(param_1 + 0xb28),&local_38,*(undefined8 *)(param_1 + 0xb30));
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),lVar10,*(undefined8 *)(param_1 + 0xb30));
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    FUN_014ca220(*(undefined8 *)(param_1 + 0xb38),1,*(undefined4 *)(param_1 + 0xb5c),4,0,1);
    FUN_014c62d0(*(undefined8 *)(param_1 + 0xb38),*(undefined8 *)(param_1 + 0x900),
                 *(undefined8 *)(param_1 + 0xb30));
    *(undefined1 *)(param_1 + 0x750) = 0;
    FUN_00c02130(param_1);
    return;
  case 0x82:
    *(char **)(param_1 + 0x708) = "msg_ui_btlspot_win_60";
    local_50 = &PTR_LAB_0263b3a0;
  }
  FUN_00c05590(&local_50,param_1 + 0x760);
LAB_00c02bb4:
  (*(code *)local_50[4])();
  FUN_00c02130(param_1);
switchD_00c028fc_caseD_1:
  return;
}


