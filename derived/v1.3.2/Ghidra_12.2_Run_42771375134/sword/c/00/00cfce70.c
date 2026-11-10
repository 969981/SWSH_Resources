/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfce70; name: FUN_00cfce70
 */


void FUN_00cfce70(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_a8 [12];
  undefined4 local_48;
  
  pcVar4 = *(code **)(param_1 + 0x608);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    (*pcVar4)(param_1 + 0x620);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x620);
    uVar5 = *param_4;
    uVar1 = param_4[1];
    uVar2 = param_4[3];
    *(undefined8 *)(param_1 + 0x610) = param_4[2];
    *(undefined8 *)(param_1 + 0x618) = uVar2;
    *(undefined8 *)(param_1 + 0x600) = uVar5;
    *(undefined8 *)(param_1 + 0x608) = uVar1;
  }
  pcVar4 = *(code **)(param_1 + 0x688);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x698) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    (*pcVar4)(param_1 + 0x6a0);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x6a0);
    uVar5 = *param_3;
    uVar1 = param_3[1];
    uVar2 = param_3[3];
    *(undefined8 *)(param_1 + 0x690) = param_3[2];
    *(undefined8 *)(param_1 + 0x698) = uVar2;
    *(undefined8 *)(param_1 + 0x680) = uVar5;
    *(undefined8 *)(param_1 + 0x688) = uVar1;
  }
  uVar5 = *param_2;
  *(undefined4 *)(param_1 + 0x800) = 0;
  *(undefined4 *)(param_1 + 0x80c) = 0;
  uVar9 = 0xcbf29ce484222645;
  *(undefined8 *)(param_1 + 0x5e8) = uVar5;
  *(undefined2 *)(param_1 + 0x5ec) = 0;
  *(undefined1 *)(param_1 + 0x5ee) = 0;
  local_48 = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  snprintf((char *)local_a8,100,"anime_%s","switch");
  uVar6 = local_a8[0] & 0xff;
  uVar8 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != '\0') {
    uVar8 = 0xcbf29ce484222645;
    pbVar7 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar8 = (uVar8 ^ uVar6) * 0x100000001b3;
      bVar3 = *pbVar7;
      uVar6 = (ulong)bVar3;
      pbVar7 = pbVar7 + 1;
    } while (bVar3 != 0);
  }
  local_a8[0] = uVar8;
  FUN_00ffd510(0,param_1 + 0x100,local_a8);
  *(undefined4 *)(param_1 + 0x818) = 2;
  local_48 = 0;
  local_a8[10] = 0;
  local_a8[0xb] = 0;
  local_a8[8] = 0;
  local_a8[9] = 0;
  local_a8[6] = 0;
  local_a8[7] = 0;
  local_a8[4] = 0;
  local_a8[5] = 0;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  snprintf((char *)local_a8,100,"anime_%s","pointer");
  if ((byte)local_a8[0] != 0) {
    pbVar7 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar9 = (uVar9 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  local_a8[0] = uVar9;
  FUN_00ffd510(0,param_1 + 0x100,local_a8);
  FUN_00cfdef0(param_1);
  local_a8[0] = 0x5d225e75f73f5c83;
  FUN_00cff5c0(param_1,local_a8);
  return;
}


