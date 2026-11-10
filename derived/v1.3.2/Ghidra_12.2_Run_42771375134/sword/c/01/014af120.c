/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014af120; name: FUN_014af120
 */


undefined4 FUN_014af120(long *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 local_1d0;
  char *local_1c8;
  undefined8 local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 uStack_1a8;
  undefined1 *local_1a0;
  long local_198;
  long local_190;
  undefined4 local_188;
  undefined *local_180;
  char *local_178;
  undefined8 local_170;
  code *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [96];
  undefined8 local_f0;
  code *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [104];
  undefined8 local_68;
  undefined1 auStack_60 [16];
  undefined8 local_48;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0xb8);
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  local_180 = (undefined *)0xf8b33e4d67409b70;
  local_178 = "placeTable";
  local_170 = 10;
  FUN_012b4250(auStack_60,lVar8 + 0x340,&local_180);
  local_48 = 0xcbf29ce484222645;
  lVar8 = FUN_012b40f0(auStack_60);
  if (lVar8 != 0) {
    uVar7 = 0;
    do {
      FUN_012b4190(&local_1d0,auStack_60,uVar7);
      local_180 = (undefined *)0xb7cf803d7bc4396a;
      local_178 = "zoneId";
      local_170 = 6;
      FUN_012b4250(&local_1b0,&local_1d0,&local_180);
      local_68 = 0;
      lVar8 = FUN_012b4b40(&local_1b0,&local_68);
      if (lVar8 == *param_1) {
        FUN_012b4190(&local_1d0,auStack_60,uVar7 & 0xffffffff);
        local_180 = (undefined *)0x32ab708a88363a4a;
        local_178 = "placeLabel";
        local_170 = 10;
        FUN_012b4250(&local_1b0,&local_1d0,&local_180);
        local_68 = 0;
        local_48 = FUN_012b4b40(&local_1b0,&local_68);
        break;
      }
      uVar7 = uVar7 + 1;
      uVar4 = FUN_012b40f0(auStack_60);
    } while (uVar7 < uVar4);
  }
  uVar5 = *(undefined8 *)PTR_DAT_02710890;
  local_1d0 = 0xff86e105c5e826ff;
  local_1c8 = "script/poke_memory_place.dat";
  local_1c0 = 0x1c;
  local_1b8 = 0;
  FUN_014bfd20(&local_1b0,&local_1d0,10);
  FUN_014cd600(&local_180,uVar5,&local_1b0);
  if ((local_198 != 0) && (local_1b0 != 0)) {
    (**(code **)(*(long *)(local_1b0 + 0x48) + 0x18))();
  }
  local_1b0 = 0;
  uStack_1a8 = 0xcbf29ce484222645;
  local_1a0 = &DAT_01d38550;
  local_198 = 0;
  if (local_190 != 0) {
    (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
  }
  local_190 = 0;
  local_188 = 0;
  if (local_1b8 != 0) {
    (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
    local_1b8 = 0;
  }
  if (local_178 == (char *)0x0) {
    uVar3 = 0xffffffff;
    local_180 = PTR_DAT_02710ad8 + 0x10;
    *(undefined8 *)((ulong)&local_180 | 8) = 0;
    local_178 = (char *)0x0;
    pcVar1 = local_e8;
  }
  else {
    uVar3 = FUN_006e7220(local_178,&local_48);
    local_180 = PTR_DAT_02710ad8 + 0x10;
    if (local_178 == (char *)0x0) {
      *(undefined8 *)((ulong)&local_180 | 8) = 0;
      local_178 = (char *)0x0;
      pcVar1 = local_e8;
    }
    else {
      FUN_006e2100(local_178,&local_180);
      pcVar2 = local_178;
      local_178 = (char *)0x0;
      pcVar1 = local_e8;
      if (pcVar2 != (char *)0x0) {
        (**(code **)(*(long *)(pcVar2 + 0x48) + 0x18))();
        pcVar1 = local_e8;
      }
    }
  }
  local_e8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    local_e8 = (code *)0x0;
    (*pcVar1)(auStack_d0);
  }
  pcVar1 = local_168;
  if (local_168 != (code *)0x0) {
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    local_168 = (code *)0x0;
    (*pcVar1)(auStack_150);
  }
  if (local_178 != (char *)0x0) {
    (**(code **)(*(long *)((long)local_178 + 0x48) + 0x18))();
  }
  return uVar3;
}


