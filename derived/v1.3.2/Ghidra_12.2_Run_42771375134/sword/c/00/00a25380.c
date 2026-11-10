/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a25380; name: FUN_00a25380
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_00a25380(long param_1,ulong *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *param3;
  ulong uVar8;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong uStack_50;
  undefined4 local_48;
  
  param3 = (ulong *)(param_1 + 0x98);
  *param3 = *param_2;
  uVar7 = param_2[1];
  uVar1 = param_2[2];
  uVar8 = 0xcbf29ce484222645;
  uVar6 = param_2[4];
  *(ulong *)(param_1 + 0xb0) = param_2[3];
  *(ulong *)(param_1 + 0xb8) = uVar6;
  *(ulong *)(param_1 + 0xa0) = uVar7;
  *(ulong *)(param_1 + 0xa8) = uVar1;
  uVar7 = param_2[5];
  uVar1 = param_2[6];
  uVar6 = param_2[8];
  *(ulong *)(param_1 + 0xd0) = param_2[7];
  *(ulong *)(param_1 + 0xd8) = uVar6;
  *(ulong *)(param_1 + 0xc0) = uVar7;
  *(ulong *)(param_1 + 200) = uVar1;
  uVar6 = param_2[0xb];
  uVar7 = param_2[9];
  uVar1 = param_2[10];
  *(undefined8 *)(param_1 + 0xf5) = *(undefined8 *)((long)param_2 + 0x5d);
  *(ulong *)(param_1 + 0xe8) = uVar1;
  *(ulong *)(param_1 + 0xf0) = uVar6;
  *(ulong *)(param_1 + 0xe0) = uVar7;
  local_a8 = *param_2;
  local_a0 = param_2[1];
  local_98 = param_2[2];
  local_90 = param_2[3];
  local_88 = param_2[4];
  local_80 = param_2[5];
  local_78 = param_2[6];
  local_70 = param_2[7];
  local_68 = param_2[8];
  uStack_50 = param_2[0xb];
  local_60 = param_2[9];
  local_58 = param_2[10];
  local_48 = (undefined4)param_2[0xc];
  FUN_00a0d510(param_1,&local_a8);
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)param3 != '\0') {
    snprintf((char *)&local_a8,100,"pane_%s",(char *)param3);
    if ((byte)local_a8 != 0) {
      uVar7 = 0xcbf29ce484222645;
      pbVar5 = (byte *)((ulong)&local_a8 | 1);
      do {
        uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
        local_a8._0_1_ = *pbVar5;
        pbVar5 = pbVar5 + 1;
      } while ((byte)local_a8 != 0);
      if (uVar7 == 0xcbf29ce484222645 || uVar7 == 0) {
        uVar4 = 0;
      }
      else {
        local_a8 = uVar7;
        uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
      }
      goto LAB_00a254c4;
    }
  }
  uVar4 = 0;
LAB_00a254c4:
  *(undefined8 *)(param_1 + 0x100) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_00");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_00");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x108) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_01");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_01");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_02");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_02");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x118) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_03");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_03");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x120) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_04");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_04");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"pane_%s","P_ball_05");
    bVar2 = (byte)local_a8;
  }
  else {
    snprintf((char *)&local_a8,100,"pane_%s_%s",(char *)param3,"P_ball_05");
    bVar2 = (byte)local_a8;
  }
  if (bVar2 == 0) {
    uVar4 = 0;
  }
  else {
    local_a8 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      local_a8 = (local_a8 ^ bVar2) * 0x100000001b3;
      bVar2 = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while (bVar2 != 0);
    if (local_a8 == 0xcbf29ce484222645 || local_a8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0167b6b0(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x1b0),&local_a8);
    }
  }
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","in");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"in");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x138) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","in_3");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"in_3");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x140) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_ball_00");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_00");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x150) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_ball_01");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_01");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x158) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_ball_02");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_02");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x160) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_ball_03");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_03");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x168) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    snprintf((char *)&local_a8,100,"anime_%s","color_ball_04");
  }
  else {
    snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_04");
  }
  uVar7 = 0xcbf29ce484222645;
  if ((byte)local_a8 != 0) {
    uVar7 = 0xcbf29ce484222645;
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar7 = (uVar7 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x170) = uVar7;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_70 = 0;
  local_88 = 0;
  local_80 = 0;
  local_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = 0;
  if (*(char *)(param_1 + 0x98) == '\0') {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s","color_ball_05");
  }
  else {
    iVar3 = snprintf((char *)&local_a8,100,"anime_%s_%s",(char *)param3,"color_ball_05");
  }
  if ((byte)local_a8 != 0) {
    pbVar5 = (byte *)((ulong)&local_a8 | 1);
    do {
      uVar8 = (uVar8 ^ (byte)local_a8) * 0x100000001b3;
      local_a8._0_1_ = *pbVar5;
      pbVar5 = pbVar5 + 1;
    } while ((byte)local_a8 != 0);
  }
  *(ulong *)(param_1 + 0x178) = uVar8;
  *(undefined1 *)(param_1 + 0x180) = 1;
  return iVar3;
}


