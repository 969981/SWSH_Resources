/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa24b0; name: _INIT_1184
 */


void _INIT_1184(void)

{
  DAT_02a60cf4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a60cf8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a60cfc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a60d10 = 0xc24e178bf261cde8;
  DAT_02a60d04 = 0xffff;
  DAT_02a60d00 = 0xffffffff;
  DAT_02a60d0c = 0;
  DAT_02a60d18 = "bin/field/param/symbol_encount_mons_param/symbol_encount_mons_param.bin";
  DAT_02a60d20 = 0x47;
  DAT_02a60d08 = 0;
  DAT_02a60d28 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a60d10,&PTR_LOOP_025db000);
  return;
}


