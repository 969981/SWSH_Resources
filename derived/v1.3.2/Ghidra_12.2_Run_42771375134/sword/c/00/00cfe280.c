/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfe280; name: FUN_00cfe280
 */


void FUN_00cfe280(long param_1,ulong param_2)

{
  int iVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong local_98 [12];
  undefined4 local_38;
  ulong local_28;
  
  iVar1 = *(int *)(param_1 + 0x818);
  if (iVar1 == 4) {
    uVar3 = 0xcbf29ce484222645;
    FUN_00cf6ec0(param_1,param_1 + 0x5f0,
                 *(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) + (param_2 & 0xffffffff) * 0x1c + 4);
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
    snprintf((char *)local_98,100,"pane_%s","T_co_date_00");
    if ((byte)local_98[0] != 0) {
      pbVar2 = (byte *)((ulong)local_98 | 1);
      do {
        uVar3 = (uVar3 ^ (byte)local_98[0]) * 0x100000001b3;
        local_98[0]._0_1_ = *pbVar2;
        pbVar2 = pbVar2 + 1;
      } while ((byte)local_98[0] != 0);
    }
    local_28 = 0x55891d39e75e3606;
    local_98[0] = uVar3;
  }
  else {
    if (iVar1 == 3) {
      uVar3 = 0xcbf29ce484222645;
      FUN_00cf6e10(param_1,*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) +
                           (param_2 & 0xffffffff) * 0x1c + 4);
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
      snprintf((char *)local_98,100,"pane_%s","T_co_date_00");
      if ((byte)local_98[0] != 0) {
        pbVar2 = (byte *)((ulong)local_98 | 1);
        do {
          uVar3 = (uVar3 ^ (byte)local_98[0]) * 0x100000001b3;
          local_98[0]._0_1_ = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while ((byte)local_98[0] != 0);
      }
      local_28 = 0x1c39e75e3453;
      local_98[0] = uVar3;
    }
    else {
      if (iVar1 != 2) {
        return;
      }
      uVar3 = 0xcbf29ce484222645;
      FUN_00cf6da0(param_1,*(long *)(*(long *)(param_1 + 0x5e0) + 0xe0) +
                           (param_2 & 0xffffffff) * 0x1c + 4);
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
      snprintf((char *)local_98,100,"pane_%s","T_co_date_00");
      if ((byte)local_98[0] != 0) {
        pbVar2 = (byte *)((ulong)local_98 | 1);
        do {
          uVar3 = (uVar3 ^ (byte)local_98[0]) * 0x100000001b3;
          local_98[0]._0_1_ = *pbVar2;
          pbVar2 = pbVar2 + 1;
        } while ((byte)local_98[0] != 0);
      }
      local_28 = 0x1b39e75e32a0;
      local_98[0] = uVar3;
    }
    local_28 = local_28 | 0x5589000000000000;
  }
  FUN_00cf6fb0(param_1,local_98,&local_28);
  return;
}


