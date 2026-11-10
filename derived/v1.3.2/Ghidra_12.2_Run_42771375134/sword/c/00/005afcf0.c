/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005afcf0; name: FUN_005afcf0
 */


void FUN_005afcf0(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined4 param_10)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 in_stack_00000020;
  float in_stack_00000028;
  float in_stack_00000030;
  
  fVar3 = DAT_01d4bc70;
  *(undefined4 *)(param_9 + 0x188) = param_1;
  *(float *)(param_9 + 0x194) = in_stack_00000030;
  if (param_3 <= 0.0) {
    param_3 = fVar3;
  }
  *(undefined4 *)(param_9 + 0x18c) = param_2;
  *(float *)(param_9 + 400) = in_stack_00000028;
  if (in_stack_00000028 <= 0.0) {
    *(undefined4 *)(param_9 + 400) = param_1;
  }
  if (in_stack_00000030 <= 0.0) {
    *(undefined4 *)(param_9 + 0x194) = param_2;
  }
  *(float *)(param_9 + 0x19c) = param_3;
  *(undefined4 *)(param_9 + 0x1a0) = param_4;
  *(undefined4 *)(param_9 + 0x1a4) = param_5;
  fVar3 = atanf(param_3);
  *(int *)(param_9 + 0x1b8) = (int)param_7;
  *(int *)(param_9 + 0x1b0) = (int)param_6;
  *(float *)(param_9 + 0x198) = fVar3 + fVar3;
  iVar1 = FUN_005af0d0(fVar3 + fVar3,param_6,param_7,param_8,in_stack_00000000,in_stack_00000008,
                       in_stack_00000010,in_stack_00000018,param_9,param_10,param_9 + 0x1a8,
                       param_9 + 0x1b4,param_9 + 0x1ac,param_9 + 0x1c4,param_9 + 0x1e4,
                       param_9 + 0x1e8,in_stack_00000020);
  if ((iVar1 != 0) || (*(float *)(param_9 + 0x198) <= 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = *(float *)(param_9 + 0x198) < DAT_01d4bb38;
  }
  *(bool *)(param_9 + 0x184) = bVar2;
  return;
}


