/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0044aeb0; name: _INIT_94
 */


void _INIT_94(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02712fb8;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_02712fb8,true,0);
  FUN_001001c0(PTR_LAB_02712d60,puVar1,&PTR_LOOP_025db000);
  return;
}


