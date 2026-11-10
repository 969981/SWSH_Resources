/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008959c0; name: FUN_008959c0
 */


uint FUN_008959c0(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x90));
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  powf(10.0,param_1 / 20.0);
  uVar1 = FUN_00776aa0(uVar2,param_4,param_3);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x90));
  return uVar1 & 1;
}


