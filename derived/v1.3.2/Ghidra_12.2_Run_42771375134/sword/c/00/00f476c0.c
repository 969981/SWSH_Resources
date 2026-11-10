/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f476c0; name: _INIT_1170
 */


void _INIT_1170(void)

{
  DAT_02a5fa14 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5fa18 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5fa1c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5fa30 = 0xd6e7b5deb999e13;
  DAT_02a5fa24 = 0xffff;
  DAT_02a5fa20 = 0xffffffff;
  DAT_02a5fa2c = 0;
  DAT_02a5fa38 = "bin/field/param/tent/tent_color_table.bin";
  DAT_02a5fa40 = 0x29;
  DAT_02a5fa28 = 0;
  DAT_02a5fa48 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5fa30,&PTR_LOOP_025db000);
  return;
}


