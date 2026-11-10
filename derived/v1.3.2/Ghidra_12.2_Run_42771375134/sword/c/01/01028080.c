/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01028080; name: FUN_01028080
 */


undefined8 FUN_01028080(int param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  long local_178;
  long local_170;
  undefined8 uStack_168;
  undefined1 *local_160;
  long local_158;
  long local_150;
  undefined4 local_148;
  undefined *local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [96];
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [96];
  
  uVar6 = *(undefined8 *)PTR_DAT_02710890;
  local_190 = 0xb059dd7e20c2c317;
  local_188 = "script/place_name.dat";
  local_180 = 0x15;
  local_178 = 0;
  FUN_014bfd20(&local_170,&local_190,10);
  FUN_014cd600(&local_140,uVar6,&local_170);
  if ((local_158 != 0) && (local_170 != 0)) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
  uVar6 = 0xcbf29ce484222645;
  local_170 = 0;
  uStack_168 = 0xcbf29ce484222645;
  local_160 = &DAT_01d38550;
  local_158 = 0;
  if (local_150 != 0) {
    (**(code **)(*(long *)(local_150 + 0x48) + 0x18))();
  }
  local_150 = 0;
  local_148 = 0;
  if (local_178 != 0) {
    (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
    local_178 = 0;
  }
  if (local_138 != 0) {
    uVar4 = FUN_006e72a0();
    if ((ulong)(long)param_1 < uVar4) {
      if (local_138 == 0) {
        plVar5 = (long *)FUN_01028290();
        local_170 = *plVar5;
        if (local_170 == 0) goto LAB_010281e0;
        (**(code **)(*(long *)(local_170 + 0x48) + 0x10))();
      }
      else {
        FUN_006e7280(&local_170,local_138,(long)param_1);
      }
      puVar1 = (undefined8 *)PTR_DAT_02710920;
      if (local_170 != 0) {
        puVar1 = (undefined8 *)(local_170 + 0x58);
      }
      uVar6 = *puVar1;
      if (local_170 != 0) {
        (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
        local_170 = 0;
      }
    }
  }
LAB_010281e0:
  local_140 = PTR_DAT_02710ad8 + 0x10;
  if (local_138 == 0) {
    local_138 = 0;
    pcVar2 = local_a8;
  }
  else {
    FUN_006e2100(local_138,&local_140);
    lVar3 = local_138;
    local_138 = 0;
    pcVar2 = local_a8;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      pcVar2 = local_a8;
    }
  }
  local_a8 = pcVar2;
  if (pcVar2 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar2)(auStack_90);
  }
  pcVar2 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar2)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return uVar6;
}


