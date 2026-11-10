/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0058e7c0; name: FUN_0058e7c0
 */


void FUN_0058e7c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 long param_9,undefined8 param_10,float *param_11,float *param_12,
                 undefined4 param_13)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 in_stack_00000000;
  float in_stack_00000008;
  undefined4 in_stack_00000010;
  float in_stack_00000018;
  undefined4 in_stack_00000020;
  float in_stack_00000028;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  fVar3 = *param_11;
  iVar1 = *(int *)(param_9 + 0x7a5c);
  fVar2 = param_11[1];
  if (*(char *)(*(long *)(param_9 + 0x20) + 0x58) != '\0') {
    fVar2 = 1.0 - param_11[1];
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_9 + 0x7a58);
  }
  (**(code **)(**(long **)(param_9 + 0x30) + 0xe8))(*(long **)(param_9 + 0x30),iVar1);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x40),param_10);
  (**(code **)(**(long **)(param_9 + 0x30) + 0xd0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x44),
             *(undefined8 *)(param_9 + 0x29ab8));
  local_80 = in_stack_00000018;
  local_7c = (float)in_stack_00000010;
  local_78 = in_stack_00000008;
  local_74 = (float)in_stack_00000000;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0xd4),&local_80);
  local_80 = *param_12 * in_stack_00000008;
  local_7c = param_12[1] * in_stack_00000008;
  local_78 = param_12[2] * in_stack_00000008;
  local_74 = in_stack_00000008 * 0.0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xb0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x100),&local_80,1);
  local_80 = 256.0;
  local_74 = 0.0;
  local_7c = (float)in_stack_00000020;
  local_78 = fVar3 + fVar2 + 0.0;
  (**(code **)(**(long **)(param_9 + 0x30) + 0xa0))
            (*(long **)(param_9 + 0x30),*(undefined4 *)(param_9 + 0x128),&local_80);
  tanf(in_stack_00000028 * 0.5);
  FUN_00572300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_13);
  return;
}


