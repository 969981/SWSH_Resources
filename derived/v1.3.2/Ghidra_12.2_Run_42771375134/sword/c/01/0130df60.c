/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0130df60; name: _INIT_1594
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1594(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a6d164 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6d168 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6d16c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_DAT_02727748;
  uRam0000000002a6d1b8 = _UNK_01d4aac8;
  _DAT_02a6d1b0 = _DAT_01d4aac0;
  DAT_02a6d174 = 0xffff;
  DAT_02a6d170 = 0xffffffff;
  uRam0000000002a6d188 = _UNK_01d4b108;
  _DAT_02a6d180 = _DAT_01d4b100;
  DAT_02a6d17c = 0;
  uRam0000000002a6d198 = _UNK_01d4b828;
  _DAT_02a6d190 = _DAT_01d4b820;
  uRam0000000002a6d1a8 = _UNK_01d4a4c8;
  _DAT_02a6d1a0 = _DAT_01d4a4c0;
  DAT_02a6d178 = 0;
  uRam0000000002a6d1c8 = _UNK_01d4a428;
  _DAT_02a6d1c0 = _DAT_01d4a420;
  uRam0000000002a6d1d8 = _UNK_01d4a308;
  _DAT_02a6d1d0 = _DAT_01d4a300;
  uRam0000000002a6d1e8 = _UNK_01d4b158;
  _DAT_02a6d1e0 = _DAT_01d4b150;
  *(undefined8 *)PTR_DAT_02727748 = 0;
  puVar2 = PTR_LAB_02727e30;
  FUN_001001c0(PTR_LAB_02727e30,puVar1,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02727760;
  *(undefined8 *)PTR_DAT_02727760 = 0;
  FUN_001001c0(puVar2,puVar1,&PTR_LOOP_025db000);
  return;
}


