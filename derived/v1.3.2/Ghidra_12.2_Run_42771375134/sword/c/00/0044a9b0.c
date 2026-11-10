/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044a9b0; name: FUN_0044a9b0
 */


long FUN_0044a9b0(long *param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  nn::os::LockMutex((MutexType *)PTR_DAT_02712fb8);
  uVar2 = *(uint *)(param_1 + 1);
  if (uVar2 == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = param_2 + (int)param_3;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    for (lVar4 = *(long *)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
        (lVar4 != 0 && ((*(int *)(lVar4 + 0x10) != param_2 || (*(long *)(lVar4 + 0x18) != param_3)))
        ); lVar4 = *(long *)(lVar4 + 0x20)) {
    }
  }
  nn::os::UnlockMutex((MutexType *)PTR_DAT_02712fb8);
  return lVar4;
}


