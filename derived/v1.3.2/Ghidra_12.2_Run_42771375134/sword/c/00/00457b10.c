/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00457b10; name: _INIT_95
 */


void _INIT_95(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_02713038;
  puVar1 = PTR_DAT_02712fe8;
  *(undefined8 *)PTR_DAT_02713038 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1 = PTR_DAT_02713030;
  nn::os::InitializeMutex((MutexType *)PTR_DAT_02713030,true,0);
  FUN_001001c0(PTR_LAB_02712d60,puVar1,&PTR_LOOP_025db000);
  return;
}


