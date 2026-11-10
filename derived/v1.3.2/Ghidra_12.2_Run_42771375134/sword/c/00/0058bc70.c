/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058bc70; name: FUN_0058bc70
 */


undefined4
FUN_0058bc70(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,long param_7,uint param_8,uint param_9,
            undefined4 *param_10,float *param_11,long *param_12,undefined8 param_13,long *param_14)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_stack_00000020;
  float in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  float in_stack_00000040;
  float in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  
  if (in_stack_00000040 <= 0.0) {
    in_stack_00000040 = in_stack_00000020;
  }
  if (in_stack_00000048 <= 0.0) {
    in_stack_00000048 = in_stack_00000028 * DAT_01d4c5a4;
  }
  if (*(int *)(param_7 + (long)(int)param_9 * 4 + 0x7de0) == 0) {
    return 0xfffffffc;
  }
  (**(code **)(**(long **)(param_7 + 0x30) + 0xe8))();
  local_b8 = in_stack_00000020;
  fStack_b4 = in_stack_00000028;
  fVar7 = (float)param_3;
  local_b0 = fVar7 / *param_11;
  fVar8 = (float)param_4;
  local_ac = -fVar8 / param_11[1];
  (**(code **)(**(long **)(param_7 + 0x30) + 0xa0))
            (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0xd4),&local_b8);
  local_c8 = *param_10;
  local_c4 = param_10[1];
  local_c0 = 0;
  (**(code **)(**(long **)(param_7 + 0x30) + 0xa0))
            (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0xf0),&local_c8);
  local_148 = *in_stack_00000038;
  uStack_140 = in_stack_00000038[1];
  local_138 = in_stack_00000038[2];
  uStack_130 = in_stack_00000038[3];
  local_128 = in_stack_00000038[4];
  uStack_120 = in_stack_00000038[5];
  local_118 = in_stack_00000038[6];
  uStack_110 = in_stack_00000038[7];
  if ((param_9 | 1) == 3) {
    FUN_005156a0(&local_188,in_stack_00000030);
    local_f0 = local_170;
    local_f8 = local_178;
    local_100 = local_180;
    local_108 = local_188;
    local_d0 = local_150;
    local_d8 = local_158;
    local_e0 = local_160;
    local_e8 = local_168;
  }
  (**(code **)(**(long **)(param_7 + 0x30) + 200))
            (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0x144),&local_148,2);
  if (param_8 < 7) {
    uVar5 = -(ulong)(param_8 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_8 << 2;
    DAT_02760a18 = *(undefined4 *)(&DAT_01d98d30 + uVar5);
    DAT_02760a1c = *(undefined4 *)(&DAT_01d98d50 + uVar5);
    DAT_02760a20 = *(undefined4 *)(&DAT_01d98d70 + uVar5);
    DAT_02760a24 = *(undefined4 *)(&DAT_01d98d90 + uVar5);
  }
  else {
    DAT_02760a18 = 0;
    DAT_02760a1c = 0;
    DAT_02760a20 = 0;
    DAT_02760a24 = 0;
  }
  DAT_02760a28 = in_stack_00000040;
  DAT_02760a2c = in_stack_00000048;
  fVar6 = logf(in_stack_00000048 + 1.0);
  DAT_02760a34 = 0;
  DAT_02760a30 = 1.0 / (fVar6 / DAT_01d4c4dc);
  (**(code **)(**(long **)(param_7 + 0x30) + 0xb0))
            (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0x100),&DAT_02760a18,2);
  uVar2 = (**(code **)(*param_12 + 0x80))(param_12);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)param_12 + 0x4c));
  if (fVar6 == fVar7) {
    fVar6 = (float)NEON_ucvtf((int)param_12[10]);
    bVar1 = fVar6 == fVar8;
  }
  else {
    bVar1 = false;
  }
  uVar3 = 4;
  if ((bool)(param_9 < 4 & bVar1)) {
    uVar3 = 5;
  }
  (**(code **)(*param_12 + 0x78))(param_12,uVar3);
  (**(code **)(**(long **)(param_7 + 0x30) + 0xd0))
            (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0x40),param_12);
  if (param_14 == (long *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (**(code **)(*param_14 + 0x80))(param_14);
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)((long)param_14 + 0x4c));
    uVar4 = 4;
    if (fVar6 == fVar7) {
      fVar7 = (float)NEON_ucvtf((int)param_14[10]);
      uVar4 = 5;
      if (fVar7 != fVar8) {
        uVar4 = 4;
      }
    }
    (**(code **)(*param_14 + 0x78))(param_14,uVar4);
    (**(code **)(**(long **)(param_7 + 0x30) + 0xd0))
              (*(long **)(param_7 + 0x30),*(undefined4 *)(param_7 + 0x44),param_14);
  }
  if (param_9 < 4) {
    switch((long)&switchD_0058bfcc::switchdataD_01d6c7d8 +
           (long)(int)(&switchD_0058bfcc::switchdataD_01d6c7d8)[param_9]) {
    case 0x58bfd0:
      uVar4 = FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000050
                          );
      break;
    case 0x58c028:
      uVar4 = FUN_00572300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000050
                          );
      break;
    case 0x58c098:
      goto LAB_0058c0e8;
    case 0x58c10c:
      uVar4 = FUN_00572d80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000050
                          );
    }
  }
  else {
LAB_0058c0e8:
    uVar4 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,in_stack_00000050);
  }
  (**(code **)(*param_12 + 0x78))(param_12,uVar2);
  if (param_14 != (long *)0x0) {
    (**(code **)(*param_14 + 0x78))(param_14,uVar3);
  }
  return uVar4;
}


