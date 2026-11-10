/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008df920; name: _INIT_387
 */


void _INIT_387(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a4ce54 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a4ce58 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a4ce5c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_LAB_02717c28;
  puVar1 = PTR_DAT_02717c20;
  DAT_02a4ce64 = 0xffff;
  DAT_02a4ce60 = 0xffffffff;
  DAT_02a4ce6c = 0;
  DAT_02a4ce68 = 0;
  *(undefined8 *)PTR_DAT_02717c20 = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


