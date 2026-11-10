/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040bcd0; name: FUN_0040bcd0
 */


void FUN_0040bcd0(long *param_1,long param_2,undefined8 *param_3,long param_4,byte param_5)

{
  undefined *puVar1;
  int *piVar2;
  
  param_1[8] = 0;
  param_1[9] = 0x3f80000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_02712b60;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  FUN_004e1600(param_1 + 0xb);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_3 + 0x14);
  param_1[4] = param_3[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 2);
  piVar2 = (int *)*param_3;
  if (param_1[3] != 0) {
    FUN_00431200();
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
  }
  param_1[3] = (long)piVar2;
  param_1[6] = param_4;
  *(byte *)(param_1 + 7) = param_5 & 1;
  puVar1 = PTR_DAT_02712b68;
  *(int *)(param_4 + 0x50) = *(int *)(param_4 + 0x50) + 1;
  FUN_004b5990(*(undefined8 *)puVar1,param_1,param_1[6]);
  return;
}


