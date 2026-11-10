/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00eb7380; name: _INIT_1092
 */


void _INIT_1092(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a5d19c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5d1a0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5d1a4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  puVar2 = PTR_DAT_02720200;
  DAT_02a5d1b4 = 0xffff;
  DAT_02a5d1b0 = 0xffffffff;
  DAT_02a5d1bc = 0;
  DAT_02a5d1b8 = 0;
  DAT_02a5d1a8 = 0x3f3730943ae4c389;
  *(undefined8 *)PTR_DAT_02720200 = 0xe2c66acd6f45a56c;
  *(char **)(puVar2 + 8) = "fi_trainer_ballfight";
  *(undefined8 *)(puVar2 + 0x10) = 0x14;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar1 = PTR_LAB_027151a8;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  DAT_02a5d1c0 = 0x6e1be0e0eecba78b;
  DAT_02a5d1c8 = "loc_eff_eye";
  DAT_02a5d1d0 = 0xb;
  DAT_02a5d1d8 = 0;
  *(float *)PTR_DAT_027201f8 =
       (*(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0) * DAT_01d4c284;
  FUN_001001c0(puVar1,&DAT_02a5d1c0,&PTR_LOOP_025db000);
  DAT_02a5d1e0 = 0xfd1bc77d66ce561;
  DAT_02a5d1e8 = "loc_ob_ball";
  DAT_02a5d1f0 = 0xb;
  DAT_02a5d1f8 = 0;
  FUN_001001c0(puVar1,&DAT_02a5d1e0,&PTR_LOOP_025db000);
  DAT_02a5d200 = 0x9f359693c667a99f;
  DAT_02a5d208 = "loc_attach";
  DAT_02a5d210 = 10;
  DAT_02a5d218 = 0;
  FUN_001001c0(puVar1,&DAT_02a5d200,&PTR_LOOP_025db000);
  DAT_02a5d220 = 0x6d9c759828f96b18;
  DAT_02a5d228 = "fi_ball_shine";
  DAT_02a5d230 = 0xd;
  DAT_02a5d238 = 0;
  FUN_001001c0(puVar1,&DAT_02a5d220,&PTR_LOOP_025db000);
  return;
}


