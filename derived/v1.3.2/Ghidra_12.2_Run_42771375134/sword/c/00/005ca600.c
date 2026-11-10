/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005ca600; name: _INIT_149
 */


void _INIT_149(void)

{
  undefined8 uVar1;
  
  DAT_029e7ab8 = 0;
  DAT_029e7ad8 = 0xffffffff;
  DAT_029e7ac8 = 0;
  DAT_029e7ad0 = 0;
  DAT_029e7ac0 = 0;
  DAT_029e7af0 = 0;
  DAT_029e7af8 = 0;
  DAT_029e7ae0 = PTR_DAT_02713958 + 0x10;
  DAT_029e7b20 = 0;
  DAT_029e7b28 = 0;
  DAT_029e7b10 = 0;
  DAT_029e7b18 = 0;
  DAT_029e7ae8 = 0;
  DAT_029e7b00 = 0x78;
  DAT_029e7b08 = 0;
  DAT_029e7ae8 = FUN_005bc6f0();
  FUN_001001c0(PTR_FUN_02713960,&DAT_029e7ab8,&PTR_LOOP_025db000);
  DAT_029e7aa0 = PTR_DAT_02713f18 + 0x10;
  uVar1 = FUN_005ca6c0();
  FUN_005bf710(&DAT_029e7aa8,uVar1);
  FUN_001001c0(PTR_LAB_02713f20,&DAT_029e7aa0,&PTR_LOOP_025db000);
  return;
}


