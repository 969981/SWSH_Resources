/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcfef0; name: FUN_00bcfef0
 */


void FUN_00bcfef0(long param_1,uint param_2,int param_3,ulong param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 local_140;
  code *local_138;
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
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  code *local_b8;
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
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_3 == 1) {
    plVar1 = (long *)(param_1 + 0x668);
    uVar3 = 0x60;
  }
  else {
    if (param_3 != 0) {
      return;
    }
    uVar3 = param_4 & 0xffffffff;
    plVar1 = (long *)(param_1 + (param_4 & 0xffffffff) * 0x10 + 0x68);
  }
  if ((param_2 & 0xffff) == 0) {
    FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),plVar1,0);
    if (param_3 == 1) {
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),param_1 + 0x688,0);
      return;
    }
  }
  else {
    local_50 = 0;
    uStack_48 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    local_b8 = (code *)0x0;
    FUN_0168c190(*(long *)(param_1 + 0x60) + uVar3 * 0x3d0,param_2,0,&local_c0);
    pcVar2 = local_b8;
    if (local_b8 != (code *)0x0) {
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      local_b8 = (code *)0x0;
      (*pcVar2)(&local_a0);
    }
    if (*plVar1 != plVar1[1]) {
      FUN_0167b9b0(*(undefined8 *)(param_1 + 0x58),plVar1,1);
    }
    if (param_3 == 1) {
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
      local_130 = 0;
      uStack_128 = 0;
      local_140 = 0;
      local_138 = (code *)0x0;
      FUN_0168c190(*(long *)(param_1 + 0x60) + 0x175a0,param_2,0,&local_140);
      pcVar2 = local_138;
      if (local_138 != (code *)0x0) {
        local_130 = 0;
        uStack_128 = 0;
        local_140 = 0;
        local_138 = (code *)0x0;
        (*pcVar2)(&local_120);
      }
    }
  }
  return;
}


