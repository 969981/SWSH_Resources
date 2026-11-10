/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0108e8d0; name: _INIT_1250
 */


void _INIT_1250(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a62604 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a62608 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6260c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_LAB_027240e0;
  puVar1 = PTR_DAT_027240d8;
  DAT_02a62614 = 0xffff;
  DAT_02a62610 = 0xffffffff;
  DAT_02a6261c = 0;
  DAT_02a62618 = 0;
  *(undefined8 *)PTR_DAT_027240d8 = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


