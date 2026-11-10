/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e57ed0; name: _INIT_1042
 */


void _INIT_1042(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a5b8cc = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5b8d0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5b8d4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_DAT_0271fb78;
  DAT_02a5b8e4 = 0;
  DAT_02a5b8dc = 0xffff;
  DAT_02a5b8d8 = 0xffffffff;
  *(undefined8 *)PTR_DAT_0271fb78 = 0x3f22c17fa301a851;
  *(char **)(puVar2 + 8) = "off_trigger";
  DAT_02a5b8e0 = 0;
  *(undefined8 *)(puVar2 + 0x10) = 0xb;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar1 = PTR_LAB_027151a8;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fb80;
  *(undefined8 *)PTR_DAT_0271fb80 = 0x4d7c2381036664fb;
  *(char **)(puVar2 + 8) = "on_trigger";
  *(undefined8 *)(puVar2 + 0x10) = 10;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  return;
}


