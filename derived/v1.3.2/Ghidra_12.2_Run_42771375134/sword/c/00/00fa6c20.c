/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa6c20; name: _INIT_1192
 */


void _INIT_1192(void)

{
  DAT_02a60ec4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60ec8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60ecc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60ed4 = 0xffff;
  DAT_02a60ed0 = 0xffffffff;
  DAT_02a60ee0 = 0x46b1422adc1fd22d;
  DAT_02a60ee8 = "bin/test/nest_hole/net_nest_hole_normal_encount.bin";
  DAT_02a60ef0 = 0x33;
  DAT_02a60f00 = 0x9d449224207b42da;
  DAT_02a60f08 = "bin/test/nest_hole/net_nest_hole_normal_encount_rigel1.bin";
  DAT_02a60f20 = 0x510cae34bcdc08f3;
  DAT_02a60edc = 0;
  DAT_02a60ed8 = 0;
  DAT_02a60f10 = 0x3a;
  DAT_02a60f28 = "bin/test/nest_hole/net_nest_hole_normal_encount_rigel2.bin";
  DAT_02a60f30 = 0x3a;
  DAT_02a60ef8 = 0;
  DAT_02a60f18 = 0;
  DAT_02a60f38 = 0;
  FUN_001001c0(&LAB_00fa6bb0,0,&PTR_LOOP_025db000);
  return;
}


