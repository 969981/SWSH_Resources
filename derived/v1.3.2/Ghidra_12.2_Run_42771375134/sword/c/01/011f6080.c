/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f6080; name: _INIT_1440
 */


void _INIT_1440(void)

{
  DAT_02a656d4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a656d8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a656dc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a656e4 = 0xffff;
  DAT_02a656e0 = 0xffffffff;
  DAT_02a656ec = 0;
  DAT_02a656e8 = 0;
  return;
}


