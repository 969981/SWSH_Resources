/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e0110; name: _INIT_779
 */


void _INIT_779(void)

{
  undefined *puVar1;
  
  DAT_02a5072c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50730 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a50734 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_DAT_02718ac8;
  DAT_02a5073c = 0xffff;
  DAT_02a50738 = 0xffffffff;
  DAT_02a50744 = 0;
  DAT_02a50740 = 0;
  *(undefined8 *)PTR_DAT_02718ac8 = 0;
  FUN_001001c0(PTR_LAB_02718ad0,puVar1,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02718ab8;
  *(undefined8 *)(PTR_DAT_02718ab8 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  FUN_001001c0(&LAB_009dffd0,0,&PTR_LOOP_025db000);
  puVar1 = PTR_DAT_02718ac0;
  *(undefined8 *)PTR_DAT_02718ac0 = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  FUN_001001c0(&LAB_009e0070,0,&PTR_LOOP_025db000);
  return;
}


