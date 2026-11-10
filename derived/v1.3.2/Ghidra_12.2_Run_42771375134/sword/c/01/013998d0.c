/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013998d0; name: _INIT_1691
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1691(void)

{
  undefined1 auVar1 [16];
  
  DAT_02a714a4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a714a8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a714ac = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a714b4 = 0xffff;
  DAT_02a714b0 = 0xffffffff;
  uRam0000000002a714c8 = _UNK_01d4b108;
  _DAT_02a714c0 = _DAT_01d4b100;
  uRam0000000002a714d8 = _UNK_01d4b828;
  _DAT_02a714d0 = _DAT_01d4b820;
  DAT_02a714bc = 0;
  uRam0000000002a714e8 = _UNK_01d4a4c8;
  _DAT_02a714e0 = _DAT_01d4a4c0;
  uRam0000000002a71528 = _UNK_01d4a428;
  _DAT_02a71520 = _DAT_01d4a420;
  DAT_02a714b8 = 0;
  uRam0000000002a71538 = _UNK_01d4a308;
  _DAT_02a71530 = _DAT_01d4a300;
  uRam0000000002a71548 = _UNK_01d4b158;
  _DAT_02a71540 = _DAT_01d4b150;
  uRam0000000002a714f8 = _UNK_01d4aac8;
  _DAT_02a714f0 = _DAT_01d4aac0;
  auVar1 = NEON_fmov(0x3f800000,4);
  _DAT_02a71508 = auVar1._8_8_;
  _DAT_02a71500 = auVar1._0_8_;
  _DAT_02a71518 = _UNK_01d4b3c8;
  _DAT_02a71510 = _DAT_01d4b3c0;
  return;
}


