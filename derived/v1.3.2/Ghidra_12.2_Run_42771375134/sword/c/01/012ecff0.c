/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012ecff0; name: _INIT_1583
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1583(void)

{
  undefined *puVar1;
  
  DAT_02a6c844 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a6c848 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a6c84c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_DAT_02727ab0;
  uRam0000000002a6c898 = _UNK_01d4aac8;
  _DAT_02a6c890 = _DAT_01d4aac0;
  DAT_02a6c854 = 0xffff;
  DAT_02a6c850 = 0xffffffff;
  uRam0000000002a6c868 = _UNK_01d4b108;
  _DAT_02a6c860 = _DAT_01d4b100;
  DAT_02a6c85c = 0;
  uRam0000000002a6c878 = _UNK_01d4b828;
  _DAT_02a6c870 = _DAT_01d4b820;
  uRam0000000002a6c888 = _UNK_01d4a4c8;
  _DAT_02a6c880 = _DAT_01d4a4c0;
  DAT_02a6c858 = 0;
  uRam0000000002a6c8a8 = _UNK_01d4a428;
  _DAT_02a6c8a0 = _DAT_01d4a420;
  uRam0000000002a6c8b8 = _UNK_01d4a308;
  _DAT_02a6c8b0 = _DAT_01d4a300;
  uRam0000000002a6c8c8 = _UNK_01d4b158;
  _DAT_02a6c8c0 = _DAT_01d4b150;
  *(undefined8 *)PTR_DAT_02727ab0 = 0x774f1426eecbaf8f;
  *(undefined8 *)(puVar1 + 8) = 1;
  puVar1 = PTR_DAT_02727b50;
  *(undefined8 *)PTR_DAT_02727b50 = 0x75fb1426edaaaf93;
  *(undefined8 *)(puVar1 + 8) = 4;
  puVar1 = PTR_DAT_02727b58;
  *(undefined8 *)PTR_DAT_02727b58 = 0x7605d426edb44a58;
  *(undefined8 *)(puVar1 + 8) = 9;
  puVar1 = PTR_DAT_02727b60;
  *(undefined8 *)PTR_DAT_02727b60 = 0xfd1d21367d42f610;
  *(undefined8 *)(puVar1 + 8) = 0x10;
  return;
}


