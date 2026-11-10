/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee1200; name: _INIT_1120
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1120(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  DAT_02a5e084 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5e088 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5e08c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_DAT_0271e4c0;
  uVar1 = _DAT_01d4a700;
  DAT_02a5e09c = 0xffff;
  DAT_02a5e098 = 0xffffffff;
  DAT_02a5e090 = 0x3f3730943ae4c389;
  DAT_02a5e0a4 = 0;
  DAT_02a5e0a0 = 0;
  *(undefined8 *)(PTR_DAT_0271e4c0 + 8) = _UNK_01d4a708;
  *(undefined8 *)puVar2 = uVar1;
  return;
}


