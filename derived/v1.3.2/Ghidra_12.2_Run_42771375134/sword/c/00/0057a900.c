/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0057a900; name: FUN_0057a900
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0057a900(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,long param_9
            ,undefined8 *param_10,long *param_11,long *param_12,long *param_13,undefined8 param_14,
            undefined4 param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float in_stack_00000040;
  float in_stack_00000048;
  
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x20754));
  DAT_02760c28._0_4_ = 1.0 / in_stack_00000048;
  _DAT_02760c18 = *param_10;
  _DAT_02760c20 = param_10[1];
  DAT_02760c28._4_4_ = -in_stack_00000040 / in_stack_00000048;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,2);
  if (param_11 == (long *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(*param_11 + 0x80))(param_11);
    (**(code **)(*param_11 + 0x78))(param_11,4);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_11);
  }
  if (param_12 != (long *)0x0) {
    (**(code **)(*param_12 + 0x78))(param_12,4);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),param_12);
  }
  if (param_13 != (long *)0x0) {
    (**(code **)(*param_13 + 0x78))(param_13,4);
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x48),param_13);
  }
  uVar2 = FUN_00572300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_15);
  if (param_11 != (long *)0x0) {
    (**(code **)(*param_11 + 0x78))(param_11,uVar1);
  }
  return uVar2;
}


