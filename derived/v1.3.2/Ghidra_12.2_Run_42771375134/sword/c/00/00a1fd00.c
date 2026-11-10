/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1fd00; name: thunk_FUN_00a1fb60
 */


void thunk_FUN_00a1fb60(undefined8 *param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    *param_1 = 0x39d986cada59e577;
    param_1[1] = "Play_UI_battlemenu_dymax_decide";
    param_1[2] = 0x1f;
    param_1[3] = 0;
    return;
  case 1:
    *param_1 = 0xba89147e51ca5259;
    param_1[1] = "Play_UI_battlemenu_dymax_cancel";
    param_1[2] = 0x1f;
    param_1[3] = 0;
    return;
  case 2:
    *param_1 = 0x174033aa75a37a9;
    param_1[1] = "Play_UI_common_menu_open";
    param_1[2] = 0x18;
    param_1[3] = 0;
    return;
  case 3:
    *param_1 = 0xef936715fa47c783;
    param_1[1] = "Play_UI_common_menu_close";
    param_1[2] = 0x19;
    param_1[3] = 0;
    return;
  case 4:
    *param_1 = 0xf45719fb86dfc06e;
    param_1[1] = "Play_UI_common_tab";
    param_1[2] = 0x12;
    param_1[3] = 0;
    return;
  case 5:
  case 6:
  case 7:
    *param_1 = 0xed4e0576b33b3d8;
    param_1[1] = "Play_UI_common_slide";
    param_1[2] = 0x14;
    param_1[3] = 0;
    return;
  case 8:
    *param_1 = 0x6b7846ecfe449f9a;
    param_1[1] = "Set_State_InNetBattle";
    param_1[2] = 0x15;
    param_1[3] = 0;
    return;
  case 9:
    *param_1 = 0xb6e5f83eab9252e4;
    param_1[1] = "Set_State_NetBattleOff";
    param_1[2] = 0x16;
    param_1[3] = 0;
    return;
  case 10:
    FUN_006cf0a0(&DAT_0262d4c8);
    return;
  case 0xb:
    FUN_006cf0a0(&DAT_0262d4e0);
    return;
  default:
    *param_1 = 0xcbf29ce484222645;
    param_1[1] = &DAT_01d38550;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
}


