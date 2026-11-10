/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e334f0; name: _INIT_1024
 */


void _INIT_1024(void)

{
  DAT_02a5a46c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5a470 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5a474 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5a488 = 0x761ad4382812a1a4;
  DAT_02a5a47c = 0xffff;
  DAT_02a5a478 = 0xffffffff;
  DAT_02a5a484 = 0;
  DAT_02a5a490 = "bin/field/param/ground_attribute/field_attribute_table.bin";
  DAT_02a5a498 = 0x3a;
  DAT_02a5a480 = 0;
  DAT_02a5a4a0 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5a488,&PTR_LOOP_025db000);
  return;
}


