/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3a990; name: _INIT_1031
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1031(void)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  float fVar5;
  float fVar6;
  
  DAT_02a5b034 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5b038 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5b03c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5b04c = 0xffff;
  DAT_02a5b0b0 = 0xfd67dd1c92f2acc5;
  DAT_02a5b0b8 = "bin/archive/field/resident/skybox.gfpak";
  DAT_02a5b0c0 = 0x27;
  DAT_02a5b0d0 = 0x8e7c2d7d3d5200b3;
  DAT_02a5b0d8 = "bin/field/model/buildmodel/skybox_01/";
  DAT_02a5b0e0 = 0x25;
  DAT_02a5b0f0 = 0xa59fad1cba51fa67;
  DAT_02a5b100 = 9;
  DAT_02a5b110 = 0x72608583c0b2a1fb;
  DAT_02a5b118 = "bin/archive/field/model/unit_obj_door_pc_01.gfpak";
  DAT_02a5b048 = 0xffffffff;
  DAT_02a5b0f8 = "skybox_01";
  DAT_02a5b054 = 0;
  DAT_02a5b050 = 0;
  DAT_02a5b0c8 = 0;
  DAT_02a5b120 = 0x31;
  DAT_02a5b130 = 0x92e4e49d56f6b4bd;
  DAT_02a5b0e8 = 0;
  DAT_02a5b108 = 0;
  DAT_02a5b128 = 0;
  DAT_02a5b138 = "bin/field/model/unit_obj/unit_obj_door_pc_01/";
  DAT_02a5b140 = 0x2d;
  DAT_02a5b148 = 0;
  DAT_02a5b150 = 0x16efccb44ccb1e24;
  DAT_02a5b158 = "unit_obj_door_pc_01";
  DAT_02a5b160 = 0x13;
  DAT_02a5b168 = 0;
  DAT_02a5b170 = 0xebee1432c2d9065c;
  DAT_02a5b178 = "bin/archive/field/model/unit_obj_itemred01.gfpak";
  DAT_02a5b180 = 0x30;
  DAT_02a5b188 = 0;
  DAT_02a5b190 = 0xed1d0d151995eac4;
  DAT_02a5b198 = "bin/field/model/unit_obj/unit_obj_itemred01/";
  DAT_02a5b1a0 = 0x2c;
  DAT_02a5b1a8 = 0;
  DAT_02a5b1b0 = 0x664123dd0391a54f;
  DAT_02a5b1b8 = "unit_obj_itemred01";
  DAT_02a5b1c0 = 0x12;
  DAT_02a5b1c8 = 0;
  DAT_02a5b1d0 = 0xf035e7b1b108d70d;
  DAT_02a5b1d8 = "bin/archive/field/model/unit_obj_itemyel01.gfpak";
  DAT_02a5b1e0 = 0x30;
  DAT_02a5b1e8 = 0;
  DAT_02a5b1f0 = 0x569cd2804fa1ce0b;
  DAT_02a5b1f8 = "bin/field/model/unit_obj/unit_obj_itemyel01/";
  DAT_02a5b200 = 0x2c;
  DAT_02a5b208 = 0;
  DAT_02a5b210 = 0xd62ee1bfd5ca2bb2;
  DAT_02a5b218 = "unit_obj_itemyel01";
  DAT_02a5b220 = 0x12;
  DAT_02a5b228 = 0;
  FUN_001001c0(&LAB_00e3a820,0,&PTR_LOOP_025db000);
  puVar4 = PTR_DAT_0271f768;
  puVar3 = PTR_FloatDegree180_027194f0;
  fVar2 = DAT_01d4c58c;
  DAT_02a5b068 = _UNK_01d4ade8;
  DAT_02a5b060 = _DAT_01d4ade0;
  uVar1 = _DAT_01d4add0;
  fVar6 = *(float *)PTR_FloatPi_02715160;
  *(undefined8 *)(PTR_DAT_0271f768 + 8) = _UNK_01d4add8;
  *(undefined8 *)puVar4 = uVar1;
  puVar4 = PTR_DAT_0271f770;
  fVar6 = fVar6 / *(float *)puVar3;
  *(float *)PTR_DAT_0271f778 = fVar6 * 3.0;
  puVar3 = PTR_DAT_0271f780;
  *(float *)puVar4 = fVar6 * -5.0;
  fVar5 = fVar6 * -10.0;
  *(float *)PTR_DAT_0271f788 = fVar6 * fVar2;
  *(float *)puVar3 = fVar6 * -20.0;
  _DAT_02a5b090 = CONCAT44(fVar6 * DAT_01d4c5c0,fVar5);
  DAT_02a5b040 = 0x3f3730943ae4c389;
  _DAT_02a5b0a0 = CONCAT44(fVar6 * DAT_01d4c284,fVar5);
  _DAT_02a5b070 = CONCAT44(fVar6 * 0.0,fVar5);
  uRam0000000002a5b098 = 0;
  uRam0000000002a5b078 = 0;
  uRam0000000002a5b088 = 0;
  _DAT_02a5b080 = _DAT_02a5b0a0;
  *(float *)PTR_DAT_0271f790 = fVar6 * DAT_01d4c0cc;
  *(float *)PTR_DAT_0271f798 = fVar6;
  uRam0000000002a5b0a8 = 0;
  return;
}


