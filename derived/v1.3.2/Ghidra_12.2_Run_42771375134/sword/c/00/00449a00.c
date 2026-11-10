/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00449a00; name: FUN_00449a00
 */


void FUN_00449a00(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712af0;
  nn::os::LockMutex((MutexType *)PTR_DAT_02712af0);
  FUN_004b40f0(*(undefined8 *)PTR_DAT_02712b68,1);
  nn::os::UnlockMutex((MutexType *)puVar1);
  return;
}


