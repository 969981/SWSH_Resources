/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00efbb30; name: _INIT_1137
 */


void _INIT_1137(void)

{
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  
  DAT_02a5ec74 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5ec78 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5ec7c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5ec84 = 0xffff;
  DAT_02a5ec80 = 0xffffffff;
  local_48 = 0x8497ae61571efd43;
  local_40 = &DAT_01cd7684;
  local_38 = 4;
  DAT_02a5ec8c = 0;
  DAT_02a5ec88 = 0;
  FUN_006cf0a0(&DAT_02a5ec90,&local_48);
  DAT_02a5ecb8 = 0x605a84ca1a0d5caa;
  local_60 = 0x514c0734aabe0b3d;
  pcStack_58 = "r1d991";
  DAT_02a5ecb0 = 0xb6c030d1b576ea1f;
  local_50 = 6;
  FUN_006cf0a0(&DAT_02a5ecc0,&local_60);
  DAT_02a5ece8 = 0x605a83ca1a0d5af7;
  DAT_02a5ece0 = 0xb6c030d1b576ea1f;
  local_78 = 0xf1c2f29ed9c4da3c;
  pcStack_70 = "r2d991";
  local_68 = 6;
  FUN_006cf0a0(0x2a5ecf0,&local_78);
  DAT_02a5ed10 = 0xb6c030d1b576ea1f;
  DAT_02a5ed18 = 0x605a82ca1a0d5944;
  FUN_001001c0(&LAB_00efbac0,0,&PTR_LOOP_025db000);
  return;
}


