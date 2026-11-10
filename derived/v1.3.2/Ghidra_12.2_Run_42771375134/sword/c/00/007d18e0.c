/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d18e0; name: _INIT_341
 */


void _INIT_341(void)

{
  DAT_029f5224 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f5228 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f522c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f5234 = 0xffff;
  DAT_029f5230 = 0xffffffff;
  DAT_029f523c = 0;
  DAT_029f5238 = 0;
  FUN_007d07a0();
  return;
}


