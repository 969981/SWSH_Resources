/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008dc8d0; name: _INIT_384
 */


void _INIT_384(void)

{
  DAT_02a4cdec = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4cdf0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4cdf4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4cdfc = 0xffff;
  DAT_02a4cdf8 = 0xffffffff;
  DAT_02a4ce04 = 0;
  DAT_02a4ce00 = 0;
  return;
}


