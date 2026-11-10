/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d6f90; name: _INIT_765
 */


void _INIT_765(void)

{
  DAT_02a5035c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50360 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a50364 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5036c = 0xffff;
  DAT_02a50368 = 0xffffffff;
  DAT_02a50374 = 0;
  DAT_02a50370 = 0;
  FUN_009d6510();
  return;
}


