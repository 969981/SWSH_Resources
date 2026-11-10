/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010acd80; name: _INIT_1260
 */


void _INIT_1260(void)

{
  DAT_02a628a4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a628a8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a628ac = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a628bc = 0xffff;
  DAT_02a628b4 = 0;
  DAT_02a628b0 = 0;
  DAT_02a628b8 = 0xffffffff;
  return;
}


