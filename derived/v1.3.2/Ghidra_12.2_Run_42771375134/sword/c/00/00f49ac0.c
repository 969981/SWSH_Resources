/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49ac0; name: _INIT_1174
 */


void _INIT_1174(void)

{
  DAT_02a5fb04 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5fb08 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5fb0c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5fb20 = 0x3e844081b53b78a3;
  DAT_02a5fb14 = 0xffff;
  DAT_02a5fb10 = 0xffffffff;
  DAT_02a5fb1c = 0;
  DAT_02a5fb28 = "bin/field/param/monohiroi/monohiroi_table.bin";
  DAT_02a5fb30 = 0x2d;
  DAT_02a5fb18 = 0;
  DAT_02a5fb38 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5fb20,&PTR_LOOP_025db000);
  return;
}


