/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112ce70; name: _INIT_1336
 */


void _INIT_1336(void)

{
  DAT_02a6380c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a63810 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a63814 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a63828 = 0x2fd92fd811541d8;
  DAT_02a6381c = 0xffff;
  DAT_02a63818 = 0xffffffff;
  DAT_02a63824 = 0;
  DAT_02a63830 = "common/nest.dat";
  DAT_02a63838 = 0xf;
  DAT_02a63820 = 0;
  DAT_02a63840 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a63828,&PTR_LOOP_025db000);
  return;
}


