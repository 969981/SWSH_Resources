/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bab4d0; name: _INIT_900
 */


void _INIT_900(void)

{
  DAT_02a566e4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a566e8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a566ec = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a566f4 = 0xffff;
  DAT_02a566f0 = 0xffffffff;
  DAT_02a566fc = 0;
  DAT_02a566f8 = 0;
  return;
}


