/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014a29e0; name: FUN_014a29e0
 */


void FUN_014a29e0(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long *plVar5;
  char *__s;
  undefined8 local_1b0;
  long local_1a8 [2];
  undefined1 *local_198;
  long local_190;
  long local_188;
  long local_178;
  char *local_170;
  long local_168 [2];
  undefined1 *local_158;
  long local_150;
  long local_148;
  char local_138 [256];
  long local_38;
  
  __s = *(char **)(param_2 + 8);
  pcVar4 = strrchr(__s,0x2e);
  if (pcVar4 != (char *)0x0) {
    local_138[0xf0] = '\0';
    local_138[0xf1] = '\0';
    local_138[0xf2] = '\0';
    local_138[0xf3] = '\0';
    local_138[0xf4] = '\0';
    local_138[0xf5] = '\0';
    local_138[0xf6] = '\0';
    local_138[0xf7] = '\0';
    local_138[0xf8] = '\0';
    local_138[0xf9] = '\0';
    local_138[0xfa] = '\0';
    local_138[0xfb] = '\0';
    local_138[0xfc] = '\0';
    local_138[0xfd] = '\0';
    local_138[0xfe] = '\0';
    local_138[0xff] = '\0';
    local_138[0xe0] = '\0';
    local_138[0xe1] = '\0';
    local_138[0xe2] = '\0';
    local_138[0xe3] = '\0';
    local_138[0xe4] = '\0';
    local_138[0xe5] = '\0';
    local_138[0xe6] = '\0';
    local_138[0xe7] = '\0';
    local_138[0xe8] = '\0';
    local_138[0xe9] = '\0';
    local_138[0xea] = '\0';
    local_138[0xeb] = '\0';
    local_138[0xec] = '\0';
    local_138[0xed] = '\0';
    local_138[0xee] = '\0';
    local_138[0xef] = '\0';
    local_138[0xd0] = '\0';
    local_138[0xd1] = '\0';
    local_138[0xd2] = '\0';
    local_138[0xd3] = '\0';
    local_138[0xd4] = '\0';
    local_138[0xd5] = '\0';
    local_138[0xd6] = '\0';
    local_138[0xd7] = '\0';
    local_138[0xd8] = '\0';
    local_138[0xd9] = '\0';
    local_138[0xda] = '\0';
    local_138[0xdb] = '\0';
    local_138[0xdc] = '\0';
    local_138[0xdd] = '\0';
    local_138[0xde] = '\0';
    local_138[0xdf] = '\0';
    local_138[0xc0] = '\0';
    local_138[0xc1] = '\0';
    local_138[0xc2] = '\0';
    local_138[0xc3] = '\0';
    local_138[0xc4] = '\0';
    local_138[0xc5] = '\0';
    local_138[0xc6] = '\0';
    local_138[199] = '\0';
    local_138[200] = '\0';
    local_138[0xc9] = '\0';
    local_138[0xca] = '\0';
    local_138[0xcb] = '\0';
    local_138[0xcc] = '\0';
    local_138[0xcd] = '\0';
    local_138[0xce] = '\0';
    local_138[0xcf] = '\0';
    local_138[0xb0] = '\0';
    local_138[0xb1] = '\0';
    local_138[0xb2] = '\0';
    local_138[0xb3] = '\0';
    local_138[0xb4] = '\0';
    local_138[0xb5] = '\0';
    local_138[0xb6] = '\0';
    local_138[0xb7] = '\0';
    local_138[0xb8] = '\0';
    local_138[0xb9] = '\0';
    local_138[0xba] = '\0';
    local_138[0xbb] = '\0';
    local_138[0xbc] = '\0';
    local_138[0xbd] = '\0';
    local_138[0xbe] = '\0';
    local_138[0xbf] = '\0';
    local_138[0xa0] = '\0';
    local_138[0xa1] = '\0';
    local_138[0xa2] = '\0';
    local_138[0xa3] = '\0';
    local_138[0xa4] = '\0';
    local_138[0xa5] = '\0';
    local_138[0xa6] = '\0';
    local_138[0xa7] = '\0';
    local_138[0xa8] = '\0';
    local_138[0xa9] = '\0';
    local_138[0xaa] = '\0';
    local_138[0xab] = '\0';
    local_138[0xac] = '\0';
    local_138[0xad] = '\0';
    local_138[0xae] = '\0';
    local_138[0xaf] = '\0';
    local_138[0x90] = '\0';
    local_138[0x91] = '\0';
    local_138[0x92] = '\0';
    local_138[0x93] = '\0';
    local_138[0x94] = '\0';
    local_138[0x95] = '\0';
    local_138[0x96] = '\0';
    local_138[0x97] = '\0';
    local_138[0x98] = '\0';
    local_138[0x99] = '\0';
    local_138[0x9a] = '\0';
    local_138[0x9b] = '\0';
    local_138[0x9c] = '\0';
    local_138[0x9d] = '\0';
    local_138[0x9e] = '\0';
    local_138[0x9f] = '\0';
    local_138[0x80] = '\0';
    local_138[0x81] = '\0';
    local_138[0x82] = '\0';
    local_138[0x83] = '\0';
    local_138[0x84] = '\0';
    local_138[0x85] = '\0';
    local_138[0x86] = '\0';
    local_138[0x87] = '\0';
    local_138[0x88] = '\0';
    local_138[0x89] = '\0';
    local_138[0x8a] = '\0';
    local_138[0x8b] = '\0';
    local_138[0x8c] = '\0';
    local_138[0x8d] = '\0';
    local_138[0x8e] = '\0';
    local_138[0x8f] = '\0';
    local_138[0x70] = '\0';
    local_138[0x71] = '\0';
    local_138[0x72] = '\0';
    local_138[0x73] = '\0';
    local_138[0x74] = '\0';
    local_138[0x75] = '\0';
    local_138[0x76] = '\0';
    local_138[0x77] = '\0';
    local_138[0x78] = '\0';
    local_138[0x79] = '\0';
    local_138[0x7a] = '\0';
    local_138[0x7b] = '\0';
    local_138[0x7c] = '\0';
    local_138[0x7d] = '\0';
    local_138[0x7e] = '\0';
    local_138[0x7f] = '\0';
    local_138[0x60] = '\0';
    local_138[0x61] = '\0';
    local_138[0x62] = '\0';
    local_138[99] = '\0';
    local_138[100] = '\0';
    local_138[0x65] = '\0';
    local_138[0x66] = '\0';
    local_138[0x67] = '\0';
    local_138[0x68] = '\0';
    local_138[0x69] = '\0';
    local_138[0x6a] = '\0';
    local_138[0x6b] = '\0';
    local_138[0x6c] = '\0';
    local_138[0x6d] = '\0';
    local_138[0x6e] = '\0';
    local_138[0x6f] = '\0';
    local_138[0x50] = '\0';
    local_138[0x51] = '\0';
    local_138[0x52] = '\0';
    local_138[0x53] = '\0';
    local_138[0x54] = '\0';
    local_138[0x55] = '\0';
    local_138[0x56] = '\0';
    local_138[0x57] = '\0';
    local_138[0x58] = '\0';
    local_138[0x59] = '\0';
    local_138[0x5a] = '\0';
    local_138[0x5b] = '\0';
    local_138[0x5c] = '\0';
    local_138[0x5d] = '\0';
    local_138[0x5e] = '\0';
    local_138[0x5f] = '\0';
    local_138[0x40] = '\0';
    local_138[0x41] = '\0';
    local_138[0x42] = '\0';
    local_138[0x43] = '\0';
    local_138[0x44] = '\0';
    local_138[0x45] = '\0';
    local_138[0x46] = '\0';
    local_138[0x47] = '\0';
    local_138[0x48] = '\0';
    local_138[0x49] = '\0';
    local_138[0x4a] = '\0';
    local_138[0x4b] = '\0';
    local_138[0x4c] = '\0';
    local_138[0x4d] = '\0';
    local_138[0x4e] = '\0';
    local_138[0x4f] = '\0';
    local_138[0x30] = '\0';
    local_138[0x31] = '\0';
    local_138[0x32] = '\0';
    local_138[0x33] = '\0';
    local_138[0x34] = '\0';
    local_138[0x35] = '\0';
    local_138[0x36] = '\0';
    local_138[0x37] = '\0';
    local_138[0x38] = '\0';
    local_138[0x39] = '\0';
    local_138[0x3a] = '\0';
    local_138[0x3b] = '\0';
    local_138[0x3c] = '\0';
    local_138[0x3d] = '\0';
    local_138[0x3e] = '\0';
    local_138[0x3f] = '\0';
    local_138[0x20] = '\0';
    local_138[0x21] = '\0';
    local_138[0x22] = '\0';
    local_138[0x23] = '\0';
    local_138[0x24] = '\0';
    local_138[0x25] = '\0';
    local_138[0x26] = '\0';
    local_138[0x27] = '\0';
    local_138[0x28] = '\0';
    local_138[0x29] = '\0';
    local_138[0x2a] = '\0';
    local_138[0x2b] = '\0';
    local_138[0x2c] = '\0';
    local_138[0x2d] = '\0';
    local_138[0x2e] = '\0';
    local_138[0x2f] = '\0';
    local_138[0x10] = '\0';
    local_138[0x11] = '\0';
    local_138[0x12] = '\0';
    local_138[0x13] = '\0';
    local_138[0x14] = '\0';
    local_138[0x15] = '\0';
    local_138[0x16] = '\0';
    local_138[0x17] = '\0';
    local_138[0x18] = '\0';
    local_138[0x19] = '\0';
    local_138[0x1a] = '\0';
    local_138[0x1b] = '\0';
    local_138[0x1c] = '\0';
    local_138[0x1d] = '\0';
    local_138[0x1e] = '\0';
    local_138[0x1f] = '\0';
    local_138[0] = '\0';
    local_138[1] = '\0';
    local_138[2] = '\0';
    local_138[3] = '\0';
    local_138[4] = '\0';
    local_138[5] = '\0';
    local_138[6] = '\0';
    local_138[7] = '\0';
    local_138[8] = '\0';
    local_138[9] = '\0';
    local_138[10] = '\0';
    local_138[0xb] = '\0';
    local_138[0xc] = '\0';
    local_138[0xd] = '\0';
    local_138[0xe] = '\0';
    local_138[0xf] = '\0';
    strncpy(local_138,__s,(long)pcVar4 - (long)__s);
    FUN_008801a0(local_168,local_138);
    if (local_150 == 0) {
      plVar5 = local_168 + 2;
    }
    else {
      plVar5 = (long *)PTR_PTR_02710928;
      if (local_168[0] != 0) {
        plVar5 = (long *)(local_168[0] + 0x60);
      }
    }
    pcVar4 = strrchr((char *)*plVar5,0x2f);
    local_170 = (char *)0x0;
    if (pcVar4 != (char *)0x0) {
      local_170 = pcVar4 + 1;
    }
    FUN_014a7a80(&local_178,"bin/archive/gpokemon/",&local_170);
    puVar1 = (undefined8 *)PTR_PTR_02710928;
    if (local_178 != 0) {
      puVar1 = (undefined8 *)(local_178 + 0x60);
    }
    local_1b0 = *puVar1;
    FUN_014a7b00(&local_38,&local_1b0,".gfpak");
    FUN_00a83620(local_1a8,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    iVar3 = FUN_006e5970(local_1a8);
    if (iVar3 == 1) {
      FUN_006dccd0(&local_38,*(undefined8 *)PTR_DAT_02710788,1,local_1a8,0,param_3,0);
      if (*(long *)(param_1 + 0x288) != 0) {
        (**(code **)(*(long *)(*(long *)(param_1 + 0x288) + 0x48) + 0x18))();
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
      lVar2 = local_38;
      *(long *)(param_1 + 0x288) = local_38;
      if (local_38 != 0) {
        plVar5 = (long *)(local_38 + 0x48);
        (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((*(long *)(param_1 + 0x290) != 0) || (*(long *)(param_1 + 0x310) != 0)) {
          FUN_006e1e70(lVar2,param_1 + 0x280,1);
        }
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    if ((local_190 != 0) && (local_1a8[0] != 0)) {
      (**(code **)(*(long *)(local_1a8[0] + 0x48) + 0x18))();
    }
    local_1a8[0] = 0;
    local_1a8[1] = 0xcbf29ce484222645;
    local_198 = &DAT_01d38550;
    local_190 = 0;
    if (local_188 != 0) {
      (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      local_188 = 0;
    }
    if (local_178 != 0) {
      (**(code **)(*(long *)(local_178 + 0x48) + 0x18))();
      local_178 = 0;
    }
    if ((local_150 != 0) && (local_168[0] != 0)) {
      (**(code **)(*(long *)(local_168[0] + 0x48) + 0x18))();
    }
    local_168[0] = 0;
    local_168[1] = 0xcbf29ce484222645;
    local_158 = &DAT_01d38550;
    local_150 = 0;
    if (local_148 != 0) {
      (**(code **)(*(long *)(local_148 + 0x48) + 0x18))();
    }
  }
  return;
}


