/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058cce0; name: FUN_0058cce0
 */


uint FUN_0058cce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,long param_10,undefined8 param_11,long param_12,long param_13,
                 undefined8 param_14,long param_15,long param_16,long param_17,undefined8 param_18,
                 int param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
                 byte param_23,undefined8 param_24,undefined4 param_25,undefined4 param_26,
                 undefined4 param_27,undefined8 param_28,undefined4 param_29,undefined4 param_30,
                 undefined4 param_31,undefined4 param_32,undefined8 param_33,int param_34,
                 long param_35,undefined8 param_36,undefined8 param_37,undefined4 param_38,
                 byte param_39)

{
  uint uVar1;
  long lVar2;
  undefined8 in_stack_fffffffffffffe90;
  undefined4 uVar3;
  undefined8 in_stack_fffffffffffffea0;
  undefined4 uVar4;
  undefined8 in_stack_fffffffffffffea8;
  undefined4 uVar5;
  ulong in_stack_fffffffffffffeb0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  
  uVar3 = (undefined4)((ulong)in_stack_fffffffffffffe90 >> 0x20);
  uVar4 = (undefined4)((ulong)in_stack_fffffffffffffea0 >> 0x20);
  uVar5 = (undefined4)((ulong)in_stack_fffffffffffffea8 >> 0x20);
  if ((param_16 != 0) != (param_17 != 0)) {
    if (param_34 == 0) {
      if (param_35 == 0) goto LAB_0058cd7c;
    }
    else if (param_35 != 0) {
LAB_0058cd7c:
      if (*(long **)(param_9 + 0x20) == (long *)0x0) {
        return 0xffffffff;
      }
      if ((param_39 & 1) != 0) {
        (**(code **)(**(long **)(param_9 + 0x20) + 0x138))();
        (**(code **)(**(long **)(param_9 + 0x20) + 0x140))(*(long **)(param_9 + 0x20),0xffffffff);
        (**(code **)(**(long **)(param_9 + 0x20) + 0x150))(*(long **)(param_9 + 0x20),0);
      }
      if (0x3f < param_19) {
        param_19 = 0x40;
      }
      if (param_19 < 10) {
        param_19 = 9;
      }
      lVar2 = param_10;
      if (param_12 != 0) {
        FUN_00574b90(param_9,param_12,param_10,0);
        lVar2 = param_12;
      }
      FUN_00574b90(param_9,param_11,lVar2,0);
      FUN_0058cad0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_11,
                   param_13,param_18,param_19,param_22,param_23 & 1,param_24,
                   CONCAT44(uVar3,param_20),param_21,CONCAT44(uVar4,param_25),
                   CONCAT44(uVar5,param_26),in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
      FUN_00574db0(param_30,param_31,param_32,param_9,param_13,param_14,1,param_29,0);
      FUN_00574db0(param_30,param_31,param_32,param_9,param_14,param_13,0,param_29,0);
      if (param_15 != 0) {
        local_b8 = 0x3f0000003f000000;
        uStack_b0 = 0x3f0000003f000000;
        local_c8 = 0x3f8000003f800000;
        uStack_c0 = 0x3f8000003f800000;
        local_d8 = 0;
        uStack_d0 = 0;
        FUN_00574f20(param_26,param_31,param_32,param_9,param_15,0,param_13,param_12,0,0,1,&local_b8
                     ,0,0,&local_c8,&local_d8,0,0);
        param_13 = param_15;
      }
      if (param_17 == 0) {
        param_17 = 0;
      }
      else {
        FUN_0059e450(0x3f800000,1,0,0,0,0,0,0,0);
      }
      uVar1 = FUN_00574f20(param_26,param_31,param_32,param_9,param_16,param_17,param_13,param_10,
                           param_27,param_28,0,param_33,param_34,param_35,param_36,param_37,param_38
                           ,0);
      return uVar1 & (int)uVar1 >> 0x1f;
    }
  }
  return 0xfffffffa;
}


