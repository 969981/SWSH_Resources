/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00baf610; name: FUN_00baf610
 */


void FUN_00baf610(long param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_98;
  byte local_90 [64];
  
  uVar3 = 0xcbf29ce484222645;
  snprintf((char *)local_90,0x40,"anime_L_btn_search_sub_%02d_marking_ptn",param_3);
  local_98 = 0xcbf29ce484222645;
  if (local_90[0] != 0) {
    uVar4 = (ulong)(uint)local_90[0];
    local_98 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_90 | 1);
    do {
      local_98 = (local_98 ^ uVar4) * 0x100000001b3;
      bVar1 = *pbVar2;
      uVar4 = (ulong)bVar1;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  FUN_00ffd010(param_1 + 0x100,&local_98);
  if (local_90[0] != 0) {
    pbVar2 = (byte *)((ulong)local_90 | 1);
    do {
      uVar4 = (ulong)local_90[0];
      local_90[0] = *pbVar2;
      uVar3 = (uVar3 ^ uVar4) * 0x100000001b3;
      pbVar2 = pbVar2 + 1;
    } while (local_90[0] != 0);
  }
  local_98 = uVar3;
  FUN_00ffd510((float)param_2,param_1 + 0x100,&local_98);
  FUN_00bb0310(param_1,2,param_3,
               *(ushort *)(*(long *)(param_1 + 0x5d0) + 0x20) >> (ulong)((param_2 & 0xf) << 1) & 3);
  return;
}


