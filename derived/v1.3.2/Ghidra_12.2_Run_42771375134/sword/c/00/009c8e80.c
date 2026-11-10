/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c8e80; name: _INIT_750
 */


void _INIT_750(void)

{
  DAT_02a50094 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50098 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5009c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a500a4 = 0xffff;
  DAT_02a500a0 = 0xffffffff;
  DAT_02a500ac = 0;
  DAT_02a500a8 = 0;
  return;
}


