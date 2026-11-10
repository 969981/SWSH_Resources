/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c0790; name: _INIT_331
 */


void _INIT_331(void)

{
  DAT_029f5054 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_029f5058 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_029f505c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_029f5064 = 0xffff;
  DAT_029f5060 = 0xffffffff;
  DAT_029f506c = 0;
  DAT_029f5068 = 0;
  FUN_007bfb60();
  return;
}


