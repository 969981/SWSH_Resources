/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c1740; name: _INIT_332
 */


void _INIT_332(void)

{
  DAT_029f50c4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f50c8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f50cc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f50d4 = 0xffff;
  DAT_029f50d0 = 0xffffffff;
  DAT_029f50dc = 0;
  DAT_029f50d8 = 0;
  FUN_007c0960();
  return;
}


