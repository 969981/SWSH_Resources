/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01168d00; name: _INIT_1365
 */


void _INIT_1365(void)

{
  DAT_02a6400c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a64010 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a64014 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a6401c = 0xffff;
  DAT_02a64018 = 0xffffffff;
  DAT_02a64024 = 0;
  DAT_02a64020 = 0;
  return;
}


