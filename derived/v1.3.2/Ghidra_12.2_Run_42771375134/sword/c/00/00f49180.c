/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49180; name: _INIT_1172
 */


void _INIT_1172(void)

{
  DAT_02a5fa84 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5fa88 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5fa8c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5faa0 = 0xf85737bb31c9f25b;
  DAT_02a5fa94 = 0xffff;
  DAT_02a5fa90 = 0xffffffff;
  DAT_02a5fa9c = 0;
  DAT_02a5faa8 = "bin/field/param/battle_tower/battle_tower_poke_table.bin";
  DAT_02a5fab0 = 0x38;
  DAT_02a5fa98 = 0;
  DAT_02a5fab8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5faa0,&PTR_LOOP_025db000);
  return;
}


