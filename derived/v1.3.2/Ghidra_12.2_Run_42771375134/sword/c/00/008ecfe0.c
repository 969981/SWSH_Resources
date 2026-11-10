/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ecfe0; name: _INIT_396
 */


void _INIT_396(void)

{
  DAT_02a4d178 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4d17c = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4d180 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4d18c = 0xffff;
  DAT_02a4d188 = 0xffffffff;
  DAT_02a4d194 = 0;
  DAT_02a4d190 = 0;
  FUN_001001c0(&LAB_008eb720,&DAT_02a4d1a0,&PTR_LOOP_025db000);
  FUN_001001c0(&LAB_008eb780,&DAT_02a4d1c0,&PTR_LOOP_025db000);
  return;
}


