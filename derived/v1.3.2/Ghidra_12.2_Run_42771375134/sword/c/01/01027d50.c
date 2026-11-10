/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01027d50; name: FUN_01027d50
 */


int FUN_01027d50(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
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
  
  uVar5 = *(undefined8 *)PTR_DAT_02710890;
  local_190 = 0xb059dd7e20c2c317;
  local_188 = "script/place_name.dat";
  local_180 = 0x15;
  local_178 = 0;
  FUN_014bfd20(&local_170,&local_190,10);
  FUN_014cd600(&local_140,uVar5,&local_170);
  if ((local_158 != 0) && (local_170 != 0)) {
    (**(code **)(*(long *)(local_170 + 0x48) + 0x18))();
  }
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
    iVar3 = FUN_006e7220(local_138,param_1);
    if (iVar3 < 0) {
      if (local_138 == 0) goto LAB_01027e80;
      iVar3 = FUN_006e7220(local_138,PTR_DAT_02720270);
    }
    if (0 < iVar3) {
      iVar4 = 0;
      if (iVar3 < 0xffff) {
        iVar4 = iVar3;
      }
      goto LAB_01027e84;
    }
  }
LAB_01027e80:
  iVar4 = 0;
LAB_01027e84:
  local_140 = PTR_DAT_02710ad8 + 0x10;
  if (local_138 == 0) {
    local_138 = 0;
    pcVar1 = local_a8;
  }
  else {
    FUN_006e2100(local_138,&local_140);
    lVar2 = local_138;
    local_138 = 0;
    pcVar1 = local_a8;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      pcVar1 = local_a8;
    }
  }
  local_a8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar1)(auStack_90);
  }
  pcVar1 = local_128;
  if (local_128 != (code *)0x0) {
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    (*pcVar1)(auStack_110);
  }
  if (local_138 != 0) {
    (**(code **)(*(long *)(local_138 + 0x48) + 0x18))();
  }
  return iVar4;
}


