/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004047f0; name: FUN_004047f0
 */


undefined8 FUN_004047f0(int param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = *(long *)PTR_DAT_02712a40 + (long)param_1 * 0x68;
    nn::os::LockMutex((MutexType *)(lVar2 + 0x30));
    iVar1 = FUN_00404a60(param_2);
    *(int *)(lVar2 + 0x5c) = (-8 - iVar1) + *(int *)(lVar2 + 0x5c);
    FUN_004051d0(*(undefined8 *)(lVar2 + 0x50),param_2);
    nn::os::UnlockMutex((MutexType *)(lVar2 + 0x30));
  }
  return 1;
}


