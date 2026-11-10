/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cff7c0; name: FUN_00cff7c0
 */


void FUN_00cff7c0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  ulong local_98 [12];
  undefined4 local_38;
  
  switch(*(undefined4 *)(param_1 + 0x818)) {
  case 1:
  case 2:
  case 5:
                    /* WARNING: Could not recover jumptable at 0x00cff814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x600))(param_1 + 0x620);
    return;
  case 3:
    *(undefined4 *)(param_1 + 0x818) = 2;
    local_38 = 0;
    uVar2 = 0xcbf29ce484222645;
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
    snprintf((char *)local_98,100,"anime_%s","pointer");
    if ((byte)local_98[0] != 0) {
      pbVar1 = (byte *)((ulong)local_98 | 1);
      do {
        uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
        local_98[0]._0_1_ = *pbVar1;
        pbVar1 = pbVar1 + 1;
      } while ((byte)local_98[0] != 0);
    }
    local_98[0] = uVar2;
    FUN_00ffd510(0,param_1 + 0x100,local_98);
    FUN_00cfdef0(param_1);
    local_98[0] = 0x5e75f73f5c83;
    break;
  case 4:
    uVar2 = 0xcbf29ce484222645;
    *(undefined4 *)(param_1 + 0x818) = 3;
    FUN_00cfe4e0(param_1);
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
    snprintf((char *)local_98,100,"anime_%s","pointer");
    if ((byte)local_98[0] != 0) {
      pbVar1 = (byte *)((ulong)local_98 | 1);
      do {
        uVar2 = (uVar2 ^ (byte)local_98[0]) * 0x100000001b3;
        local_98[0]._0_1_ = *pbVar1;
        pbVar1 = pbVar1 + 1;
      } while ((byte)local_98[0] != 0);
    }
    local_98[0] = uVar2;
    FUN_00ffd510(0x3f800000,param_1 + 0x100,local_98);
    local_98[0] = 0x6375f73f6502;
    break;
  default:
    goto switchD_00cff7f8_default;
  }
  local_98[0] = local_98[0] | 0x5d22000000000000;
  FUN_00cff5c0(param_1,local_98);
  FUN_00ffa160(param_1,1,1);
  FUN_00cf6a00(param_1,1);
switchD_00cff7f8_default:
  return;
}


