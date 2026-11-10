/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e09b20; name: _INIT_1021
 */


void _INIT_1021(void)

{
  DAT_02a5a014 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5a018 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5a01c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5a024 = 0xffff;
  DAT_02a5a020 = 0xffffffff;
  DAT_02a5a02c = 0;
  DAT_02a5a028 = 0;
  return;
}


