/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058db80; name: FUN_0058db80
 */


undefined4
FUN_0058db80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,float *param_10,undefined8 *param_11,long *param_12,long *param_13,uint param_14,
            uint param_15,undefined4 param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000028;
  float in_stack_00000030;
  float in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000048;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  
  if (*(int *)(param_9 + 0x2075c) == 0) {
    uVar3 = 0xfffffffc;
  }
  else {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))();
    DAT_02760a18 = in_stack_00000020;
    DAT_02760a1c = in_stack_00000028;
    DAT_02760a20 = in_stack_00000040;
    DAT_02760a24 = in_stack_00000048;
    FUN_00511040(&local_e8,0);
    if (((((*param_10 == local_e8) && (param_10[1] == fStack_e4)) && (param_10[2] == local_e0)) &&
        ((param_10[3] == local_dc && (param_10[4] == fStack_d8)))) &&
       ((param_10[5] == fStack_d4 &&
        ((param_10[6] == (float)local_d0 && (param_10[7] == local_d0._4_4_)))))) {
      DAT_02760a30 = DAT_01d4c3f8;
      DAT_02760a2c = DAT_01d4be80;
      DAT_02760a28 = DAT_01d4be14;
    }
    else {
      FUN_00511bb0(&local_e8,param_10,param_10 + 2,param_10 + 4,param_10 + 6);
      DAT_02760a30 = local_c8._4_4_;
      DAT_02760a2c = fStack_d4;
      DAT_02760a28 = fStack_e4;
    }
    if (in_stack_00000030 <= DAT_01d4c104) {
      in_stack_00000030 = 1.1754944e-38;
    }
    DAT_02760a3c = in_stack_00000038;
    if (in_stack_00000038 <= in_stack_00000030) {
      DAT_02760a3c = in_stack_00000030;
    }
    DAT_02760a34 = 0;
    DAT_02760a40 = 0;
    DAT_02760a38 = in_stack_00000030;
    (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,3);
    if (param_11 == (undefined8 *)0x0) {
      local_dc = 0.0;
      fStack_d8 = 0.0;
      fStack_e4 = 0.0;
      local_e0 = 0.0;
      local_d0 = 0;
      local_c8 = 0;
      uStack_b4 = 0;
      uStack_b0 = 0;
      uStack_bc = 0;
      local_b8 = 0;
      local_ac = 0x3f800000;
      local_c0 = 0x3f800000;
      fStack_d4 = 1.0;
      local_e8 = 1.0;
    }
    else {
      local_d0 = param_11[3];
      fStack_d8 = (float)param_11[2];
      fStack_d4 = (float)((ulong)param_11[2] >> 0x20);
      local_e8 = (float)*param_11;
      fStack_e4 = (float)((ulong)*param_11 >> 0x20);
      local_e0 = (float)param_11[1];
      local_dc = (float)((ulong)param_11[1] >> 0x20);
      local_c8 = param_11[4];
      local_b8 = (undefined4)param_11[6];
      uStack_b4 = (undefined4)((ulong)param_11[6] >> 0x20);
      uStack_b0 = (undefined4)param_11[7];
      local_ac = (undefined4)((ulong)param_11[7] >> 0x20);
      local_c0 = (undefined4)param_11[5];
      uStack_bc = (undefined4)((ulong)param_11[5] >> 0x20);
    }
    (**(code **)(**(long **)(param_9 + 0x30) + 0xc0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x13c),&local_e8);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_12);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x3c),param_13);
    uVar1 = (**(code **)(*param_12 + 0x98))(param_12);
    uVar2 = (**(code **)(*param_13 + 0x98))(param_13);
    (**(code **)(*param_12 + 0x88))(param_12,param_14 & 1);
    (**(code **)(*param_13 + 0x88))(param_13,param_15 & 1);
    uVar3 = FUN_00572010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_16);
    (**(code **)(*param_12 + 0x88))(param_12,uVar1);
    (**(code **)(*param_13 + 0x88))(param_13,uVar2);
  }
  return uVar3;
}


