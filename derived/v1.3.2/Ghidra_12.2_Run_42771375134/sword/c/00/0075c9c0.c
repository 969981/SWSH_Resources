/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0075c9c0; name: _INIT_299
 */


void _INIT_299(void)

{
  undefined *puVar1;
  
  DAT_029f3810 = 600000;
  DAT_029f3818 = 7000;
  DAT_029f3820 = 600000;
  DAT_029f3828 = 7000;
  DAT_029f3830 = 600000;
  DAT_029f3838 = 7000;
  nn::os::InitializeMutex((MutexType *)&DAT_029f3840,false,0);
  FUN_001001c0(PTR__Mutex_02715f18,&DAT_029f3840,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02715ed8;
  *(undefined8 *)PTR_DAT_02715ed8 = 0;
  FUN_001001c0(PTR_LAB_02715f20,puVar1,&PTR_LOOP_025db000);
  return;
}


