/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011a73a0; name: _INIT_1394
 */


void _INIT_1394(void)

{
  DAT_02a6491c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a64920 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a64924 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a64934 = 0xffff;
  DAT_02a6492c = 0;
  DAT_02a64928 = 0;
  DAT_02a64930 = 0xffffffff;
  return;
}


