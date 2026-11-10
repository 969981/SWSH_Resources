/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b78d0; name: _INIT_100
 */


void _INIT_100(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_02713458;
  *(undefined8 *)PTR_DAT_02713458 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1 = PTR_DAT_02713450;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_02713450,true,0);
  FUN_001001c0(PTR_LAB_02712d60,puVar1,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02713460;
  *(undefined8 *)PTR_DAT_02713460 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  return;
}


