/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112d2f0; name: _INIT_1337
 */


void _INIT_1337(void)

{
  DAT_02a6384c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a63850 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a63854 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6385c = 0xffff;
  DAT_02a63858 = 0xffffffff;
  DAT_02a63864 = 0;
  DAT_02a63860 = 0;
  return;
}


