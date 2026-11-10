/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014b52d0; name: FUN_014b52d0
 */


int FUN_014b52d0(void)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined1 auStack_180 [24];
  long local_168;
  long local_160;
  undefined8 uStack_158;
  undefined1 *local_150;
  long local_148;
  long local_140;
  undefined4 local_138;
  undefined *local_130;
  long local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [96];
  undefined8 local_a0;
  code *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [96];
  
  uVar4 = *(undefined8 *)PTR_DAT_02710890;
  local_198 = 0xb059dd7e20c2c317;
  local_190 = "script/place_name.dat";
  local_188 = 0x15;
  FUN_006cf0a0(auStack_180,&local_198);
  FUN_014bfd20(&local_160,auStack_180,10);
  FUN_014cd600(&local_130,uVar4,&local_160);
  if ((local_148 != 0) && (local_160 != 0)) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
  }
  local_160 = 0;
  uStack_158 = 0xcbf29ce484222645;
  local_150 = &DAT_01d38550;
  local_148 = 0;
  if (local_140 != 0) {
    (**(code **)(*(long *)(local_140 + 0x48) + 0x18))();
  }
  local_140 = 0;
  local_138 = 0;
  if (local_168 != 0) {
    (**(code **)(*(long *)(local_168 + 0x48) + 0x18))();
    local_168 = 0;
  }
  iVar3 = 4;
  if (local_128 != 0) {
    local_160 = 0x12e69f21900c2e8;
    iVar3 = FUN_006e7220(local_128,&local_160);
    if (iVar3 < 0) {
      iVar3 = 4;
    }
  }
  local_130 = PTR_DAT_02710ad8 + 0x10;
  if (local_128 == 0) {
    local_128 = 0;
    pcVar1 = local_98;
  }
  else {
    FUN_006e2100(local_128,&local_130);
    lVar2 = local_128;
    local_128 = 0;
    pcVar1 = local_98;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      pcVar1 = local_98;
    }
  }
  local_98 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    local_98 = (code *)0x0;
    (*pcVar1)(auStack_80);
  }
  pcVar1 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    local_118 = (code *)0x0;
    (*pcVar1)(auStack_100);
  }
  if (local_128 != 0) {
    (**(code **)(*(long *)(local_128 + 0x48) + 0x18))();
  }
  return iVar3;
}


