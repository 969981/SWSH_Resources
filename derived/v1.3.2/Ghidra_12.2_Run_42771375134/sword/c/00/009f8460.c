/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009f8460; name: FUN_009f8460
 */


void FUN_009f8460(long param_1,int param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  char local_100 [104];
  ulong local_98 [12];
  undefined4 local_38;
  
  local_100[0x60] = '\0';
  local_100[0x61] = '\0';
  local_100[0x62] = '\0';
  local_100[99] = '\0';
  iVar1 = 0;
  if (*(char *)(param_1 + 0xa58) != '\0') {
    iVar1 = 2;
  }
  local_100[0x50] = '\0';
  local_100[0x51] = '\0';
  local_100[0x52] = '\0';
  local_100[0x53] = '\0';
  local_100[0x54] = '\0';
  local_100[0x55] = '\0';
  local_100[0x56] = '\0';
  local_100[0x57] = '\0';
  local_100[0x58] = '\0';
  local_100[0x59] = '\0';
  local_100[0x5a] = '\0';
  local_100[0x5b] = '\0';
  local_100[0x5c] = '\0';
  local_100[0x5d] = '\0';
  local_100[0x5e] = '\0';
  local_100[0x5f] = '\0';
  local_100[0x40] = '\0';
  local_100[0x41] = '\0';
  local_100[0x42] = '\0';
  local_100[0x43] = '\0';
  local_100[0x44] = '\0';
  local_100[0x45] = '\0';
  local_100[0x46] = '\0';
  local_100[0x47] = '\0';
  local_100[0x48] = '\0';
  local_100[0x49] = '\0';
  local_100[0x4a] = '\0';
  local_100[0x4b] = '\0';
  local_100[0x4c] = '\0';
  local_100[0x4d] = '\0';
  local_100[0x4e] = '\0';
  local_100[0x4f] = '\0';
  local_100[0x30] = '\0';
  local_100[0x31] = '\0';
  local_100[0x32] = '\0';
  local_100[0x33] = '\0';
  local_100[0x34] = '\0';
  local_100[0x35] = '\0';
  local_100[0x36] = '\0';
  local_100[0x37] = '\0';
  local_100[0x38] = '\0';
  local_100[0x39] = '\0';
  local_100[0x3a] = '\0';
  local_100[0x3b] = '\0';
  local_100[0x3c] = '\0';
  local_100[0x3d] = '\0';
  local_100[0x3e] = '\0';
  local_100[0x3f] = '\0';
  local_100[0x20] = '\0';
  local_100[0x21] = '\0';
  local_100[0x22] = '\0';
  local_100[0x23] = '\0';
  local_100[0x24] = '\0';
  local_100[0x25] = '\0';
  local_100[0x26] = '\0';
  local_100[0x27] = '\0';
  local_100[0x28] = '\0';
  local_100[0x29] = '\0';
  local_100[0x2a] = '\0';
  local_100[0x2b] = '\0';
  local_100[0x2c] = '\0';
  local_100[0x2d] = '\0';
  local_100[0x2e] = '\0';
  local_100[0x2f] = '\0';
  local_100[0x10] = '\0';
  local_100[0x11] = '\0';
  local_100[0x12] = '\0';
  local_100[0x13] = '\0';
  local_100[0x14] = '\0';
  local_100[0x15] = '\0';
  local_100[0x16] = '\0';
  local_100[0x17] = '\0';
  local_100[0x18] = '\0';
  local_100[0x19] = '\0';
  local_100[0x1a] = '\0';
  local_100[0x1b] = '\0';
  local_100[0x1c] = '\0';
  local_100[0x1d] = '\0';
  local_100[0x1e] = '\0';
  local_100[0x1f] = '\0';
  local_100[0] = '\0';
  local_100[1] = '\0';
  local_100[2] = '\0';
  local_100[3] = '\0';
  local_100[4] = '\0';
  local_100[5] = '\0';
  local_100[6] = '\0';
  local_100[7] = '\0';
  local_100[8] = '\0';
  local_100[9] = '\0';
  local_100[10] = '\0';
  local_100[0xb] = '\0';
  local_100[0xc] = '\0';
  local_100[0xd] = '\0';
  local_100[0xe] = '\0';
  local_100[0xf] = '\0';
  snprintf(local_100,100,"L_netbtl_standby_team_%02d",iVar1 + param_2 & 0xff);
  local_38 = 0;
  local_98[10] = 0;
  local_98[0xb] = 0;
  local_98[8] = 0;
  local_98[9] = 0;
  local_98[6] = 0;
  local_98[7] = 0;
  local_98[4] = 0;
  local_98[5] = 0;
  local_98[2] = 0;
  local_98[3] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  if (local_100[0] == '\0') {
    snprintf((char *)local_98,100,"pane_%s","N_team_standby_icon");
  }
  else {
    snprintf((char *)local_98,100,"pane_%s_%s",local_100,"N_team_standby_icon");
  }
  uVar2 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    pbVar3 = (byte *)((ulong)local_98 | 1);
    do {
      uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_98[0] != 0);
  }
  lVar4 = *(long *)(param_1 + 0x2b0);
  local_98[0] = uVar2;
  if (lVar4 == 0) {
    FUN_0167b9b0(0,local_98,param_3 & 1);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_0167b9b0(lVar4,local_98,param_3 & 1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  return;
}


