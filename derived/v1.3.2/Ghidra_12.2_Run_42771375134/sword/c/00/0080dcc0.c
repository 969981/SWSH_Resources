/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080dcc0; name: FUN_0080dcc0
 */


void FUN_0080dcc0(undefined8 *param_1,void *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  
  if (param_3 < *(int *)(param_1 + 2)) {
    memcpy((void *)param_1[1],param_2,(long)param_3);
    param_1[1] = param_1[1] + (long)param_3;
    *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - param_3;
    return;
  }
  if (*(int *)(param_1 + 2) < 1) {
    iVar2 = *(int *)((long)param_1 + 0x14);
  }
  else {
    (**(code **)(*(long *)*param_1 + 0x18))();
    iVar2 = *(int *)((long)param_1 + 0x14) - *(int *)(param_1 + 2);
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)((long)param_1 + 0x14) = iVar2;
    param_1[1] = 0;
  }
  *(int *)((long)param_1 + 0x14) = iVar2 + param_3;
  bVar1 = (**(code **)(*(long *)*param_1 + 0x28))((long *)*param_1,param_2,param_3);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | ~bVar1 & 1;
  return;
}


