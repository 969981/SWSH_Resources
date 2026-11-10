/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ef780; name: _INIT_400
 */


void _INIT_400(void)

{
  DAT_02a4d244 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4d248 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4d24c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a4d254 = 0xffff;
  DAT_02a4d250 = 0xffffffff;
  DAT_02a4d25c = 0;
  DAT_02a4d258 = 0;
  return;
}


