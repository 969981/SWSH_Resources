/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e6e610; name: FUN_00e6e610
 */


void FUN_00e6e610(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *local_180;
  code *local_178;
  code *local_170;
  undefined1 *local_168;
  long alStack_160 [13];
  undefined8 local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  char *pcStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  
  if (*(long *)(param_1 + 0x4d0) != 0x7524e048aa4982ab &&
      *(long *)(param_1 + 0x4d0) != 0x9631c357accaf23) {
    return;
  }
  local_78 = 0x4cc07e2b84591927;
  local_80 = 0;
  local_70[0] = 0xaca4f94a9a54f8f1;
  local_b8 = 0xb491e19001ee62ea;
  pcStack_b0 = "loc_ob_Lobj01";
  local_98 = 0xd72452feb739bdc;
  local_a8 = 0xd;
  uStack_a0 = 0;
  local_90 = "loc_ob_Robj01";
  uStack_88 = 0xd;
  local_f8 = 0x9f359693c667a99f;
  pcStack_f0 = "loc_attach";
  local_d8 = 0x9f359693c667a99f;
  pcStack_d0 = "loc_attach";
  local_180 = (undefined1 *)0x68c3754f4bf8081a;
  local_e8 = 10;
  uStack_e0 = 0;
  local_c8 = 10;
  uStack_c0 = 0;
  lVar1 = FUN_00e6f950(param_1,param_2,&local_180,&local_78,&local_b8,&local_f8);
  local_170 = FUN_00e70b70;
  local_180 = &LAB_00e70990;
  local_178 = FUN_00e70b60;
  local_168 = &LAB_00e70b80;
  pcVar2 = *(code **)(lVar1 + 0x1b8);
  alStack_160[0] = param_1;
  if (pcVar2 == (code *)0x0) {
LAB_00e6e790:
    (*local_170)(alStack_160,lVar1 + 0x1d0);
    *(undefined1 **)(lVar1 + 0x1c8) = local_168;
    *(code **)(lVar1 + 0x1b8) = local_178;
    *(code **)(lVar1 + 0x1c0) = local_170;
    *(undefined8 *)(lVar1 + 0x1b0) = local_180;
  }
  else {
    *(undefined8 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    (*pcVar2)(lVar1 + 0x1d0);
    if (local_170 != (code *)0x0) goto LAB_00e6e790;
  }
  pcVar2 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar2)(alStack_160);
  }
  local_180 = (undefined1 *)0x68c3754f4bf8081a;
  lVar1 = FUN_00e6f950(param_1,param_2,&local_180,local_70,&local_98,&local_d8);
  local_168 = &LAB_00e70b80;
  local_180 = &LAB_00e70990;
  local_178 = FUN_00e70b60;
  local_170 = FUN_00e70b70;
  pcVar2 = *(code **)(lVar1 + 0x1b8);
  alStack_160[0] = param_1;
  if (pcVar2 != (code *)0x0) {
    *(undefined8 *)(lVar1 + 0x1c0) = 0;
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1b0) = 0;
    *(undefined8 *)(lVar1 + 0x1b8) = 0;
    (*pcVar2)(lVar1 + 0x1d0);
    if (local_170 == (code *)0x0) goto LAB_00e6e860;
  }
  (*local_170)(alStack_160,lVar1 + 0x1d0);
  *(undefined1 **)(lVar1 + 0x1c8) = local_168;
  *(code **)(lVar1 + 0x1b8) = local_178;
  *(code **)(lVar1 + 0x1c0) = local_170;
  *(undefined8 *)(lVar1 + 0x1b0) = local_180;
LAB_00e6e860:
  pcVar2 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined1 *)0x0;
    local_180 = (undefined1 *)0x0;
    local_178 = (code *)0x0;
    (*pcVar2)(alStack_160);
  }
  return;
}


