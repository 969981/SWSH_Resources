/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452830; name: FUN_01452830
 */


void FUN_01452830(undefined8 param_1,long param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  ulong local_a8;
  byte *pbStack_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  byte local_50 [32];
  
  local_50[0x10] = 0;
  local_50[0x11] = 0;
  local_50[0x12] = 0;
  local_50[0x13] = 0;
  local_50[0x14] = 0;
  local_50[0x15] = 0;
  local_50[0x16] = 0;
  local_50[0x17] = 0;
  local_50[0x18] = 0;
  local_50[0x19] = 0;
  local_50[0x1a] = 0;
  local_50[0x1b] = 0;
  local_50[0x1c] = 0;
  local_50[0x1d] = 0;
  local_50[0x1e] = 0;
  local_50[0x1f] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[4] = 0;
  local_50[5] = 0;
  local_50[6] = 0;
  local_50[7] = 0;
  local_50[8] = 0;
  local_50[9] = 0;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  local_50[0xe] = 0;
  local_50[0xf] = 0;
  snprintf((char *)local_50,0x20,"group%d",param_3);
  local_a8 = 0xcbf29ce484222645;
  if (local_50[0] != 0) {
    local_a8 = 0xcbf29ce484222645;
    pbVar2 = (byte *)((ulong)local_50 | 1);
    bVar1 = local_50[0];
    do {
      local_a8 = (local_a8 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar2;
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  local_98 = 0x1f;
  pbStack_a0 = local_50;
  FUN_012b4250(auStack_60,param_2 + 0x110,&local_a8);
  local_88 = 0x7cd05726b13d0882;
  local_80 = "unlock_flag_K";
  local_78 = 0xd;
  FUN_012b4250(auStack_70,auStack_60,&local_88);
  local_a8 = 0xcbf29ce484222645;
  pbStack_a0 = &DAT_01d38550;
  local_98 = 0;
  local_90 = 0;
  FUN_012b4820(param_1,auStack_70,&local_a8);
  if (local_90 != 0) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  return;
}


