/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01469a00; name: FUN_01469a00
 */


void FUN_01469a00(long param_1)

{
  int iVar1;
  char *pcVar2;
  byte *pbVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  ulong local_48;
  
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x268);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar5 = 0xcbf29ce484222645;
  pcVar2 = (char *)FUN_0152d900(lVar4,*(undefined4 *)(param_1 + 0x838));
  local_c0 = 0;
  local_58 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  snprintf((char *)&local_b8,100,"pane_%s","T_status_00");
  local_48 = 0xcbf29ce484222645;
  if ((byte)local_b8 != 0) {
    local_48 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)&local_b8 | 1);
    do {
      local_48 = (local_48 ^ (byte)local_b8) * 0x100000001b3;
      local_b8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_b8 != 0);
  }
  local_58 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  if ((char)local_120 == '\0') {
    snprintf((char *)&local_b8,100,"anime_%s","change_icon");
  }
  else {
    snprintf((char *)&local_b8,100,"anime_%s_%s",(char *)&local_120,"change_icon");
  }
  if ((byte)local_b8 != 0) {
    pbVar3 = (byte *)((ulong)&local_b8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_b8) * 0x100000001b3;
      local_b8._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_b8 != 0);
  }
  local_b8 = uVar5;
  if (*pcVar2 == '\x02') {
    local_128 = 0x27f23f26a4d93af;
    FUN_014618d0(param_1,&local_48,&local_128,0);
    FUN_00ffd510(0x40000000,param_1 + 0x100,&local_b8);
  }
  else if (*pcVar2 == '\x03') {
    local_128 = 0x27f20f26a4d8e96;
    FUN_014618d0(param_1,&local_48,&local_128,0);
    FUN_00ffd510(0x40400000,param_1 + 0x100,&local_b8);
  }
  else {
    iVar1 = FUN_01452170(*(undefined8 *)(param_1 + 0x830),*(undefined4 *)(param_1 + 0x838));
    if (iVar1 == 0) {
      local_128 = 0x27f22f26a4d91fc;
      FUN_014618d0(param_1,&local_48,&local_128,0);
      FUN_00ffd510(0,param_1 + 0x100,&local_b8);
    }
    else {
      local_128 = 0x28631f26a53ca27;
      FUN_014618d0(param_1,&local_48,&local_128,0);
      FUN_00ffd510(0x3f800000,param_1 + 0x100,&local_b8);
    }
  }
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


