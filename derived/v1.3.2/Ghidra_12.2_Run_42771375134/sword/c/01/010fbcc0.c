/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010fbcc0; name: _INIT_1300
 */


void _INIT_1300(void)

{
  DAT_02a630cc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a630d0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a630d4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a630dc = 0xffff;
  DAT_02a630d8 = 0xffffffff;
  DAT_02a630e4 = 0;
  DAT_02a630e0 = 0;
  return;
}


