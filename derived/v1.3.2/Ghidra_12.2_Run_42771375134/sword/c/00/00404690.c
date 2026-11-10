/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404690; name: FUN_00404690
 */


long FUN_00404690(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar3 = *(long *)PTR_DAT_02712a40;
    lVar4 = lVar3 + (long)param_1 * 0x68;
    nn::os::LockMutex((MutexType *)(lVar4 + 0x30));
    if (*(uint *)(lVar4 + 0x58) < 5) {
      lVar2 = FUN_00404c50(*(undefined8 *)(lVar4 + 0x50),param_2);
    }
    else {
      lVar2 = FUN_00404fb0(*(undefined8 *)(lVar4 + 0x50),*(uint *)(lVar4 + 0x58),param_2);
    }
    if (lVar2 != 0) {
      iVar1 = FUN_00404a60(lVar2);
      lVar3 = lVar3 + (long)param_1 * 0x68;
      *(int *)(lVar3 + 0x5c) = iVar1 + *(int *)(lVar3 + 0x5c) + 8;
    }
    nn::os::UnlockMutex((MutexType *)(lVar4 + 0x30));
  }
  return lVar2;
}


