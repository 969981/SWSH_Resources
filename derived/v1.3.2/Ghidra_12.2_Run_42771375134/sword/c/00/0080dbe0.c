/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080dbe0; name: FUN_0080dbe0
 */


void FUN_0080dbe0(undefined8 *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  int iVar4;
  void *local_38;
  
  iVar4 = *(int *)(param_1 + 2);
  pvVar2 = (void *)param_1[1];
  if (iVar4 < param_3) {
    do {
      memcpy(pvVar2,param_2,(long)iVar4);
      iVar1 = *(int *)(param_1 + 2);
      uVar3 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_38,param_1 + 2);
      if ((uVar3 & 1) == 0) {
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 1;
        return;
      }
      iVar4 = *(int *)(param_1 + 2);
      param_3 = param_3 - iVar1;
      param_2 = (void *)((long)param_2 + (long)iVar1);
      param_1[1] = local_38;
      *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + iVar4;
      pvVar2 = local_38;
    } while (iVar4 < param_3);
  }
  memcpy(pvVar2,param_2,(long)param_3);
  param_1[1] = param_1[1] + (long)param_3;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) - param_3;
  return;
}


