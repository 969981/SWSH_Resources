/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ffd60; name: FUN_003ffd60
 */


void FUN_003ffd60(ThreadType *param_1,uint param_2,long param_3)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  
  if (*(int *)(param_1 + 0x1d0) == 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 1;
    uVar3 = 0x80000;
    if (param_2 != 0) {
      uVar3 = (ulong)param_2;
    }
    pvVar2 = malloc(uVar3 + 0x1007);
    if (pvVar2 != (void *)0x0) {
      pvVar4 = (void *)((long)pvVar2 + 0x1007U & 0xfffffffffffff000);
      *(long *)((long)pvVar4 + -8) = (long)pvVar4 - (long)pvVar2;
      if (pvVar4 != (void *)0x0) {
        *(void **)(param_1 + 0x1c0) = pvVar4;
        if (((param_3 != 0) && (*(long *)(param_1 + 0x1e0) == 0)) &&
           (*(long *)(param_1 + 0x1d8) == 0)) {
          *(long *)(param_1 + 0x1e0) = param_3;
        }
        iVar1 = nn::os::CreateThread
                          (param_1,(_func_void_void_ptr *)&LAB_003ffee0,param_1,pvVar4,uVar3,
                           *(int *)(param_1 + 0x44));
        if (iVar1 != 0) {
          free((void *)((long)pvVar4 - *(long *)((long)pvVar4 + -8)));
          *(undefined8 *)(param_1 + 0x1c0) = 0;
          return;
        }
        uVar3 = (ulong)*(int *)(param_1 + 0x1c8);
        if (*(int *)(param_1 + 0x1c8) == -1) {
          uVar3 = nn::os::GetThreadAvailableCoreMask();
        }
        nn::os::SetThreadCoreMask(param_1,-1,uVar3);
        if (*(char **)(param_1 + 0x1a8) != (char *)0x0) {
          nn::os::SetThreadNamePointer(param_1,*(char **)(param_1 + 0x1a8));
        }
        nn::os::StartThread(param_1);
        return;
      }
    }
  }
  return;
}


