/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01001bc0; name: FUN_01001bc0
 */


undefined8 * FUN_01001bc0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  undefined8 local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined1 auStack_60 [16];
  
  local_90 = 0xb3236763c32e0e7d;
  local_88 = "g_table";
  local_80 = 7;
  FUN_012b4250(auStack_60,*(long *)PTR_DAT_027108b0 + 0x160,&local_90);
  lVar4 = FUN_012b40f0(auStack_60);
  if (lVar4 != 0) {
    uVar6 = 1;
    do {
      iVar7 = uVar6 - 1;
      FUN_012b4190(&local_d8,auStack_60,(long)iVar7);
      local_90 = 0xa0a2a0ab9cb5e75f;
      local_88 = "battleEffectId";
      local_80 = 0xe;
      FUN_012b4250(&local_b8,&local_d8,&local_90);
      local_70[0] = 0;
      lVar4 = FUN_012b4b40(&local_b8,local_70);
      if (lVar4 == param_1) {
        if (uVar6 != 0) goto LAB_01001cb4;
        break;
      }
      uVar5 = FUN_012b40f0(auStack_60);
      uVar1 = (ulong)uVar6;
      uVar6 = uVar6 + 1;
    } while (uVar1 < uVar5);
  }
  iVar7 = 0;
LAB_01001cb4:
  FUN_012b4190(local_70,auStack_60,(long)iVar7);
  local_b8 = 0x3ded73c8b0589ef9;
  local_b0 = "cmdSeqName";
  local_a8 = 10;
  FUN_012b4250(auStack_a0,local_70,&local_b8);
  local_d8 = 0xcbf29ce484222645;
  puStack_d0 = &DAT_01d38550;
  local_c8 = 0;
  local_c0 = 0;
  FUN_012b4820(&local_90,auStack_a0,&local_d8);
  *param_2 = local_90;
  param_2[1] = local_88;
  param_2[2] = local_80;
  if (param_2[3] != 0) {
    (**(code **)(*(long *)(param_2[3] + 0x48) + 0x18))();
    param_2[3] = 0;
  }
  uVar2 = local_78;
  local_78 = 0;
  param_2[3] = uVar2;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  local_b8 = 0x2adceea769e2952f;
  local_b0 = "battleBgm";
  local_a8 = 9;
  FUN_012b4250(auStack_a0,local_70,&local_b8);
  local_d8 = 0xcbf29ce484222645;
  puStack_d0 = &DAT_01d38550;
  local_c8 = 0;
  local_c0 = 0;
  FUN_012b4820(&local_90,auStack_a0,&local_d8);
  param_2[4] = local_90;
  param_2[5] = local_88;
  param_2[6] = local_80;
  if (param_2[7] != 0) {
    (**(code **)(*(long *)(param_2[7] + 0x48) + 0x18))();
    param_2[7] = 0;
  }
  uVar2 = local_78;
  local_78 = 0;
  param_2[7] = uVar2;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  local_b8 = 0x248f629fb5a2196d;
  local_b0 = "winBgm";
  local_a8 = 6;
  FUN_012b4250(auStack_a0,local_70,&local_b8);
  local_d8 = 0xcbf29ce484222645;
  puStack_d0 = &DAT_01d38550;
  local_c8 = 0;
  local_c0 = 0;
  FUN_012b4820(&local_90,auStack_a0,&local_d8);
  param_2[8] = local_90;
  param_2[9] = local_88;
  param_2[10] = local_80;
  if (param_2[0xb] != 0) {
    (**(code **)(*(long *)(param_2[0xb] + 0x48) + 0x18))();
    param_2[0xb] = 0;
  }
  uVar2 = local_78;
  local_78 = 0;
  param_2[0xb] = uVar2;
  if (local_c0 != 0) {
    (**(code **)(*(long *)(local_c0 + 0x48) + 0x18))();
    local_c0 = 0;
  }
  local_90 = 0x153c0d2946c1878b;
  local_88 = "fadeType";
  local_80 = 8;
  FUN_012b4250(&local_d8,local_70,&local_90);
  uVar3 = FUN_012b4420(&local_d8,0);
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  return param_2;
}


