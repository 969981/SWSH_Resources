/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f17b20; name: _INIT_1156
 */


void _INIT_1156(void)

{
  undefined *puVar1;
  
  DAT_02a5f66c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5f670 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5f674 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar1 = PTR_LAB_027151a8;
  DAT_02a5f67c = 0xffff;
  DAT_02a5f678 = 0xffffffff;
  DAT_02a5f684 = 0;
  DAT_02a5f680 = 0;
  DAT_02a5f688 = 0x2606b956ad63ca95;
  DAT_02a5f690 = "goal_trigger";
  DAT_02a5f698 = 0xc;
  DAT_02a5f6a0 = 0;
  FUN_001001c0(PTR_LAB_027151a8,&DAT_02a5f688,&PTR_LOOP_025db000);
  DAT_02a5f6a8 = 0xe95da7dff967f37b;
  DAT_02a5f6b0 = "Play_Prop_Gimmick_a_t0501_g0102_cup_move_lp";
  DAT_02a5f6b8 = 0x2b;
  DAT_02a5f6c0 = 0;
  FUN_001001c0(puVar1,&DAT_02a5f6a8,&PTR_LOOP_025db000);
  DAT_02a5f6c8 = 0xf4ad23940040270c;
  DAT_02a5f6d0 = "Play_Prop_Gimmick_a_t0501_g0102_cup_roll";
  DAT_02a5f6d8 = 0x28;
  DAT_02a5f6e0 = 0;
  FUN_001001c0(puVar1,&DAT_02a5f6c8,&PTR_LOOP_025db000);
  DAT_02a5f6e8 = 0xc4b443d1dfcbcdf1;
  DAT_02a5f6f0 = "Stop_Prop_Gimmick_a_t0501_g0102_cup_move_lp";
  DAT_02a5f6f8 = 0x2b;
  DAT_02a5f700 = 0;
  FUN_001001c0(puVar1,&DAT_02a5f6e8,&PTR_LOOP_025db000);
  DAT_02a5f708 = 0x175845a07a498ffd;
  DAT_02a5f710 = "Play_UI_Gym_a_t0501_g0102_Start";
  DAT_02a5f718 = 0x1f;
  DAT_02a5f720 = 0;
  FUN_001001c0(puVar1,&DAT_02a5f708,&PTR_LOOP_025db000);
  DAT_02a5f728 = 0x765c51c63409ee78;
  DAT_02a5f730 = "Play_UI_Gym_a_t0501_g0102_Goal";
  DAT_02a5f738 = 0x1e;
  DAT_02a5f740 = 0;
  FUN_001001c0(puVar1,&DAT_02a5f728,&PTR_LOOP_025db000);
  return;
}


