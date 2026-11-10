/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009d6380; name: _INIT_764
 */


void _INIT_764(void)

{
  DAT_02a50314 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50318 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5031c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a50324 = 0xffff;
  DAT_02a50320 = 0xffffffff;
  DAT_02a5032c = 0;
  DAT_02a50328 = 0;
  FUN_009d5790();
  return;
}


