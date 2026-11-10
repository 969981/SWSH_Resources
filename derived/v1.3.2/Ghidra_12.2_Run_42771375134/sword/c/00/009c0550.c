/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c0550; name: _INIT_740
 */


void _INIT_740(void)

{
  DAT_02a4fea4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4fea8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4feac = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4feb4 = 0xffff;
  DAT_02a4feb0 = 0xffffffff;
  DAT_02a4febc = 0;
  DAT_02a4feb8 = 0;
  FUN_009bf990();
  return;
}


