/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c31b70; name: _INIT_944
 */


void _INIT_944(void)

{
  DAT_02a56ee4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a56ee8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a56eec = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a56ef4 = 0xffff;
  DAT_02a56ef0 = 0xffffffff;
  DAT_02a56efc = 0;
  DAT_02a56ef8 = 0;
  FUN_00c31250();
  return;
}


