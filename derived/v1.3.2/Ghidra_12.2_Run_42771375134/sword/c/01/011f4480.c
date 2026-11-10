/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 011f4480; name: _INIT_1435
 */


void _INIT_1435(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a65614 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a65618 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6561c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_LAB_02725cf0;
  puVar1 = PTR_DAT_02725ce8;
  DAT_02a65624 = 0xffff;
  DAT_02a65620 = 0xffffffff;
  DAT_02a6562c = 0;
  DAT_02a65628 = 0;
  *PTR_DAT_02725ce8 = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


