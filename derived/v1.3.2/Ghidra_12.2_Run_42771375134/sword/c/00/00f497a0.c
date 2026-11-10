/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f497a0; name: _INIT_1173
 */


void _INIT_1173(void)

{
  DAT_02a5fac4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5fac8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5facc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5fae0 = 0x7b0118142b2443;
  DAT_02a5fad4 = 0xffff;
  DAT_02a5fad0 = 0xffffffff;
  DAT_02a5fadc = 0;
  DAT_02a5fae8 = "bin/field/param/battle_tower/battle_tower_trainer_table.bin";
  DAT_02a5faf0 = 0x3b;
  DAT_02a5fad8 = 0;
  DAT_02a5faf8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5fae0,&PTR_LOOP_025db000);
  return;
}


