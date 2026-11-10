/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa6680; name: _INIT_1190
 */


void _INIT_1190(void)

{
  DAT_02a60e44 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60e48 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60e4c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60e60 = 0x4fcfd10a68b274a0;
  DAT_02a60e54 = 0xffff;
  DAT_02a60e50 = 0xffffffff;
  DAT_02a60e5c = 0;
  DAT_02a60e68 = "bin/field/param/nest_hole_table/nest_hole_bonus_rewards.bin";
  DAT_02a60e70 = 0x3b;
  DAT_02a60e58 = 0;
  DAT_02a60e78 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60e60,&PTR_LOOP_025db000);
  return;
}


