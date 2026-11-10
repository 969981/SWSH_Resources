/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404750; name: FUN_00404750
 */


long FUN_00404750(int param_1,long param_2,undefined4 param_3)

{
  MutexType *pMVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)PTR_DAT_02712a40;
    lVar4 = lVar3 + (long)param_1 * 0x68;
    pMVar1 = (MutexType *)(lVar4 + 0x30);
    nn::os::LockMutex(pMVar1);
    lVar4 = FUN_00404fb0(*(undefined8 *)(lVar4 + 0x50),param_3,param_2);
    if (lVar4 != 0) {
      iVar2 = FUN_00404a60(lVar4);
      lVar3 = lVar3 + (long)param_1 * 0x68;
      *(int *)(lVar3 + 0x5c) = iVar2 + *(int *)(lVar3 + 0x5c) + 8;
    }
    nn::os::UnlockMutex(pMVar1);
  }
  return lVar4;
}


