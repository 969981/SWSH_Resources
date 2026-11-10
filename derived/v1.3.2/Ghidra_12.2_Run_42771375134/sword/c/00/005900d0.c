/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005900d0; name: FUN_005900d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005900d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,float param_7,float param_8,long param_9,
            long *param_10,long *param_11,long *param_12,long *param_13,float *param_14,
            undefined4 *param_15,float *param_16)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_stack_00000040;
  float in_stack_00000048;
  byte in_stack_00000050;
  undefined4 in_stack_00000058;
  undefined4 in_stack_00000060;
  int in_stack_00000068;
  float *in_stack_00000070;
  int in_stack_00000078;
  undefined4 *in_stack_00000080;
  undefined4 *in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  float in_stack_000000a8;
  float in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  uint in_stack_000000c8;
  undefined8 *in_stack_000000d0;
  undefined8 *in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 local_b8;
  undefined4 local_b4;
  ulong local_b0;
  
  if ((param_13 != (long *)0x0 & in_stack_00000050) == 0) {
    in_stack_00000078 = -1;
  }
  if ((in_stack_00000050 & 1) == 0) {
    lVar6 = 0;
  }
  else if (in_stack_00000078 == -1) {
    lVar6 = 1;
  }
  else {
    lVar6 = (long)(in_stack_00000078 + 2);
  }
  puVar7 = (undefined8 *)(param_9 + 0x30);
  (**(code **)(*(long *)*puVar7 + 0xe8))
            ((long *)*puVar7,
             *(undefined4 *)
              ((long)puVar7 + lVar6 * 4 + (ulong)(0.0 < in_stack_00000048) * 0x24 + 0x7e64));
  fVar8 = 1.0;
  if (in_stack_00000068 != 0) {
    fVar8 = 2.0;
  }
  DAT_02760c18 = fVar8 * *in_stack_00000070;
  DAT_02760c1c = fVar8 * in_stack_00000070[1];
  fVar9 = 0.0;
  if (in_stack_00000068 != 0) {
    fVar9 = -1.0;
  }
  DAT_02760c20 = fVar9 * *in_stack_00000070;
  DAT_02760c24 = fVar9 * in_stack_00000070[1];
  fVar10 = -((*param_14 / param_14[1]) * *in_stack_00000070 * param_7);
  DAT_02760c28._0_4_ = fVar8 * fVar10;
  DAT_02760c28._4_4_ = fVar8 * -(in_stack_00000070[1] * param_8);
  DAT_02760c30._0_4_ = fVar9 * fVar10;
  DAT_02760c30._4_4_ = fVar9 * -(in_stack_00000070[1] * param_8);
  DAT_02760c38 = param_14[1] * in_stack_000000a8;
  DAT_02760c40 = in_stack_00000098;
  DAT_02760c44._0_4_ = in_stack_00000040;
  DAT_02760c44._4_4_ = in_stack_000000b8;
  DAT_02760c4c._0_4_ = in_stack_000000c0;
  DAT_02760c4c._4_4_ = in_stack_000000a0;
  DAT_02760c3c = param_14[1] * in_stack_000000b0;
  DAT_02760c54._0_4_ = 1.0 / in_stack_00000040;
  DAT_02760c54._4_4_ = *param_15;
  DAT_02760c5c._0_4_ = param_15[1];
  DAT_02760c5c._4_4_ = *in_stack_00000088;
  DAT_02760c64._0_4_ = in_stack_00000088[1];
  DAT_02760c64._4_4_ = in_stack_00000090;
  DAT_02760c6c = 0x3a83126f00000000;
  DAT_02760c74._0_4_ = 0;
  DAT_02760c74._4_4_ = *param_16 * 0.0;
  DAT_02760c7c._0_4_ = param_16[1] * 0.0;
  DAT_02760c7c._4_4_ = *param_14;
  DAT_02760c84._0_4_ = param_14[1];
  ram0x02760c88 = 0x41a0000041200000;
  ram0x02760c90 = 0x40800000;
  (**(code **)(*(long *)*puVar7 + 0xb0))
            ((long *)*puVar7,*(undefined4 *)(param_9 + 0x104),&DAT_02760c18,8);
  local_b8 = *in_stack_00000080;
  local_b4 = in_stack_00000080[1];
  local_b0 = 0;
  (**(code **)(*(long *)*puVar7 + 0xa0))((long *)*puVar7,*(undefined4 *)(param_9 + 0xf0),&local_b8);
  local_b8 = in_stack_00000058;
  local_b4 = in_stack_00000060;
  local_b0 = (ulong)in_stack_000000c8;
  (**(code **)(*(long *)*puVar7 + 0xa0))((long *)*puVar7,*(undefined4 *)(param_9 + 0xd4),&local_b8);
  _DAT_02760a18 = *in_stack_000000d0;
  _DAT_02760a20 = in_stack_000000d0[1];
  _DAT_02760a28 = *in_stack_000000d8;
  _DAT_02760a30 = in_stack_000000d8[1];
  DAT_02760a38 = in_stack_00000048;
  _DAT_02760a3c = 0;
  DAT_02760a40._4_4_ = 0;
  (**(code **)(*(long *)*puVar7 + 0xb0))
            ((long *)*puVar7,*(undefined4 *)(param_9 + 0x100),&DAT_02760a18,3);
  (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_9 + 0x40),param_10);
  (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_9 + 0x44),param_12);
  (**(code **)(*(long *)*puVar7 + 0xd0))((long *)*puVar7,*(undefined4 *)(param_9 + 0x48),param_11);
  if (param_13 != (long *)0x0) {
    (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
              (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x4c),param_13);
  }
  uVar1 = (**(code **)(*param_10 + 0x80))(param_10);
  uVar2 = (**(code **)(*param_12 + 0x80))(param_12);
  uVar3 = (**(code **)(*param_11 + 0x80))(param_11);
  if (param_13 == (long *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (**(code **)(*param_13 + 0x80))(param_13);
  }
  uVar5 = 4;
  if ((in_stack_00000050 & 1) == 0) {
    uVar5 = 5;
  }
  (**(code **)(*param_12 + 0x78))(param_12,uVar5);
  (**(code **)(*param_10 + 0x78))(param_10,5);
  (**(code **)(*param_11 + 0x78))(param_11,5);
  if (param_13 != (long *)0x0) {
    (**(code **)(*param_13 + 0x78))(param_13,5);
  }
  uVar5 = FUN_00572300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       in_stack_000000e0);
  (**(code **)(*param_10 + 0x78))(param_10,uVar1);
  (**(code **)(*param_12 + 0x78))(param_12,uVar2);
  (**(code **)(*param_11 + 0x78))(param_11,uVar3);
  if (param_13 != (long *)0x0) {
    (**(code **)(*param_13 + 0x78))(param_13,uVar4);
  }
  return uVar5;
}


