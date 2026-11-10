/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003599d0; name: FUN_003599d0
 */


bool FUN_003599d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  char *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char local_64 [4];
  
  local_64[0] = '\0';
  local_f8 = param_1[2];
  local_108 = *param_1;
  local_100 = param_1[1];
  local_d0 = 1;
  uStack_c0 = 0;
  local_b8 = 0;
  local_118 = param_2;
  uStack_110 = param_3;
  uStack_f0 = param_4;
  local_e8 = param_5;
  uStack_e0 = param_6;
  local_d8 = param_7;
  local_c8 = local_64;
  local_b0 = local_108;
  local_a8 = local_100;
  local_a0 = local_f8;
  local_98 = local_108;
  local_90 = local_100;
  local_88 = local_f8;
  local_80 = local_108;
  local_78 = local_100;
  local_70 = local_f8;
  FUN_00359b70(param_8,&local_118,0);
  uStack_128 = 0;
  local_138 = 1;
  local_120 = 0;
  local_170 = local_98;
  uStack_168 = local_90;
  local_160 = local_88;
  local_180 = param_2;
  uStack_178 = param_3;
  uStack_158 = param_4;
  local_150 = param_5;
  uStack_148 = param_6;
  local_140 = param_7;
  local_130 = local_64;
  FUN_0035e0e0(&local_180,param_8 + 0x2a0,0);
  FUN_0035e2d0(&local_180,param_8 + 0x2c0,1);
  FUN_0035e4c0(&local_180,param_8 + 0x2e0,2);
  FUN_0035e6b0(&local_180,param_8 + 0x318,4);
  FUN_0035e8a0(&local_180,param_8 + 0x338,5);
  FUN_0035ea90(&local_180,param_8 + 0x358,6);
  FUN_0035ec50(&local_180,param_8 + 0x378,7);
  FUN_0035f160(&local_180,param_8 + 0x398,8);
  FUN_0035ee60(&local_180,param_8 + 0x3c8,9);
  return local_64[0] == '\0';
}


