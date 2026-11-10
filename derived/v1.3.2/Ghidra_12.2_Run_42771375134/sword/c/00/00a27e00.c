/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a27e00; name: FUN_00a27e00
 */


void FUN_00a27e00(long param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long alStack_160 [13];
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80 [2];
  undefined1 *local_70;
  long local_68;
  long local_60;
  long local_48;
  
  uVar3 = FUN_00ff5c80(param_1,param_1 + 0x550,&LAB_01600000);
  local_80[0] = CONCAT44(local_80[0]._4_4_,1);
  lVar5 = param_1 + 0x5e0;
  if (*(long *)(param_1 + 0x5e8) != 0) {
    lVar5 = 0;
  }
  lVar8 = param_1 + 0x600;
  if (*(long *)(param_1 + 0x608) != 0) {
    lVar8 = lVar5;
  }
  lVar5 = param_1 + 0x620;
  if (*(long *)(param_1 + 0x628) != 0) {
    lVar5 = lVar8;
  }
  lVar8 = param_1 + 0x640;
  if (*(long *)(param_1 + 0x648) != 0) {
    lVar8 = lVar5;
  }
  lVar5 = param_1 + 0x660;
  if (*(long *)(param_1 + 0x668) != 0) {
    lVar5 = lVar8;
  }
  lVar8 = param_1 + 0x680;
  if (*(long *)(param_1 + 0x688) != 0) {
    lVar8 = lVar5;
  }
  lVar5 = param_1 + 0x6a0;
  if (*(long *)(param_1 + 0x6a8) != 0) {
    lVar5 = lVar8;
  }
  lVar8 = param_1 + 0x6c0;
  if (*(long *)(param_1 + 0x6c8) != 0) {
    lVar8 = lVar5;
  }
  lVar5 = param_1 + 0x6e0;
  if (*(long *)(param_1 + 0x6e8) != 0) {
    lVar5 = lVar8;
  }
  lVar8 = param_1 + 0x700;
  if (*(long *)(param_1 + 0x708) != 0) {
    lVar8 = lVar5;
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar4 = (**(code **)(*(long *)(param_1 + 0x550) + 0x18))(param_1 + 0x550);
  FUN_016af060(lVar8,local_80,0x100000,uVar4);
  FUN_00891380(&local_48,param_1);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  FUN_0089b740(param_1);
  FUN_00891470(param_1);
  lVar5 = FUN_00a28c10(param_1);
  FUN_00a26660();
  FUN_00a26750(lVar5);
  *(undefined8 *)(lVar5 + 0x380) = *(undefined8 *)(param_1 + 0x728);
  FUN_0089b980(local_80,"bin/font/bmp/font_fs_32_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),local_80,"font_fs_32_00.bffnt");
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_0089b980(local_80,"bin/font/bmp/font_fs_42_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),local_80,"font_fs_42_00.bffnt");
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_0089b980(local_80,"bin/font/bmp/font_fs_72_00.bffnt");
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_00ff7f90(*(long *)(param_1 + 0x98),local_80,"font_fs_72_00.bffnt");
  }
  if ((local_68 != 0) && (local_80[0] != 0)) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
  }
  local_80[0] = 0;
  local_80[1] = 0xcbf29ce484222645;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_006cf0a0(local_80,&DAT_0262d7a0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(local_80,&DAT_0262d7b8);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(local_80,&DAT_0262d7d0);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(local_80,&DAT_0262d7e8);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(local_80,PTR_DAT_02718f18);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  FUN_006cf0a0(local_80,&DAT_0262d800);
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00ff8420(*(long *)(param_1 + 0xb8),local_80,10);
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  lVar8 = *(long *)(param_1 + 0x548);
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2df00(&local_88,lVar8,local_80,0,"TopView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  plVar1 = (long *)(param_1 + 0x548);
  *(long *)(param_1 + 0x730) = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2e260(&local_90,lVar8,local_80,0,"BossView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    local_90 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2e600(&local_98,lVar8,local_80,0,"View_SelectAction");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_98 != 0) {
    (**(code **)(*(long *)(local_98 + 0x48) + 0x18))();
    local_98 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2e9c0(&local_a0,lVar8,local_80,0,"TargetSelectView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_a0 != 0) {
    (**(code **)(*(long *)(local_a0 + 0x48) + 0x18))();
    local_a0 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2ede0(&local_a8,lVar8,local_80,0,"BallSelectView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_a8 != 0) {
    (**(code **)(*(long *)(local_a8 + 0x48) + 0x18))();
    local_a8 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2f160(&local_88,lVar8,local_80,0,"RemainTimeView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  *(long *)(param_1 + 0x748) = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2f4d0(&local_88,lVar8,local_80,0,"CommonBGView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  *(long *)(param_1 + 0x738) = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar8 = *plVar1;
  local_80[0] = *(long *)(lVar8 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2f820(&local_88,lVar8,local_80,0,"InfoView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  lVar8 = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a2fd20(&local_b0,lVar9,local_80,0,"TokuseiView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a30110(&local_88,lVar9,local_80,0,"BlackView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  *(long *)(param_1 + 0x740) = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a30460(&local_b8,lVar9,local_80,0,"ActionSelectSubView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_b8 != 0) {
    (**(code **)(*(long *)(local_b8 + 0x48) + 0x18))();
    local_b8 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a30460(&local_c0,lVar9,local_80,0,"WazaSelectSubView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a307f0(&local_c8,lVar9,local_80,0,"OpponentInfoView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_c8 != 0) {
    (**(code **)(*(long *)(local_c8 + 0x48) + 0x18))();
    local_c8 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a30be0(&local_d0,lVar9,local_80,0,"View_SelectWaza");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a30fc0(&local_d8,lVar9,local_80,0,"WazaInfoView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_d8 != 0) {
    (**(code **)(*(long *)(local_d8 + 0x48) + 0x18))();
    local_d8 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a315c0(&local_e0,lVar9,local_80,0,"RaidResultView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
    local_e0 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a31b10(&local_88,lVar9,local_80,0,"SpectatorViewName");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  *(long *)(param_1 + 0x750) = local_88;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00a31f30(&local_e8,lVar9,local_80,0,"FogView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_e8 != 0) {
    (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
    local_e8 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_00b9b170(&local_88,lVar9,local_80,0,"TipsView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  FUN_01039f80(local_88,0xb953136e7bc1c991);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_008a2880(&local_f0,lVar9,local_80,0,"SysMessageView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  lVar9 = *plVar1;
  local_80[0] = *(long *)(lVar9 + 0x58);
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x10))();
  }
  FUN_008a2fb0(&local_f8,lVar9,local_80,0,"OptionBarView");
  if (local_80[0] != 0) {
    (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
    local_80[0] = 0;
  }
  if (local_f8 != 0) {
    (**(code **)(*(long *)(local_f8 + 0x48) + 0x18))();
    local_f8 = 0;
  }
  FUN_00a28da0(lVar5 + 0x648,param_1,lVar5,uVar3);
  uVar3 = FUN_00a364e0();
  *(undefined8 *)(lVar5 + 0x470) = uVar3;
  uVar3 = FUN_00a364e0();
  uVar4 = *(undefined8 *)(lVar5 + 0x390);
  *(undefined8 *)(lVar5 + 0x480) = uVar3;
  *(undefined8 *)(lVar8 + 0x608) = *(undefined8 *)(lVar5 + 0x380);
  *(undefined8 *)(lVar8 + 0x610) = uVar4;
  lVar5 = *(long *)(param_1 + 0x750);
  pcVar7 = *(code **)(lVar5 + 0x5e8);
  alStack_160[0] = param_1;
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x5f0) = 0;
    *(undefined8 *)(lVar5 + 0x5f8) = 0;
    *(undefined8 *)(lVar5 + 0x5e0) = 0;
    *(undefined8 *)(lVar5 + 0x5e8) = 0;
    (*pcVar7)(lVar5 + 0x600);
  }
  FUN_00a322a0(alStack_160,lVar5 + 0x600);
  *(undefined1 **)(lVar5 + 0x5f8) = &LAB_00a322b0;
  *(code **)(lVar5 + 0x5e8) = FUN_00a32290;
  *(code **)(lVar5 + 0x5f0) = FUN_00a322a0;
  *(undefined8 *)(lVar5 + 0x5e0) = &LAB_00a32280;
  FUN_00a32290(alStack_160);
  uVar6 = (**(code **)(**(long **)(param_1 + 0x728) + 0x880))();
  if (((uVar6 & 1) != 0) &&
     (iVar2 = (**(code **)(**(long **)(param_1 + 0x728) + 0x870))(), iVar2 != 2)) {
    FUN_00a1fd10(8);
  }
  return;
}


