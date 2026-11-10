/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa6af0; name: _INIT_1191
 */


void _INIT_1191(void)

{
  DAT_02a60e84 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60e88 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60e8c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60ea0 = 0xfeb8bc241c378a04;
  DAT_02a60e94 = 0xffff;
  DAT_02a60e90 = 0xffffffff;
  DAT_02a60e9c = 0;
  DAT_02a60ea8 = "bin/test/nest_hole/net_nest_hole_dai_encount.bin";
  DAT_02a60eb0 = 0x30;
  DAT_02a60e98 = 0;
  DAT_02a60eb8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60ea0,&PTR_LOOP_025db000);
  return;
}


