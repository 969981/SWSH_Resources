/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0096bad0; name: _INIT_640
 */


void _INIT_640(void)

{
  DAT_02a4f0ec = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4f0f0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4f0f4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4f0fc = 0xffff;
  DAT_02a4f0f8 = 0xffffffff;
  DAT_02a4f104 = 0;
  DAT_02a4f100 = 0;
  return;
}


