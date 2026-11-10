/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb7480; name: FUN_00bb7480
 */


void FUN_00bb7480(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 ulong param_5)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  byte *pbVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong local_a8;
  ulong local_a0 [8];
  
  lVar9 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8));
  lVar1 = param_1 + 0x100;
  if (lVar9 == 0) {
    if ((param_5 & 1) == 0) {
      if (*(char *)(param_1 + 0x60d) == '\0') {
        return;
      }
      FUN_00ffd3a0(lVar1,"anime_info_in");
      FUN_00ffcf80(lVar1,"anime_info_out");
    }
    else {
      FUN_00ffd3a0(lVar1,"anime_info_in");
      FUN_00ffcf80(lVar1,"anime_info_out");
      FUN_00ffd570(lVar1,"anime_info_out");
      FUN_00ffd450(lVar1,"anime_info_out");
    }
    *(undefined1 *)(param_1 + 0x60d) = 0;
    return;
  }
  lVar13 = *(long *)(param_1 + 0x2b0);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  lVar18 = *(long *)(lVar13 + 0x2e0);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  uVar4 = FUN_0087f070(lVar9);
  uVar14 = *(undefined8 *)(param_1 + 0x5f8);
  uVar5 = FUN_00878a80(lVar9);
  FUN_00bd0080(uVar14,uVar5);
  FUN_014c7bf0(lVar18,0,lVar9);
  FUN_00bb6fe0(param_1,0xf3a3439af010602,0x3fc1ceaaa08d346f);
  FUN_00bb83c0(param_1,lVar9);
  FUN_00ffd430(lVar1,&DAT_02159c28);
  FUN_00ffd430(lVar1,&DAT_02159c30);
  FUN_00ffd430(lVar1,&DAT_02159c38);
  uVar6 = FUN_00bb8680(param_1,param_2,param_3,param_4);
  local_a0[0] = 0xae900a286aa2281b;
  FUN_0167b9b0(lVar13,local_a0,(uVar6 | 1) == 3);
  uVar10 = FUN_0087d610(lVar9,2);
  if ((uVar10 & 1) == 0) {
    FUN_00ffd450(0,lVar1,"anime_egg");
    local_a0[0] = 0x9eafdc7938633d61;
    uVar5 = FUN_008783b0(lVar9);
    iVar7 = FUN_014ae400(0,uVar5);
    if (iVar7 != 0) {
      FUN_014ca220(lVar18,0,iVar7,3,2,1);
      FUN_00bb6fe0(param_1,0x79f5e800afa0ae87,local_a0[0]);
    }
    FUN_0167b9b0(lVar13,local_a0,iVar7 != 0);
    local_a0[0] = 0x9c39dc8d7d3218d0;
    FUN_0167b9b0(lVar13,local_a0,1);
    FUN_00ffcf80(lVar1,"anime_L_icon_seibetsu_00_switch");
    iVar7 = FUN_014adb50(lVar9);
    FUN_00ffd450((float)iVar7,lVar1,"anime_L_icon_seibetsu_00_switch");
    local_a0[0] = 0xaa9746b0d29093b6;
    uVar14 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),local_a0);
    FUN_00ffd840(lVar1,uVar14);
    uVar5 = FUN_0087a5f0(lVar9);
    FUN_014ca220(lVar18,0,uVar5,3,0,1);
    FUN_00bb6fe0(param_1,0xc8f858d01388e617,0x751d2aa832fc528c);
    FUN_014c84c0(lVar18,0,lVar9);
    FUN_00bb6fe0(param_1,0x738145784feacf19,0xf97db3efb146909);
    uVar6 = FUN_00878a50(lVar9);
    uVar8 = FUN_008d3750();
    if (uVar6 == (uVar8 & 0xff)) {
      local_a0[0] = 0x5ad1608d3ced1d6a;
      FUN_0167b9b0(lVar13,local_a0,0);
    }
    else {
      local_a0[0] = 0x5ad1608d3ced1d6a;
      FUN_0167b9b0(lVar13,local_a0,1);
      lVar15 = *(long *)(param_1 + 0x540);
      if (lVar15 == 0) {
        local_a0[0] = 0x5ad1608d3ced1d6a;
        uVar14 = FUN_0103bd80(lVar13,local_a0);
        FUN_0167a660(0,uVar6,uVar14,0,0);
      }
      else {
        plVar17 = (long *)(lVar15 + 0x48);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        local_a0[0] = 0x5ad1608d3ced1d6a;
        uVar14 = FUN_0103bd80(lVar13,local_a0);
        FUN_0167a660(lVar15,uVar6,uVar14,0,0);
        (**(code **)(*plVar17 + 0x18))(plVar17);
      }
    }
    local_a0[0] = 0xa72a010792315ba7;
    lVar15 = *(long *)(param_1 + 0x530);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    uVar14 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_a0);
    uVar10 = FUN_016a6b00(lVar15,lVar9,uVar14,0,0,0);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    FUN_0167b9b0(lVar13,local_a0,(uVar10 & 1) != 0);
    uVar6 = FUN_014adfd0(lVar9);
    FUN_0167b9b0(lVar13,&DAT_02159c20,uVar6 & 1);
    uVar10 = FUN_0087ee60(lVar9);
    if ((uVar10 & 1) == 0) {
      uVar10 = FUN_0087eea0(lVar9);
      if ((uVar10 & 1) == 0) {
        puVar11 = &DAT_02159c28;
      }
      else {
        puVar11 = &DAT_02159c30;
      }
    }
    else {
      puVar11 = &DAT_02159c38;
    }
    FUN_00ffd010(lVar1,puVar11);
    local_a0[0] = 0xb02f871f33d1aed5;
    uVar6 = FUN_0087ea90(lVar9);
    FUN_0167b9b0(lVar13,local_a0,uVar6 & 1);
    local_a0[0] = 0x22c0b73733d07552;
    uVar6 = FUN_00bb8910(param_1,lVar9);
    FUN_0167b9b0(lVar13,local_a0,uVar6 & 1);
    uVar6 = FUN_0087eca0(lVar9);
    uVar8 = FUN_0087ed40(lVar9);
    lVar15 = *(long *)(param_1 + 0x538);
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
    }
    local_a0[0] = 0xb65a076c70065ece;
    uVar14 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_a0);
    FUN_016a7910(lVar15,uVar6,1,uVar14,0,0);
    FUN_0167b9b0(lVar13,local_a0,1);
    local_a0[0] = 0xb65a086c70066081;
    if ((uVar6 & 0xff) == (uVar8 & 0xff)) {
      FUN_0167b9b0(lVar13,local_a0,0);
    }
    else {
      uVar14 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),local_a0);
      FUN_016a7910(lVar15,uVar8,1,uVar14,0,0);
      FUN_0167b9b0(lVar13,local_a0,1);
    }
    if (lVar15 != 0) {
      (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
    }
    uVar6 = FUN_00879890(lVar9);
    snprintf((char *)local_a0,0x40,"anime_L_marker_set_01_glavel_%02d",uVar6 & 0xff);
    FUN_00ffcf80(lVar1,local_a0);
    uVar10 = FUN_0087a740(lVar9);
    uVar16 = uVar10 & 0xffffffff;
    cVar3 = thunk_FUN_00877320(uVar10,0);
    FUN_00bb8bc0(param_1,"anime_L_hp_00",(int)cVar3);
    cVar3 = thunk_FUN_00877320(uVar16,1);
    FUN_00bb8bc0(param_1,"anime_L_attack_00",(int)cVar3);
    cVar3 = thunk_FUN_00877320(uVar16,2);
    FUN_00bb8bc0(param_1,"anime_L_defense_00",(int)cVar3);
    cVar3 = thunk_FUN_00877320(uVar16,3);
    FUN_00bb8bc0(param_1,"anime_L_spattack_00",(int)cVar3);
    cVar3 = thunk_FUN_00877320(uVar16,4);
    FUN_00bb8bc0(param_1,"anime_L_spdefense_00",(int)cVar3);
    cVar3 = thunk_FUN_00877320(uVar16,5);
    FUN_00bb8bc0(param_1,"anime_L_speed_00",(int)cVar3);
    uVar5 = FUN_008787f0(lVar9);
    FUN_00bb8e40(param_1,uVar5);
    uVar5 = FUN_0087cdb0(lVar9);
    FUN_014c93c0(lVar18,0,uVar5);
    FUN_00bb6fe0(param_1,0xf392724f30034706,0x37438d03a613e3e8);
    FUN_00ffcf80(lVar1,"anime_jadge");
    if (*(int *)(param_1 + 0x610) == 1) {
      FUN_00ffd450(0,lVar1,"anime_jadge");
      uVar5 = FUN_0087afd0(lVar9);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      uVar5 = FUN_0087ac70(lVar9);
      FUN_014ca220(lVar18,1,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x2cca9368e16718be,0xa29e58f5131383b0);
      uVar5 = FUN_0087ac30(lVar9,1);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x6e318271e06fbe,0x5cfe967987ed1fa8);
      uVar5 = FUN_0087ac30(lVar9,2);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x6e318271e06fbe,0x9826062353234efe);
      uVar5 = FUN_0087ac30(lVar9,3);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x6e318271e06fbe,0xf83ac659226ff839);
      uVar5 = FUN_0087ac30(lVar9,4);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x6e318271e06fbe,0xa7e2197105426859);
      uVar5 = FUN_0087ac30(lVar9,5);
      FUN_014ca220(lVar18,0,uVar5,3,0,1);
      FUN_00bb6fe0(param_1,0x6e318271e06fbe,0x4b4188e72e84b6f7);
      cVar3 = FUN_0087b890(lVar9);
      if (cVar3 == '\0') {
        uVar6 = 0;
LAB_00bb82b4:
        do {
          snprintf((char *)local_a0,0x40,"pane_L_skill_%02d",uVar6);
          uVar10 = local_a0[0] & 0xff;
          local_a8 = 0xcbf29ce484222645;
          if ((char)local_a0[0] != '\0') {
            local_a8 = 0xcbf29ce484222645;
            pbVar12 = (byte *)((ulong)local_a0 | 1);
            do {
              local_a8 = (local_a8 ^ uVar10) * 0x100000001b3;
              bVar2 = *pbVar12;
              uVar10 = (ulong)bVar2;
              pbVar12 = pbVar12 + 1;
            } while (bVar2 != 0);
          }
          FUN_0167b9b0(lVar13,&local_a8,0);
          uVar6 = uVar6 + 1;
        } while (uVar6 != 4);
      }
      else {
        uVar6 = 0;
        do {
          uVar5 = FUN_0087b880(lVar9,uVar6);
          uVar8 = FUN_00880ae0();
          snprintf((char *)local_a0,0x40,"pane_L_skill_%02d_T_skill_name_00",uVar6);
          FUN_014c9660(lVar18,0,uVar5);
          uVar16 = local_a0[0] & 0xff;
          uVar10 = 0xcbf29ce484222645;
          if ((char)local_a0[0] != '\0') {
            uVar10 = 0xcbf29ce484222645;
            pbVar12 = (byte *)((ulong)local_a0 | 1);
            do {
              uVar10 = (uVar10 ^ uVar16) * 0x100000001b3;
              bVar2 = *pbVar12;
              uVar16 = (ulong)bVar2;
              pbVar12 = pbVar12 + 1;
            } while (bVar2 != 0);
          }
          FUN_00bb6fe0(param_1,0x9b6466d279c134ae,uVar10);
          snprintf((char *)local_a0,0x40,"anime_L_skill_%02d_type_%02d",uVar6,uVar8 & 0xff);
          FUN_00ffcf80(lVar1,local_a0);
          snprintf((char *)local_a0,0x40,"pane_L_skill_%02d",uVar6);
          uVar10 = local_a0[0] & 0xff;
          local_a8 = 0xcbf29ce484222645;
          if ((char)local_a0[0] != '\0') {
            local_a8 = 0xcbf29ce484222645;
            pbVar12 = (byte *)((ulong)local_a0 | 1);
            do {
              local_a8 = (local_a8 ^ uVar10) * 0x100000001b3;
              bVar2 = *pbVar12;
              uVar10 = (ulong)bVar2;
              pbVar12 = pbVar12 + 1;
            } while (bVar2 != 0);
          }
          FUN_0167b9b0(lVar13,&local_a8,1);
          uVar6 = uVar6 + 1;
          uVar8 = FUN_0087b890(lVar9);
        } while (uVar6 < (uVar8 & 0xff));
        if (uVar6 < 4) goto LAB_00bb82b4;
      }
      FUN_0087f0c0(lVar9,uVar4 & 1);
    }
    else {
      FUN_00ffd450(0x3f800000,lVar1,"anime_jadge");
      uVar6 = FUN_014adc40(lVar9,0);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0xa29e59f513138563);
      }
      uVar6 = FUN_014adc40(lVar9,1);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0x5cfe977987ed215b);
      }
      uVar6 = FUN_014adc40(lVar9,2);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0x98260723532350b1);
      }
      uVar6 = FUN_014adc40(lVar9,3);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0xf83ac559226ff686);
      }
      uVar6 = FUN_014adc40(lVar9,4);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0xa7e21871054266a6);
      }
      uVar6 = FUN_014adc40(lVar9,5);
      if (uVar6 < 7) {
        FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159c40 + (ulong)uVar6 * 8),0x4b4187e72e84b544);
      }
      uVar6 = FUN_014adce0(lVar9);
      if (3 < uVar6) goto LAB_00bb836c;
      FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_01d4d960 + (ulong)uVar6 * 8),0x83deed3b6cc0a5);
      FUN_0087f0c0(lVar9,uVar4 & 1);
    }
  }
  else {
    FUN_00ffd450(0x3f800000,lVar1,"anime_egg");
    FUN_00ffd010(lVar1,&DAT_02159c28);
    local_a0[0] = 0x9c39dc8d7d3218d0;
    FUN_0167b9b0(lVar13,local_a0,0);
    local_a0[0] = 0xa72a010792315ba7;
    FUN_0167b9b0(lVar13,local_a0,0);
    local_a0[0] = 0xb02f871f33d1aed5;
    FUN_0167b9b0(lVar13,local_a0,0);
    local_a0[0] = 0x22c0b73733d07552;
    FUN_0167b9b0(lVar13,local_a0,0);
    FUN_0167b9b0(lVar13,&DAT_02159c20,0);
    FUN_0087f0c0(lVar9,uVar4 & 1);
  }
  if ((param_5 & 1) == 0) {
    if (*(char *)(param_1 + 0x60d) != '\0') goto LAB_00bb836c;
    FUN_00ffd3a0(lVar1,"anime_info_out");
    FUN_00ffcf80(lVar1,"anime_info_in");
  }
  else {
    FUN_00ffd3a0(lVar1,"anime_info_out");
    FUN_00ffcf80(lVar1,"anime_info_in");
    FUN_00ffd570(lVar1,"anime_info_in");
    FUN_00ffd450(lVar1,"anime_info_in");
  }
  *(undefined1 *)(param_1 + 0x60d) = 1;
LAB_00bb836c:
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  return;
}


