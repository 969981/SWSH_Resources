/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ea8290; name: _INIT_1083
 */


void _INIT_1083(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  DAT_02a5cc9c = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5cca0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5cca4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5ccb4 = 0xffff;
  DAT_02a5cca8 = 0x3f3730943ae4c389;
  DAT_02a5ccc0 = 0xfd67dd1c92f2acc5;
  DAT_02a5ccc8 = "bin/archive/field/resident/skybox.gfpak";
  DAT_02a5ccd0 = 0x27;
  DAT_02a5cce0 = 0x8e7c2d7d3d5200b3;
  DAT_02a5ccf0 = 0x25;
  DAT_02a5cd00 = 0xa59fad1cba51fa67;
  DAT_02a5cd08 = "skybox_01";
  DAT_02a5cd20 = 0x72608583c0b2a1fb;
  DAT_02a5cd28 = "bin/archive/field/model/unit_obj_door_pc_01.gfpak";
  DAT_02a5cd30 = 0x31;
  DAT_02a5cd40 = 0x92e4e49d56f6b4bd;
  DAT_02a5cd50 = 0x2d;
  DAT_02a5cd60 = 0x16efccb44ccb1e24;
  DAT_02a5cd68 = "unit_obj_door_pc_01";
  DAT_02a5ccb0 = 0xffffffff;
  DAT_02a5cce8 = "bin/field/model/buildmodel/skybox_01/";
  DAT_02a5cd48 = "bin/field/model/unit_obj/unit_obj_door_pc_01/";
  DAT_02a5ccbc = 0;
  DAT_02a5ccb8 = 0;
  DAT_02a5ccd8 = 0;
  DAT_02a5ccf8 = 0;
  DAT_02a5cd70 = 0x13;
  DAT_02a5cd80 = 0xebee1432c2d9065c;
  DAT_02a5cd88 = "bin/archive/field/model/unit_obj_itemred01.gfpak";
  DAT_02a5cd10 = 9;
  DAT_02a5cd18 = 0;
  DAT_02a5cd38 = 0;
  DAT_02a5cd58 = 0;
  DAT_02a5cd78 = 0;
  DAT_02a5cd90 = 0x30;
  DAT_02a5cd98 = 0;
  DAT_02a5cda0 = 0xed1d0d151995eac4;
  DAT_02a5cda8 = "bin/field/model/unit_obj/unit_obj_itemred01/";
  DAT_02a5cdb0 = 0x2c;
  DAT_02a5cdb8 = 0;
  DAT_02a5cdc0 = 0x664123dd0391a54f;
  DAT_02a5cdc8 = "unit_obj_itemred01";
  DAT_02a5cdd0 = 0x12;
  DAT_02a5cdd8 = 0;
  DAT_02a5cde0 = 0xf035e7b1b108d70d;
  DAT_02a5cde8 = "bin/archive/field/model/unit_obj_itemyel01.gfpak";
  DAT_02a5cdf0 = 0x30;
  DAT_02a5cdf8 = 0;
  DAT_02a5ce00 = 0x569cd2804fa1ce0b;
  DAT_02a5ce08 = "bin/field/model/unit_obj/unit_obj_itemyel01/";
  DAT_02a5ce10 = 0x2c;
  DAT_02a5ce18 = 0;
  DAT_02a5ce20 = 0xd62ee1bfd5ca2bb2;
  DAT_02a5ce28 = "unit_obj_itemyel01";
  DAT_02a5ce30 = 0x12;
  DAT_02a5ce38 = 0;
  FUN_001001c0(&LAB_00ea8120,0,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fcb8;
  *(undefined8 *)PTR_DAT_0271fcb8 = 0xeb8cb4cd665fb6aa;
  *(char **)(puVar2 + 8) = "app_state";
  *(undefined8 *)(puVar2 + 0x10) = 9;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar1 = PTR_LAB_027151a8;
  FUN_001001c0(PTR_LAB_027151a8,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fdd8;
  *(undefined8 *)PTR_DAT_0271fdd8 = 0x6f3c13bce33a451a;
  *(char **)(puVar2 + 8) = "fi01_wait01";
  *(undefined8 *)(puVar2 + 0x10) = 0xb;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fde0;
  *(undefined8 *)PTR_DAT_0271fde0 = 0x86d5d0473422803d;
  *(char **)(puVar2 + 8) = "fi_seach01_01_loop_01";
  *(undefined8 *)(puVar2 + 0x10) = 0x15;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fde8;
  *(undefined8 *)PTR_DAT_0271fde8 = 0x86d5cd4734227b24;
  *(char **)(puVar2 + 8) = "fi_seach01_01_loop_02";
  *(undefined8 *)(puVar2 + 0x10) = 0x15;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fc68;
  *(undefined8 *)PTR_DAT_0271fc68 = 0xc92c5bff24845d79;
  *(char **)(puVar2 + 8) = "ba10_waitA01";
  *(undefined8 *)(puVar2 + 0x10) = 0xc;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_0271fc70;
  *(undefined8 *)PTR_DAT_0271fc70 = 0xadc8099498f9eb57;
  *(char **)(puVar2 + 8) = "kw01_wait01";
  *(undefined8 *)(puVar2 + 0x10) = 0xb;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_027200d8;
  *(undefined8 *)PTR_DAT_027200d8 = 0xeb5cfb5782bcaa97;
  *(char **)(puVar2 + 8) = "ba20_buturi01";
  *(undefined8 *)(puVar2 + 0x10) = 0xd;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_027200e0;
  *(undefined8 *)PTR_DAT_027200e0 = 0xa54742043cd18695;
  *(char **)(puVar2 + 8) = "ba21_tokusyu01";
  *(undefined8 *)(puVar2 + 0x10) = 0xe;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_027200e8;
  *(undefined8 *)PTR_DAT_027200e8 = 0xa512b890fa78b18b;
  *(char **)(puVar2 + 8) = "to_ba20_buturi01";
  *(undefined8 *)(puVar2 + 0x10) = 0x10;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  puVar2 = PTR_DAT_027200f0;
  *(undefined8 *)PTR_DAT_027200f0 = 0x348d6009bf5aa49;
  *(char **)(puVar2 + 8) = "to_ba21_tokusyu01";
  *(undefined8 *)(puVar2 + 0x10) = 0x11;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  FUN_001001c0(puVar1,puVar2,&PTR_LOOP_025db000);
  return;
}


