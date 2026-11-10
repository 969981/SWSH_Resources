/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01085b50; name: FUN_01085b50
 */


void FUN_01085b50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long local_180;
  undefined8 uStack_178;
  undefined1 *local_170;
  long local_168;
  long local_160;
  undefined *local_150;
  long local_148;
  long local_140;
  code *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [96];
  long local_c0;
  code *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [104];
  long local_38;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    local_130 = 0;
    uStack_128 = 0;
    local_138 = (code *)0x0;
    local_150 = PTR_DAT_02710ac8 + 0x10;
    local_140 = 0;
    FUN_014bb440(&local_180,&DAT_0266e5e0);
    FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,0,&local_180,0,param_2,0);
    local_148 = local_38;
    if (local_38 != 0) {
      plVar3 = (long *)(local_38 + 0x48);
      (**(code **)(*plVar3 + 0x10))(plVar3);
      if ((local_140 != 0) || (local_c0 != 0)) {
        FUN_006e1e70(local_38,&local_150,1);
      }
      FUN_006e1be0(local_38);
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
    if ((local_168 != 0) && (local_180 != 0)) {
      (**(code **)(*(long *)(local_180 + 0x48) + 0x18))();
    }
    local_180 = 0;
    uStack_178 = 0xcbf29ce484222645;
    local_170 = &DAT_01d38550;
    local_168 = 0;
    if (local_160 != 0) {
      (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
      local_160 = 0;
    }
    FUN_01086320(*(undefined8 *)(param_1 + 0x80),&local_150);
    local_150 = PTR_DAT_02710a48 + 0x10;
    if (local_148 == 0) {
      local_148 = 0;
      pcVar1 = local_b8;
    }
    else {
      FUN_006e2100(local_148,&local_150);
      lVar2 = local_148;
      local_148 = 0;
      pcVar1 = local_b8;
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
        pcVar1 = local_b8;
      }
    }
    local_b8 = pcVar1;
    if (pcVar1 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar1)(auStack_a0);
    }
    pcVar1 = local_138;
    if (local_138 != (code *)0x0) {
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      local_138 = (code *)0x0;
      (*pcVar1)(auStack_120);
    }
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
  }
  return;
}


