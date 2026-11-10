/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00581230; name: FUN_00581230
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,long param_10,ulong param_11,undefined4 param_12)

{
  bool bVar1;
  float in_stack_00000000;
  float in_stack_00000008;
  float in_stack_00000010;
  undefined4 local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x299e0));
  _DAT_02760c18 = 0x3f8000003f800000;
  _DAT_02760c20 = 0x3e8000003f800000;
  DAT_02760c30._0_4_ = powf(10.0,in_stack_00000008 + 1.0);
  DAT_02760c28._4_4_ = 0x4014d653;
  DAT_02760c38 = 0x41200000;
  bVar1 = (param_11 & 1) == 0;
  DAT_02760c5c._0_4_ = 0x3eaaaaab;
  DAT_02760c44._4_4_ = (undefined4)DAT_02760c5c;
  if (bVar1) {
    DAT_02760c44._4_4_ = 0x3f800000;
    DAT_02760c5c._0_4_ = 0;
  }
  DAT_02760c28._0_4_ = in_stack_00000000;
  DAT_02760c5c._4_4_ = 0x3f2aaaab;
  if (bVar1) {
    DAT_02760c5c._4_4_ = 0;
  }
  DAT_02760c3c = in_stack_00000000;
  DAT_02760c40 = in_stack_00000008;
  DAT_02760c44._0_4_ = in_stack_00000000;
  DAT_02760c54._4_4_ = 0;
  DAT_02760c64._0_4_ = 0;
  DAT_02760c30._4_4_ = 1.0 / in_stack_00000000;
  DAT_02760c4c._0_4_ = DAT_02760c44._4_4_;
  DAT_02760c4c._4_4_ = DAT_02760c44._4_4_;
  DAT_02760c54._0_4_ = DAT_02760c44._4_4_;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&DAT_02760c18,5);
  local_8c = (float)param_4 / in_stack_00000010;
  local_90 = (undefined4)param_3;
  local_88 = (undefined4)param_1;
  local_84 = (float)param_2;
  if (*(char *)(*(long *)(param_9 + 0x20) + 0x58) == '\0') {
    local_8c = -local_8c;
    local_84 = (float)param_4 - local_84;
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_90);
  if (param_10 != 0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x38),param_10);
  }
  FUN_00571d00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_12);
  return;
}


