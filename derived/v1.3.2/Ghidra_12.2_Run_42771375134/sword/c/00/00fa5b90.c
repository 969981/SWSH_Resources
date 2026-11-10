/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa5b90; name: _INIT_1187
 */


void _INIT_1187(void)

{
  DAT_02a60d84 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60d88 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60d8c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60da0 = 0xb6b1c324775b830a;
  DAT_02a60d94 = 0xffff;
  DAT_02a60d90 = 0xffffffff;
  DAT_02a60d9c = 0;
  DAT_02a60da8 = "bin/field/param/nest_hole_table/nest_hole_level.bin";
  DAT_02a60db0 = 0x33;
  DAT_02a60d98 = 0;
  DAT_02a60db8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60da0,&PTR_LOOP_025db000);
  return;
}


