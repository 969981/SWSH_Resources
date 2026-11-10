/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c29b0; name: FUN_004c29b0
 */


void FUN_004c29b0(long *param_1,long param_2,long *param_3,undefined8 *param_4,undefined4 param_5)

{
  undefined *puVar1;
  int *piVar2;
  long lVar3;
  
  param_1[1] = 0;
  puVar1 = PTR_DAT_027134d8;
  param_1[2] = param_2;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_4 + 0x14);
  param_1[4] = param_4[1];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 2);
  piVar2 = (int *)*param_4;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + 1;
    param_2 = param_1[2];
  }
  param_1[3] = (long)piVar2;
  *(int *)(param_1 + 7) = (int)param_3[1];
  lVar3 = *param_3;
  *(undefined4 *)((long)param_1 + 0x3c) = param_5;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[6] = lVar3;
  *(undefined4 *)((long)param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 10) = 0;
  if (param_2 != 0) {
    *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
  }
  return;
}


