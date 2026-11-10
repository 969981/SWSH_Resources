/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415210; name: FUN_01415210
 */


void FUN_01415210(long param_1,uint param_2)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  byte local_58 [32];
  ulong local_38;
  
  if (param_2 < 8) {
    local_58[0x10] = 0;
    local_58[0x11] = 0;
    local_58[0x12] = 0;
    local_58[0x13] = 0;
    local_58[0x14] = 0;
    local_58[0x15] = 0;
    local_58[0x16] = 0;
    local_58[0x17] = 0;
    local_58[0x18] = 0;
    local_58[0x19] = 0;
    local_58[0x1a] = 0;
    local_58[0x1b] = 0;
    local_58[0x1c] = 0;
    local_58[0x1d] = 0;
    local_58[0x1e] = 0;
    local_58[0x1f] = 0;
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    local_58[3] = 0;
    local_58[4] = 0;
    local_58[5] = 0;
    local_58[6] = 0;
    local_58[7] = 0;
    local_58[8] = 0;
    local_58[9] = 0;
    local_58[10] = 0;
    local_58[0xb] = 0;
    local_58[0xc] = 0;
    local_58[0xd] = 0;
    local_58[0xe] = 0;
    local_58[0xf] = 0;
    snprintf((char *)local_58,0x20,"pane_L_notice_%02d_P_player_00",param_2);
    lVar4 = *(long *)(param_1 + 0x528);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
    }
    uVar5 = *(undefined8 *)(param_1 + 8);
    local_38 = 0xcbf29ce484222645;
    if (local_58[0] != 0) {
      pbVar3 = (byte *)((ulong)local_58 | 1);
      bVar1 = local_58[0];
      do {
        local_38 = (local_38 ^ bVar1) * 0x100000001b3;
        bVar1 = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (bVar1 != 0);
    }
    uVar2 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_38);
    FUN_0168b110(*(long *)(lVar4 + 0x180) + (long)(int)param_2 * 0x3d0,uVar5,uVar2,0);
    if (lVar4 != 0) {
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
    }
  }
  return;
}


