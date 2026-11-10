/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3950; name: FUN_007c3950
 */


undefined8 FUN_007c3950(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_28;
  
  puVar1 = PTR_DAT_02716b80;
  uVar3 = 0;
  if (*(long *)PTR_DAT_02716b80 != 0) {
    uVar2 = FUN_007c29b0();
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    nn::os::LockMutex((MutexType *)(param_1 + 0x510));
    if (*(long **)(param_1 + 0x508) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x508) + 0x30))();
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x510));
    uVar2 = FUN_007c4170(param_1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar3 = 0;
    if (*(long *)puVar1 != 0) {
      uVar2 = FUN_007c29b0();
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      local_28 = 0;
      nn::os::GenerateRandomBytes(&local_28,8);
      uVar4 = *(ulong *)(param_1 + 0x338);
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = local_28 / uVar4;
      }
      nn::os::SleepThread(((local_28 - uVar2 * uVar4) + *(long *)(param_1 + 0x330)) * 1000000);
      uVar3 = 1;
    }
  }
  return uVar3;
}


