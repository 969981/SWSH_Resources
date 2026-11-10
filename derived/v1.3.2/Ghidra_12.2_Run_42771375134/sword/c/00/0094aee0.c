/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0094aee0; name: _INIT_505
 */


void _INIT_505(void)

{
  DAT_02a4e00c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4e010 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4e014 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4e01c = 0xffff;
  DAT_02a4e018 = 0xffffffff;
  DAT_02a4e024 = 0;
  DAT_02a4e020 = 0;
  return;
}


