/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009be960; name: _INIT_738
 */


void _INIT_738(void)

{
  DAT_02a4fdfc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4fe00 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4fe04 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4fe0c = 0xffff;
  DAT_02a4fe08 = 0xffffffff;
  DAT_02a4fe14 = 0;
  DAT_02a4fe10 = 0;
  FUN_009bdaf0();
  return;
}


