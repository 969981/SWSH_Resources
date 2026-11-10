/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133ddf0; name: FUN_0133ddf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0133ddf0(long *param_1,long param_2,uint param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  undefined1 *puStack_258;
  undefined1 auStack_250 [96];
  long *local_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  long local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined1 *local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a0;
  undefined8 uStack_198;
  undefined1 *local_190;
  long local_188;
  long local_180;
  undefined *local_170;
  undefined *local_168;
  long local_160;
  code *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [96];
  long local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [96];
  
  FUN_01306130(*(undefined8 *)(param_2 + 0x58),3);
  plVar4 = (long *)thunk_FUN_012c8f90(0x10);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  local_d8 = (code *)0x0;
  local_158 = (code *)0x0;
  local_150 = 0;
  uStack_148 = 0;
  local_170 = PTR_DAT_027194a8 + 0x10;
  local_160 = 0;
  FUN_00aa6ea0(&local_1a0,"bin/archive/field/model/unit_obj_tent01.gfpak");
  FUN_006dccd0(&local_1d0,*(undefined8 *)PTR_DAT_02710788,1,&local_1a0,0,plVar4,0);
  lVar5 = local_1d0;
  local_168 = (undefined *)local_1d0;
  if (local_1d0 != 0) {
    plVar7 = (long *)(local_1d0 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((local_160 != 0) || (local_e0 != 0)) {
      FUN_006e1e70(lVar5,&local_170,1);
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_188 != 0) && (local_1a0 != 0)) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = 0;
  uStack_198 = 0xcbf29ce484222645;
  local_190 = &DAT_01d38550;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  FUN_00a769b0(&local_1a0,"bin/field/model/unit_obj/unit_obj_tent01/unit_obj_tent01.gfbmdl");
  FUN_014ad740(&local_1d0,"bin/field/model/unit_obj/unit_obj_tent01/unit_obj_tent01.gfbanmcfg");
  lVar8 = *param_1;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar5 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar5 + *(ulong *)(lVar5 + 0x80) * 8) = plVar4;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + 1;
  plVar7 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,0x4b0,0x10);
  if (plVar7 == (long *)0x0) {
    (**(code **)(*plVar4 + 0xb8))(plVar4);
  }
  FUN_012ddac0(plVar7,&local_1a0,&local_1d0,plVar4,&local_170);
  puVar6 = PTR_DAT_02728130;
  plVar7[9] = (long)(PTR_DAT_02728130 + 0xe0);
  plVar7[0x92] = 0x68c3754f4bf8081a;
  plVar7[0x94] = 6;
  plVar7[10] = (long)(puVar6 + 0x150);
  plVar7[0x93] = (long)"object";
  *plVar7 = (long)(puVar6 + 0x10);
  plVar7[1] = (long)plVar4;
  plVar7[0x95] = 0;
  plVar7[2] = (long)plVar7;
  plVar7[3] = 0x4b0;
  plVar7[4] = 0x10;
  *(long *)(lVar5 + 0x80) = *(long *)(lVar5 + 0x80) + -1;
  if (plVar7 != (long *)0x0) {
    (**(code **)(plVar7[9] + 0x10))();
  }
  local_1f0 = plVar7;
  FUN_006d9640(lVar8,&local_1f0);
  if (local_1f0 != (long *)0x0) {
    (**(code **)(local_1f0[9] + 0x18))();
  }
  local_1f0 = (long *)0xc31ef8e5bc72e7c0;
  puStack_1e8 = &DAT_01cec7ae;
  local_1e0 = 4;
  local_1d8 = 0;
  FUN_0134e970(plVar7,&local_1f0);
  if (local_1d8 != 0) {
    (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
    local_1d8 = 0;
  }
  if ((local_1b8 != 0) && (local_1d0 != 0)) {
    (**(code **)(*(long *)(local_1d0 + 0x48) + 0x18))();
  }
  local_1d0 = 0;
  uStack_1c8 = 0xcbf29ce484222645;
  local_1c0 = &DAT_01d38550;
  local_1b8 = 0;
  if (local_1b0 != 0) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
    local_1b0 = 0;
  }
  if ((local_188 != 0) && (local_1a0 != 0)) {
    (**(code **)(*(long *)(local_1a0 + 0x48) + 0x18))();
  }
  local_1a0 = 0;
  uStack_198 = 0xcbf29ce484222645;
  local_190 = &DAT_01d38550;
  local_188 = 0;
  if (local_180 != 0) {
    (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    local_180 = 0;
  }
  local_170 = PTR_DAT_02710a48 + 0x10;
  if (local_168 == (undefined *)0x0) {
    local_168 = (undefined *)0x0;
    pcVar1 = local_d8;
  }
  else {
    FUN_006e2100(local_168,&local_170);
    puVar6 = local_168;
    local_168 = (undefined *)0x0;
    pcVar1 = local_d8;
    if (puVar6 != (undefined *)0x0) {
      (**(code **)(*(long *)((long)puVar6 + 0x48) + 0x18))();
      pcVar1 = local_d8;
    }
  }
  local_d8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    local_d8 = (code *)0x0;
    (*pcVar1)(auStack_c0);
  }
  pcVar1 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    local_158 = (code *)0x0;
    (*pcVar1)(auStack_140);
  }
  if (local_168 != (undefined *)0x0) {
    (**(code **)(*(long *)((long)local_168 + 0x48) + 0x18))();
    local_168 = (undefined *)0x0;
  }
  lVar5 = FUN_013416e0(*param_1,&local_170);
  if (lVar5 != 0) {
    FUN_0134e1c0(lVar5,param_3 & 1);
  }
  uVar3 = _UNK_01d4b708;
  uVar2 = _DAT_01d4b700;
  lVar5 = *param_1;
  *(undefined1 *)(lVar5 + 0xc0) = 1;
  *(undefined8 *)(lVar5 + 0xd8) = uVar3;
  *(undefined8 *)(lVar5 + 0xd0) = uVar2;
  lVar5 = *param_1;
  puVar6 = (undefined *)FUN_0130de40(&local_170,*(undefined8 *)(lVar5 + 8));
  if (puVar6 != (undefined *)0x0) {
    (**(code **)(*(long *)(puVar6 + 0x48) + 0x10))();
  }
  local_170 = puVar6;
  FUN_006d9640(lVar5,&local_170);
  if (local_170 != (undefined *)0x0) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  local_170 = (undefined *)0x275dbcecced052c0;
  local_168 = &DAT_01d3df32;
  local_160 = 4;
  local_158 = (code *)0x0;
  FUN_01312f40(DAT_01d4bb90,puVar6,&local_170,PTR_DAT_02715088);
  if (local_158 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_158 + 0x48) + 0x18))();
  }
  local_170 = (undefined *)0xc31ef8e5bc72e7c0;
  local_168 = &DAT_01cec7ae;
  local_160 = 4;
  local_158 = (code *)0x0;
  FUN_01313060(puVar6,&local_170);
  if (local_158 != (code *)0x0) {
    (**(code **)(*(long *)((long)local_158 + 0x48) + 0x18))();
    local_158 = (code *)0x0;
  }
  FUN_01313040(DAT_01d4c18c,puVar6);
  local_270 = &LAB_01341a10;
  local_268 = FUN_01341a40;
  local_260 = &LAB_01341a50;
  puStack_258 = &LAB_01341a60;
  FUN_01313410(puVar6,&local_270);
  pcVar1 = local_268;
  if (local_268 != (code *)0x0) {
    local_260 = (undefined1 *)0x0;
    puStack_258 = (undefined1 *)0x0;
    local_270 = (undefined1 *)0x0;
    local_268 = (code *)0x0;
    (*pcVar1)(auStack_250);
  }
  return;
}


