/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3eb80; name: _INIT_1033
 */


void _INIT_1033(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a5b2d4 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5b2d8 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5b2dc = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5b2ec = 0xffff;
  DAT_02a5b2e0 = 0x3f3730943ae4c389;
  DAT_02a5b2f8 = 0xfd67dd1c92f2acc5;
  DAT_02a5b300 = "bin/archive/field/resident/skybox.gfpak";
  DAT_02a5b308 = 0x27;
  DAT_02a5b318 = 0x8e7c2d7d3d5200b3;
  DAT_02a5b328 = 0x25;
  DAT_02a5b338 = 0xa59fad1cba51fa67;
  DAT_02a5b340 = "skybox_01";
  DAT_02a5b348 = 9;
  DAT_02a5b358 = 0x72608583c0b2a1fb;
  DAT_02a5b360 = "bin/archive/field/model/unit_obj_door_pc_01.gfpak";
  DAT_02a5b368 = 0x31;
  DAT_02a5b378 = 0x92e4e49d56f6b4bd;
  DAT_02a5b388 = 0x2d;
  DAT_02a5b398 = 0x16efccb44ccb1e24;
  DAT_02a5b3a0 = "unit_obj_door_pc_01";
  DAT_02a5b2e8 = 0xffffffff;
  DAT_02a5b320 = "bin/field/model/buildmodel/skybox_01/";
  DAT_02a5b380 = "bin/field/model/unit_obj/unit_obj_door_pc_01/";
  DAT_02a5b2f4 = 0;
  DAT_02a5b2f0 = 0;
  DAT_02a5b310 = 0;
  DAT_02a5b330 = 0;
  DAT_02a5b3a8 = 0x13;
  DAT_02a5b3b8 = 0xebee1432c2d9065c;
  DAT_02a5b3c0 = "bin/archive/field/model/unit_obj_itemred01.gfpak";
  DAT_02a5b350 = 0;
  DAT_02a5b370 = 0;
  DAT_02a5b390 = 0;
  DAT_02a5b3b0 = 0;
  DAT_02a5b3c8 = 0x30;
  DAT_02a5b3d0 = 0;
  DAT_02a5b3d8 = 0xed1d0d151995eac4;
  DAT_02a5b3e0 = "bin/field/model/unit_obj/unit_obj_itemred01/";
  DAT_02a5b3e8 = 0x2c;
  DAT_02a5b3f0 = 0;
  DAT_02a5b3f8 = 0x664123dd0391a54f;
  DAT_02a5b400 = "unit_obj_itemred01";
  DAT_02a5b408 = 0x12;
  DAT_02a5b410 = 0;
  DAT_02a5b418 = 0xf035e7b1b108d70d;
  DAT_02a5b420 = "bin/archive/field/model/unit_obj_itemyel01.gfpak";
  DAT_02a5b428 = 0x30;
  DAT_02a5b430 = 0;
  DAT_02a5b438 = 0x569cd2804fa1ce0b;
  DAT_02a5b440 = "bin/field/model/unit_obj/unit_obj_itemyel01/";
  DAT_02a5b448 = 0x2c;
  DAT_02a5b450 = 0;
  DAT_02a5b458 = 0xd62ee1bfd5ca2bb2;
  DAT_02a5b460 = "unit_obj_itemyel01";
  DAT_02a5b468 = 0x12;
  DAT_02a5b470 = 0;
  FUN_001001c0(&LAB_00e3ea10,0,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271f7d8;
  *(undefined8 *)PTR_DAT_0271f7d8 = 0xe7df4b5d76906747;
  *(char **)(puVar2 + 8) = "FTire";
  *(undefined8 *)(puVar2 + 0x10) = 5;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar1 = PTR_LAB_027151a8;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271f7e0;
  *(undefined8 *)PTR_DAT_0271f7e0 = 0x1cc52ca465f9d513;
  *(char **)(puVar2 + 8) = "BTire";
  *(undefined8 *)(puVar2 + 0x10) = 5;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271f7e8;
  *(undefined8 *)PTR_DAT_0271f7e8 = 0x59c055c91054aae;
  *(undefined **)(puVar2 + 8) = &DAT_01ce5813;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  return;
}


