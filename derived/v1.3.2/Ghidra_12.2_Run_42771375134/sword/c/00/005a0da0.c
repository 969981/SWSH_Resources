/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005a0da0; name: FUN_005a0da0
 */


undefined8
FUN_005a0da0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined8 *param_9,undefined8 param_10,uint param_11)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  float in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 in_stack_00000028;
  float in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  
  uVar1 = param_9[0x14];
  if (uVar1 != 0) {
    uVar2 = uVar1 + *(long *)(uVar1 - 8) * 0xc;
    do {
      uVar2 = uVar2 - 0xc;
    } while (uVar1 <= uVar2);
    FUN_005b9b10(*(undefined8 *)PTR_PTR_02713988);
    param_9[0x14] = 0;
  }
  param_9[0x14] = 0;
  param_9[0x12] = 0;
  param_9[0x13] = 0;
  param_9[0x10] = 0;
  param_9[0x11] = 0;
  *(undefined4 *)((long)param_9 + 0x2c) = 4;
  *(undefined4 *)(param_9 + 8) = 0x3f800000;
  fVar3 = ABS(in_stack_00000030);
  *(bool *)(param_9 + 9) = DAT_01d4c158 <= in_stack_00000010;
  *(bool *)((long)param_9 + 100) = fVar3 >= 1.0;
  fVar4 = fVar3 * DAT_01d4be10;
  *param_9 = param_10;
  *(undefined4 *)(param_9 + 1) = param_1;
  *(undefined4 *)((long)param_9 + 0xc) = param_2;
  *(undefined4 *)(param_9 + 2) = param_3;
  *(undefined4 *)((long)param_9 + 0x14) = param_4;
  *(undefined4 *)(param_9 + 3) = param_5;
  *(undefined4 *)((long)param_9 + 0x1c) = param_6;
  *(undefined4 *)(param_9 + 4) = param_7;
  *(undefined4 *)((long)param_9 + 0x24) = param_8;
  *(undefined4 *)(param_9 + 6) = uStack0000000000000000;
  *(undefined4 *)((long)param_9 + 0x34) = uStack0000000000000004;
  *(undefined4 *)(param_9 + 7) = uStack0000000000000008;
  *(undefined4 *)((long)param_9 + 0x3c) = uStack000000000000000c;
  *(float *)((long)param_9 + 0x44) = in_stack_00000010;
  *(undefined4 *)((long)param_9 + 0x4c) = uStack0000000000000018;
  *(undefined4 *)(param_9 + 10) = uStack000000000000001c;
  *(undefined4 *)((long)param_9 + 0x54) = uStack0000000000000020;
  *(undefined4 *)(param_9 + 0xb) = uStack0000000000000024;
  *(undefined4 *)((long)param_9 + 0x5c) = in_stack_00000028;
  *(float *)(param_9 + 0xc) = in_stack_00000030;
  *(float *)(param_9 + 5) = fVar4;
  if (fVar3 < 1.0) {
    if ((in_stack_00000030 < 0.0) && (-1.0 < in_stack_00000030)) {
      *(undefined4 *)(param_9 + 5) = 0x3ecccccd;
    }
  }
  else {
    in_stack_00000030 = in_stack_00000030 * DAT_01d4bfb4;
  }
  *(float *)(param_9 + 0xc) = in_stack_00000030;
  *(undefined4 *)(param_9 + 0xd) = in_stack_00000038;
  *(undefined4 *)((long)param_9 + 0x6c) = uStack0000000000000040;
  *(undefined4 *)(param_9 + 0xe) = uStack0000000000000044;
  *(undefined4 *)((long)param_9 + 0x74) = uStack0000000000000048;
  *(undefined4 *)(param_9 + 0xf) = uStack000000000000004c;
  *(undefined4 *)((long)param_9 + 0x7c) = in_stack_00000050;
  if (param_11 != 0xffffffff) {
    FUN_005a0c60(param_9 + 0x10,*(long *)PTR_DAT_02713c48 + (ulong)param_11 * 0x28);
  }
  return 0;
}


