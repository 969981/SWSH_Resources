/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133d170; name: FUN_0133d170
 */


void FUN_0133d170(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  code *pcVar7;
  int iVar8;
  long lVar9;
  long local_1f0 [2];
  undefined1 *local_1e0;
  long local_1d8;
  long local_1d0;
  code *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  undefined1 *local_1a8;
  long local_1a0 [2];
  long local_190 [2];
  undefined1 *local_180;
  long local_178;
  long local_170;
  undefined4 local_168;
  long local_160 [2];
  undefined1 *local_150;
  long local_148;
  long local_140;
  undefined4 local_138;
  long local_130 [2];
  undefined1 *local_120;
  long local_118;
  long local_110;
  undefined4 local_108;
  long local_100 [2];
  undefined1 *local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  long local_d0 [2];
  undefined1 *local_c0;
  long local_b8;
  long local_b0;
  undefined4 local_a8;
  long local_a0 [2];
  undefined1 *local_90;
  long local_88;
  long local_80;
  undefined4 local_78;
  
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),3);
  plVar2 = (long *)thunk_FUN_012c8f90(0x10);
  FUN_00a75450(&local_1c0,"bin/chara/data/ob/ob0032_00_pball/mdl/ob0032_00.gfbmdl");
  FUN_00a75450(local_190,"bin/chara/data/ob/ob0035_00_pball/mdl/ob0035_00.gfbmdl");
  FUN_00a75450(local_160,"bin/chara/data/ob/ob0036_00_pball/mdl/ob0036_00.gfbmdl");
  FUN_00a75450(local_130,"bin/chara/data/ob/ob0038_00_pball/mdl/ob0038_00.gfbmdl");
  FUN_00a75450(local_100,"bin/chara/data/ob/ob0037_00_pball/mdl/ob0037_00.gfbmdl");
  FUN_00a75450(local_d0,"bin/chara/data/ob/ob0033_00_pball/mdl/ob0033_00.gfbmdl");
  FUN_00a75450(local_a0,"bin/chara/data/ob/ob0034_00_pball/mdl/ob0034_00.gfbmdl");
  puVar1 = PTR_DAT_02710860;
  lVar6 = 0;
  iVar8 = 0;
  do {
    lVar9 = *param_1;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)puVar1);
    if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar2;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
    lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,0x4e0,0x10);
    if (lVar4 == 0) {
      (**(code **)(*plVar2 + 0xb8))(plVar2);
    }
    FUN_012dcc80(lVar4,iVar8,(long)local_1f0 + lVar6 + 0x30,plVar2,param_4);
    *(long **)(lVar4 + 8) = plVar2;
    *(long *)(lVar4 + 0x10) = lVar4;
    *(undefined8 *)(lVar4 + 0x18) = 0x4e0;
    *(undefined8 *)(lVar4 + 0x20) = 0x10;
    *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    iVar8 = iVar8 + 1;
    local_1f0[0] = lVar4;
    FUN_006d9640(lVar9,local_1f0);
    if (local_1f0[0] != 0) {
      (**(code **)(*(long *)(local_1f0[0] + 0x48) + 0x18))();
      local_1f0[0] = 0;
    }
    lVar6 = lVar6 + 0x30;
  } while (lVar6 != 0x150);
  if ((local_88 != 0) && (local_a0[0] != 0)) {
    (**(code **)(*(long *)(local_a0[0] + 0x48) + 0x18))();
  }
  local_a0[0] = 0;
  local_a0[1] = 0xcbf29ce484222645;
  local_90 = &DAT_01d38550;
  local_88 = 0;
  if (local_80 != 0) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = 0;
  if ((local_b8 != 0) && (local_d0[0] != 0)) {
    (**(code **)(*(long *)(local_d0[0] + 0x48) + 0x18))();
  }
  local_d0[0] = 0;
  local_d0[1] = 0xcbf29ce484222645;
  local_c0 = &DAT_01d38550;
  local_b8 = 0;
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
  }
  local_b0 = 0;
  local_a8 = 0;
  if ((local_e8 != 0) && (local_100[0] != 0)) {
    (**(code **)(*(long *)(local_100[0] + 0x48) + 0x18))();
  }
  local_100[0] = 0;
  local_100[1] = 0xcbf29ce484222645;
  local_f0 = &DAT_01d38550;
  local_e8 = 0;
  if (local_e0 != 0) {
    (**(code **)(*(long *)(local_e0 + 0x48) + 0x18))();
  }
  local_e0 = 0;
  local_d8 = 0;
  if ((local_118 != 0) && (local_130[0] != 0)) {
    (**(code **)(*(long *)(local_130[0] + 0x48) + 0x18))();
  }
  local_130[0] = 0;
  local_130[1] = 0xcbf29ce484222645;
  local_120 = &DAT_01d38550;
  local_118 = 0;
  if (local_110 != 0) {
    (**(code **)(*(long *)(local_110 + 0x48) + 0x18))();
  }
  local_110 = 0;
  local_108 = 0;
  if ((local_148 != 0) && (local_160[0] != 0)) {
    (**(code **)(*(long *)(local_160[0] + 0x48) + 0x18))();
  }
  local_160[0] = 0;
  local_160[1] = 0xcbf29ce484222645;
  local_150 = &DAT_01d38550;
  local_148 = 0;
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
  }
  local_140 = 0;
  local_138 = 0;
  if ((local_178 != 0) && (local_190[0] != 0)) {
    (**(code **)(*(long *)(local_190[0] + 0x48) + 0x18))();
  }
  local_190[0] = 0;
  local_190[1] = 0xcbf29ce484222645;
  local_180 = &DAT_01d38550;
  local_178 = 0;
  if (local_170 != 0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  local_170 = 0;
  local_168 = 0;
  if ((local_1a8 != (undefined1 *)0x0) && (local_1c0 != (code *)0x0)) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
  }
  local_1c0 = (code *)0x0;
  local_1b8 = (code *)0xcbf29ce484222645;
  local_1b0 = &DAT_01d38550;
  local_1a8 = (undefined1 *)0x0;
  if (local_1a0[0] != 0) {
    (**(code **)(*(long *)(local_1a0[0] + 0x48) + 0x18))();
    local_1a0[0] = 0;
  }
  lVar6 = *param_1;
  pcVar5 = (code *)FUN_0133ee00(&local_1c0,*(undefined8 *)(lVar6 + 8));
  if (pcVar5 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar5 + 0x48) + 0x10))();
  }
  local_1c0 = pcVar5;
  FUN_006d9640(lVar6,&local_1c0);
  if (local_1c0 != (code *)0x0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = (code *)0x0;
  }
  FUN_012dfdc0(pcVar5,1);
  FUN_00aba220(local_1f0,"bin/appli/pokecamp/game/particle/ef_care/ef_care_ball_end.ptcl");
  local_1c0 = (code *)&LAB_013410a0;
  local_1b8 = FUN_01341120;
  local_1b0 = &LAB_01341130;
  local_1a8 = &LAB_01341140;
  FUN_012dfdd0(pcVar5,0xa957e3270a9644aa,local_1f0,&local_1c0);
  pcVar7 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (undefined1 *)0x0;
    local_1c0 = (code *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar7)(local_1a0);
  }
  if ((local_1d8 != 0) && (local_1f0[0] != 0)) {
    (**(code **)(*(long *)(local_1f0[0] + 0x48) + 0x18))();
  }
  local_1f0[0] = 0;
  local_1f0[1] = 0xcbf29ce484222645;
  local_1e0 = &DAT_01d38550;
  local_1d8 = 0;
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
    local_1d0 = 0;
  }
  FUN_0133d8b0(local_1f0,"bin/appli/pokecamp/game/particle/ef_care/ef_care_ball_mirror.ptcl");
  local_1c0 = FUN_013411d0;
  local_1b8 = FUN_01341250;
  local_1b0 = &LAB_01341260;
  local_1a8 = &LAB_01341270;
  FUN_012dfdd0(pcVar5,0x10bae3972d4ff062,local_1f0,&local_1c0);
  pcVar5 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = (undefined1 *)0x0;
    local_1a8 = (undefined1 *)0x0;
    local_1c0 = (code *)0x0;
    local_1b8 = (code *)0x0;
    (*pcVar5)(local_1a0);
  }
  if ((local_1d8 != 0) && (local_1f0[0] != 0)) {
    (**(code **)(*(long *)(local_1f0[0] + 0x48) + 0x18))();
  }
  local_1f0[0] = 0;
  local_1f0[1] = 0xcbf29ce484222645;
  local_1e0 = &DAT_01d38550;
  local_1d8 = 0;
  if (local_1d0 != 0) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
    local_1d0 = 0;
  }
  lVar6 = FUN_01341280(*param_1,*(undefined8 *)(*param_1 + 8),param_2 + 0x60,param_3);
  pcVar5 = (code *)FUN_01341390(&local_1c0,*(undefined8 *)(lVar6 + 8));
  if (pcVar5 == (code *)0x0) {
    local_1c0 = (code *)0x0;
  }
  else {
    pcVar7 = pcVar5 + 0x48;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
    local_1c0 = pcVar5;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
  }
  FUN_01310530(lVar6,&local_1c0);
  if (local_1c0 != (code *)0x0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = (code *)0x0;
  }
  if (pcVar5 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar5 + 0x48) + 0x18))(pcVar5 + 0x48);
  }
  pcVar5 = (code *)FUN_01341480(&local_1c0,*(undefined8 *)(lVar6 + 8));
  if (pcVar5 == (code *)0x0) {
    local_1c0 = (code *)0x0;
  }
  else {
    pcVar7 = pcVar5 + 0x48;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
    local_1c0 = pcVar5;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
  }
  FUN_01310530(lVar6,&local_1c0);
  if (local_1c0 != (code *)0x0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = (code *)0x0;
  }
  if (pcVar5 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar5 + 0x48) + 0x18))(pcVar5 + 0x48);
  }
  pcVar5 = (code *)FUN_01341570(&local_1c0,*(undefined8 *)(lVar6 + 8));
  if (pcVar5 == (code *)0x0) {
    local_1c0 = (code *)0x0;
  }
  else {
    pcVar7 = pcVar5 + 0x48;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
    local_1c0 = pcVar5;
    (**(code **)(*(long *)pcVar7 + 0x10))(pcVar7);
  }
  FUN_01310530(lVar6,&local_1c0);
  if (local_1c0 != (code *)0x0) {
    (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
    local_1c0 = (code *)0x0;
  }
  if (pcVar5 != (code *)0x0) {
    (**(code **)(*(long *)(pcVar5 + 0x48) + 0x18))(pcVar5 + 0x48);
  }
  return;
}


