/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b5020; name: FUN_014b5020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_014b5020(void)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte bVar8;
  ulong uVar9;
  int local_234;
  undefined1 auStack_230 [24];
  long local_218;
  long local_210;
  undefined8 uStack_208;
  undefined1 *local_200;
  long local_1f8;
  long local_1f0;
  undefined4 local_1e8;
  undefined *local_1e0;
  long local_1d8;
  undefined8 local_1d0;
  code *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [96];
  undefined8 local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [96];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  local_b8 = DAT_026a5850;
  uStack_b0 = DAT_026a5858;
  local_c8 = DAT_026a5840;
  puStack_c0 = PTR_s_script_place_name_dat_026a5848;
  local_98 = DAT_026a5870;
  puStack_90 = PTR_s_common_place_name_out_dat_026a5878;
  local_a8 = PTR_s_common_place_name_spe_dat_026a5860;
  uStack_a0 = DAT_026a5868;
  local_78 = PTR_s_common_place_name_per_dat_026a5890;
  uStack_70 = DAT_026a5898;
  local_80 = DAT_026a5888;
  local_88 = DAT_026a5880;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar4 == 0) {
    uVar6 = *(undefined8 *)(_DAT_00000790 + 0x10);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x790) + 0x10);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  uVar9 = 0;
  puVar7 = &local_c8;
  puVar1 = PTR_DAT_02710ad8 + 0x10;
  local_d0 = uVar6;
  do {
    uVar6 = *(undefined8 *)PTR_DAT_02710890;
    FUN_006cf0a0(auStack_230,puVar7);
    FUN_014bfd20(&local_210,auStack_230,10);
    FUN_014cd600(&local_1e0,uVar6,&local_210);
    if ((local_1f8 != 0) && (local_210 != 0)) {
      (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    }
    local_210 = 0;
    uStack_208 = 0xcbf29ce484222645;
    local_200 = &DAT_01d38550;
    local_1f8 = 0;
    if (local_1f0 != 0) {
      (**(code **)(*(long *)(local_1f0 + 0x48) + 0x18))();
    }
    local_1f0 = 0;
    local_1e8 = 0;
    if (local_218 != 0) {
      (**(code **)(*(long *)(local_218 + 0x48) + 0x18))();
      local_218 = 0;
    }
    if (local_1d8 == 0) {
      bVar8 = 4;
LAB_014b511c:
      local_1d8 = 0;
      local_1e0 = puVar1;
      pcVar2 = local_148;
    }
    else {
      iVar3 = FUN_006e7220(local_1d8,&local_d0);
      bVar8 = -1 < iVar3;
      if ((bool)bVar8) {
        local_234 = (&DAT_01d4ab40)[uVar9] + iVar3;
      }
      if (local_1d8 == 0) goto LAB_014b511c;
      local_1e0 = puVar1;
      FUN_006e2100(local_1d8,&local_1e0);
      lVar4 = local_1d8;
      local_1d8 = 0;
      pcVar2 = local_148;
      if (lVar4 != 0) {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
        pcVar2 = local_148;
      }
    }
    local_148 = pcVar2;
    if (pcVar2 != (code *)0x0) {
      local_140 = 0;
      uStack_138 = 0;
      local_150 = 0;
      local_148 = (code *)0x0;
      (*pcVar2)(auStack_130);
    }
    pcVar2 = local_1c8;
    if (local_1c8 != (code *)0x0) {
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      local_1c8 = (code *)0x0;
      (*pcVar2)(auStack_1b0);
    }
    if (local_1d8 != 0) {
      (**(code **)(*(long *)(local_1d8 + 0x48) + 0x18))();
      local_1d8 = 0;
    }
    if ((bVar8 | 4) != 4) {
      return local_234;
    }
    uVar9 = uVar9 + 1;
    puVar7 = puVar7 + 3;
    if (3 < uVar9) {
      return 4;
    }
  } while( true );
}


