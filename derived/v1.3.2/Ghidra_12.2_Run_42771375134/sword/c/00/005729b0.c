/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005729b0; name: FUN_005729b0
 */


void FUN_005729b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
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
  undefined4 local_f0;
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
              (*(long **)(param_9 + 0x30),&local_278,param_10 & 0xffff);
    (**(code **)(**(long **)(param_9 + 0x30) + 0x118))(*(long **)(param_9 + 0x30),0);
  }
  uStack_e8 = in_stack_00000000;
  local_e4 = in_stack_00000008;
  uStack_e0 = in_stack_00000020;
  local_dc = in_stack_00000028;
  uStack_d8 = in_stack_00000040;
  local_d4 = in_stack_00000048;
  local_110 = in_stack_00000010;
  local_10c = in_stack_00000018;
  local_118 = param_7;
  local_114 = param_8;
  local_108 = in_stack_00000030;
  local_104 = in_stack_00000038;
  local_100 = in_stack_00000050;
  local_fc = in_stack_00000058;
  local_f8 = in_stack_00000070;
  local_f4 = in_stack_00000078;
  local_f0 = param_5;
  local_ec = param_6;
  uStack_d0 = in_stack_00000060;
  local_cc = in_stack_00000068;
  FUN_00571520(param_1,param_2,param_3,param_4,param_9,5,&local_f0,&local_118,param_10,&local_94,
               &local_c8,&local_1b8);
  local_278 = local_c8;
  local_274 = local_c4;
  local_270 = local_1b8;
  local_268 = local_198;
  local_260 = local_178;
  local_258 = local_158;
  local_250 = local_138;
  local_24c = local_134;
  local_248 = local_bc;
  local_244 = local_b8;
  local_240 = local_1b0;
  local_238 = local_190;
  local_230 = local_170;
  local_228 = local_150;
  local_220 = local_130;
  local_21c = local_12c;
  local_218 = local_b0;
  local_214 = local_ac;
  local_210 = local_1a8;
  local_208 = local_188;
  local_200 = local_168;
  local_1f8 = local_148;
  local_1f0 = local_128;
  local_1ec = local_124;
  local_1e8 = local_a4;
  local_1e4 = local_a0;
  local_1e0 = local_1a0;
  local_1d8 = local_180;
  local_1d0 = local_160;
  local_1c8 = local_140;
  local_1c0 = local_120;
  puVar1 = (undefined8 *)(param_9 + 0x30);
  local_1bc = local_11c;
  FUN_0056d450(puVar1);
  uVar4 = local_94 * 0x30;
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
  memcpy(__dest,&local_278,(ulong)uVar4);
  FUN_00549430(*(undefined8 *)(param_9 + 0x29bc8));
  (**(code **)(**(long **)(param_9 + 0x30) + 0x150))
            (*(long **)(param_9 + 0x30),*(undefined8 *)(param_9 + 0x29a10),
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


