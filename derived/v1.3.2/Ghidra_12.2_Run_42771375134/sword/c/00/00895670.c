/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00895670; name: FUN_00895670
 */


uint FUN_00895670(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long local_38;
  
  FUN_0010d170(&local_38,"SourceGlobal");
  lVar3 = *param_3;
  plVar1 = (long *)PTR_DAT_02710920;
  if (local_38 != 0) {
    plVar1 = (long *)(local_38 + 0x58);
  }
  lVar4 = *plVar1;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar3 == lVar4) {
    *(undefined8 *)(param_1 + 0x50) = param_2;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar2 = FUN_007765f0(*(undefined8 *)(param_1 + 0x70),param_2,param_3);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return uVar2 & 1;
}


