/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df7680; name: _INIT_1011
 */


void _INIT_1011(void)

{
  float fVar1;
  
  DAT_02a59bac = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a59bb0 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a59bb4 = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a59bcc = 0xffff;
  DAT_02a59bd8 = 0xfd67dd1c92f2acc5;
  DAT_02a59be8 = 0x27;
  DAT_02a59bf8 = 0x8e7c2d7d3d5200b3;
  DAT_02a59c00 = "bin/field/model/buildmodel/skybox_01/";
  DAT_02a59c08 = 0x25;
  DAT_02a59c18 = 0xa59fad1cba51fa67;
  DAT_02a59c20 = "skybox_01";
  DAT_02a59c28 = 9;
  DAT_02a59c38 = 0x72608583c0b2a1fb;
  DAT_02a59c48 = 0x31;
  DAT_02a59c58 = 0x92e4e49d56f6b4bd;
  DAT_02a59c60 = "bin/field/model/unit_obj/unit_obj_door_pc_01/";
  DAT_02a59c68 = 0x2d;
  DAT_02a59bc8 = 0xffffffff;
  DAT_02a59be0 = "bin/archive/field/resident/skybox.gfpak";
  DAT_02a59c40 = "bin/archive/field/model/unit_obj_door_pc_01.gfpak";
  DAT_02a59ca0 = "bin/archive/field/model/unit_obj_itemred01.gfpak";
  DAT_02a59bd4 = 0;
  DAT_02a59bd0 = 0;
  DAT_02a59c78 = 0x16efccb44ccb1e24;
  DAT_02a59c80 = "unit_obj_door_pc_01";
  DAT_02a59c88 = 0x13;
  DAT_02a59c98 = 0xebee1432c2d9065c;
  DAT_02a59bf0 = 0;
  DAT_02a59c10 = 0;
  DAT_02a59c30 = 0;
  DAT_02a59c50 = 0;
  DAT_02a59c70 = 0;
  DAT_02a59c90 = 0;
  DAT_02a59ca8 = 0x30;
  DAT_02a59cb0 = 0;
  DAT_02a59cb8 = 0xed1d0d151995eac4;
  DAT_02a59cc0 = "bin/field/model/unit_obj/unit_obj_itemred01/";
  DAT_02a59cc8 = 0x2c;
  DAT_02a59cd0 = 0;
  DAT_02a59cd8 = 0x664123dd0391a54f;
  DAT_02a59ce0 = "unit_obj_itemred01";
  DAT_02a59ce8 = 0x12;
  DAT_02a59cf0 = 0;
  DAT_02a59cf8 = 0xf035e7b1b108d70d;
  DAT_02a59d00 = "bin/archive/field/model/unit_obj_itemyel01.gfpak";
  DAT_02a59d08 = 0x30;
  DAT_02a59d10 = 0;
  DAT_02a59d18 = 0x569cd2804fa1ce0b;
  DAT_02a59d20 = "bin/field/model/unit_obj/unit_obj_itemyel01/";
  DAT_02a59d28 = 0x2c;
  DAT_02a59d30 = 0;
  DAT_02a59d38 = 0xd62ee1bfd5ca2bb2;
  DAT_02a59d40 = "unit_obj_itemyel01";
  DAT_02a59d48 = 0x12;
  DAT_02a59d50 = 0;
  FUN_001001c0(&LAB_00df7510,0,&PTR_LOOP_025db000);
  fVar1 = *(float *)PTR_FloatPi_02715160 / *(float *)PTR_FloatDegree180_027194f0;
  DAT_02a59bb8 = fVar1 * DAT_01d4c438;
  DAT_02a59bbc = fVar1 * 29.0;
  DAT_02a59bc0 = fVar1 * 25.0;
  return;
}


