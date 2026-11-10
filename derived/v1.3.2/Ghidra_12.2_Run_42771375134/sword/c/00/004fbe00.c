/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fbe00; name: FUN_004fbe00
 */


void FUN_004fbe00(long param_1,long param_2,ulong param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  
  if ((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x68) == '\0')) &&
     (*(int *)(param_1 + 0xa8) != 4)) {
    *(undefined1 *)(param_1 + 0x67) = 0;
    *(undefined1 *)(param_1 + 0xac) = 1;
    uVar4 = *(int *)(*(long *)(param_2 + 8) + 0x18) - *(int *)(param_2 + 0x10);
    uVar2 = *(uint *)(*(long *)(param_1 + 0x50) + 0x610);
    if (uVar2 < uVar4) {
      *(undefined1 *)(param_1 + 0xac) = 0;
      uVar4 = uVar2;
    }
    if ((*(char *)(param_1 + 0x66) == '\0') &&
       ((**(long **)(param_1 + 0x20) - **(long **)(param_2 + 8)) - (ulong)*(uint *)(param_2 + 0x10)
        <= (ulong)uVar4)) {
      *(undefined1 *)(param_1 + 0x67) = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
      *(int *)(param_1 + 0x90) =
           *(int *)(param_1 + 0x90) -
           ((**(int **)(param_2 + 8) + (*(int **)(param_2 + 8))[6]) -
           (int)**(long **)(param_1 + 0x20));
    }
  }
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x50) + 0x1e0);
  nn::os::LockMutex(pMVar1);
  lVar5 = *(long *)(param_1 + 0x50);
  lVar3 = *(long *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar3 != 0) {
    FUN_004ff2a0(lVar5 + 0x2a0,param_1 + 0x78);
  }
  FUN_00404870(*(undefined4 *)PTR_DAT_027137c8,param_2);
  nn::os::UnlockMutex(pMVar1);
  return;
}


