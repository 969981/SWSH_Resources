/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d8ba0; name: _INIT_346
 */


void _INIT_346(void)

{
  DAT_029f5374 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f5378 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f537c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f5384 = 0xffff;
  DAT_029f5380 = 0xffffffff;
  DAT_029f538c = 0;
  DAT_029f5388 = 0;
  FUN_007d8280();
  return;
}


