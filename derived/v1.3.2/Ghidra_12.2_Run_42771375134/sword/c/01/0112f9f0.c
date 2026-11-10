/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0112f9f0; name: _INIT_1341
 */


void _INIT_1341(void)

{
  undefined *puVar1;
  undefined8 local_90;
  char *pcStack_88;
  undefined8 local_80;
  undefined8 local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  
  DAT_02a639a4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a639a8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a639ac = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_DAT_02724b98;
  DAT_02a639b4 = 0xffff;
  DAT_02a639b0 = 0xffffffff;
  local_48 = 0x3ac769d2cd025583;
  local_40 = "Play_UI_Gnest_10sec";
  DAT_02a639bc = 0;
  DAT_02a639b8 = 0;
  local_38 = 0x13;
  FUN_006cf0a0(PTR_DAT_02724b98,&local_48);
  local_60 = 0xdff4f2c1f8629f85;
  pcStack_58 = "Play_UI_Gnest_3sec";
  local_50 = 0x12;
  FUN_006cf0a0(puVar1 + 0x20,&local_60);
  local_68 = 0x12;
  local_78 = 0xdff4f2c1f8629f85;
  pcStack_70 = "Play_UI_Gnest_3sec";
  FUN_006cf0a0(puVar1 + 0x40,&local_78);
  local_80 = 0x12;
  local_90 = 0xdff4f2c1f8629f85;
  pcStack_88 = "Play_UI_Gnest_3sec";
  FUN_006cf0a0(puVar1 + 0x60,&local_90);
  FUN_001001c0(&LAB_0112f970,0,&PTR_LOOP_025db000);
  return;
}


