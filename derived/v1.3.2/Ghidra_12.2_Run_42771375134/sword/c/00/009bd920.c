/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009bd920; name: _INIT_737
 */


void _INIT_737(void)

{
  DAT_02a4fdac = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4fdb0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4fdb4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4fdbc = 0xffff;
  DAT_02a4fdb8 = 0xffffffff;
  DAT_02a4fdc4 = 0;
  DAT_02a4fdc0 = 0;
  FUN_009bc590();
  return;
}


