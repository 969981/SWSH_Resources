/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1dc80; name: FUN_00a1dc80
 */


void FUN_00a1dc80(long param_1,char *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_a8 [12];
  undefined4 local_48;
  
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)param_2;
  lVar6 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_1 + 0x60) = uVar2;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"pane_%s","T_fb_00");
  }
  else {
    snprintf((char *)local_a8,100,"pane_%s_%s",param_2,"T_fb_00");
  }
  uVar7 = 0xcbf29ce484222645;
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x128) = uVar5;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"pane_%s","T_turn_00");
  }
  else {
    snprintf((char *)local_a8,100,"pane_%s_%s",param_2,"T_turn_00");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x130) = uVar5;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"pane_%s","T_fb_01");
  }
  else {
    snprintf((char *)local_a8,100,"pane_%s_%s",param_2,"T_fb_01");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x138) = uVar5;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"pane_%s","T_turn_01");
  }
  else {
    snprintf((char *)local_a8,100,"pane_%s_%s",param_2,"T_turn_01");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x140) = uVar5;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"anime_%s","reset");
  }
  else {
    snprintf((char *)local_a8,100,"anime_%s_%s",param_2,"reset");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x148) = uVar5;
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
  if (*param_2 == '\0') {
    snprintf((char *)local_a8,100,"anime_%s","keep");
  }
  else {
    snprintf((char *)local_a8,100,"anime_%s_%s",param_2,"keep");
  }
  uVar5 = 0xcbf29ce484222645;
  if ((byte)local_a8[0] != 0) {
    uVar5 = 0xcbf29ce484222645;
    pbVar3 = (byte *)((ulong)local_a8 | 1);
    do {
      uVar5 = (uVar5 ^ (byte)local_a8[0]) * 0x100000001b3;
      local_a8[0]._0_1_ = *pbVar3;
      pbVar3 = pbVar3 + 1;
    } while ((byte)local_a8[0] != 0);
  }
  *(ulong *)(param_1 + 0x150) = uVar5;
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
  if (*param_2 != '\0') {
    snprintf((char *)local_a8,100,"pane_%s",param_2);
    if ((byte)local_a8[0] != 0) {
      pbVar3 = (byte *)((ulong)local_a8 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_a8[0]) * 0x100000001b3;
        local_a8[0]._0_1_ = *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while ((byte)local_a8[0] != 0);
    }
  }
  local_a8[0] = uVar7;
  uVar2 = FUN_0167b6b0(*(undefined8 *)(lVar6 + 0x1b0),local_a8);
  *(undefined8 *)(param_1 + 0x158) = uVar2;
  return;
}


