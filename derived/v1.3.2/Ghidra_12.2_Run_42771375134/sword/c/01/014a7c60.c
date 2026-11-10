/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a7c60; name: FUN_014a7c60
 */


void FUN_014a7c60(long param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  char *__s;
  long *plVar6;
  undefined1 *local_210;
  code *local_208;
  code *local_200;
  undefined1 *local_1f8;
  long alStack_1f0 [12];
  undefined1 auStack_190 [8];
  long local_188;
  long local_180 [2];
  undefined1 *local_170;
  long local_168;
  long local_160;
  char local_150 [256];
  
  __s = *(char **)(param_2 + 8);
  pcVar2 = strrchr(__s,0x2e);
  if (pcVar2 == (char *)0x0) {
    return;
  }
  local_150[0xf0] = '\0';
  local_150[0xf1] = '\0';
  local_150[0xf2] = '\0';
  local_150[0xf3] = '\0';
  local_150[0xf4] = '\0';
  local_150[0xf5] = '\0';
  local_150[0xf6] = '\0';
  local_150[0xf7] = '\0';
  local_150[0xf8] = '\0';
  local_150[0xf9] = '\0';
  local_150[0xfa] = '\0';
  local_150[0xfb] = '\0';
  local_150[0xfc] = '\0';
  local_150[0xfd] = '\0';
  local_150[0xfe] = '\0';
  local_150[0xff] = '\0';
  local_150[0xe0] = '\0';
  local_150[0xe1] = '\0';
  local_150[0xe2] = '\0';
  local_150[0xe3] = '\0';
  local_150[0xe4] = '\0';
  local_150[0xe5] = '\0';
  local_150[0xe6] = '\0';
  local_150[0xe7] = '\0';
  local_150[0xe8] = '\0';
  local_150[0xe9] = '\0';
  local_150[0xea] = '\0';
  local_150[0xeb] = '\0';
  local_150[0xec] = '\0';
  local_150[0xed] = '\0';
  local_150[0xee] = '\0';
  local_150[0xef] = '\0';
  local_150[0xd0] = '\0';
  local_150[0xd1] = '\0';
  local_150[0xd2] = '\0';
  local_150[0xd3] = '\0';
  local_150[0xd4] = '\0';
  local_150[0xd5] = '\0';
  local_150[0xd6] = '\0';
  local_150[0xd7] = '\0';
  local_150[0xd8] = '\0';
  local_150[0xd9] = '\0';
  local_150[0xda] = '\0';
  local_150[0xdb] = '\0';
  local_150[0xdc] = '\0';
  local_150[0xdd] = '\0';
  local_150[0xde] = '\0';
  local_150[0xdf] = '\0';
  local_150[0xc0] = '\0';
  local_150[0xc1] = '\0';
  local_150[0xc2] = '\0';
  local_150[0xc3] = '\0';
  local_150[0xc4] = '\0';
  local_150[0xc5] = '\0';
  local_150[0xc6] = '\0';
  local_150[199] = '\0';
  local_150[200] = '\0';
  local_150[0xc9] = '\0';
  local_150[0xca] = '\0';
  local_150[0xcb] = '\0';
  local_150[0xcc] = '\0';
  local_150[0xcd] = '\0';
  local_150[0xce] = '\0';
  local_150[0xcf] = '\0';
  local_150[0xb0] = '\0';
  local_150[0xb1] = '\0';
  local_150[0xb2] = '\0';
  local_150[0xb3] = '\0';
  local_150[0xb4] = '\0';
  local_150[0xb5] = '\0';
  local_150[0xb6] = '\0';
  local_150[0xb7] = '\0';
  local_150[0xb8] = '\0';
  local_150[0xb9] = '\0';
  local_150[0xba] = '\0';
  local_150[0xbb] = '\0';
  local_150[0xbc] = '\0';
  local_150[0xbd] = '\0';
  local_150[0xbe] = '\0';
  local_150[0xbf] = '\0';
  local_150[0xa0] = '\0';
  local_150[0xa1] = '\0';
  local_150[0xa2] = '\0';
  local_150[0xa3] = '\0';
  local_150[0xa4] = '\0';
  local_150[0xa5] = '\0';
  local_150[0xa6] = '\0';
  local_150[0xa7] = '\0';
  local_150[0xa8] = '\0';
  local_150[0xa9] = '\0';
  local_150[0xaa] = '\0';
  local_150[0xab] = '\0';
  local_150[0xac] = '\0';
  local_150[0xad] = '\0';
  local_150[0xae] = '\0';
  local_150[0xaf] = '\0';
  local_150[0x90] = '\0';
  local_150[0x91] = '\0';
  local_150[0x92] = '\0';
  local_150[0x93] = '\0';
  local_150[0x94] = '\0';
  local_150[0x95] = '\0';
  local_150[0x96] = '\0';
  local_150[0x97] = '\0';
  local_150[0x98] = '\0';
  local_150[0x99] = '\0';
  local_150[0x9a] = '\0';
  local_150[0x9b] = '\0';
  local_150[0x9c] = '\0';
  local_150[0x9d] = '\0';
  local_150[0x9e] = '\0';
  local_150[0x9f] = '\0';
  local_150[0x80] = '\0';
  local_150[0x81] = '\0';
  local_150[0x82] = '\0';
  local_150[0x83] = '\0';
  local_150[0x84] = '\0';
  local_150[0x85] = '\0';
  local_150[0x86] = '\0';
  local_150[0x87] = '\0';
  local_150[0x88] = '\0';
  local_150[0x89] = '\0';
  local_150[0x8a] = '\0';
  local_150[0x8b] = '\0';
  local_150[0x8c] = '\0';
  local_150[0x8d] = '\0';
  local_150[0x8e] = '\0';
  local_150[0x8f] = '\0';
  local_150[0x70] = '\0';
  local_150[0x71] = '\0';
  local_150[0x72] = '\0';
  local_150[0x73] = '\0';
  local_150[0x74] = '\0';
  local_150[0x75] = '\0';
  local_150[0x76] = '\0';
  local_150[0x77] = '\0';
  local_150[0x78] = '\0';
  local_150[0x79] = '\0';
  local_150[0x7a] = '\0';
  local_150[0x7b] = '\0';
  local_150[0x7c] = '\0';
  local_150[0x7d] = '\0';
  local_150[0x7e] = '\0';
  local_150[0x7f] = '\0';
  local_150[0x60] = '\0';
  local_150[0x61] = '\0';
  local_150[0x62] = '\0';
  local_150[99] = '\0';
  local_150[100] = '\0';
  local_150[0x65] = '\0';
  local_150[0x66] = '\0';
  local_150[0x67] = '\0';
  local_150[0x68] = '\0';
  local_150[0x69] = '\0';
  local_150[0x6a] = '\0';
  local_150[0x6b] = '\0';
  local_150[0x6c] = '\0';
  local_150[0x6d] = '\0';
  local_150[0x6e] = '\0';
  local_150[0x6f] = '\0';
  local_150[0x50] = '\0';
  local_150[0x51] = '\0';
  local_150[0x52] = '\0';
  local_150[0x53] = '\0';
  local_150[0x54] = '\0';
  local_150[0x55] = '\0';
  local_150[0x56] = '\0';
  local_150[0x57] = '\0';
  local_150[0x58] = '\0';
  local_150[0x59] = '\0';
  local_150[0x5a] = '\0';
  local_150[0x5b] = '\0';
  local_150[0x5c] = '\0';
  local_150[0x5d] = '\0';
  local_150[0x5e] = '\0';
  local_150[0x5f] = '\0';
  local_150[0x40] = '\0';
  local_150[0x41] = '\0';
  local_150[0x42] = '\0';
  local_150[0x43] = '\0';
  local_150[0x44] = '\0';
  local_150[0x45] = '\0';
  local_150[0x46] = '\0';
  local_150[0x47] = '\0';
  local_150[0x48] = '\0';
  local_150[0x49] = '\0';
  local_150[0x4a] = '\0';
  local_150[0x4b] = '\0';
  local_150[0x4c] = '\0';
  local_150[0x4d] = '\0';
  local_150[0x4e] = '\0';
  local_150[0x4f] = '\0';
  local_150[0x30] = '\0';
  local_150[0x31] = '\0';
  local_150[0x32] = '\0';
  local_150[0x33] = '\0';
  local_150[0x34] = '\0';
  local_150[0x35] = '\0';
  local_150[0x36] = '\0';
  local_150[0x37] = '\0';
  local_150[0x38] = '\0';
  local_150[0x39] = '\0';
  local_150[0x3a] = '\0';
  local_150[0x3b] = '\0';
  local_150[0x3c] = '\0';
  local_150[0x3d] = '\0';
  local_150[0x3e] = '\0';
  local_150[0x3f] = '\0';
  local_150[0x20] = '\0';
  local_150[0x21] = '\0';
  local_150[0x22] = '\0';
  local_150[0x23] = '\0';
  local_150[0x24] = '\0';
  local_150[0x25] = '\0';
  local_150[0x26] = '\0';
  local_150[0x27] = '\0';
  local_150[0x28] = '\0';
  local_150[0x29] = '\0';
  local_150[0x2a] = '\0';
  local_150[0x2b] = '\0';
  local_150[0x2c] = '\0';
  local_150[0x2d] = '\0';
  local_150[0x2e] = '\0';
  local_150[0x2f] = '\0';
  local_150[0x10] = '\0';
  local_150[0x11] = '\0';
  local_150[0x12] = '\0';
  local_150[0x13] = '\0';
  local_150[0x14] = '\0';
  local_150[0x15] = '\0';
  local_150[0x16] = '\0';
  local_150[0x17] = '\0';
  local_150[0x18] = '\0';
  local_150[0x19] = '\0';
  local_150[0x1a] = '\0';
  local_150[0x1b] = '\0';
  local_150[0x1c] = '\0';
  local_150[0x1d] = '\0';
  local_150[0x1e] = '\0';
  local_150[0x1f] = '\0';
  local_150[0] = '\0';
  local_150[1] = '\0';
  local_150[2] = '\0';
  local_150[3] = '\0';
  local_150[4] = '\0';
  local_150[5] = '\0';
  local_150[6] = '\0';
  local_150[7] = '\0';
  local_150[8] = '\0';
  local_150[9] = '\0';
  local_150[10] = '\0';
  local_150[0xb] = '\0';
  local_150[0xc] = '\0';
  local_150[0xd] = '\0';
  local_150[0xe] = '\0';
  local_150[0xf] = '\0';
  strncpy(local_150,__s,(long)pcVar2 - (long)__s);
  FUN_014a7f70(&local_210,local_150,".gfbgpokecfg");
  FUN_00a83620(local_180,&local_210);
  if (local_210 != (undefined1 *)0x0) {
    (**(code **)(*(long *)(local_210 + 0x48) + 0x18))();
    local_210 = (undefined1 *)0x0;
  }
  lVar4 = *(long *)(param_1 + 0x288);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x170) == '\0')) goto LAB_014a7ef4;
  FUN_006e2db0(auStack_190,lVar4,*(undefined8 *)(lVar4 + 400));
  lVar3 = *(long *)(param_1 + 0x168);
  lVar4 = param_1 + 0x160;
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x170) != '\0')) {
    FUN_006e2100(lVar3,lVar4);
    lVar3 = *(long *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
  }
  local_210 = &LAB_014a9420;
  local_208 = FUN_014a9430;
  local_200 = FUN_014a9b50;
  local_1f8 = &LAB_014a9b60;
  pcVar5 = *(code **)(param_1 + 0x178);
  alStack_1f0[0] = param_1;
  if (pcVar5 == (code *)0x0) {
LAB_014a7dcc:
    (*local_200)(alStack_1f0,param_1 + 400);
    *(undefined1 **)(param_1 + 0x188) = local_1f8;
    *(code **)(param_1 + 0x178) = local_208;
    *(code **)(param_1 + 0x180) = local_200;
    *(undefined8 *)(param_1 + 0x170) = local_210;
  }
  else {
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    (*pcVar5)(param_1 + 400);
    if (local_200 != (code *)0x0) goto LAB_014a7dcc;
  }
  lVar3 = *(long *)(param_1 + 0x168);
  if (lVar3 != 0) {
    plVar6 = (long *)(lVar3 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    FUN_006e1e70(lVar3,lVar4,1);
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  pcVar5 = local_208;
  if (local_208 != (code *)0x0) {
    local_200 = (code *)0x0;
    local_1f8 = (undefined1 *)0x0;
    local_210 = (undefined1 *)0x0;
    local_208 = (code *)0x0;
    (*pcVar5)(alStack_1f0);
  }
  FUN_006dccd0(&local_210,*(undefined8 *)PTR_DAT_02710788,1,local_180,0,param_3,auStack_190);
  if (*(long *)(param_1 + 0x168) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x168) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  puVar1 = local_210;
  *(undefined1 **)(param_1 + 0x168) = local_210;
  if (local_210 != (undefined1 *)0x0) {
    plVar6 = (long *)(local_210 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((*(long *)(param_1 + 0x170) != 0) || (*(long *)(param_1 + 0x1f0) != 0)) {
      FUN_006e1e70(puVar1,lVar4,1);
    }
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  if (local_188 != 0) {
    (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
    local_188 = 0;
  }
LAB_014a7ef4:
  if ((local_168 != 0) && (local_180[0] != 0)) {
    (**(code **)(*(long *)(local_180[0] + 0x48) + 0x18))();
  }
  local_180[0] = 0;
  local_180[1] = 0xcbf29ce484222645;
  local_170 = &DAT_01d38550;
  local_168 = 0;
  if (local_160 != 0) {
    (**(code **)(*(long *)(local_160 + 0x48) + 0x18))();
  }
  return;
}


