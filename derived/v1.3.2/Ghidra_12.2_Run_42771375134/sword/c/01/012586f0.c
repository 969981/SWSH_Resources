/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012586f0; name: _INIT_1501
 */


void _INIT_1501(void)

{
  DAT_02a66404 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a66408 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6640c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a66414 = 0xffff;
  DAT_02a66410 = 0xffffffff;
  DAT_02a6641c = 0;
  DAT_02a66418 = 0;
  return;
}


