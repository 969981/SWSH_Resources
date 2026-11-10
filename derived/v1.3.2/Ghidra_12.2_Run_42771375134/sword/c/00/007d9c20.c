/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d9c20; name: _INIT_347
 */


void _INIT_347(void)

{
  DAT_029f53d4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f53d8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f53dc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f53e4 = 0xffff;
  DAT_029f53e0 = 0xffffffff;
  DAT_029f53ec = 0;
  DAT_029f53e8 = 0;
  FUN_007d8d20();
  return;
}


