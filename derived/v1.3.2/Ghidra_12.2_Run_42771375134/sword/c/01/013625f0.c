/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013625f0; name: _INIT_1656
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1656(void)

{
  DAT_02a6fa54 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6fa58 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6fa5c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  uRam0000000002a6fa88 = _UNK_01d4b108;
  _DAT_02a6fa80 = _DAT_01d4b100;
  DAT_02a6fa6c = 0xffff;
  uRam0000000002a6fa98 = _UNK_01d4b828;
  _DAT_02a6fa90 = _DAT_01d4b820;
  DAT_02a6fa68 = 0xffffffff;
  uRam0000000002a6faa8 = _UNK_01d4a4c8;
  _DAT_02a6faa0 = _DAT_01d4a4c0;
  uRam0000000002a6fac8 = _UNK_01d4a428;
  _DAT_02a6fac0 = _DAT_01d4a420;
  uRam0000000002a6fad8 = _UNK_01d4a308;
  _DAT_02a6fad0 = _DAT_01d4a300;
  uRam0000000002a6fae8 = _UNK_01d4b158;
  _DAT_02a6fae0 = _DAT_01d4b150;
  DAT_02a6fa74 = 0;
  DAT_02a6fa70 = 0;
  uRam0000000002a6fab8 = _UNK_01d4aac8;
  _DAT_02a6fab0 = _DAT_01d4aac0;
  DAT_02a6fa60 = (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) *
                 DAT_01d4c664;
  return;
}


