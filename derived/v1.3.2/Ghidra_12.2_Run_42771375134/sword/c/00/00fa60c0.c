/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa60c0; name: _INIT_1188
 */


void _INIT_1188(void)

{
  DAT_02a60dc4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60dc8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60dcc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60de0 = 0xa5963232100f7dee;
  DAT_02a60dd4 = 0xffff;
  DAT_02a60dd0 = 0xffffffff;
  DAT_02a60ddc = 0;
  DAT_02a60de8 = "bin/field/param/nest_hole_table/nest_hole_encount.bin";
  DAT_02a60df0 = 0x35;
  DAT_02a60dd8 = 0;
  DAT_02a60df8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60de0,&PTR_LOOP_025db000);
  return;
}


