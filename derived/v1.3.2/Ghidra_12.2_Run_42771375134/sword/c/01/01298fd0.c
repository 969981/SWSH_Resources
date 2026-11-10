/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01298fd0; name: _INIT_1541
 */


void _INIT_1541(void)

{
  DAT_02a66d14 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a66d18 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a66d1c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a66d24 = 0xffff;
  DAT_02a66d20 = 0xffffffff;
  DAT_02a66d2c = 0;
  DAT_02a66d28 = 0;
  return;
}


