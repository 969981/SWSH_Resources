/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa8620; name: _INIT_1194
 */


void _INIT_1194(void)

{
  DAT_02a60f74 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60f78 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60f7c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60f90 = 0x3a853d2c8a2db785;
  DAT_02a60f84 = 0xffff;
  DAT_02a60f80 = 0xffffffff;
  DAT_02a60f8c = 0;
  DAT_02a60f98 = "bin/test/nest_hole/net_nest_hole_drop_rewards.bin";
  DAT_02a60fa0 = 0x31;
  DAT_02a60f88 = 0;
  DAT_02a60fa8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60f90,&PTR_LOOP_025db000);
  return;
}


