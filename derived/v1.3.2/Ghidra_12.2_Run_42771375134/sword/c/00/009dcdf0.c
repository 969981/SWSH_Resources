/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009dcdf0; name: _INIT_770
 */


void _INIT_770(void)

{
  DAT_02a504fc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50500 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a50504 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5050c = 0xffff;
  DAT_02a50508 = 0xffffffff;
  DAT_02a50514 = 0;
  DAT_02a50510 = 0;
  FUN_009db160();
  return;
}


