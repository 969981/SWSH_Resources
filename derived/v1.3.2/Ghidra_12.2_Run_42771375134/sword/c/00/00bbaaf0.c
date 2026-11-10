/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bbaaf0; name: FUN_00bbaaf0
 */


bool FUN_00bbaaf0(long param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong local_78;
  ulong local_70;
  char acStack_68 [8];
  char local_60 [8];
  char acStack_58 [8];
  undefined2 local_50;
  
  FUN_00bd15f0(*(undefined8 *)(param_1 + 0x5f0),0,2,0x1e);
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),0,0);
  FUN_00bd12d0(*(undefined8 *)(param_1 + 0x5f0),0,1);
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  uVar9 = 0xcbf29ce484222645;
  uVar2 = FUN_0150b350(lVar7);
  FUN_00bba7e0(param_1,uVar2,0);
  iVar3 = FUN_0150b180(lVar7,uVar2);
  if (iVar3 - 1U < 0x12) {
    snprintf((char *)&local_70,0x40,"anime_L_bg_box_list_01_bg_%02d",iVar3 - 1U);
    uVar4 = local_70 & 0xff;
    if ((char)local_70 != '\0') goto LAB_00bbac28;
  }
  else {
    local_50 = 0x74;
    local_60[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x10];
    local_60[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x11];
    local_60[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x12];
    local_60[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x13];
    local_60[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x14];
    local_60[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x15];
    local_60[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x16];
    local_60[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x17];
    acStack_58[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x18];
    acStack_58[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x19];
    acStack_58[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1a];
    acStack_58[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1b];
    acStack_58[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1c];
    acStack_58[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1d];
    acStack_58[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1e];
    acStack_58[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0x1f];
    local_70._0_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0];
    local_70._1_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[1];
    local_70._2_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[2];
    local_70._3_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[3];
    local_70._4_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[4];
    local_70._5_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[5];
    local_70._6_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[6];
    local_70._7_1_ = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[7];
    acStack_68[0] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[8];
    acStack_68[1] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[9];
    acStack_68[2] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[10];
    acStack_68[3] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xb];
    acStack_68[4] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xc];
    acStack_68[5] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xd];
    acStack_68[6] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xe];
    acStack_68[7] = s_anime_L_bg_box_list_01_bg_defaul_01d14e57[0xf];
    uVar4 = 0x61;
LAB_00bbac28:
    pbVar5 = (byte *)((ulong)&local_70 | 1);
    do {
      uVar9 = (uVar9 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar5;
      uVar4 = (ulong)bVar1;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  lVar8 = param_1 + 0x100;
  local_78 = uVar9;
  FUN_00ffd010(lVar8,&local_78);
  FUN_00ffcf80(lVar8,"anime_box_shift_reset");
  FUN_00ffcf80(lVar8,"anime_L_header_box_00_arrow_reset");
  FUN_00ffdc80(lVar8,"poke_panel");
  local_70 = FUN_016b8190();
  if ((*(char *)(param_1 + 0x60c) != '\0') && (*(char *)(param_1 + 0x620) == '\0')) {
    FUN_00bb50c0(param_1,&local_70,0);
  }
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_70);
    cVar6 = *(char *)(param_1 + 0x620);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_70);
    cVar6 = *(char *)(param_1 + 0x620);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_70);
    cVar6 = *(char *)(param_1 + 0x620);
    goto joined_r0x00bbad54;
  default:
    FUN_00bbcd10(param_1,&local_70);
    cVar6 = *(char *)(param_1 + 0x620);
joined_r0x00bbad54:
    if (lVar7 == 0) goto LAB_00bbacf8;
    goto LAB_00bbace8;
  }
  if (lVar7 != 0) {
LAB_00bbace8:
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
  }
LAB_00bbacf8:
  return cVar6 == '\0';
}


