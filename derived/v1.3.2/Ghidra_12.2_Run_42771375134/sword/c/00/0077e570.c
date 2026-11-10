/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077e570; name: FUN_0077e570
 */


void FUN_0077e570(long param_1,undefined8 param_2,long param_3,void *param_4,size_t param_5)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined *local_160;
  long local_158;
  long local_150;
  code *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
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
  long local_d0;
  code *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_138 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = (code *)0x0;
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
  local_130 = 0;
  uStack_128 = 0;
  local_160 = PTR_DAT_02710ac8 + 0x10;
  local_150 = 0;
  local_148 = (code *)0x0;
  local_140 = 0;
  FUN_006dccd0(&local_48,*(undefined8 *)PTR_DAT_02710788,0,param_2,0,*(undefined8 *)(param_1 + 8),0)
  ;
  local_158 = local_48;
  if (local_48 != 0) {
    plVar3 = (long *)(local_48 + 0x48);
    (**(code **)(*plVar3 + 0x10))(plVar3);
    if ((local_150 != 0) || (local_d0 != 0)) {
      FUN_006e1e70(local_48,&local_160,1);
    }
    FUN_006e1be0(local_48);
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  lVar2 = local_158;
  if (*(long *)(local_158 + 0x180) != 0) {
    memcpy(param_4,(void *)(*(long *)(local_158 + 400) + param_3),param_5);
  }
  local_160 = PTR_DAT_02710a48 + 0x10;
  if (lVar2 == 0) {
    local_158 = 0;
    pcVar1 = local_c8;
  }
  else {
    FUN_006e2100(lVar2,&local_160);
    lVar2 = local_158;
    local_158 = 0;
    pcVar1 = local_c8;
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      pcVar1 = local_c8;
    }
  }
  local_c8 = pcVar1;
  if (pcVar1 != (code *)0x0) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    local_c8 = (code *)0x0;
    (*pcVar1)(&local_b0);
  }
  pcVar1 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = 0;
    local_138 = 0;
    local_150 = 0;
    local_148 = (code *)0x0;
    (*pcVar1)(&local_130);
  }
  if (local_158 != 0) {
    (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
  }
  return;
}


