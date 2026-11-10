/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0034c490; name: FUN_0034c490
 */


bool FUN_0034c490(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined1 local_168;
  char *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  char local_e4 [4];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_e4[0] = '\0';
  local_138 = param_1[2];
  local_148 = *param_1;
  local_140 = param_1[1];
  local_80 = 1;
  uStack_70 = 0;
  local_68 = 0;
  local_130 = local_148;
  local_128 = local_140;
  local_120 = local_138;
  local_118 = local_148;
  local_110 = local_140;
  local_108 = local_138;
  local_100 = local_148;
  local_f8 = local_140;
  local_f0 = local_138;
  local_e0 = local_148;
  local_d8 = local_140;
  local_d0 = local_138;
  local_c8 = param_2;
  uStack_c0 = param_3;
  local_b8 = local_148;
  local_b0 = local_140;
  local_a8 = local_138;
  uStack_a0 = param_4;
  local_98 = param_5;
  uStack_90 = param_6;
  local_88 = param_7;
  local_78 = local_e4;
  FUN_0034c770(&local_c8,param_8 + 0x18,1);
  FUN_0034c9a0(&local_c8,param_8 + 0x38,2);
  FUN_0034cb60(&local_c8,param_8 + 0x58,3);
  FUN_0034cd90(&local_c8,param_8 + 0x78,4);
  FUN_0034cfc0(&local_c8,param_8 + 0x98,5);
  local_b8 = local_148;
  local_b0 = local_140;
  uStack_70 = 0;
  local_a8 = local_138;
  local_80 = 1;
  local_68 = 0;
  local_c8 = param_2;
  uStack_c0 = param_3;
  uStack_a0 = param_4;
  local_98 = param_5;
  uStack_90 = param_6;
  local_88 = param_7;
  local_78 = local_e4;
  FUN_0034c680(param_8,&local_c8,8);
  uStack_158 = 0;
  local_168 = 1;
  local_150 = 0;
  local_1a0 = local_118;
  uStack_198 = local_110;
  local_190 = local_108;
  local_1b0 = param_2;
  uStack_1a8 = param_3;
  uStack_188 = param_4;
  local_180 = param_5;
  uStack_178 = param_6;
  local_170 = param_7;
  local_160 = local_e4;
  FUN_0034ecf0(&local_1b0,param_8 + 0x2b8,0);
  FUN_0034eea0(&local_1b0,param_8 + 0x2d8,1);
  FUN_0034f050(&local_1b0,param_8 + 0x2f8,2);
  return local_e4[0] == '\0';
}


