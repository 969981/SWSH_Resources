/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bb8910; name: FUN_00bb8910
 */


undefined8 FUN_00bb8910(long param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_190;
  code *local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  char *pcStack_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  bVar2 = FUN_0087ee40(param_2);
  if (0x61 < bVar2) {
    return 0;
  }
  local_80 = 0x2a939633d19cfb16;
  local_78 = "ribbon_table";
  local_70 = 0xc;
  FUN_012b4250(auStack_50,param_1 + 0x6e8,&local_80);
  FUN_012b4190(auStack_60,auStack_50,bVar2);
  local_e8 = 0x5302ac66647b5161;
  local_e0 = "imageName";
  local_d8 = 9;
  FUN_012b4250(&local_c8,auStack_60,&local_e8);
  local_a0 = 0xcbf29ce484222645;
  local_98 = "";
  local_90 = 0;
  local_88 = 0;
  FUN_012b4820(&local_80,&local_c8,&local_a0);
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
    local_88 = 0;
  }
  if (bVar2 == 0x26) {
    iVar3 = FUN_0087ee10(param_2,0x26);
    if (iVar3 != 8) goto LAB_00bb8af4;
  }
  else if ((bVar2 != 0x25) || (iVar3 = FUN_0087ee10(param_2,0x25), iVar3 != 0x28))
  goto LAB_00bb8af4;
  local_c8 = 0x88dc44fcbd8b3009;
  local_c0 = "imageName2";
  local_b8 = 10;
  FUN_012b4250(auStack_b0,auStack_60,&local_c8);
  local_e8 = 0xcbf29ce484222645;
  local_e0 = "";
  local_d8 = 0;
  local_d0 = 0;
  FUN_012b4820(&local_a0,auStack_b0,&local_e8);
  local_80 = local_a0;
  local_78 = local_98;
  local_70 = local_90;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  local_68 = local_88;
  local_88 = 0;
  if (local_d0 != 0) {
    (**(code **)(*(long *)(local_d0 + 0x48) + 0x18))();
    local_d0 = 0;
  }
LAB_00bb8af4:
  uVar4 = *(undefined8 *)(param_1 + 0x508);
  local_108 = local_80;
  pcStack_100 = local_78;
  local_f8 = local_70;
  local_f0 = local_68;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_170 = 0;
  uStack_168 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_190 = 0;
  local_188 = (code *)0x0;
  FUN_0168d2d0(uVar4,&local_108,0,&local_190);
  pcVar1 = local_188;
  if (local_188 != (code *)0x0) {
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    local_188 = (code *)0x0;
    (*pcVar1)(&local_170);
  }
  if (local_f0 != 0) {
    (**(code **)(*(long *)(local_f0 + 0x48) + 0x18))();
    local_f0 = 0;
  }
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
  }
  return 1;
}


