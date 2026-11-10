/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01415710; name: FUN_01415710
 */


void FUN_01415710(long param_1,int param_2,long *param_3,undefined8 param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  long local_70;
  ulong uStack_68;
  byte local_60 [32];
  
  local_60[0x10] = 0;
  local_60[0x11] = 0;
  local_60[0x12] = 0;
  local_60[0x13] = 0;
  local_60[0x14] = 0;
  local_60[0x15] = 0;
  local_60[0x16] = 0;
  local_60[0x17] = 0;
  local_60[0x18] = 0;
  local_60[0x19] = 0;
  local_60[0x1a] = 0;
  local_60[0x1b] = 0;
  local_60[0x1c] = 0;
  local_60[0x1d] = 0;
  local_60[0x1e] = 0;
  local_60[0x1f] = 0;
  uVar3 = 0xcbf29ce484222645;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_60[4] = 0;
  local_60[5] = 0;
  local_60[6] = 0;
  local_60[7] = 0;
  local_60[8] = 0;
  local_60[9] = 0;
  local_60[10] = 0;
  local_60[0xb] = 0;
  local_60[0xc] = 0;
  local_60[0xd] = 0;
  local_60[0xe] = 0;
  local_60[0xf] = 0;
  snprintf((char *)local_60,0x20,"pane_L_notice_%02d_T_notice_01",param_2);
  if (local_60[0] != 0) {
    pbVar2 = (byte *)((ulong)local_60 | 1);
    bVar1 = local_60[0];
    do {
      uVar3 = (uVar3 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  local_70 = *param_3;
  uStack_68 = uVar3;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x10))();
  }
  FUN_008c4e70(param_1 + 0x100,&uStack_68,&local_70,param_4,10);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x5cc) = 1;
  return;
}


