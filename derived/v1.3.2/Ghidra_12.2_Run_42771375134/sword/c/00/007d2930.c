/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d2930; name: _INIT_342
 */


void _INIT_342(void)

{
  DAT_029f5284 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f5288 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f528c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f5294 = 0xffff;
  DAT_029f5290 = 0xffffffff;
  DAT_029f529c = 0;
  DAT_029f5298 = 0;
  FUN_007d1ad0();
  return;
}


