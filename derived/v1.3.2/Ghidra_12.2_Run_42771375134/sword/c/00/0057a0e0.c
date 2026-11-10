/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057a0e0; name: FUN_0057a0e0
 */


void FUN_0057a0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 long param_9,long param_10,undefined8 param_11,float *param_12,undefined4 *param_13
                 ,float *param_14,int param_15,undefined4 *param_16)

{
  long lVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  float *in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  
  if ((in_stack_00000020 == (float *)0x0) || (*in_stack_00000020 == 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  lVar1 = param_9 + (long)param_15 * 4;
  if (in_stack_00000030 == 0) {
    puVar3 = (undefined4 *)(lVar1 + 0x1c500);
    uVar4 = 0xc4e4;
  }
  else {
    puVar3 = (undefined4 *)(lVar1 + 0x1c538);
    uVar4 = 0xc51c;
  }
  if (!bVar2) {
    puVar3 = (undefined4 *)(lVar1 + (ulong)(uVar4 | 0x10000));
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),*puVar3);
  local_b8 = *(float *)(param_10 + 0x2c);
  fStack_b4 = *(float *)(param_10 + 0x30);
  local_b0 = fStack_b4 * local_b8;
  fStack_ac = fStack_b4 - local_b8;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_b8);
  DAT_02760c18 = *param_12;
  DAT_02760c1c = param_12[1];
  DAT_02760c20 = *param_13;
  DAT_02760c24 = param_13[1];
  DAT_02760c38 = 1.0 / *param_12;
  DAT_02760c3c = 1.0 / param_12[1];
  DAT_02760c40 = 1.0 / *param_14;
  DAT_02760c44._0_4_ = -param_14[1] / *param_14;
  DAT_02760c28._0_4_ = *param_16;
  DAT_02760c28._4_4_ = param_16[1];
  if (bVar2) {
    DAT_02760c30._0_4_ = *in_stack_00000020 / DAT_01d4c6d8;
    DAT_02760c30._4_4_ = in_stack_00000020[1] + DAT_01d4c1f4;
  }
  else {
    DAT_02760c30._4_4_ = 0.0;
    DAT_02760c30._0_4_ = 0.0;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,3);
  (**(code **)(**(long **)(param_9 + 0x30) + 200))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x144),param_11,1);
  local_c8 = 0x3f800000;
  uStack_c0 = 0x3f800000;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xf0),&local_c8);
  if (in_stack_00000028 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),in_stack_00000028);
  }
  if (in_stack_00000030 == 0) {
    FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 in_stack_00000038);
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),in_stack_00000030);
    FUN_00572300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 in_stack_00000038);
  }
  return;
}


