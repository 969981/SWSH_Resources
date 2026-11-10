/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0080dea0; name: FUN_0080dea0
 */


void FUN_0080dea0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  void *__dest;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *__src;
  undefined8 local_48;
  void *local_38;
  
  uVar3 = *(uint *)(param_1 + 2);
  if (uVar3 < 8) {
    __src = &local_48;
    iVar4 = 8;
    __dest = (void *)param_1[1];
    local_48 = param_2;
    do {
      memcpy(__dest,__src,(long)(int)uVar3);
      iVar1 = *(int *)(param_1 + 2);
      uVar2 = (**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,&local_38,param_1 + 2);
      if ((uVar2 & 1) == 0) {
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        *(undefined1 *)(param_1 + 3) = 1;
        return;
      }
      uVar3 = *(uint *)(param_1 + 2);
      iVar4 = iVar4 - iVar1;
      __src = (undefined8 *)((long)__src + (long)iVar1);
      param_1[1] = local_38;
      *(uint *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + uVar3;
      __dest = local_38;
    } while ((int)uVar3 < iVar4);
    memcpy(local_38,__src,(long)iVar4);
    param_1[1] = param_1[1] + (long)iVar4;
    iVar4 = *(int *)(param_1 + 2) - iVar4;
  }
  else {
    *(undefined8 *)param_1[1] = param_2;
    param_1[1] = param_1[1] + 8;
    iVar4 = *(int *)(param_1 + 2) + -8;
  }
  *(int *)(param_1 + 2) = iVar4;
  return;
}


