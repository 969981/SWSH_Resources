/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e0850; name: _INIT_781
 */


void _INIT_781(void)

{
  undefined *puVar1;
  
  DAT_02a50814 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a50818 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5081c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_DAT_02718ad8;
  DAT_02a50824 = 0xffff;
  DAT_02a5082c = 0;
  DAT_02a50820 = 0xffffffff;
  DAT_02a50828 = 0;
  *(undefined8 *)(PTR_DAT_02718ad8 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x20) = 0;
  *(undefined8 *)(puVar1 + 0x28) = 0;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  FUN_001001c0(PTR_LAB_02718ae0,puVar1,&PTR_LOOP_025db000);
  DAT_02a50830 = 0xcfb7180bd66ee8fc;
  DAT_02a50838 = "common/btl_std.dat";
  DAT_02a50840 = 0x12;
  DAT_02a50860 = 0x12;
  DAT_02a50870 = 0xffc684a5eac0de91;
  DAT_02a50878 = "common/btl_attack.dat";
  DAT_02a50880 = 0x15;
  DAT_02a50890 = 0x61c60f9c1720116d;
  DAT_02a50850 = 0x8251fe08e844de0d;
  DAT_02a50848 = 0;
  DAT_02a508a0 = 0x17;
  DAT_02a50858 = "common/btl_set.dat";
  DAT_02a50898 = "common/gwazamessage.dat";
  DAT_02a508b0 = 0x35e410f68ec8eb;
  DAT_02a50868 = 0;
  DAT_02a50888 = 0;
  DAT_02a508a8 = 0;
  DAT_02a508b8 = "common/btl_talk.dat";
  DAT_02a508c0 = 0x13;
  DAT_02a508c8 = 0;
  FUN_001001c0(&LAB_009e07a0,0,&PTR_LOOP_025db000);
  return;
}


