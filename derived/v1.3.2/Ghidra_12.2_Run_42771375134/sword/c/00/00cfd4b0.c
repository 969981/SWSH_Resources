/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cfd4b0; name: FUN_00cfd4b0
 */


void FUN_00cfd4b0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong local_98 [12];
  undefined4 local_38;
  
  *(undefined4 *)(param_1 + 0x818) = 1;
  pcVar4 = *(code **)(param_1 + 0x608);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x610) = 0;
    *(undefined8 *)(param_1 + 0x618) = 0;
    *(undefined8 *)(param_1 + 0x600) = 0;
    *(undefined8 *)(param_1 + 0x608) = 0;
    (*pcVar4)(param_1 + 0x620);
  }
  if ((code *)param_3[2] != (code *)0x0) {
    (*(code *)param_3[2])(param_3 + 4,param_1 + 0x620);
    uVar1 = *param_3;
    uVar2 = param_3[1];
    uVar3 = param_3[3];
    *(undefined8 *)(param_1 + 0x610) = param_3[2];
    *(undefined8 *)(param_1 + 0x618) = uVar3;
    *(undefined8 *)(param_1 + 0x600) = uVar1;
    *(undefined8 *)(param_1 + 0x608) = uVar2;
  }
  pcVar4 = *(code **)(param_1 + 0x708);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x708) = 0;
    (*pcVar4)(param_1 + 0x720);
  }
  if ((code *)param_2[2] != (code *)0x0) {
    (*(code *)param_2[2])(param_2 + 4,param_1 + 0x720);
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = param_2[3];
    *(undefined8 *)(param_1 + 0x710) = param_2[2];
    *(undefined8 *)(param_1 + 0x718) = uVar3;
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    *(undefined8 *)(param_1 + 0x708) = uVar2;
  }
  local_38 = 0;
  uVar6 = 0xcbf29ce484222645;
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
  snprintf((char *)local_98,100,"anime_%s","switch");
  if ((byte)local_98[0] != 0) {
    pbVar5 = (byte *)((ulong)local_98 | 1);
    do {
      uVar6 = (uVar6 ^ (byte)local_98[0]) * 0x100000001b3;
      local_98[0]._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_98[0] != 0);
  }
  local_98[0] = uVar6;
  FUN_00ffd510(0x40000000,param_1 + 0x100,local_98);
  FUN_00cfd2e0(param_1);
  return;
}


