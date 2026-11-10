/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bba420; name: FUN_00bba420
 */


undefined8 FUN_00bba420(long param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  short sVar14;
  byte *pbVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong uVar19;
  ulong local_a0;
  char acStack_98 [8];
  char local_90 [8];
  char acStack_88 [8];
  undefined2 local_80;
  ulong local_58;
  
  lVar18 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
  }
  lVar16 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  if (lVar18 != 0) {
    (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
  }
  uVar7 = FUN_0150b350(lVar16);
  iVar8 = FUN_01509eb0(lVar16);
  iVar10 = uVar7 + param_2;
  if (-1 < iVar10) {
    iVar1 = 0;
    if (iVar8 <= iVar10) {
      iVar1 = iVar8;
    }
    iVar8 = -iVar1;
  }
  uVar4 = iVar10 + iVar8;
  if (uVar4 == uVar7) {
    uVar17 = 0;
    goto joined_r0x00bba7cc;
  }
  uVar17 = *(undefined8 *)(param_1 + 0x5f0);
  uVar19 = 0;
  do {
    uVar11 = FUN_00bd1d20(uVar17,0,uVar4,uVar19 & 0xffffffff);
    if ((uVar11 & 1) == 0) {
      lVar18 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,uVar4,uVar19 & 0xffffffff);
    }
    else {
      lVar18 = 0;
    }
    FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar18,2,uVar19 & 0xffffffff,0);
    bVar5 = false;
    if (*(int *)(param_1 + 0x618) == 1) {
      lVar12 = FUN_00bd1790(*(undefined8 *)(param_1 + 0x5f0),2);
      if (lVar18 == 0) {
        sVar6 = 0;
        piVar13 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
        if (*(short *)((long)piVar13 + 6) != 0) goto LAB_00bba584;
LAB_00bba5c8:
        uVar17 = *(undefined8 *)(param_1 + 0x5f8);
        uVar3 = *(undefined1 *)(lVar12 + uVar19);
        sVar14 = sVar6;
      }
      else {
        sVar6 = FUN_008787f0(lVar18);
        piVar13 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8));
        if (*(short *)((long)piVar13 + 6) == 0) goto LAB_00bba5c8;
LAB_00bba584:
        if (((*piVar13 != 0) || (uVar4 != *(byte *)(piVar13 + 1))) ||
           (uVar19 != *(byte *)((long)piVar13 + 5))) goto LAB_00bba5c8;
        uVar17 = *(undefined8 *)(param_1 + 0x5f8);
        uVar3 = *(undefined1 *)(lVar12 + uVar19);
        sVar14 = 0;
      }
      FUN_00bcfef0(uVar17,sVar14,0,uVar3);
      bVar5 = sVar6 == 0;
    }
    if (lVar18 != 0) {
      uVar17 = *(undefined8 *)(param_1 + 0x5f0);
      uVar11 = FUN_00bc8500(param_1,0,uVar4,uVar19 & 0xffffffff);
      uVar9 = 0;
      if ((uVar11 & 1) == 0) {
        uVar9 = 2;
      }
      FUN_00bd3390(uVar17,2,uVar19 & 0xffffffff,uVar9,bVar5);
      uVar17 = *(undefined8 *)(param_1 + 0x5f0);
      uVar9 = FUN_00bb8680(param_1,0,uVar4,uVar19 & 0xffffffff);
      FUN_00bd34e0(uVar17,2,uVar19 & 0xffffffff,uVar9);
    }
    uVar17 = *(undefined8 *)(param_1 + 0x5f0);
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x1e);
  uVar19 = 0xcbf29ce484222645;
  FUN_00bd12d0(uVar17,0,1);
  FUN_00bba7e0(param_1,uVar4,1);
  iVar10 = FUN_0150b180(lVar16,uVar4);
  if (iVar10 - 1U < 0x12) {
    snprintf((char *)&local_a0,0x40,"anime_L_bg_box_list_02_bg_%02d",iVar10 - 1U);
    uVar11 = local_a0 & 0xff;
    if ((char)local_a0 != '\0') goto LAB_00bba6e8;
  }
  else {
    local_80 = 0x74;
    local_90[0] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x10];
    local_90[1] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x11];
    local_90[2] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x12];
    local_90[3] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x13];
    local_90[4] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x14];
    local_90[5] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x15];
    local_90[6] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x16];
    local_90[7] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x17];
    acStack_88[0] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x18];
    acStack_88[1] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x19];
    acStack_88[2] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1a];
    acStack_88[3] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1b];
    acStack_88[4] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1c];
    acStack_88[5] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1d];
    acStack_88[6] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1e];
    acStack_88[7] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0x1f];
    local_a0._0_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0];
    local_a0._1_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[1];
    local_a0._2_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[2];
    local_a0._3_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[3];
    local_a0._4_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[4];
    local_a0._5_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[5];
    local_a0._6_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[6];
    local_a0._7_1_ = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[7];
    acStack_98[0] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[8];
    acStack_98[1] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[9];
    acStack_98[2] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[10];
    acStack_98[3] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0xb];
    acStack_98[4] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0xc];
    acStack_98[5] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0xd];
    acStack_98[6] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0xe];
    acStack_98[7] = s_anime_L_bg_box_list_02_bg_defaul_01d33dc7[0xf];
    uVar11 = 0x61;
LAB_00bba6e8:
    pbVar15 = (byte *)((ulong)&local_a0 | 1);
    do {
      uVar19 = (uVar19 ^ uVar11) * 0x100000001b3;
      bVar2 = *pbVar15;
      uVar11 = (ulong)bVar2;
      pbVar15 = pbVar15 + 1;
    } while (bVar2 != 0);
  }
  param_1 = param_1 + 0x100;
  local_58 = uVar19;
  FUN_00ffd010(param_1,&local_58);
  FUN_0150b270(lVar16,uVar4);
  if (param_2 < 0) {
    FUN_00ffd3a0(param_1,"anime_box_shift_left");
    FUN_00ffcf80(param_1,"anime_box_shift_right");
    FUN_00ffcf80(param_1,"anime_L_header_box_00_arrow_l");
    uVar17 = 1;
  }
  else {
    FUN_00ffd3a0(param_1,"anime_box_shift_right");
    FUN_00ffcf80(param_1,"anime_box_shift_left");
    FUN_00ffcf80(param_1,"anime_L_header_box_00_arrow_r");
    uVar17 = 1;
  }
joined_r0x00bba7cc:
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  return uVar17;
}


