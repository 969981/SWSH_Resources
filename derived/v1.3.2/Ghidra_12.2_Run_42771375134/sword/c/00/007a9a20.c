/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007a9a20; name: FUN_007a9a20
 */


void FUN_007a9a20(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  nn::os::LockMutex((MutexType *)&DAT_029f4de0);
  if (DAT_02610b28 != '\0') {
    if (*(long *)PTR_DAT_027104a0 != 0) {
      FUN_007a8380();
      lVar2 = *(long *)PTR_DAT_027104b0;
      if (lVar2 != 0) {
        FUN_007b55a0(lVar2);
        lVar3 = *(long *)PTR_DAT_02716750;
        if ((lVar3 != 0) && (uVar1 = FUN_007b56f0(lVar2), (uVar1 & 1) != 0)) {
          FUN_007db3b0(lVar3);
        }
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_029f4de0);
  if (*(long *)PTR_DAT_02716748 != 0) {
    FUN_007ad3f0(*(long *)PTR_DAT_02716748,0x1e,0);
  }
  if (*(long *)PTR_DAT_02716758 == 0) {
    return;
  }
  FUN_007dd970();
  FUN_007dc790();
  return;
}


