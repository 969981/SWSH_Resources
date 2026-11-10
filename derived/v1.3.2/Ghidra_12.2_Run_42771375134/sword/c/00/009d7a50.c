/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d7a50; name: _INIT_766
 */


void _INIT_766(void)

{
  DAT_02a5039c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a503a0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a503a4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a503ac = 0xffff;
  DAT_02a503a8 = 0xffffffff;
  DAT_02a503b4 = 0;
  DAT_02a503b0 = 0;
  FUN_009d7170();
  return;
}


