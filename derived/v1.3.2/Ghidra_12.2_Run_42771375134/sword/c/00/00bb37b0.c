/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb37b0; name: FUN_00bb37b0
 */


void FUN_00bb37b0(long param_1,uint param_2,ulong param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong local_90;
  char acStack_88 [8];
  char local_80 [8];
  char acStack_78 [8];
  undefined2 local_70;
  ulong local_48;
  
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if ((param_3 & 1) == 0) {
    uVar10 = 0;
    do {
      while (uVar5 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),0,param_2,uVar10),
            (uVar5 & 1) == 0) {
        lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,param_2,uVar10);
        bVar2 = false;
        if (*(int *)(param_1 + 0x618) == 1) {
          if (((*(char *)(param_1 + 0x620) == '\0') ||
              (piVar6 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8)), *piVar6 != 0)) ||
             (*(byte *)(piVar6 + 1) != param_2)) {
            bVar2 = false;
          }
          else {
            bVar2 = uVar10 == *(byte *)((long)piVar6 + 5);
          }
        }
        FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar11,0,uVar10,0);
        if (lVar11 != 0) {
          uVar12 = *(undefined8 *)(param_1 + 0x5f0);
          if (bVar2) {
            uVar3 = 1;
          }
          else {
            uVar5 = FUN_00bc8500(param_1,0,param_2,uVar10);
            uVar3 = 0;
            if ((uVar5 & 1) == 0) {
              uVar3 = 2;
            }
          }
          FUN_00bd3390(uVar12,0,uVar10,uVar3,0);
          uVar12 = *(undefined8 *)(param_1 + 0x5f0);
          uVar3 = FUN_00bb8680(param_1,0,param_2,uVar10);
          FUN_00bd34e0(uVar12,0,uVar10,uVar3);
        }
        uVar10 = uVar10 + 1;
        if (uVar10 == 0x1e) goto LAB_00bb3a94;
      }
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),0,0,uVar10,0);
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x1e);
  }
  else {
    uVar10 = 0;
    do {
      uVar5 = FUN_00bd1d20(*(undefined8 *)(param_1 + 0x5f0),0,param_2,uVar10);
      lVar11 = thunk_FUN_00bccb30(*(undefined8 *)(param_1 + 0x5e8),0,param_2,uVar10);
      if ((uVar5 & 1) == 0) {
        if (((*(int *)(param_1 + 0x618) == 1) && (*(char *)(param_1 + 0x620) != '\0')) &&
           ((piVar6 = (int *)FUN_00bd0180(*(undefined8 *)(param_1 + 0x5f8)), *piVar6 == 0 &&
            (*(byte *)(piVar6 + 1) == param_2)))) {
          bVar2 = uVar10 == *(byte *)((long)piVar6 + 5);
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
      }
      FUN_00bd13c0(*(undefined8 *)(param_1 + 0x5f0),lVar11,0,uVar10,0);
      if (lVar11 != 0) {
        uVar12 = *(undefined8 *)(param_1 + 0x5f0);
        if (bVar2) {
          uVar3 = 1;
        }
        else {
          uVar5 = FUN_00bc8500(param_1,0,param_2,uVar10);
          uVar3 = 0;
          if ((uVar5 & 1) == 0) {
            uVar3 = 2;
          }
        }
        FUN_00bd3390(uVar12,0,uVar10,uVar3,0);
        uVar12 = *(undefined8 *)(param_1 + 0x5f0);
        uVar3 = FUN_00bb8680(param_1,0,param_2,uVar10);
        FUN_00bd34e0(uVar12,0,uVar10,uVar3);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x1e);
  }
LAB_00bb3a94:
  uVar5 = 0xcbf29ce484222645;
  FUN_00bba7e0(param_1,param_2,0);
  iVar4 = FUN_0150b180(lVar9,param_2);
  if (iVar4 - 1U < 0x12) {
    snprintf((char *)&local_90,0x40,"anime_L_bg_box_list_01_bg_%02d",iVar4 - 1U);
    uVar7 = local_90 & 0xff;
    if ((char)local_90 == '\0') goto LAB_00bb3b3c;
  }
  else {
    local_70 = 0x74;
    local_80[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x10];
    local_80[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x11];
    local_80[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x12];
    local_80[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x13];
    local_80[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x14];
    local_80[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x15];
    local_80[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x16];
    local_80[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x17];
    acStack_78[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x18];
    acStack_78[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x19];
    acStack_78[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1a];
    acStack_78[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1b];
    acStack_78[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1c];
    acStack_78[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1d];
    acStack_78[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1e];
    acStack_78[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1f];
    local_90._0_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0];
    local_90._1_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[1];
    local_90._2_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[2];
    local_90._3_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[3];
    local_90._4_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[4];
    local_90._5_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[5];
    local_90._6_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[6];
    local_90._7_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[7];
    acStack_88[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[8];
    acStack_88[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[9];
    acStack_88[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[10];
    acStack_88[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xb];
    acStack_88[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xc];
    acStack_88[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xd];
    acStack_88[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xe];
    acStack_88[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xf];
    uVar7 = 0x61;
  }
  pbVar8 = (byte *)((ulong)&local_90 | 1);
  do {
    uVar5 = (uVar5 ^ uVar7) * 0x100000001b3;
    bVar1 = *pbVar8;
    uVar7 = (ulong)bVar1;
    pbVar8 = pbVar8 + 1;
  } while (bVar1 != 0);
LAB_00bb3b3c:
  local_48 = uVar5;
  FUN_00ffd010(param_1 + 0x100,&local_48);
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))((long *)(lVar9 + 0x48));
  }
  return;
}


