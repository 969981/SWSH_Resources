/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d4860; name: _INIT_762
 */


void _INIT_762(void)

{
  DAT_02a5028c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50290 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a50294 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5029c = 0xffff;
  DAT_02a50298 = 0xffffffff;
  DAT_02a502a4 = 0;
  DAT_02a502a0 = 0;
  FUN_009d3a20();
  return;
}


