/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa8940; name: _INIT_1195
 */


void _INIT_1195(void)

{
  DAT_02a60fb4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60fb8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60fbc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60fd0 = 0xb0ed7b9af8a29f27;
  DAT_02a60fc4 = 0xffff;
  DAT_02a60fc0 = 0xffffffff;
  DAT_02a60fcc = 0;
  DAT_02a60fd8 = "bin/test/nest_hole/net_nest_hole_bonus_rewards.bin";
  DAT_02a60fe0 = 0x32;
  DAT_02a60fc8 = 0;
  DAT_02a60fe8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60fd0,&PTR_LOOP_025db000);
  return;
}


