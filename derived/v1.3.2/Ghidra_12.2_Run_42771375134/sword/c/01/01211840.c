/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01211840; name: FUN_01211840
 */


void FUN_01211840(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x580));
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x578) = param_2[1];
  *(undefined8 *)(param_1 + 0x570) = uVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x580));
  return;
}


