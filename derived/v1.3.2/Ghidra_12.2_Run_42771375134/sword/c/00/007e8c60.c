/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007e8c60; name: FUN_007e8c60
 */


void FUN_007e8c60(char *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte *pbVar2;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_90;
  undefined4 local_88;
  byte *local_60;
  uint local_58;
  
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0] = '\0';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  if (*(char *)(param_2 + 0x44) == '\0') {
    uVar1 = 0;
  }
  else {
    pbVar2 = *(byte **)(*(long *)(param_2 + 0x50) + 8);
    local_60 = *(byte **)(pbVar2 + 0x10);
    if ((*pbVar2 & 1) == 0) {
      local_60 = pbVar2 + 1;
    }
    local_88 = 0xffffffff;
    local_b8 = 0xffffffff;
    local_e8 = 0xffffffff;
    local_118 = 0xffffffff;
    local_148 = 0xffffffff;
    local_178 = 0xffffffff;
    local_1a8 = 0xffffffff;
    local_1d8 = 0xffffffff;
    local_208 = 0xffffffff;
    local_90 = 0;
    local_c0 = 0;
    local_f0 = 0;
    local_120 = 0;
    local_150 = 0;
    local_180 = 0;
    local_1b0 = 0;
    local_58 = (uint)(*pbVar2 >> 1);
    if ((*pbVar2 & 1) != 0) {
      local_58 = (uint)*(undefined8 *)(pbVar2 + 8);
    }
    local_1e0 = 0;
    local_210 = 0;
    FUN_00863060(param_1,"extend .$0 {\n",&local_60,&local_90,&local_c0,&local_f0,&local_120,
                 &local_150,&local_180,&local_1b0,&local_1e0,&local_210);
    uVar1 = 1;
  }
  FUN_007e8050(param_2,uVar1,0,param_1,param_3);
  if (*(char *)(param_2 + 0x44) != '\0') {
    std::string::append(param_1);
  }
  return;
}


