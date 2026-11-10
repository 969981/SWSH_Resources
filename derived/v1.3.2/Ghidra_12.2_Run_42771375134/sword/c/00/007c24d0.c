/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c24d0; name: _INIT_334
 */


void _INIT_334(void)

{
  DAT_029f5124 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f5128 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f512c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f5134 = 0xffff;
  DAT_029f5130 = 0xffffffff;
  DAT_029f513c = 0;
  DAT_029f5138 = 0;
  *(ushort *)PTR_DAT_02716b88 = *(ushort *)PTR_DAT_02716b88 | 0xfff;
  return;
}


