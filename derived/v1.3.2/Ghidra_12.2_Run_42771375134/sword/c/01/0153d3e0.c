/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0153d3e0; name: FUN_0153d3e0
 */


undefined4 FUN_0153d3e0(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x198));
  if ((*(long *)(param_1 + 0x178) == 0) || (iVar1 = FUN_01561cd0(), iVar1 != param_2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_01561de0(*(undefined8 *)(param_1 + 0x178));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x198));
  return uVar2;
}


