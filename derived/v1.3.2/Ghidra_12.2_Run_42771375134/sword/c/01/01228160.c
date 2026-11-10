/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01228160; name: _INIT_1479
 */


void _INIT_1479(void)

{
  DAT_02a65d64 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a65d68 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a65d6c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a65d80 = 0;
  DAT_02a65d74 = 0xffff;
  DAT_02a65d70 = 0xffffffff;
  DAT_02a65d7c = 0;
  DAT_02a65d78 = 0;
  FUN_001001c0(PTR_LAB_027260d8,&DAT_02a65d80,&PTR_LOOP_025db000);
  return;
}


