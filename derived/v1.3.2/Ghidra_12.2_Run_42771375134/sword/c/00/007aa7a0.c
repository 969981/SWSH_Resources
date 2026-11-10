/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007aa7a0; name: _INIT_316
 */


void _INIT_316(void)

{
  DAT_029f4dbc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f4dc0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f4dc4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f4dcc = 0xffff;
  DAT_029f4dc8 = 0xffffffff;
  DAT_029f4dd4 = 0;
  DAT_029f4dd0 = 0;
  nn::os::InitializeMutex((MutexType *)&DAT_029f4de0,false,0);
  FUN_001001c0(PTR__Mutex_02715f18,&DAT_029f4de0,&PTR_LOOP_025db000);
  FUN_001001c0(&LAB_007a94a0,&DAT_029f4e00,&PTR_LOOP_025db000);
  return;
}


