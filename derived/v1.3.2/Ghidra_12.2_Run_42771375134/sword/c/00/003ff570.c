/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003ff570; name: FUN_003ff570
 */


void FUN_003ff570(MutexType *param_1)

{
  undefined8 uVar1;
  
  nn::os::LockMutex(param_1);
  uVar1 = nn::os::GetCurrentThread();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return;
}


