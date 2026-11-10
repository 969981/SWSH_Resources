/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008958e0; name: FUN_008958e0
 */


undefined4 FUN_008958e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  uVar1 = FUN_00776bd0(*(undefined8 *)(param_1 + 0x70),param_2,param_3,PTR_LAB_027175c8,param_1);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return uVar1;
}


