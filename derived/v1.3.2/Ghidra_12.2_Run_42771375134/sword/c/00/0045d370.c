/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0045d370; name: FUN_0045d370
 */


void FUN_0045d370(long param_1,int param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 == 0) || (*(long *)(param_1 + 0x50) == param_3)) {
    if (param_2 == 2) {
      if ((*(int *)(param_1 + 0xa8) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8) + -1, *(int *)(param_1 + 0xa8) = iVar2, iVar2 == 0)) {
        if (*(int *)(param_1 + 0x48) != 1) {
          FUN_0045caa0(param_1,0,4);
        }
        nn::os::LockMutex((MutexType *)(param_1 + 0x28));
        iVar2 = *(int *)(param_1 + 0xac);
        iVar1 = *(int *)(*(long *)PTR_DAT_02712de0 + 0x78);
        *(undefined4 *)(param_1 + 0xac) = 0;
        *(int *)(param_1 + 0xb0) = (iVar1 - iVar2) + *(int *)(param_1 + 0xb0);
        nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
        return;
      }
    }
    else if (param_2 == 1) {
      if ((*(int *)(param_1 + 0x48) != 0) &&
         (iVar2 = *(int *)(param_1 + 0xa8), *(int *)(param_1 + 0xa8) = iVar2 + 1, iVar2 == 0)) {
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(*(long *)PTR_DAT_02712de0 + 0x78);
        return;
      }
    }
    else if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(undefined4 *)(param_1 + 0xa8) = 0;
      nn::os::LockMutex((MutexType *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x28));
      return;
    }
  }
  return;
}


