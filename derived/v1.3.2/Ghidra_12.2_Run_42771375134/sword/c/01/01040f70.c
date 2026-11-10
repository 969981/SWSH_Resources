/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01040f70; name: FUN_01040f70
 */


undefined8 FUN_01040f70(long param_1,char *param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *local_100 [5];
  char *local_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x158) = uVar1;
  *(undefined8 *)(param_1 + 0x140) = uVar4;
  *(undefined8 *)(param_1 + 0x148) = uVar8;
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x178) = uVar1;
  *(undefined8 *)(param_1 + 0x160) = uVar4;
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  *(undefined8 *)(param_1 + 0x188) = uVar4;
  *(undefined8 *)(param_1 + 400) = uVar8;
  *(undefined1 *)(param_1 + 0x19c) = param_3;
  *(undefined1 *)(param_1 + 0x19d) = param_4;
  lVar10 = *(long *)(*(long *)(param_1 + 0x10) + 0x1b0);
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x18) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(long *)(param_1 + 0x18) = lVar10;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","P_btlteam_icon_00");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,"P_btlteam_icon_00");
  }
  uVar6 = local_d0 & 0xff;
  uVar9 = 0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    uVar9 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar9 = (uVar9 ^ uVar6) * 0x100000001b3;
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  local_d0 = uVar9;
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  *(undefined8 *)(param_1 + 0xa0) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_00_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_00_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_01_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_01_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 0xb0) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_02_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_02_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 0xb8) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_03_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_03_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_04_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_04_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 200) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_05_P_team_pokelist_icon_03");
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_05_P_team_pokelist_icon_03");
  }
  uVar6 = local_d0 & 0xff;
  local_100[0] = (char *)0xcbf29ce484222645;
  if ((byte)local_d0 != '\0') {
    local_100[0] = (char *)0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_100[0] = (char *)(((ulong)local_100[0] ^ uVar6) * 0x100000001b3);
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  uVar4 = FUN_0167b6b0(*(undefined8 *)(lVar10 + 0x1b0),local_100);
  *(undefined8 *)(param_1 + 0xd0) = uVar4;
  local_100[0] = "L_btlteam_pokelist_00_L_team_pokelist_icon_01_P_pokeIcon_00";
  local_100[1] = "L_btlteam_pokelist_01_L_team_pokelist_icon_01_P_pokeIcon_00";
  local_100[2] = "L_btlteam_pokelist_02_L_team_pokelist_icon_01_P_pokeIcon_00";
  local_100[3] = "L_btlteam_pokelist_03_L_team_pokelist_icon_01_P_pokeIcon_00";
  local_100[4] = "L_btlteam_pokelist_04_L_team_pokelist_icon_01_P_pokeIcon_00";
  local_d8 = "L_btlteam_pokelist_05_L_team_pokelist_icon_01_P_pokeIcon_00";
  lVar10 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar10 + 0x3c8);
  if (lVar12 != 0) {
    lVar10 = 0;
    pcVar5 = "L_btlteam_pokelist_00_L_team_pokelist_icon_01_P_pokeIcon_00";
    do {
      lVar11 = *(long *)(param_1 + 0x10);
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      if (*param_2 == '\0') {
        snprintf((char *)&local_d0,100,"pane_%s",pcVar5);
        if ((byte)local_d0 != 0) goto LAB_01041648;
LAB_0104168c:
        uVar4 = 0;
      }
      else {
        snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,pcVar5);
        if ((byte)local_d0 == 0) goto LAB_0104168c;
LAB_01041648:
        uVar6 = 0xcbf29ce484222645;
        pbVar7 = (byte *)((ulong)&local_d0 | 1);
        bVar3 = (byte)local_d0;
        do {
          uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 != 0);
        if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_0104168c;
        local_d0 = uVar6;
        uVar4 = FUN_0103bd80(*(undefined8 *)(lVar11 + 0x1b0),&local_d0);
      }
      lVar11 = param_1 + lVar10 * 8;
      *(undefined8 *)(lVar11 + 0xd8) = uVar4;
      bVar3 = *(byte *)(param_1 + 0x19c);
      uVar4 = FUN_00ff93d0(param_1);
      FUN_0168b110(lVar12 + (lVar10 + (ulong)bVar3) * 0x3e0,uVar4,*(undefined8 *)(lVar11 + 0xd8),0);
      while( true ) {
        lVar10 = lVar10 + 1;
        if (lVar10 == 6) goto LAB_01041c2c;
        pcVar5 = local_100[lVar10];
        if (pcVar5 != (char *)0x0) break;
        *(undefined8 *)(param_1 + lVar10 * 8 + 0xd8) = 0;
      }
    } while( true );
  }
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_00_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041778;
LAB_010417c0:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_00_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_010417c0;
LAB_01041778:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_010417c0;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0xd8) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_01_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041854;
LAB_0104189c:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_01_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_0104189c;
LAB_01041854:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_0104189c;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_02_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041930;
LAB_01041978:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_02_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_01041978;
LAB_01041930:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041978;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0xe8) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_03_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041a0c;
LAB_01041a54:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_03_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_01041a54;
LAB_01041a0c:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041a54;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0xf0) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_04_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041ae8;
LAB_01041b30:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_04_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_01041b30;
LAB_01041ae8:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041b30;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0xf8) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s",
             "L_btlteam_pokelist_05_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 != 0) goto LAB_01041bc4;
LAB_01041c0c:
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_05_L_team_pokelist_icon_01_P_pokeIcon_00");
    if ((byte)local_d0 == 0) goto LAB_01041c0c;
LAB_01041bc4:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041c0c;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
    *(undefined8 *)(param_1 + 0x100) = uVar4;
  }
LAB_01041c2c:
  local_100[0] = "L_btlteam_pokelist_00_P_team_pokelist_icon_02";
  local_100[1] = "L_btlteam_pokelist_01_P_team_pokelist_icon_02";
  local_100[2] = "L_btlteam_pokelist_02_P_team_pokelist_icon_02";
  local_100[3] = "L_btlteam_pokelist_03_P_team_pokelist_icon_02";
  local_100[4] = "L_btlteam_pokelist_04_P_team_pokelist_icon_02";
  local_d8 = "L_btlteam_pokelist_05_P_team_pokelist_icon_02";
  lVar10 = *(long *)(param_1 + 0x10);
  lVar12 = *(long *)(lVar10 + 1000);
  if (lVar12 != 0) {
    lVar10 = 0;
    pcVar5 = "L_btlteam_pokelist_00_P_team_pokelist_icon_02";
    do {
      lVar11 = *(long *)(param_1 + 0x10);
      local_70 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      if (*param_2 == '\0') {
        snprintf((char *)&local_d0,100,"pane_%s",pcVar5);
        if ((byte)local_d0 != 0) goto LAB_01041d10;
LAB_01041d54:
        uVar4 = 0;
      }
      else {
        snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,pcVar5);
        if ((byte)local_d0 == 0) goto LAB_01041d54;
LAB_01041d10:
        uVar6 = 0xcbf29ce484222645;
        pbVar7 = (byte *)((ulong)&local_d0 | 1);
        bVar3 = (byte)local_d0;
        do {
          uVar6 = (uVar6 ^ bVar3) * 0x100000001b3;
          bVar3 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar3 != 0);
        if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041d54;
        local_d0 = uVar6;
        uVar4 = FUN_0103bd80(*(undefined8 *)(lVar11 + 0x1b0),&local_d0);
      }
      lVar11 = param_1 + lVar10 * 8;
      *(undefined8 *)(lVar11 + 0x108) = uVar4;
      bVar3 = *(byte *)(param_1 + 0x19d);
      uVar4 = FUN_00ff93d0(param_1);
      uVar4 = FUN_0168b110(lVar12 + (lVar10 + (ulong)bVar3) * 0x3d0,uVar4,
                           *(undefined8 *)(lVar11 + 0x108),0);
      while( true ) {
        lVar10 = lVar10 + 1;
        if (lVar10 == 6) {
          return uVar4;
        }
        pcVar5 = local_100[lVar10];
        if (pcVar5 != (char *)0x0) break;
        *(undefined8 *)(param_1 + lVar10 * 8 + 0x108) = 0;
      }
    } while( true );
  }
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_00_P_team_pokelist_icon_02");
    if ((byte)local_d0 != 0) goto LAB_01041e40;
LAB_01041e88:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_00_P_team_pokelist_icon_02");
    if ((byte)local_d0 == 0) goto LAB_01041e88;
LAB_01041e40:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041e88;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_01_P_team_pokelist_icon_02");
    if ((byte)local_d0 != 0) goto LAB_01041f1c;
LAB_01041f64:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_01_P_team_pokelist_icon_02");
    if ((byte)local_d0 == 0) goto LAB_01041f64;
LAB_01041f1c:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01041f64;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_02_P_team_pokelist_icon_02");
    if ((byte)local_d0 != 0) goto LAB_01041ff8;
LAB_01042040:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_02_P_team_pokelist_icon_02");
    if ((byte)local_d0 == 0) goto LAB_01042040;
LAB_01041ff8:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_01042040;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_03_P_team_pokelist_icon_02");
    if ((byte)local_d0 != 0) goto LAB_010420d4;
LAB_0104211c:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_03_P_team_pokelist_icon_02");
    if ((byte)local_d0 == 0) goto LAB_0104211c;
LAB_010420d4:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_0104211c;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_04_P_team_pokelist_icon_02");
    if ((byte)local_d0 != 0) goto LAB_010421b0;
LAB_010421f8:
    uVar4 = 0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_04_P_team_pokelist_icon_02");
    if ((byte)local_d0 == 0) goto LAB_010421f8;
LAB_010421b0:
    uVar6 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_d0) * 0x100000001b3;
      local_d0._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_d0 != 0);
    if (uVar6 == 0xcbf29ce484222645 || uVar6 == 0) goto LAB_010421f8;
    local_d0 = uVar6;
    uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
  }
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  lVar10 = *(long *)(param_1 + 0x10);
  local_70 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  if (*param_2 == '\0') {
    snprintf((char *)&local_d0,100,"pane_%s","L_btlteam_pokelist_05_P_team_pokelist_icon_02");
    bVar3 = (byte)local_d0;
  }
  else {
    snprintf((char *)&local_d0,100,"pane_%s_%s",param_2,
             "L_btlteam_pokelist_05_P_team_pokelist_icon_02");
    bVar3 = (byte)local_d0;
  }
  if (bVar3 != 0) {
    local_d0 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)&local_d0 | 1);
    do {
      local_d0 = (local_d0 ^ bVar3) * 0x100000001b3;
      bVar3 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
    if (local_d0 != 0xcbf29ce484222645 && local_d0 != 0) {
      uVar4 = FUN_0103bd80(*(undefined8 *)(lVar10 + 0x1b0),&local_d0);
      goto LAB_010422ec;
    }
  }
  uVar4 = 0;
LAB_010422ec:
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  return uVar4;
}


