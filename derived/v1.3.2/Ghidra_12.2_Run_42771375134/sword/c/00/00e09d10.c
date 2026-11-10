/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e09d10; name: _INIT_1022
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_1022(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  DAT_02a5a124 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_02a5a128 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_02a5a12c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_02a5a13c = 0xffff;
  DAT_02a5a148 = 0xfd67dd1c92f2acc5;
  DAT_02a5a150 = "bin/archive/field/resident/skybox.gfpak";
  DAT_02a5a158 = 0x27;
  DAT_02a5a168 = 0x8e7c2d7d3d5200b3;
  DAT_02a5a178 = 0x25;
  DAT_02a5a188 = 0xa59fad1cba51fa67;
  DAT_02a5a190 = "skybox_01";
  DAT_02a5a198 = 9;
  DAT_02a5a1a8 = 0x72608583c0b2a1fb;
  DAT_02a5a1b0 = "bin/archive/field/model/unit_obj_door_pc_01.gfpak";
  DAT_02a5a1b8 = 0x31;
  DAT_02a5a1c8 = 0x92e4e49d56f6b4bd;
  DAT_02a5a1d8 = 0x2d;
  DAT_02a5a1e8 = 0x16efccb44ccb1e24;
  DAT_02a5a1f0 = "unit_obj_door_pc_01";
  DAT_02a5a138 = 0xffffffff;
  DAT_02a5a170 = "bin/field/model/buildmodel/skybox_01/";
  DAT_02a5a1d0 = "bin/field/model/unit_obj/unit_obj_door_pc_01/";
  DAT_02a5a144 = 0;
  DAT_02a5a140 = 0;
  DAT_02a5a160 = 0;
  DAT_02a5a1f8 = 0x13;
  DAT_02a5a208 = 0xebee1432c2d9065c;
  DAT_02a5a210 = "bin/archive/field/model/unit_obj_itemred01.gfpak";
  DAT_02a5a180 = 0;
  DAT_02a5a1a0 = 0;
  DAT_02a5a1c0 = 0;
  DAT_02a5a1e0 = 0;
  DAT_02a5a200 = 0;
  DAT_02a5a218 = 0x30;
  DAT_02a5a220 = 0;
  DAT_02a5a228 = 0xed1d0d151995eac4;
  DAT_02a5a230 = "bin/field/model/unit_obj/unit_obj_itemred01/";
  DAT_02a5a238 = 0x2c;
  DAT_02a5a240 = 0;
  DAT_02a5a248 = 0x664123dd0391a54f;
  DAT_02a5a250 = "unit_obj_itemred01";
  DAT_02a5a258 = 0x12;
  DAT_02a5a260 = 0;
  DAT_02a5a268 = 0xf035e7b1b108d70d;
  DAT_02a5a270 = "bin/archive/field/model/unit_obj_itemyel01.gfpak";
  DAT_02a5a278 = 0x30;
  DAT_02a5a280 = 0;
  DAT_02a5a288 = 0x569cd2804fa1ce0b;
  DAT_02a5a290 = "bin/field/model/unit_obj/unit_obj_itemyel01/";
  DAT_02a5a298 = 0x2c;
  DAT_02a5a2a0 = 0;
  DAT_02a5a2a8 = 0xd62ee1bfd5ca2bb2;
  DAT_02a5a2b0 = "unit_obj_itemyel01";
  DAT_02a5a2b8 = 0x12;
  DAT_02a5a2c0 = 0;
  FUN_001001c0(&LAB_00e09ba0,0,&PTR_LOOP_025db000);
  puVar5 = PTR_DAT_0271ef68;
  puVar4 = PTR_DAT_0271ef60;
  uVar3 = _DAT_01d4b8f0;
  uVar2 = _UNK_01d4b108;
  uVar1 = _DAT_01d4b100;
  DAT_02a5a130 = 0x3f3730943ae4c389;
  *(undefined8 *)(PTR_DAT_0271ef60 + 8) = _UNK_01d4b8f8;
  *(undefined8 *)puVar4 = uVar3;
  *(undefined8 *)(puVar5 + 8) = uVar2;
  *(undefined8 *)puVar5 = uVar1;
  return;
}


