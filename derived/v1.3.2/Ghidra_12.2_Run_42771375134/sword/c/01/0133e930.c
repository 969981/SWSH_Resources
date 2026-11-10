/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0133e930; name: FUN_0133e930
 */


void FUN_0133e930(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  undefined *local_1d0;
  long local_1c8;
  long local_1c0;
  code *local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [96];
  long local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [104];
  char local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  long local_78;
  undefined1 *local_70;
  long local_68;
  long local_60;
  
  FUN_00a66de0(&local_1d0,"bin/archive/app/pokecamp/kw/ptcl.gfpak");
  local_a8 = local_1c8;
  local_130 = 0;
  uStack_128 = 0;
  local_a0 = (undefined1 *)local_1c0;
  local_140 = 0;
  local_138 = (code *)0x0;
  local_98 = (long)local_1b8;
  local_90 = local_1b0;
  local_88 = (undefined4)local_1a8;
  local_b0 = local_1d0;
  local_1a8 = 0;
  local_b8 = '\x01';
  local_1c0 = 0;
  local_1b8 = (code *)0x0;
  local_1b0 = 0;
  local_1d0 = PTR_DAT_027194a8 + 0x10;
  FUN_006dccd0(&local_80,*(undefined8 *)PTR_DAT_02710788,1,&local_b0,0,*(undefined8 *)(param_1 + 8),
               0);
  lVar4 = local_80;
  local_1c8 = local_80;
  if (local_80 != 0) {
    plVar3 = (long *)(local_80 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((local_1c0 != 0) || (local_140 != 0)) {
      FUN_006e1e70(lVar4,&local_1d0,1);
    }
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  puVar2 = PTR_DAT_02727808 + (param_3 & 0xffffffff) * 0x18;
  FUN_014bb440(&local_80,puVar2);
  plVar3 = &local_80;
  if (local_68 != 0) {
    plVar3 = &local_78;
  }
  lVar4 = *plVar3;
  if ((local_68 != 0) && (local_80 != 0)) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = -0x340d631b7bddd9bb;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  FUN_014bb440(&local_80,puVar2);
  FUN_012dfef0(param_2,lVar4,&local_80,&local_1d0,param_4);
  if ((local_68 != 0) && (local_80 != 0)) {
    (**(code **)(*(long *)(local_80 + 0x48) + 0x18))();
  }
  local_80 = 0;
  local_78 = -0x340d631b7bddd9bb;
  local_70 = &DAT_01d38550;
  local_68 = 0;
  if (local_60 != 0) {
    (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
    local_60 = 0;
  }
  local_1d0 = PTR_DAT_02710a48 + 0x10;
  if (local_1c8 == 0) {
    local_1c8 = 0;
    pcVar1 = local_138;
  }
  else {
    FUN_006e2100(local_1c8,&local_1d0);
    lVar4 = local_1c8;
    local_1c8 = 0;
    pcVar1 = local_138;
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
      pcVar1 = local_138;
    }
  }
  local_138 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    local_138 = (code *)0x0;
    (*pcVar1)(auStack_120);
  }
  pcVar1 = local_1b8;
  if (local_1b8 != (code *)0x0) {
    local_1b0 = 0;
    local_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = (code *)0x0;
    (*pcVar1)(auStack_1a0);
  }
  if (local_1c8 != 0) {
    (**(code **)(*(long *)(local_1c8 + 0x48) + 0x18))();
    local_1c8 = 0;
  }
  if (local_b8 != '\0') {
    if ((local_98 != 0) && (local_b0 != (undefined *)0x0)) {
      (**(code **)(*(long *)(local_b0 + 0x48) + 0x18))();
    }
    local_b0 = (undefined *)0x0;
    local_a8 = 0xcbf29ce484222645;
    local_a0 = &DAT_01d38550;
    local_98 = 0;
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    }
  }
  return;
}


