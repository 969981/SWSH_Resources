/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004fa730; name: FUN_004fa730
 */


void FUN_004fa730(long param_1,long param_2,byte param_3)

{
  long *plVar1;
  
  if (*(byte *)(param_2 + 100) == param_3) {
    return;
  }
  if (param_3 < 0x65) {
    *(byte *)(param_2 + 100) = param_3;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x280));
  for (plVar1 = *(long **)(param_1 + 0x278); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[2]) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x280));
  return;
}


