/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa63a0; name: _INIT_1189
 */


void _INIT_1189(void)

{
  DAT_02a60e04 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60e08 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60e0c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60e20 = 0xf5bbf9bf69d69ec8;
  DAT_02a60e14 = 0xffff;
  DAT_02a60e10 = 0xffffffff;
  DAT_02a60e1c = 0;
  DAT_02a60e28 = "bin/field/param/nest_hole_table/nest_hole_drop_rewards.bin";
  DAT_02a60e30 = 0x3a;
  DAT_02a60e18 = 0;
  DAT_02a60e38 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60e20,&PTR_LOOP_025db000);
  return;
}


