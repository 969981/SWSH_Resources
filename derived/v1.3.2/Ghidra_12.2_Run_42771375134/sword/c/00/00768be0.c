/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00768be0; name: FUN_00768be0
 */


undefined8 FUN_00768be0(long param_1,int param_2,int param_3)

{
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  *(undefined1 *)(param_1 + 0x8c) = 1;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  if ((*(int *)(param_1 + 0x60) != param_2) || (*(int *)(param_1 + 100) != param_3)) {
    *(int *)(param_1 + 0x60) = param_2;
    *(int *)(param_1 + 100) = param_3;
    FUN_0076a170(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return 0x1000;
}


