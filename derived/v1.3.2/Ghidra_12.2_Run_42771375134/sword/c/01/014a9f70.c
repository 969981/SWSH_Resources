/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a9f70; name: FUN_014a9f70
 */


void FUN_014a9f70(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long local_c8;
  char *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8 [2];
  undefined1 *local_98;
  long local_90;
  long local_88;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  
  param_1[7] = 0;
  puVar1 = PTR_DAT_02710a18;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar5 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (lVar5 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(long *)(lVar5 + 0x80) != 0) {
      lVar6 = *(long *)(lVar5 + *(long *)(lVar5 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  puVar2 = PTR_DAT_0272a1e8;
  puVar1 = PTR_DAT_0272a1e0;
  *param_1 = (long)(PTR_DAT_0272a1e0 + 0x10);
  param_1[1] = lVar6;
  param_1[9] = (long)(puVar1 + 0x48);
  plVar7 = param_1 + 0xc;
  *plVar7 = (long)(puVar2 + 0x10);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0xd] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x2e] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  param_1[0x43] = 0;
  param_1[0x42] = 0;
  param_1[0x52] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x30] = (long)(puVar2 + 0x10);
  param_1[0x31] = 0;
  param_1[0x54] = (long)(PTR_DAT_0272a1f0 + 0x10);
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = (long)(PTR_DAT_027194a8 + 0x10);
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  puVar1 = PTR_DAT_02715b00 + 0x10;
  param_1[0x79] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  param_1[0xac] = 0;
  param_1[0x9f] = 0;
  param_1[0x78] = (long)puVar1;
  param_1[0x9e] = 0;
  param_1[0x9d] = 0;
  param_1[0x9c] = 0;
  param_1[0x9b] = 0;
  puVar2 = PTR_DAT_02715070 + 0x10;
  param_1[0x9a] = (long)puVar2;
  param_1[0xd1] = 0;
  param_1[0xd0] = 0;
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
  param_1[0xc1] = 0;
  param_1[0xc0] = 0;
  param_1[0xbf] = 0;
  param_1[0xbe] = 0;
  param_1[0xbd] = 0;
  puVar3 = PTR_DAT_027164d8 + 0x10;
  param_1[0xbc] = (long)puVar3;
  param_1[0xf3] = 0;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf0] = 0;
  param_1[0xe3] = 0;
  param_1[0xe2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe0] = 0;
  param_1[0xdf] = 0;
  param_1[0xde] = (long)puVar3;
  param_1[0x115] = 0;
  param_1[0x114] = 0;
  param_1[0x113] = 0;
  param_1[0x112] = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x103] = 0;
  param_1[0x102] = 0;
  param_1[0x101] = 0;
  param_1[0x100] = (long)puVar3;
  param_1[0x137] = 0;
  param_1[0x136] = 0;
  param_1[0x135] = 0;
  param_1[0x134] = 0;
  param_1[0x127] = 0;
  param_1[0x126] = 0;
  param_1[0x125] = 0;
  param_1[0x124] = 0;
  param_1[0x123] = 0;
  puVar4 = PTR_DAT_02710818 + 0x10;
  param_1[0x14a] = (long)puVar1;
  param_1[0x122] = (long)puVar4;
  param_1[0x15f] = 0;
  param_1[0x15e] = 0;
  param_1[0x15d] = 0;
  param_1[0x15c] = 0;
  param_1[0x14f] = 0;
  param_1[0x14e] = 0;
  param_1[0x14d] = 0;
  param_1[0x14c] = 0;
  param_1[0x14b] = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  param_1[0x147] = 0;
  param_1[0x146] = 0;
  param_1[0x145] = 0;
  param_1[0x144] = 0;
  param_1[0x181] = 0;
  param_1[0x180] = 0;
  param_1[0x17f] = 0;
  param_1[0x17e] = 0;
  param_1[0x171] = 0;
  param_1[0x170] = 0;
  param_1[0x16f] = 0;
  param_1[0x16e] = 0;
  param_1[0x16d] = 0;
  param_1[0x16c] = (long)puVar2;
  param_1[0x1a3] = 0;
  param_1[0x1a2] = 0;
  param_1[0x1a1] = 0;
  param_1[0x1a0] = 0;
  param_1[0x193] = 0;
  param_1[0x192] = 0;
  param_1[0x191] = 0;
  param_1[400] = 0;
  param_1[399] = 0;
  param_1[0x18e] = (long)puVar3;
  local_78 = 0xd36148a03ca380a4;
  local_70 = "bin/pokemon/table/poke_resource_table.gfbpmcatalog";
  local_68 = 0x32;
  local_60 = 0;
  FUN_008d48d0(local_a8,&local_78);
  puVar1 = PTR_DAT_02710788;
  FUN_006dccd0(&local_c8,*(undefined8 *)PTR_DAT_02710788,0,local_a8,0,param_2,0);
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  param_1[0xd] = local_c8;
  if (local_c8 != 0) {
    plVar8 = (long *)(local_c8 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    if ((param_1[0xe] != 0) || (param_1[0x1e] != 0)) {
      FUN_006e1e70(local_c8,plVar7,1);
    }
    FUN_006e1be0(local_c8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  if ((local_90 != 0) && (local_a8[0] != 0)) {
    (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
  }
  local_a8[0] = 0;
  local_a8[1] = 0xcbf29ce484222645;
  local_98 = &DAT_01d38550;
  local_90 = 0;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar5 = FUN_014abbf0(local_a8,param_2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (param_1[0x2e] != 0) {
    (**(code **)(*(long *)(param_1[0x2e] + 0x48) + 0x18))();
    param_1[0x2e] = 0;
  }
  param_1[0x2e] = lVar5;
  FUN_014aa550(lVar5,plVar7);
  local_c8 = -0x7e00c57a98d067a7;
  local_c0 = "bin/pokemon/table/gpoke_resource_table.gfbpmcatalog";
  local_b8 = 0x33;
  local_b0 = 0;
  FUN_008d48d0(local_a8,&local_c8);
  FUN_006dccd0(&local_58,*(undefined8 *)puVar1,0,local_a8,0,param_2,0);
  if (param_1[0x31] != 0) {
    (**(code **)(*(long *)(param_1[0x31] + 0x48) + 0x18))();
    param_1[0x31] = 0;
  }
  param_1[0x31] = local_58;
  if (local_58 != 0) {
    plVar7 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar7 + 0x10))(plVar7);
    if ((param_1[0x32] != 0) || (param_1[0x42] != 0)) {
      FUN_006e1e70(local_58,param_1 + 0x30,1);
    }
    FUN_006e1be0(local_58);
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  if ((local_90 != 0) && (local_a8[0] != 0)) {
    (**(code **)(*(long *)(local_a8[0] + 0x48) + 0x18))();
  }
  local_a8[0] = 0;
  local_a8[1] = 0xcbf29ce484222645;
  local_98 = &DAT_01d38550;
  local_90 = 0;
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  lVar5 = FUN_014abbf0(local_a8,param_2);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  if (param_1[0x52] != 0) {
    (**(code **)(*(long *)(param_1[0x52] + 0x48) + 0x18))();
    param_1[0x52] = 0;
  }
  param_1[0x52] = lVar5;
  FUN_014aa550(lVar5,param_1 + 0x30);
  if (local_b0 != 0) {
    (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    local_b0 = 0;
  }
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
  }
  return;
}


