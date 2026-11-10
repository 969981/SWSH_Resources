/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a3260; name: FUN_014a3260
 */


void FUN_014a3260(long param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  char *pcVar1;
  long lVar2;
  long *plVar3;
  char *__s;
  long local_1c0;
  long local_1b8;
  long local_1b0 [2];
  undefined1 *local_1a0;
  long local_198;
  long local_190;
  char *local_180;
  long local_178 [2];
  undefined1 *local_168;
  long local_160;
  long local_158;
  char local_148 [256];
  char *local_48;
  
  __s = *(char **)(param_2 + 8);
  pcVar1 = strrchr(__s,0x2e);
  if (pcVar1 != (char *)0x0) {
    local_148[0xf0] = '\0';
    local_148[0xf1] = '\0';
    local_148[0xf2] = '\0';
    local_148[0xf3] = '\0';
    local_148[0xf4] = '\0';
    local_148[0xf5] = '\0';
    local_148[0xf6] = '\0';
    local_148[0xf7] = '\0';
    local_148[0xf8] = '\0';
    local_148[0xf9] = '\0';
    local_148[0xfa] = '\0';
    local_148[0xfb] = '\0';
    local_148[0xfc] = '\0';
    local_148[0xfd] = '\0';
    local_148[0xfe] = '\0';
    local_148[0xff] = '\0';
    local_148[0xe0] = '\0';
    local_148[0xe1] = '\0';
    local_148[0xe2] = '\0';
    local_148[0xe3] = '\0';
    local_148[0xe4] = '\0';
    local_148[0xe5] = '\0';
    local_148[0xe6] = '\0';
    local_148[0xe7] = '\0';
    local_148[0xe8] = '\0';
    local_148[0xe9] = '\0';
    local_148[0xea] = '\0';
    local_148[0xeb] = '\0';
    local_148[0xec] = '\0';
    local_148[0xed] = '\0';
    local_148[0xee] = '\0';
    local_148[0xef] = '\0';
    local_148[0xd0] = '\0';
    local_148[0xd1] = '\0';
    local_148[0xd2] = '\0';
    local_148[0xd3] = '\0';
    local_148[0xd4] = '\0';
    local_148[0xd5] = '\0';
    local_148[0xd6] = '\0';
    local_148[0xd7] = '\0';
    local_148[0xd8] = '\0';
    local_148[0xd9] = '\0';
    local_148[0xda] = '\0';
    local_148[0xdb] = '\0';
    local_148[0xdc] = '\0';
    local_148[0xdd] = '\0';
    local_148[0xde] = '\0';
    local_148[0xdf] = '\0';
    local_148[0xc0] = '\0';
    local_148[0xc1] = '\0';
    local_148[0xc2] = '\0';
    local_148[0xc3] = '\0';
    local_148[0xc4] = '\0';
    local_148[0xc5] = '\0';
    local_148[0xc6] = '\0';
    local_148[199] = '\0';
    local_148[200] = '\0';
    local_148[0xc9] = '\0';
    local_148[0xca] = '\0';
    local_148[0xcb] = '\0';
    local_148[0xcc] = '\0';
    local_148[0xcd] = '\0';
    local_148[0xce] = '\0';
    local_148[0xcf] = '\0';
    local_148[0xb0] = '\0';
    local_148[0xb1] = '\0';
    local_148[0xb2] = '\0';
    local_148[0xb3] = '\0';
    local_148[0xb4] = '\0';
    local_148[0xb5] = '\0';
    local_148[0xb6] = '\0';
    local_148[0xb7] = '\0';
    local_148[0xb8] = '\0';
    local_148[0xb9] = '\0';
    local_148[0xba] = '\0';
    local_148[0xbb] = '\0';
    local_148[0xbc] = '\0';
    local_148[0xbd] = '\0';
    local_148[0xbe] = '\0';
    local_148[0xbf] = '\0';
    local_148[0xa0] = '\0';
    local_148[0xa1] = '\0';
    local_148[0xa2] = '\0';
    local_148[0xa3] = '\0';
    local_148[0xa4] = '\0';
    local_148[0xa5] = '\0';
    local_148[0xa6] = '\0';
    local_148[0xa7] = '\0';
    local_148[0xa8] = '\0';
    local_148[0xa9] = '\0';
    local_148[0xaa] = '\0';
    local_148[0xab] = '\0';
    local_148[0xac] = '\0';
    local_148[0xad] = '\0';
    local_148[0xae] = '\0';
    local_148[0xaf] = '\0';
    local_148[0x90] = '\0';
    local_148[0x91] = '\0';
    local_148[0x92] = '\0';
    local_148[0x93] = '\0';
    local_148[0x94] = '\0';
    local_148[0x95] = '\0';
    local_148[0x96] = '\0';
    local_148[0x97] = '\0';
    local_148[0x98] = '\0';
    local_148[0x99] = '\0';
    local_148[0x9a] = '\0';
    local_148[0x9b] = '\0';
    local_148[0x9c] = '\0';
    local_148[0x9d] = '\0';
    local_148[0x9e] = '\0';
    local_148[0x9f] = '\0';
    local_148[0x80] = '\0';
    local_148[0x81] = '\0';
    local_148[0x82] = '\0';
    local_148[0x83] = '\0';
    local_148[0x84] = '\0';
    local_148[0x85] = '\0';
    local_148[0x86] = '\0';
    local_148[0x87] = '\0';
    local_148[0x88] = '\0';
    local_148[0x89] = '\0';
    local_148[0x8a] = '\0';
    local_148[0x8b] = '\0';
    local_148[0x8c] = '\0';
    local_148[0x8d] = '\0';
    local_148[0x8e] = '\0';
    local_148[0x8f] = '\0';
    local_148[0x70] = '\0';
    local_148[0x71] = '\0';
    local_148[0x72] = '\0';
    local_148[0x73] = '\0';
    local_148[0x74] = '\0';
    local_148[0x75] = '\0';
    local_148[0x76] = '\0';
    local_148[0x77] = '\0';
    local_148[0x78] = '\0';
    local_148[0x79] = '\0';
    local_148[0x7a] = '\0';
    local_148[0x7b] = '\0';
    local_148[0x7c] = '\0';
    local_148[0x7d] = '\0';
    local_148[0x7e] = '\0';
    local_148[0x7f] = '\0';
    local_148[0x60] = '\0';
    local_148[0x61] = '\0';
    local_148[0x62] = '\0';
    local_148[99] = '\0';
    local_148[100] = '\0';
    local_148[0x65] = '\0';
    local_148[0x66] = '\0';
    local_148[0x67] = '\0';
    local_148[0x68] = '\0';
    local_148[0x69] = '\0';
    local_148[0x6a] = '\0';
    local_148[0x6b] = '\0';
    local_148[0x6c] = '\0';
    local_148[0x6d] = '\0';
    local_148[0x6e] = '\0';
    local_148[0x6f] = '\0';
    local_148[0x50] = '\0';
    local_148[0x51] = '\0';
    local_148[0x52] = '\0';
    local_148[0x53] = '\0';
    local_148[0x54] = '\0';
    local_148[0x55] = '\0';
    local_148[0x56] = '\0';
    local_148[0x57] = '\0';
    local_148[0x58] = '\0';
    local_148[0x59] = '\0';
    local_148[0x5a] = '\0';
    local_148[0x5b] = '\0';
    local_148[0x5c] = '\0';
    local_148[0x5d] = '\0';
    local_148[0x5e] = '\0';
    local_148[0x5f] = '\0';
    local_148[0x40] = '\0';
    local_148[0x41] = '\0';
    local_148[0x42] = '\0';
    local_148[0x43] = '\0';
    local_148[0x44] = '\0';
    local_148[0x45] = '\0';
    local_148[0x46] = '\0';
    local_148[0x47] = '\0';
    local_148[0x48] = '\0';
    local_148[0x49] = '\0';
    local_148[0x4a] = '\0';
    local_148[0x4b] = '\0';
    local_148[0x4c] = '\0';
    local_148[0x4d] = '\0';
    local_148[0x4e] = '\0';
    local_148[0x4f] = '\0';
    local_148[0x30] = '\0';
    local_148[0x31] = '\0';
    local_148[0x32] = '\0';
    local_148[0x33] = '\0';
    local_148[0x34] = '\0';
    local_148[0x35] = '\0';
    local_148[0x36] = '\0';
    local_148[0x37] = '\0';
    local_148[0x38] = '\0';
    local_148[0x39] = '\0';
    local_148[0x3a] = '\0';
    local_148[0x3b] = '\0';
    local_148[0x3c] = '\0';
    local_148[0x3d] = '\0';
    local_148[0x3e] = '\0';
    local_148[0x3f] = '\0';
    local_148[0x20] = '\0';
    local_148[0x21] = '\0';
    local_148[0x22] = '\0';
    local_148[0x23] = '\0';
    local_148[0x24] = '\0';
    local_148[0x25] = '\0';
    local_148[0x26] = '\0';
    local_148[0x27] = '\0';
    local_148[0x28] = '\0';
    local_148[0x29] = '\0';
    local_148[0x2a] = '\0';
    local_148[0x2b] = '\0';
    local_148[0x2c] = '\0';
    local_148[0x2d] = '\0';
    local_148[0x2e] = '\0';
    local_148[0x2f] = '\0';
    local_148[0x10] = '\0';
    local_148[0x11] = '\0';
    local_148[0x12] = '\0';
    local_148[0x13] = '\0';
    local_148[0x14] = '\0';
    local_148[0x15] = '\0';
    local_148[0x16] = '\0';
    local_148[0x17] = '\0';
    local_148[0x18] = '\0';
    local_148[0x19] = '\0';
    local_148[0x1a] = '\0';
    local_148[0x1b] = '\0';
    local_148[0x1c] = '\0';
    local_148[0x1d] = '\0';
    local_148[0x1e] = '\0';
    local_148[0x1f] = '\0';
    local_148[0] = '\0';
    local_148[1] = '\0';
    local_148[2] = '\0';
    local_148[3] = '\0';
    local_148[4] = '\0';
    local_148[5] = '\0';
    local_148[6] = '\0';
    local_148[7] = '\0';
    local_148[8] = '\0';
    local_148[9] = '\0';
    local_148[10] = '\0';
    local_148[0xb] = '\0';
    local_148[0xc] = '\0';
    local_148[0xd] = '\0';
    local_148[0xe] = '\0';
    local_148[0xf] = '\0';
    strncpy(local_148,__s,(long)pcVar1 - (long)__s);
    FUN_008801a0(local_178,local_148);
    if (local_160 == 0) {
      plVar3 = local_178 + 2;
    }
    else {
      plVar3 = (long *)PTR_PTR_02710928;
      if (local_178[0] != 0) {
        plVar3 = (long *)(local_178[0] + 0x60);
      }
    }
    pcVar1 = strrchr((char *)*plVar3,0x2f);
    local_180 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      local_180 = pcVar1 + 1;
    }
    if (param_3[3] == 0) {
      plVar3 = param_3 + 2;
    }
    else {
      plVar3 = (long *)PTR_PTR_02710928;
      if (*param_3 != 0) {
        plVar3 = (long *)(*param_3 + 0x60);
      }
    }
    pcVar1 = strrchr((char *)*plVar3,0x2f);
    local_48 = (char *)0x0;
    if (pcVar1 != (char *)0x0) {
      local_48 = pcVar1 + 1;
    }
    FUN_014a7b90(&local_1c0,"bin/pokemon/",&local_180,"/g_shader/",&local_48);
    FUN_00a83620(local_1b0,&local_1c0);
    if (local_1c0 != 0) {
      (**(code **)(*(long *)(local_1c0 + 0x48) + 0x18))();
      local_1c0 = 0;
    }
    lVar2 = *(long *)(param_1 + 0x288);
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x170) != '\0')) {
      FUN_006e2db0(&local_1c0,lVar2,*(undefined8 *)(lVar2 + 400));
      FUN_0010d7b0(&local_48,*(undefined8 *)PTR_DAT_02710788,1,local_1b0,0,param_5,&local_1c0);
      if (*(long *)(param_4 + 8) != 0) {
        (**(code **)(*(long *)(*(long *)(param_4 + 8) + 0x48) + 0x18))();
        *(undefined8 *)(param_4 + 8) = 0;
      }
      pcVar1 = local_48;
      *(char **)(param_4 + 8) = local_48;
      if (local_48 != (char *)0x0) {
        plVar3 = (long *)(local_48 + 0x48);
        (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((*(long *)(param_4 + 0x10) != 0) || (*(long *)(param_4 + 0x90) != 0)) {
          FUN_006e1e70(pcVar1,param_4,1);
        }
        (**(code **)(*plVar3 + 0x18))(plVar3);
      }
      if (local_1b8 != 0) {
        (**(code **)(*(long *)(local_1b8 + 0x48) + 0x18))();
        local_1b8 = 0;
      }
    }
    if ((local_198 != 0) && (local_1b0[0] != 0)) {
      (**(code **)(*(long *)(local_1b0[0] + 0x48) + 0x18))();
    }
    local_1b0[0] = 0;
    local_1b0[1] = 0xcbf29ce484222645;
    local_1a0 = &DAT_01d38550;
    local_198 = 0;
    if (local_190 != 0) {
      (**(code **)(*(long *)(local_190 + 0x48) + 0x18))();
      local_190 = 0;
    }
    if ((local_160 != 0) && (local_178[0] != 0)) {
      (**(code **)(*(long *)(local_178[0] + 0x48) + 0x18))();
    }
    local_178[0] = 0;
    local_178[1] = 0xcbf29ce484222645;
    local_168 = &DAT_01d38550;
    local_160 = 0;
    if (local_158 != 0) {
      (**(code **)(*(long *)(local_158 + 0x48) + 0x18))();
    }
  }
  return;
}


