/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01042330; name: FUN_01042330
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01042330(long param_1,int param_2,long param_3)

{
  char *param3;
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  char *pcVar9;
  ulong uVar10;
  code *pcVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long *plVar23;
  long local_210;
  ulong local_1e8;
  char *local_1e0 [6];
  char *local_1b0 [6];
  char *local_180 [6];
  char *local_150 [6];
  char *local_120 [6];
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  
  local_90 = 0;
  local_120[0] = "L_btlteam_pokelist_00_T_team_pokelist_00";
  local_120[1] = "L_btlteam_pokelist_01_T_team_pokelist_00";
  local_120[2] = "L_btlteam_pokelist_02_T_team_pokelist_00";
  local_120[3] = "L_btlteam_pokelist_03_T_team_pokelist_00";
  local_120[4] = "L_btlteam_pokelist_04_T_team_pokelist_00";
  local_120[5] = "L_btlteam_pokelist_05_T_team_pokelist_00";
  local_150[0] = "L_btlteam_pokelist_00_L_team_pokelist_icon_00_switch";
  local_150[1] = "L_btlteam_pokelist_01_L_team_pokelist_icon_00_switch";
  local_150[2] = "L_btlteam_pokelist_02_L_team_pokelist_icon_00_switch";
  local_150[3] = "L_btlteam_pokelist_03_L_team_pokelist_icon_00_switch";
  local_150[4] = "L_btlteam_pokelist_04_L_team_pokelist_icon_00_switch";
  local_150[5] = "L_btlteam_pokelist_05_L_team_pokelist_icon_00_switch";
  local_180[0] = "L_btlteam_pokelist_00_switch";
  local_180[1] = "L_btlteam_pokelist_01_switch";
  local_180[2] = "L_btlteam_pokelist_02_switch";
  local_180[3] = "L_btlteam_pokelist_03_switch";
  local_180[4] = "L_btlteam_pokelist_04_switch";
  local_180[5] = "L_btlteam_pokelist_05_switch";
  local_1b0[0] = "L_btlteam_pokelist_00_bg_color";
  local_1b0[1] = "L_btlteam_pokelist_01_bg_color";
  local_1b0[2] = "L_btlteam_pokelist_02_bg_color";
  local_1b0[3] = "L_btlteam_pokelist_03_bg_color";
  local_1b0[4] = "L_btlteam_pokelist_04_bg_color";
  local_1b0[5] = "L_btlteam_pokelist_05_bg_color";
  local_1e0[0] = "L_btlteam_pokelist_00_item_bg_color";
  local_1e0[1] = "L_btlteam_pokelist_01_item_bg_color";
  local_1e0[2] = "L_btlteam_pokelist_02_item_bg_color";
  local_1e0[3] = "L_btlteam_pokelist_03_item_bg_color";
  local_1e0[4] = "L_btlteam_pokelist_04_item_bg_color";
  local_1e0[5] = "L_btlteam_pokelist_05_item_bg_color";
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  param3 = (char *)(param_1 + 0x138);
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  if (*(char *)(param_1 + 0x138) == '\0') {
    snprintf((char *)&local_f0,100,"anime_%s","switch");
  }
  else {
    snprintf((char *)&local_f0,100,"anime_%s_%s",param3,"switch");
  }
  uVar10 = local_f0 & 0xff;
  local_1e8 = 0xcbf29ce484222645;
  if ((byte)local_f0 != '\0') {
    local_1e8 = 0xcbf29ce484222645;
    pbVar12 = (byte *)((ulong)&local_f0 | 1);
    do {
      local_1e8 = (local_1e8 ^ uVar10) * 0x100000001b3;
      bVar1 = *pbVar12;
      uVar10 = (ulong)bVar1;
      pbVar12 = pbVar12 + 1;
    } while (bVar1 != 0);
  }
  plVar23 = (long *)(param_1 + 0x18);
  FUN_0167ba30(*plVar23,&local_1e8);
  switch(param_2) {
  case 0:
    lVar16 = *plVar23;
    uVar22 = 0;
    break;
  case 1:
    FUN_0167bdb0(0x3f800000,*plVar23,&local_1e8);
    goto LAB_010426f8;
  case 2:
    lVar16 = *plVar23;
    uVar22 = 0x40000000;
    break;
  case 3:
    lVar16 = *plVar23;
    uVar22 = 0x40400000;
    goto LAB_01042610;
  case 4:
    lVar16 = *plVar23;
    uVar22 = 0x40800000;
    break;
  case 5:
    lVar16 = *plVar23;
    uVar22 = 0x40a00000;
LAB_01042610:
    FUN_0167bdb0(uVar22,lVar16,&local_1e8);
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (*param3 == '\0') {
      snprintf((char *)&local_f0,100,"anime_%s","team_bg_color");
      uVar10 = local_f0;
    }
    else {
      snprintf((char *)&local_f0,100,"anime_%s_%s",param3,"team_bg_color");
      uVar10 = local_f0;
    }
    bVar2 = (byte)local_f0 != '\0';
    local_f0 = 0xcbf29ce484222645;
    if (bVar2) {
      uVar10 = uVar10 & 0xff;
      local_f0 = 0xcbf29ce484222645;
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        local_f0 = (local_f0 ^ uVar10) * 0x100000001b3;
        bVar1 = *pbVar12;
        uVar10 = (ulong)bVar1;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    FUN_0167ba30(*plVar23,&local_f0);
    if (*(int *)(param_3 + 0x90) == 1) {
      lVar16 = *plVar23;
      uVar22 = 0x3f800000;
LAB_010426e8:
      FUN_0167bdb0(uVar22,lVar16,&local_f0);
    }
    else if (*(int *)(param_3 + 0x90) == 0) {
      lVar16 = *plVar23;
      uVar22 = 0;
      goto LAB_010426e8;
    }
    if (param_2 == 1) {
LAB_010426f8:
      *(byte *)(*(long *)(param_1 + 0xa0) + 0x58) =
           *(byte *)(*(long *)(param_1 + 0xa0) + 0x58) & 0xfe | *(byte *)(param_3 + 0x94);
    }
switchD_010425a8_default:
    pcVar11 = *(code **)(param_1 + 0x20);
    goto joined_r0x0104271c;
  default:
    goto switchD_010425a8_default;
  }
  FUN_0167bdb0(uVar22,lVar16,&local_1e8);
  pcVar11 = *(code **)(param_1 + 0x20);
joined_r0x0104271c:
  if (pcVar11 != (code *)0x0) {
    uVar10 = *(ulong *)(*plVar23 + 0x2e8);
    if (uVar10 == 0) {
      local_f0 = 0;
    }
    else {
      plVar19 = (long *)(uVar10 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      local_f0 = uVar10;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      pcVar11 = *(code **)(param_1 + 0x20);
    }
    local_1e8 = local_1e8 & 0xffffffff00000000;
    uVar6 = (*pcVar11)(param_1 + 0x40,&local_1e8,&local_f0);
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    if (uVar10 != 0) {
      (**(code **)(*(long *)(uVar10 + 0x48) + 0x18))((long *)(uVar10 + 0x48));
    }
    if ((uVar6 & 1) != 0) {
      lVar16 = *(long *)(*plVar23 + 0x2f0);
      if (lVar16 == 0) {
        FUN_0077d520(0,param_3 + 0x96);
        lVar16 = *plVar23;
        lVar17 = *(long *)(lVar16 + 0x2e0);
      }
      else {
        plVar19 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar19 + 0x10))(plVar19);
        FUN_0077d520(lVar16,param_3 + 0x96);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        lVar16 = *plVar23;
        lVar17 = *(long *)(lVar16 + 0x2e0);
      }
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
        lVar16 = *plVar23;
      }
      lVar16 = *(long *)(lVar16 + 0x2f0);
      plVar19 = (long *)(lVar16 + 0x48);
      if (lVar16 != 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      FUN_014c7aa0(lVar17,0,lVar16,*(undefined4 *)(param_3 + 0xb4),0,0);
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))(plVar19);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      lVar16 = *plVar23;
      lVar17 = *(long *)(lVar16 + 0x2e0);
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))();
        lVar16 = *plVar23;
      }
      lVar21 = *(long *)(lVar16 + 0x2f0);
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
        lVar16 = *plVar23;
      }
      lVar16 = *(long *)(lVar16 + 0x2e8);
      plVar19 = (long *)(lVar16 + 0x48);
      if (lVar16 != 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
      FUN_014c62d0(lVar17,lVar21,lVar16);
      (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))(plVar19);
      if (lVar21 != 0) {
        (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
      }
      if (lVar17 != 0) {
        (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
      }
      uVar22 = *(undefined8 *)(param_1 + 0x10);
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      if (*(char *)(param_1 + 0x138) == '\0') {
        snprintf((char *)&local_f0,100,"pane_%s","T_btlteam_00");
        bVar1 = (byte)local_f0;
      }
      else {
        snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_btlteam_00");
        bVar1 = (byte)local_f0;
      }
      local_f0 = 0xcbf29ce484222645;
      if (bVar1 != 0) {
        local_f0 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)&local_f0 | 1);
        do {
          local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar1 != 0);
      }
      lVar16 = *(long *)(*plVar23 + 0x2f0);
      if (lVar16 == 0) {
        uVar7 = FUN_0077d470(0);
        FUN_00ffd700(uVar22,&local_f0,uVar7,10);
      }
      else {
        plVar19 = (long *)(lVar16 + 0x48);
        (**(code **)(*plVar19 + 0x10))(plVar19);
        uVar7 = FUN_0077d470(lVar16);
        FUN_00ffd700(uVar22,&local_f0,uVar7,10);
        (**(code **)(*plVar19 + 0x18))(plVar19);
      }
    }
  }
  local_210 = param_1 + 0x40;
  pbVar12 = (byte *)((ulong)&local_f0 | 1);
  lVar16 = *(long *)(*(long *)(param_1 + 0x10) + 0x3c8);
  lVar17 = *(long *)(*(long *)(param_1 + 0x10) + 1000);
  uVar10 = 0;
  do {
    uVar6 = 0xcbf29ce484222645;
    lVar21 = *(long *)(param_3 + uVar10 * 0x18);
    if (lVar21 == 0) {
      uVar3 = 0;
      lVar13 = *(long *)(param_1 + uVar10 * 8 + 0xa8);
    }
    else {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x10))();
      uVar3 = FUN_008787d0(lVar21);
      uVar3 = uVar3 ^ 1;
      lVar13 = *(long *)(param_1 + uVar10 * 8 + 0xa8);
    }
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x58) =
           *(byte *)(lVar13 + 0x58) & 0xfe | *(byte *)(param_3 + uVar10 * 0x18 + 0x14);
    }
    pcVar9 = local_180[uVar10];
    if (pcVar9 != (char *)0x0) {
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      if (*param3 == '\0') {
        snprintf((char *)&local_f0,100,"anime_%s",pcVar9);
        uVar14 = local_f0;
      }
      else {
        snprintf((char *)&local_f0,100,"anime_%s_%s",param3,pcVar9);
        uVar14 = local_f0;
      }
      bVar2 = (byte)local_f0 != '\0';
      local_f0 = uVar6;
      if (bVar2) {
        uVar14 = uVar14 & 0xff;
        pbVar15 = pbVar12;
        do {
          local_f0 = (local_f0 ^ uVar14) * 0x100000001b3;
          bVar1 = *pbVar15;
          uVar14 = (ulong)bVar1;
          pbVar15 = pbVar15 + 1;
        } while (bVar1 != 0);
      }
      if ((uVar3 & 1) == 0) {
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        uVar7 = 0x40000000;
      }
      else {
        uVar14 = FUN_0087d610(lVar21,2);
        uVar22 = *(undefined8 *)(param_1 + 0x10);
        if ((uVar14 & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0x3f800000;
        }
      }
      FUN_00ffd510(uVar7,uVar22,&local_f0);
    }
    pcVar9 = local_1b0[uVar10];
    if (pcVar9 != (char *)0x0) {
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      if (*param3 == '\0') {
        snprintf((char *)&local_f0,100,"anime_%s",pcVar9);
      }
      else {
        snprintf((char *)&local_f0,100,"anime_%s_%s",param3,pcVar9);
      }
      if ((byte)local_f0 != '\0') {
        local_f0 = local_f0 & 0xff;
        pbVar15 = pbVar12;
        do {
          uVar6 = (uVar6 ^ local_f0) * 0x100000001b3;
          bVar1 = *pbVar15;
          local_f0 = (ulong)bVar1;
          pbVar15 = pbVar15 + 1;
        } while (bVar1 != 0);
      }
      uVar22 = 0;
      if (((uVar3 & 1) != 0) && (uVar22 = 0x3f800000, *(int *)(param_3 + uVar10 * 0x18 + 0xc) != 1))
      {
        uVar22 = 0;
      }
      local_f0 = uVar6;
      FUN_0167ba30(*plVar23,&local_f0);
      FUN_0167bdb0(uVar22,*plVar23,&local_f0);
    }
    if ((uVar3 & 1) != 0) {
      if (lVar16 != 0) {
        FUN_0168c480(lVar16 + ((ulong)*(byte *)(param_1 + 0x19c) + (uVar10 & 0xffffffff)) * 0x3e0,
                     lVar21,*(undefined4 *)(param_3 + uVar10 * 0x18 + 8));
      }
      if (lVar17 != 0) {
        uVar3 = FUN_008787f0(lVar21);
        lVar13 = (ulong)*(byte *)(param_1 + 0x19d) + (uVar10 & 0xffffffff);
        if ((uVar3 & 0xffff) != 0) {
          FUN_0168be20(lVar17 + lVar13 * 0x3d0,uVar3);
        }
        lVar13 = *(long *)(lVar17 + lVar13 * 0x3d0 + 0x18);
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe | (uVar3 & 0xffff) != 0;
      }
      pcVar11 = *(code **)(param_1 + 0x20);
      if ((pcVar11 != (code *)0x0) && (pcVar9 = local_120[uVar10], pcVar9 != (char *)0x0)) {
        uVar6 = *(ulong *)(*plVar23 + 0x2e8);
        if (uVar6 == 0) {
          local_f0 = 0;
        }
        else {
          plVar19 = (long *)(uVar6 + 0x48);
          (**(code **)(*plVar19 + 0x10))(plVar19);
          local_f0 = uVar6;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          pcVar11 = *(code **)(param_1 + 0x20);
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,1);
        uVar14 = (*pcVar11)(local_210,&local_1e8,&local_f0);
        if (local_f0 != 0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
          local_f0 = 0;
        }
        if (uVar6 != 0) {
          (**(code **)(*(long *)(uVar6 + 0x48) + 0x18))((long *)(uVar6 + 0x48));
        }
        if ((uVar14 & 1) != 0) {
          lVar13 = *(long *)(*plVar23 + 0x2e0);
          if (lVar13 == 0) {
            uVar4 = FUN_0087a5f0(lVar21);
            FUN_014ca220(0,0,uVar4,3,0,1);
            lVar13 = *plVar23;
            lVar18 = *(long *)(lVar13 + 0x2e0);
          }
          else {
            plVar19 = (long *)(lVar13 + 0x48);
            (**(code **)(*plVar19 + 0x10))(plVar19);
            uVar4 = FUN_0087a5f0(lVar21);
            FUN_014ca220(lVar13,0,uVar4,3,0,1);
            (**(code **)(*plVar19 + 0x18))(plVar19);
            lVar13 = *plVar23;
            lVar18 = *(long *)(lVar13 + 0x2e0);
          }
          if (lVar18 != 0) {
            (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
            lVar13 = *plVar23;
          }
          lVar20 = *(long *)(lVar13 + 0x2f0);
          if (lVar20 != 0) {
            (**(code **)(*(long *)(lVar20 + 0x48) + 0x10))();
            lVar13 = *plVar23;
          }
          lVar13 = *(long *)(lVar13 + 0x2e8);
          plVar19 = (long *)(lVar13 + 0x48);
          if (lVar13 != 0) {
            (**(code **)(*plVar19 + 0x10))(plVar19);
          }
          FUN_014c62d0(lVar18,lVar20,lVar13);
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))(plVar19);
          if (lVar20 != 0) {
            (**(code **)(*(long *)(lVar20 + 0x48) + 0x18))((long *)(lVar20 + 0x48));
          }
          if (lVar18 != 0) {
            (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
          }
          uVar22 = *(undefined8 *)(param_1 + 0x10);
          local_90 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_b0 = 0;
          uStack_a8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          if (*(char *)(param_1 + 0x138) == '\0') {
            snprintf((char *)&local_f0,100,"pane_%s",pcVar9);
            bVar1 = (byte)local_f0;
          }
          else {
            snprintf((char *)&local_f0,100,"pane_%s_%s",param3,pcVar9);
            bVar1 = (byte)local_f0;
          }
          local_f0 = 0xcbf29ce484222645;
          if (bVar1 != 0) {
            local_f0 = 0xcbf29ce484222645;
            pbVar15 = pbVar12;
            do {
              local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
              bVar1 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar1 != 0);
          }
          lVar13 = *(long *)(*plVar23 + 0x2f0);
          if (lVar13 == 0) {
            uVar7 = FUN_0077d470(0);
            FUN_00ffd700(uVar22,&local_f0,uVar7,10);
          }
          else {
            plVar19 = (long *)(lVar13 + 0x48);
            (**(code **)(*plVar19 + 0x10))(plVar19);
            uVar7 = FUN_0077d470(lVar13);
            FUN_00ffd700(uVar22,&local_f0,uVar7,10);
            (**(code **)(*plVar19 + 0x18))(plVar19);
          }
        }
      }
      pcVar9 = local_150[uVar10];
      if (pcVar9 != (char *)0x0) {
        local_90 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        if (*param3 == '\0') {
          snprintf((char *)&local_f0,100,"anime_%s",pcVar9);
          uVar6 = local_f0;
        }
        else {
          snprintf((char *)&local_f0,100,"anime_%s_%s",param3,pcVar9);
          uVar6 = local_f0;
        }
        bVar2 = (byte)local_f0 != '\0';
        local_f0 = 0xcbf29ce484222645;
        if (bVar2) {
          uVar6 = uVar6 & 0xff;
          local_f0 = 0xcbf29ce484222645;
          pbVar15 = pbVar12;
          do {
            local_f0 = (local_f0 ^ uVar6) * 0x100000001b3;
            bVar1 = *pbVar15;
            uVar6 = (ulong)bVar1;
            pbVar15 = pbVar15 + 1;
          } while (bVar1 != 0);
        }
        FUN_0167ba30(*plVar23,&local_f0);
        iVar5 = FUN_0087ccf0(lVar21);
        if (iVar5 == 2) {
          lVar13 = *plVar23;
          uVar22 = 0x40000000;
        }
        else if (iVar5 == 1) {
          lVar13 = *plVar23;
          uVar22 = 0x3f800000;
        }
        else {
          if (iVar5 != 0) goto LAB_01043138;
          lVar13 = *plVar23;
          uVar22 = 0;
        }
        FUN_0167bdb0(uVar22,lVar13,&local_f0);
      }
LAB_01043138:
      pcVar9 = local_1e0[uVar10];
      if (pcVar9 != (char *)0x0) {
        local_90 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        if (*param3 == '\0') {
          snprintf((char *)&local_f0,100,"anime_%s",pcVar9);
          uVar6 = local_f0;
        }
        else {
          snprintf((char *)&local_f0,100,"anime_%s_%s",param3,pcVar9);
          uVar6 = local_f0;
        }
        bVar2 = (byte)local_f0 != '\0';
        local_f0 = 0xcbf29ce484222645;
        if (bVar2) {
          uVar6 = uVar6 & 0xff;
          local_f0 = 0xcbf29ce484222645;
          pbVar15 = pbVar12;
          do {
            local_f0 = (local_f0 ^ uVar6) * 0x100000001b3;
            bVar1 = *pbVar15;
            uVar6 = (ulong)bVar1;
            pbVar15 = pbVar15 + 1;
          } while (bVar1 != 0);
        }
        FUN_0167ba30(*plVar23,&local_f0);
        iVar5 = *(int *)(param_3 + uVar10 * 0x18 + 0x10);
        if (iVar5 == 1) {
          lVar13 = *plVar23;
          uVar22 = 0x3f800000;
        }
        else {
          if (iVar5 != 0) goto LAB_0104321c;
          lVar13 = *plVar23;
          uVar22 = 0;
        }
        FUN_0167bdb0(uVar22,lVar13,&local_f0);
      }
    }
LAB_0104321c:
    uVar6 = 0xcbf29ce484222645;
    if (lVar21 != 0) {
      (**(code **)(*(long *)(lVar21 + 0x48) + 0x18))((long *)(lVar21 + 0x48));
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 6);
  if (param_2 == 2) {
    pcVar11 = *(code **)(param_1 + 0x20);
    if (pcVar11 == (code *)0x0) {
      return;
    }
    uVar10 = *(ulong *)(*plVar23 + 0x2e8);
    if (uVar10 == 0) {
      local_f0 = 0;
    }
    else {
      plVar19 = (long *)(uVar10 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      local_f0 = uVar10;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      pcVar11 = *(code **)(param_1 + 0x20);
    }
    local_1e8 = CONCAT44(local_1e8._4_4_,2);
    uVar14 = (*pcVar11)(local_210,&local_1e8,&local_f0);
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    if (uVar10 != 0) {
      (**(code **)(*(long *)(uVar10 + 0x48) + 0x18))((long *)(uVar10 + 0x48));
    }
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar22 = *(undefined8 *)(param_1 + 0x10);
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (*(char *)(param_1 + 0x138) == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_btlteam_03");
      bVar1 = (byte)local_f0;
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_btlteam_03");
      bVar1 = (byte)local_f0;
    }
    if (bVar1 != 0) {
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar1 != 0);
    }
    lVar16 = *(long *)(*plVar23 + 0x2e8);
    local_1e8 = uVar6;
    if (lVar16 == 0) {
      uVar7 = FUN_0077d470(0);
      puVar8 = &local_1e8;
      goto LAB_010435f8;
    }
    plVar23 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar23 + 0x10))(plVar23);
    uVar7 = FUN_0077d470(lVar16);
    puVar8 = &local_1e8;
  }
  else {
    if (param_2 == 3) {
      pcVar11 = *(code **)(param_1 + 0x20);
      if (pcVar11 == (code *)0x0) {
        return;
      }
      if (*(int *)(param_3 + 0xb0) == 1) {
        uVar10 = *(ulong *)(*plVar23 + 0x2e8);
        if (uVar10 == 0) {
          local_f0 = 0;
        }
        else {
          plVar19 = (long *)(uVar10 + 0x48);
          (**(code **)(*plVar19 + 0x10))(plVar19);
          local_f0 = uVar10;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          pcVar11 = *(code **)(param_1 + 0x20);
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,4);
        uVar6 = (*pcVar11)(local_210,&local_1e8,&local_f0);
        if (local_f0 != 0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        }
      }
      else {
        if (*(int *)(param_3 + 0xb0) != 0) {
          return;
        }
        uVar10 = *(ulong *)(*plVar23 + 0x2e8);
        if (uVar10 == 0) {
          local_f0 = 0;
        }
        else {
          plVar19 = (long *)(uVar10 + 0x48);
          (**(code **)(*plVar19 + 0x10))(plVar19);
          local_f0 = uVar10;
          (**(code **)(*plVar19 + 0x10))(plVar19);
          pcVar11 = *(code **)(param_1 + 0x20);
        }
        local_1e8 = CONCAT44(local_1e8._4_4_,3);
        uVar6 = (*pcVar11)(local_210,&local_1e8,&local_f0);
        if (local_f0 != 0) {
          (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
        }
      }
      local_f0 = 0;
      if (uVar10 != 0) {
        (**(code **)(*(long *)(uVar10 + 0x48) + 0x18))((long *)(uVar10 + 0x48));
      }
      if ((uVar6 & 1) == 0) {
        return;
      }
      uVar22 = *(undefined8 *)(param_1 + 0x10);
      local_90 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      if (*(char *)(param_1 + 0x138) == '\0') {
        snprintf((char *)&local_f0,100,"pane_%s","T_btlteam_icon_00");
        bVar1 = (byte)local_f0;
      }
      else {
        snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_btlteam_icon_00");
        bVar1 = (byte)local_f0;
      }
      local_f0 = 0xcbf29ce484222645;
      if (bVar1 != 0) {
        local_f0 = 0xcbf29ce484222645;
        pbVar12 = (byte *)((ulong)&local_f0 | 1);
        do {
          local_f0 = (local_f0 ^ bVar1) * 0x100000001b3;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar1 != 0);
      }
      lVar16 = *(long *)(*plVar23 + 0x2e8);
      if (lVar16 == 0) {
        uVar7 = FUN_0077d470(0);
        FUN_00ffd700(uVar22,&local_f0,uVar7,10);
        return;
      }
      plVar23 = (long *)(lVar16 + 0x48);
      (**(code **)(*plVar23 + 0x10))(plVar23);
      uVar7 = FUN_0077d470(lVar16);
      FUN_00ffd700(uVar22,&local_f0,uVar7,10);
      (**(code **)(*plVar23 + 0x18))(plVar23);
      return;
    }
    if (param_2 != 4) {
      return;
    }
    uVar10 = 0xcbf29ce484222645;
    pcVar11 = *(code **)(param_1 + 0x20);
    if (pcVar11 == (code *)0x0) {
      return;
    }
    uVar6 = *(ulong *)(*plVar23 + 0x2e8);
    if (uVar6 == 0) {
      local_f0 = 0;
    }
    else {
      plVar19 = (long *)(uVar6 + 0x48);
      (**(code **)(*plVar19 + 0x10))(plVar19);
      local_f0 = uVar6;
      (**(code **)(*plVar19 + 0x10))(plVar19);
      pcVar11 = *(code **)(param_1 + 0x20);
    }
    local_1e8 = CONCAT44(local_1e8._4_4_,5);
    uVar14 = (*pcVar11)(local_210,&local_1e8,&local_f0);
    if (local_f0 != 0) {
      (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
      local_f0 = 0;
    }
    if (uVar6 != 0) {
      (**(code **)(*(long *)(uVar6 + 0x48) + 0x18))((long *)(uVar6 + 0x48));
    }
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar22 = *(undefined8 *)(param_1 + 0x10);
    local_90 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    if (*(char *)(param_1 + 0x138) == '\0') {
      snprintf((char *)&local_f0,100,"pane_%s","T_btlteam_05");
    }
    else {
      snprintf((char *)&local_f0,100,"pane_%s_%s",param3,"T_btlteam_05");
    }
    if ((byte)local_f0 != 0) {
      pbVar12 = (byte *)((ulong)&local_f0 | 1);
      do {
        uVar10 = (uVar10 ^ (byte)local_f0) * 0x100000001b3;
        local_f0._0_1_ = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while ((byte)local_f0 != 0);
    }
    lVar16 = *(long *)(*plVar23 + 0x2e8);
    local_f0 = uVar10;
    if (lVar16 == 0) {
      uVar7 = FUN_0077d470(0);
      puVar8 = &local_f0;
LAB_010435f8:
      FUN_00ffd700(uVar22,puVar8,uVar7,10);
      return;
    }
    plVar23 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar23 + 0x10))(plVar23);
    uVar7 = FUN_0077d470(lVar16);
    puVar8 = &local_f0;
  }
  FUN_00ffd700(uVar22,puVar8,uVar7,10);
  (**(code **)(*plVar23 + 0x18))(plVar23);
  return;
}


