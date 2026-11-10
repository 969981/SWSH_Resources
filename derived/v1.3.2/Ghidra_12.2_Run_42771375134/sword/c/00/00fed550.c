/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fed550; name: FUN_00fed550
 */


int FUN_00fed550(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte local_88 [104];
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x58) = uVar5;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  uVar5 = *(undefined8 *)(param_2 + 0x58);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = uVar5;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  local_88[0x60] = 0;
  local_88[0x61] = 0;
  local_88[0x62] = 0;
  local_88[99] = 0;
  local_88[0x50] = 0;
  local_88[0x51] = 0;
  local_88[0x52] = 0;
  local_88[0x53] = 0;
  local_88[0x54] = 0;
  local_88[0x55] = 0;
  local_88[0x56] = 0;
  local_88[0x57] = 0;
  local_88[0x58] = 0;
  local_88[0x59] = 0;
  local_88[0x5a] = 0;
  local_88[0x5b] = 0;
  local_88[0x5c] = 0;
  local_88[0x5d] = 0;
  local_88[0x5e] = 0;
  local_88[0x5f] = 0;
  local_88[0x40] = 0;
  local_88[0x41] = 0;
  local_88[0x42] = 0;
  local_88[0x43] = 0;
  local_88[0x44] = 0;
  local_88[0x45] = 0;
  local_88[0x46] = 0;
  local_88[0x47] = 0;
  local_88[0x48] = 0;
  local_88[0x49] = 0;
  local_88[0x4a] = 0;
  local_88[0x4b] = 0;
  local_88[0x4c] = 0;
  local_88[0x4d] = 0;
  local_88[0x4e] = 0;
  local_88[0x4f] = 0;
  local_88[0x30] = 0;
  local_88[0x31] = 0;
  local_88[0x32] = 0;
  local_88[0x33] = 0;
  local_88[0x34] = 0;
  local_88[0x35] = 0;
  local_88[0x36] = 0;
  local_88[0x37] = 0;
  local_88[0x38] = 0;
  local_88[0x39] = 0;
  local_88[0x3a] = 0;
  local_88[0x3b] = 0;
  local_88[0x3c] = 0;
  local_88[0x3d] = 0;
  local_88[0x3e] = 0;
  local_88[0x3f] = 0;
  local_88[0x20] = 0;
  local_88[0x21] = 0;
  local_88[0x22] = 0;
  local_88[0x23] = 0;
  local_88[0x24] = 0;
  local_88[0x25] = 0;
  local_88[0x26] = 0;
  local_88[0x27] = 0;
  local_88[0x28] = 0;
  local_88[0x29] = 0;
  local_88[0x2a] = 0;
  local_88[0x2b] = 0;
  local_88[0x2c] = 0;
  local_88[0x2d] = 0;
  local_88[0x2e] = 0;
  local_88[0x2f] = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0;
  local_88[0x14] = 0;
  local_88[0x15] = 0;
  local_88[0x16] = 0;
  local_88[0x17] = 0;
  local_88[0x18] = 0;
  local_88[0x19] = 0;
  local_88[0x1a] = 0;
  local_88[0x1b] = 0;
  local_88[0x1c] = 0;
  local_88[0x1d] = 0;
  local_88[0x1e] = 0;
  local_88[0x1f] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[5] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[10] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0xf] = 0;
  if (*param_2 == '\0') {
    iVar3 = snprintf((char *)local_88,100,"anime_%s","ptn_player");
  }
  else {
    iVar3 = snprintf((char *)local_88,100,"anime_%s_%s",param_2,"ptn_player");
  }
  uVar4 = 0xcbf29ce484222645;
  if (local_88[0] != 0) {
    pbVar6 = (byte *)((ulong)local_88 | 1);
    do {
      uVar4 = (uVar4 ^ local_88[0]) * 0x100000001b3;
      local_88[0] = *pbVar6;
      pbVar6 = pbVar6 + 1;
    } while (local_88[0] != 0);
  }
  *(ulong *)(param_1 + 0x88) = uVar4;
  return iVar3;
}


