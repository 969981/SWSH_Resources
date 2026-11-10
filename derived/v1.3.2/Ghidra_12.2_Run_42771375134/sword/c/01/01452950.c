/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01452950; name: FUN_01452950
 */


undefined1  [16] FUN_01452950(long param_1,int param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_a8 [16];
  ulong local_98 [2];
  undefined1 auStack_88 [16];
  ulong local_78;
  ulong *puStack_70;
  undefined8 local_68;
  undefined1 auStack_60 [16];
  byte local_50 [16];
  
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
  uVar6 = 0xcbf29ce484222645;
  snprintf((char *)local_50,0x10,"rank%d",param_2);
  local_78 = 0xcbf29ce484222645;
  if (local_50[0] != 0) {
    local_78 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)local_50 | 1);
    bVar1 = local_50[0];
    do {
      local_78 = (local_78 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_68 = 0xf;
  puStack_70 = (ulong *)local_50;
  FUN_012b4250(auStack_60,param_1 + 0x110,&local_78);
  FUN_012b4190(auStack_88,auStack_60,(long)(param_3 + -1));
  local_98[0] = 0;
  local_98[1] = 0;
  if (param_4 != 2) {
    param_4 = (uint)(param_4 == 1);
  }
  snprintf((char *)local_98,0x10,"is_money_%d",param_4);
  local_78 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    local_78 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)local_98 | 1);
    bVar1 = (byte)local_98[0];
    do {
      local_78 = (local_78 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_68 = 0xf;
  puStack_70 = local_98;
  FUN_012b4250(auStack_a8,auStack_88,&local_78);
  iVar2 = FUN_012b4420(auStack_a8,0);
  local_98[0] = local_98[0] & 0xffffffffffffff00;
  snprintf((char *)local_98,0x10,"item_id_%d",param_4);
  local_78 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    local_78 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)local_98 | 1);
    bVar1 = (byte)local_98[0];
    do {
      local_78 = (local_78 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_68 = 0xf;
  puStack_70 = local_98;
  FUN_012b4250(auStack_a8,auStack_88,&local_78);
  iVar3 = FUN_012b4420(auStack_a8,0);
  local_98[0] = local_98[0] & 0xffffffffffffff00;
  snprintf((char *)local_98,0x10,"item_count_%d",param_4);
  local_78 = 0xcbf29ce484222645;
  if ((byte)local_98[0] != 0) {
    local_78 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)local_98 | 1);
    bVar1 = (byte)local_98[0];
    do {
      local_78 = (local_78 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  local_68 = 0xf;
  puStack_70 = local_98;
  FUN_012b4250(auStack_a8,auStack_88,&local_78);
  uVar4 = FUN_012b4420(auStack_a8,0);
  local_98[0] = local_98[0] & 0xffffffffffffff00;
  snprintf((char *)local_98,0x10,"money_count_%d",param_4);
  if ((byte)local_98[0] != 0) {
    pbVar5 = (byte *)((ulong)local_98 | 1);
    bVar1 = (byte)local_98[0];
    do {
      uVar6 = (uVar6 ^ bVar1) * 0x100000001b3;
      bVar1 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar1 != 0);
  }
  puStack_70 = local_98;
  local_68 = 0xf;
  local_78 = uVar6;
  FUN_012b4250(auStack_a8,auStack_88,&local_78);
  uVar6 = FUN_012b4420(auStack_a8,0);
  auVar7._8_8_ = uVar6 & 0xffffffff;
  auVar7._0_8_ = CONCAT44(uVar4,(uint)(iVar2 == 1) | iVar3 << 0x10) & 0xffffffffffff;
  return auVar7;
}


