/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00572300; name: FUN_00572300
 */


void FUN_00572300(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_94;
  
  if ((param_10 >> 0x12 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x20) + 0x148))(*(long **)(param_9 + 0x20),0xffffffff,1);
  }
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0x108))
              (*(long **)(param_9 + 0x30),&local_1d8,param_10 & 0xffff);
    (**(code **)(**(long **)(param_9 + 0x30) + 0x118))(*(long **)(param_9 + 0x30),0);
  }
  local_e4 = in_stack_00000038;
  uStack_d8 = in_stack_00000000;
  uStack_f0 = in_stack_00000010;
  local_d4 = in_stack_00000008;
  uStack_d0 = in_stack_00000020;
  local_cc = in_stack_00000028;
  local_ec = in_stack_00000018;
  uStack_e8 = in_stack_00000030;
  local_f8 = param_7;
  local_f4 = param_8;
  uStack_e0 = param_5;
  local_dc = param_6;
  FUN_00571520(param_1,param_2,param_3,param_4,param_9,3,&uStack_e0,&local_f8,param_10,&local_94,
               &local_c8,&local_158);
  local_1d8 = local_c8;
  local_1d4 = local_c4;
  local_1d0 = local_158;
  local_1c8 = local_138;
  local_1c0 = local_118;
  local_1bc = local_114;
  local_1b8 = local_bc;
  local_1b4 = local_b8;
  local_1b0 = local_150;
  local_1a8 = local_130;
  local_1a0 = local_110;
  local_19c = local_10c;
  local_198 = local_b0;
  local_194 = local_ac;
  local_190 = local_148;
  local_18c = local_144;
  local_188 = local_128;
  local_184 = local_124;
  local_180 = local_108;
  local_17c = local_104;
  local_178 = local_a4;
  local_174 = local_a0;
  local_170 = local_140;
  local_16c = local_13c;
  local_168 = local_120;
  local_164 = local_11c;
  local_160 = local_100;
  puVar1 = (undefined8 *)(param_9 + 0x30);
  local_15c = local_fc;
  FUN_0056d260(puVar1);
  piVar3 = (int *)(param_9 + 0x29bb8);
  iVar6 = *piVar3;
  uVar4 = local_94 * 0x20;
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
  memcpy(__dest,&local_1d8,(ulong)uVar4);
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bc8));
  (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
            (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x29a00),
             *(undefined8 *)(param_9 + 0x29bc8),iVar6,0,0,1);
  (**(code **)(**(long **)(param_9 + 0x20) + 0x48))
            (*(long **)(param_9 + 0x20),*(undefined8 *)(param_9 + 0x29bd0),0);
  FUN_0059a530(*(undefined8 *)(param_9 + 0x30));
  (**(code **)(**(long **)(param_9 + 0x20) + 0x1d0))
            (*(long **)(param_9 + 0x20),5,local_94,0,0,local_94 + -1);
  if ((param_10 >> 0x11 & 1) == 0) {
    (**(code **)(*(long *)*puVar1 + 0x120))();
    (**(code **)(*(long *)*puVar1 + 0x110))();
  }
  return;
}


