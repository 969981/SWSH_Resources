/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009c26e0; name: _INIT_742
 */


void _INIT_742(void)

{
  DAT_02a4ff24 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4ff28 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4ff2c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4ff34 = 0xffff;
  DAT_02a4ff30 = 0xffffffff;
  DAT_02a4ff3c = 0;
  DAT_02a4ff38 = 0;
  FUN_009c1360();
  return;
}


