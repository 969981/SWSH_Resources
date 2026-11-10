/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb29e0; name: FUN_00bb29e0
 */


void FUN_00bb29e0(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined *local_100;
  code *local_f8;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  long local_78;
  long local_70 [2];
  
  puVar2 = PTR_DAT_0271b300;
  uVar16 = *(undefined8 *)(*(long *)PTR_DAT_0271b300 + 0x48);
  plVar14 = *(long **)(param_1 + 8);
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar14;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
  lVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,0x1e0,8);
  if (lVar12 == 0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  FUN_00bcc8a0(lVar12,uVar16);
  *(long **)(lVar12 + 8) = plVar14;
  *(long *)(lVar12 + 0x10) = lVar12;
  *(undefined8 *)(lVar12 + 0x18) = 0x1e0;
  *(undefined8 *)(lVar12 + 0x20) = 8;
  *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5e8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5e8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5e8) = 0;
  }
  *(long *)(param_1 + 0x5e8) = lVar12;
  lVar11 = FUN_00bcbf70(&local_100,plVar14);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  local_70[0] = *(long *)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x5f0) = lVar11;
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
  }
  FUN_00bd0590(lVar11,local_70,*(undefined8 *)(param_1 + 0x4c8),
               *(undefined8 *)(*(long *)puVar2 + 0x28));
  if (local_70[0] != 0) {
    (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
    local_70[0] = 0;
  }
  lVar11 = FUN_00bcc050(&local_100,plVar14);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f8) = 0;
  }
  local_78 = *(long *)(param_1 + 0x2b0);
  *(long *)(param_1 + 0x5f8) = lVar11;
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x10))();
  }
  FUN_00bcfcb0(lVar11,&local_78,*(undefined8 *)(param_1 + 0x4e8),
               *(undefined8 *)(*(long *)puVar2 + 0x68));
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  lVar11 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar12 == 0) {
    uVar9 = FUN_0150b350(0);
  }
  else {
    plVar14 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    uVar9 = FUN_0150b350(lVar12);
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = param_1 + 0x100;
  FUN_00bb37b0(param_1,uVar9,0);
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00bb9350(param_1,0,uVar9,0,0,0);
    FUN_00bb9350(param_1,0,uVar9,1,0,0);
    FUN_00bb9350(param_1,0,uVar9,2,0,0);
    FUN_00bb9350(param_1,0,uVar9,3,0,0);
    FUN_00bb9350(param_1,0,uVar9,4,0,0);
    FUN_00bb9350(param_1,0,uVar9,5,0,0);
    FUN_00bb9350(param_1,0,uVar9,6,0,0);
    FUN_00bb9350(param_1,0,uVar9,7,0,0);
    FUN_00bb9350(param_1,0,uVar9,8,0,0);
    FUN_00bb9350(param_1,0,uVar9,9,0,0);
    FUN_00bb9350(param_1,0,uVar9,10,0,0);
    FUN_00bb9350(param_1,0,uVar9,0xb,0,0);
    FUN_00bb9350(param_1,0,uVar9,0xc,0,0);
    FUN_00bb9350(param_1,0,uVar9,0xd,0,0);
    FUN_00bb9350(param_1,0,uVar9,0xe,0,0);
    FUN_00bb9350(param_1,0,uVar9,0xf,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x10,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x11,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x12,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x13,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x14,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x15,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x16,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x17,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x18,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x19,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x1a,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x1b,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x1c,0,0);
    FUN_00bb9350(param_1,0,uVar9,0x1d,0,0);
  }
  uVar9 = *(undefined4 *)(param_1 + 0x614);
  FUN_00bb3b90(param_1,uVar9);
  if (*(int *)(param_1 + 0x618) == 1) {
    FUN_00bb9350(param_1,1,uVar9,0,0,0);
    FUN_00bb9350(param_1,1,uVar9,1,0,0);
    FUN_00bb9350(param_1,1,uVar9,2,0,0);
    FUN_00bb9350(param_1,1,uVar9,3,0,0);
    FUN_00bb9350(param_1,1,uVar9,4,0,0);
    FUN_00bb9350(param_1,1,uVar9,5,0,0);
  }
  local_100 = (undefined *)0xfd0b25dceda70c7b;
  uVar16 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_100);
  lVar12 = *(long *)(param_1 + 0x508);
  FUN_0168b110(lVar12,*(undefined8 *)(*(long *)puVar2 + 0xa8),uVar16,0);
  *(undefined1 *)(lVar12 + 0x3c1) = 1;
  FUN_00bb3db0(param_1);
  FUN_00bb3ed0(param_1);
  lVar12 = FUN_00ffdc80(lVar11,"poke_panel");
  puVar4 = PTR_LAB_0271b6c8;
  puVar3 = PTR_FUN_0271b6c0;
  puVar2 = PTR_FUN_0271b6b8;
  pcVar13 = *(code **)(lVar12 + 0xb8);
  local_d8 = PTR_LAB_0271b6a8;
  local_d0 = 0;
  local_100 = PTR_LAB_0271b6b0;
  local_f8 = (code *)PTR_FUN_0271b6b8;
  local_f0 = (code *)PTR_FUN_0271b6c0;
  local_e8 = PTR_LAB_0271b6c8;
  local_e0 = param_1;
  if (pcVar13 == (code *)0x0) {
LAB_00bb3180:
    (*local_f0)(&local_e0,lVar12 + 0xd0);
    *(undefined **)(lVar12 + 200) = local_e8;
    *(code **)(lVar12 + 0xb8) = local_f8;
    *(code **)(lVar12 + 0xc0) = local_f0;
    *(undefined8 *)(lVar12 + 0xb0) = local_100;
  }
  else {
    *(undefined8 *)(lVar12 + 0xc0) = 0;
    *(undefined8 *)(lVar12 + 200) = 0;
    *(undefined8 *)(lVar12 + 0xb0) = 0;
    *(undefined8 *)(lVar12 + 0xb8) = 0;
    (*pcVar13)(lVar12 + 0xd0);
    if (local_f0 != (code *)0x0) goto LAB_00bb3180;
  }
  puVar8 = PTR_LAB_0271b6f0;
  puVar7 = PTR_FUN_0271b6e8;
  puVar6 = PTR_FUN_0271b6e0;
  puVar5 = PTR_LAB_0271b6d8;
  pcVar13 = *(code **)(lVar12 + 0x2b8);
  local_158 = PTR_LAB_0271b6d0;
  uStack_150 = 0;
  local_160 = param_1;
  if (pcVar13 == (code *)0x0) {
LAB_00bb3228:
    (*(code *)puVar7)(&local_160,lVar12 + 0x2d0);
    *(undefined **)(lVar12 + 0x2c8) = puVar8;
    *(undefined **)(lVar12 + 0x2b8) = puVar6;
    *(undefined **)(lVar12 + 0x2c0) = puVar7;
    *(undefined8 *)(lVar12 + 0x2b0) = puVar5;
  }
  else {
    *(undefined8 *)(lVar12 + 0x2c0) = 0;
    *(undefined8 *)(lVar12 + 0x2c8) = 0;
    *(undefined8 *)(lVar12 + 0x2b0) = 0;
    *(undefined8 *)(lVar12 + 0x2b8) = 0;
    (*pcVar13)(lVar12 + 0x2d0);
    if (puVar7 != (undefined *)0x0) goto LAB_00bb3228;
  }
  FUN_016b7990(lVar12,param_1 + 0x5e0,1,0);
  if (puVar6 != (undefined *)0x0) {
    (*(code *)puVar6)(&local_160);
  }
  pcVar13 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar13)(&local_e0);
  }
  if (*(char *)(param_1 + 0x620) == '\0') {
    local_100 = (undefined *)0x24b1606b667538d3;
    uVar16 = FUN_00ffdef0(lVar11,&local_100);
    FUN_016b2da0(uVar16,0);
  }
  FUN_00bb4520(param_1);
  lVar12 = FUN_00bb48a0(param_1);
  pcVar13 = *(code **)(lVar12 + 0xb8);
  local_d8 = PTR_LAB_0271b6f8;
  local_d0 = 0;
  local_f0 = (code *)puVar3;
  local_e8 = puVar4;
  local_100 = PTR_LAB_0271b6b0;
  local_f8 = (code *)puVar2;
  if (pcVar13 == (code *)0x0) {
    pcVar13 = (code *)PTR_FUN_0271b6c0;
    local_e0 = param_1;
  }
  else {
    *(undefined8 *)(lVar12 + 0xc0) = 0;
    *(undefined8 *)(lVar12 + 200) = 0;
    *(undefined8 *)(lVar12 + 0xb0) = 0;
    *(undefined8 *)(lVar12 + 0xb8) = 0;
    local_e0 = param_1;
    (*pcVar13)(lVar12 + 0xd0);
    pcVar13 = local_f0;
    pcVar1 = local_f8;
    if (local_f0 == (code *)0x0) goto joined_r0x00bb349c;
  }
  (*pcVar13)(&local_e0,lVar12 + 0xd0);
  *(undefined **)(lVar12 + 200) = local_e8;
  *(code **)(lVar12 + 0xb8) = local_f8;
  *(code **)(lVar12 + 0xc0) = local_f0;
  *(undefined8 *)(lVar12 + 0xb0) = local_100;
  pcVar1 = local_f8;
joined_r0x00bb349c:
  local_f8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar1)(&local_e0);
  }
  FUN_00bb4b40(param_1,0);
  local_100 = (undefined *)0xcdb58c6bed828b7f;
  uVar16 = FUN_00ffdef0(lVar11,&local_100);
  FUN_016b2da0(uVar16,0);
  FUN_00bb4c90(param_1);
  FUN_00bb6fe0(param_1,0xb4fcbe101d4d322d,0xdc82951337bf2d1b);
  FUN_00ffd430(lVar11,&DAT_02159b98);
  FUN_00ffd430(lVar11,&DAT_02159ba8);
  FUN_00ffd430(lVar11,&DAT_02159bb8);
  FUN_00ffd010(lVar11,&DAT_02159b98 + (long)*(int *)(param_1 + 0x618) * 0x10);
  FUN_00bb6fe0(param_1,*(undefined8 *)(&DAT_02159b90 + (long)*(int *)(param_1 + 0x618) * 0x10),
               0x12838748d7a634ac);
  FUN_00bb4e40(param_1);
  FUN_00bb4f40(param_1);
  FUN_00ffdc80(lVar11,"poke_panel");
  local_100 = (undefined *)FUN_016b8190();
  switch(*(undefined4 *)(param_1 + 0x5cc)) {
  case 0:
    FUN_00bbba00(param_1,&local_100);
    break;
  case 1:
    FUN_00bbc160(param_1,&local_100);
    break;
  case 2:
  case 4:
    FUN_00bbc7e0(param_1,&local_100);
    break;
  default:
    FUN_00bbcd10(param_1,&local_100);
  }
  puVar2 = PTR_DAT_02710798;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar15 = *(long *)(*(long *)puVar2 + 0x228);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  iVar10 = FUN_0150b370(lVar15);
  *(int *)(param_1 + 0x610) = iVar10;
  if (iVar10 != 0) {
    *(undefined1 *)(param_1 + 0x60c) = 1;
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  if (*(char *)(param_1 + 0x60c) == '\0') {
    FUN_00ffd3a0(lVar11,"anime_info_in");
    FUN_00ffcf80(lVar11,"anime_info_out");
    FUN_00ffd570(lVar11,"anime_info_out");
    FUN_00ffd450(lVar11,"anime_info_out");
    *(undefined1 *)(param_1 + 0x60d) = 0;
    lVar11 = *(long *)(param_1 + 0x2b0);
  }
  else {
    FUN_00ffdc80(lVar11,"poke_panel");
    local_100 = (undefined *)FUN_016b8190();
    FUN_00bb50c0(param_1,&local_100,1);
    lVar11 = *(long *)(param_1 + 0x2b0);
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_100 = (undefined *)0xe74343968b0f16e6;
  FUN_0167b9b0(lVar11,&local_100,0);
  local_100 = (undefined *)0xe74344968b0f1899;
  FUN_0167b9b0(lVar11,&local_100,0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  if ((*(int *)(param_1 + 0x5cc) == 1) && (*(short *)(param_1 + 0x6d8) != 1)) {
    lVar11 = *(long *)(param_1 + 0x2b0);
    if (lVar11 == 0) {
      local_100 = (undefined *)0xd202df11a8c101be;
      FUN_0167b9b0(0,&local_100,1);
    }
    else {
      plVar14 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      local_100 = (undefined *)0xd202df11a8c101be;
      FUN_0167b9b0(lVar11,&local_100,1);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    FUN_00bca320(param_1);
  }
  FUN_00bb5380(param_1);
  iVar10 = *(int *)(param_1 + 0x5cc);
  if (((iVar10 == 4) || (iVar10 == 2)) || ((iVar10 == 1 && (**(char **)(param_1 + 0x5d8) != '\0'))))
  {
    FUN_00bb5520(param_1,0);
  }
  lVar11 = *(long *)(param_1 + 0x2b0);
  if (lVar11 == 0) {
    local_100 = (undefined *)0x4ac0bf5e6ff6c542;
    FUN_0167b9b0(0,&local_100,0);
  }
  else {
    plVar14 = (long *)(lVar11 + 0x48);
    (**(code **)(*plVar14 + 0x10))(plVar14);
    local_100 = (undefined *)0x4ac0bf5e6ff6c542;
    FUN_0167b9b0(lVar11,&local_100,0);
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  return;
}


