/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01466bd0; name: FUN_01466bd0
 */


void FUN_01466bd0(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_b0;
  ulong local_a8 [12];
  undefined4 local_48;
  
  uVar1 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar4 = uVar1;
  if (5 < (int)uVar1) {
    uVar4 = 6;
  }
  *(uint *)(param_1 + 0x6e0) = uVar4;
  if (uVar4 == 0) {
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x778),0);
    uVar2 = *(undefined8 *)(param_1 + 0x770);
  }
  else {
    FUN_016b2d70(*(undefined8 *)(param_1 + 0x778),1);
    uVar2 = *(undefined8 *)(param_1 + 0x770);
    if (5 < (int)uVar1) {
      uVar3 = 0;
      goto LAB_01466c3c;
    }
  }
  uVar3 = 1;
LAB_01466c3c:
  FUN_016b2d70(uVar2,uVar3);
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 == 0) {
    local_a8[0] = 0xc0b802cc3afa6c58;
    FUN_0167b9b0(0,local_a8,(int)uVar1 < 6);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    local_a8[0] = 0xc0b802cc3afa6c58;
    FUN_0167b9b0(lVar7,local_a8,(int)uVar1 < 6);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  lVar7 = *(long *)(param_1 + 0x2b0);
  if (lVar7 == 0) {
    local_a8[0] = 0xc0b803cc3afa6e0b;
    FUN_0167b9b0(0,local_a8,0 < (int)param_2);
    uVar1 = *(uint *)(param_1 + 0x6e0);
  }
  else {
    plVar8 = (long *)(lVar7 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    local_a8[0] = 0xc0b803cc3afa6e0b;
    FUN_0167b9b0(lVar7,local_a8,0 < (int)param_2);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    uVar1 = *(uint *)(param_1 + 0x6e0);
  }
  local_b0 = 0;
  if (uVar1 < 7) {
    local_b0 = *(undefined8 *)(&UNK_0216d330 + (long)(int)uVar1 * 8);
  }
  local_48 = 0;
  uVar6 = 0xcbf29ce484222645;
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
  snprintf((char *)local_a8,100,"pane_%s","T_pw_counter_00");
  if ((byte)local_a8[0] != 0) {
    pbVar5 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  local_a8[0] = uVar6;
  FUN_014618d0(param_1,local_a8,&local_b0,0);
  return;
}


