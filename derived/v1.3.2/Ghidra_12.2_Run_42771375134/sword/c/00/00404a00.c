/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00404a00; name: FUN_00404a00
 */


void FUN_00404a00(int param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)PTR_DAT_02712a40 + (long)param_1 * 0x68;
  nn::os::LockMutex((MutexType *)(lVar1 + 0x30));
  param_2[1] = *(undefined4 *)(lVar1 + 0x5c);
  *param_2 = *(undefined4 *)(lVar1 + 0x60);
  nn::os::UnlockMutex((MutexType *)(lVar1 + 0x30));
  return;
}


