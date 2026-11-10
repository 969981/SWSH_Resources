/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eddf50; name: _INIT_1116
 */


void _INIT_1116(void)

{
  undefined *puVar1;
  
  DAT_02a5de8c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5de90 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5de94 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_LAB_027151a8;
  DAT_02a5dea4 = 0xffff;
  DAT_02a5de98 = 0x3f3730943ae4c389;
  DAT_02a5dea0 = 0xffffffff;
  DAT_02a5deac = 0;
  DAT_02a5dea8 = 0;
  DAT_02a5deb0 = 0x12b9d5b6ca9a09d2;
  DAT_02a5deb8 = "fi0150_ladder01_l_loop";
  DAT_02a5dec0 = 0x16;
  DAT_02a5dec8 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5deb0,&PTR_LOOP_025db000);
  DAT_02a5ded0 = 0xef3977369ff643c7;
  DAT_02a5ded8 = "fi0151_ladder01_r_loop";
  DAT_02a5dee0 = 0x16;
  DAT_02a5dee8 = 0;
  FUN_001001c0(puVar1,&DAT_02a5ded0,&PTR_LOOP_025db000);
  DAT_02a5def0 = 0x4ef4eeb1ab96c77a;
  DAT_02a5def8 = "fi_ladder_loop_01";
  DAT_02a5df00 = 0x11;
  DAT_02a5df08 = 0;
  FUN_001001c0(puVar1,&DAT_02a5def0,&PTR_LOOP_025db000);
  DAT_02a5df10 = 0x4ef4edb1ab96c5c7;
  DAT_02a5df18 = "fi_ladder_loop_02";
  DAT_02a5df20 = 0x11;
  DAT_02a5df28 = 0;
  FUN_001001c0(puVar1,&DAT_02a5df10,&PTR_LOOP_025db000);
  DAT_02a5df30 = 0xaefa175e54955765;
  DAT_02a5df38 = "fi0158_ladderdown01_l_end";
  DAT_02a5df40 = 0x19;
  DAT_02a5df48 = 0;
  FUN_001001c0(puVar1,&DAT_02a5df30,&PTR_LOOP_025db000);
  DAT_02a5df50 = 0x1c5890b28648eeae;
  DAT_02a5df58 = "fi0159_ladderdown01_r_end";
  DAT_02a5df60 = 0x19;
  DAT_02a5df68 = 0;
  FUN_001001c0(puVar1,&DAT_02a5df50,&PTR_LOOP_025db000);
  DAT_02a5df70 = 0x62da94a4d83eee70;
  DAT_02a5df88 = 0;
  DAT_02a5df78 = "fi0154_ladderup01_l_end";
  DAT_02a5df80 = 0x17;
  FUN_001001c0(puVar1,&DAT_02a5df70,&PTR_LOOP_025db000);
  DAT_02a5df90 = 0x7e3d986aaee3cac3;
  DAT_02a5df98 = "fi0155_ladderup01_r_end";
  DAT_02a5dfa0 = 0x17;
  DAT_02a5dfa8 = 0;
  FUN_001001c0(puVar1,&DAT_02a5df90,&PTR_LOOP_025db000);
  return;
}


