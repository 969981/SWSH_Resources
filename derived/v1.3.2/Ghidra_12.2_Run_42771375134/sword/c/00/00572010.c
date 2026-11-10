/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00572010; name: FUN_00572010
 */


void FUN_00572010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,uint param_10)

{
  undefined8 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  void *__dest;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_ac;
  undefined4 local_a8;
  int local_54;
  
  if ((param_10 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x148))(*(long **)(param_9 + 0x20),0xffffffff,1);
  }
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0x108))
              (*(long **)(param_9 + 0x30),&local_190,param_10 & 0xffff);
    (**(code **)(**(long **)(param_9 + 0x30) + 0x118))(*(long **)(param_9 + 0x30),0);
  }
  local_d8 = in_stack_00000000;
  uStack_d4 = in_stack_00000008;
  local_e8 = in_stack_00000010;
  uStack_e4 = in_stack_00000018;
  local_f0 = param_7;
  uStack_ec = param_8;
  local_e0 = param_5;
  uStack_dc = param_6;
  FUN_00571520(param_1,param_2,param_3,param_4,param_9,2,&local_e0,&local_f0,param_10,&local_54,
               &local_d0,&local_130);
  local_190 = local_d0;
  local_18c = local_cc;
  local_188 = local_130;
  local_180 = local_110;
  local_17c = local_10c;
  local_178 = local_c4;
  local_174 = local_c0;
  local_170 = local_128;
  local_168 = local_108;
  local_164 = local_104;
  local_160 = local_b8;
  local_15c = local_b4;
  local_158 = local_120;
  local_150 = local_100;
  local_14c = local_fc;
  local_148 = local_ac;
  local_144 = local_a8;
  local_140 = local_118;
  local_138 = local_f8;
  puVar1 = (undefined8 *)(param_9 + 0x30);
  local_134 = local_f4;
  FUN_0056d170(puVar1);
  uVar4 = local_54 * 0x18;
  piVar3 = (int *)(param_9 + 0x29bb8);
  iVar6 = *piVar3;
  uVar2 = iVar6 + uVar4;
  if (*(uint *)(param_9 + 0x29bbc) <= uVar2) {
    iVar6 = 0;
    *piVar3 = 0;
  }
  *piVar3 = iVar6 + uVar4;
  uVar5 = 6;
  if (uVar2 < *(uint *)(param_9 + 0x29bbc)) {
    uVar5 = 2;
  }
  __dest = (void *)FUN_00549260(*(undefined8 *)(param_9 + 0x29bc8),uVar5,iVar6,uVar4);
  memcpy(__dest,&local_190,(ulong)uVar4);
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bc8));
  (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
            (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x299f8),
             *(undefined8 *)(param_9 + 0x29bc8),iVar6,0,0,1);
  (**(code **)(**(long **)(param_9 + 0x20) + 0x48))
            (*(long **)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x29bd0),0);
  FUN_0059a530(*(undefined8 *)(param_9 + 0x30));
  (**(code **)(**(long **)(param_9 + 0x20) + 0x1d0))
            (*(long **)(param_9 + 0x20),5,local_54,0,0,local_54 + -1);
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)*puVar1 + 0x120))();
    (**(code **)(*(long *)*puVar1 + 0x110))();
  }
  return;
}


