/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a1a090; name: FUN_00a1a090
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_00a1a090(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  byte bVar2;
  undefined2 uVar3;
  bool bVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar6 = *param_2;
  uVar10 = param_2[2];
  *(undefined8 *)(param_1 + 0x20) = param_2[1];
  *(undefined8 *)(param_1 + 0x28) = uVar10;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = param_2[3];
  uVar10 = param_2[4];
  uVar1 = param_2[6];
  *(undefined8 *)(param_1 + 0x40) = param_2[5];
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(undefined8 *)(param_1 + 0x38) = uVar10;
  uVar6 = param_2[7];
  uVar10 = param_2[8];
  uVar11 = 0xcbf29ce484222645;
  uVar1 = param_2[10];
  *(undefined8 *)(param_1 + 0x60) = param_2[9];
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar6;
  *(undefined8 *)(param_1 + 0x58) = uVar10;
  uVar10 = param_2[0xd];
  uVar6 = param_2[0xc];
  uVar3 = *(undefined2 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x70) = param_2[0xb];
  *(undefined2 *)(param_1 + 0x88) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar6;
  *(undefined8 *)(param_1 + 0x80) = uVar10;
  uVar5 = (uint)*(ulong *)(param_1 + 0x18);
  if ((*(ulong *)(param_1 + 0x18) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"pane_%s","P_min10");
      uVar7 = local_98;
    }
    else {
      snprintf((char *)&local_98,100,"pane_%s_%s",(char *)(param_1 + 0x20),"P_min10");
      uVar7 = local_98;
    }
    bVar4 = (byte)local_98 != '\0';
    local_98 = 0xcbf29ce484222645;
    if (bVar4) {
      uVar7 = uVar7 & 0xff;
      local_98 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        local_98 = (local_98 ^ uVar7) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar7 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar12 + 0x1b0),&local_98);
    *(undefined8 *)(param_1 + 0x90) = uVar6;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 1 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"pane_%s","P_min01");
      uVar7 = local_98;
    }
    else {
      snprintf((char *)&local_98,100,"pane_%s_%s",(char *)(param_1 + 0x20),"P_min01");
      uVar7 = local_98;
    }
    bVar4 = (byte)local_98 != '\0';
    local_98 = 0xcbf29ce484222645;
    if (bVar4) {
      uVar7 = uVar7 & 0xff;
      local_98 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        local_98 = (local_98 ^ uVar7) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar7 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar12 + 0x1b0),&local_98);
    *(undefined8 *)(param_1 + 0x98) = uVar6;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"pane_%s","P_separator");
      uVar7 = local_98;
    }
    else {
      snprintf((char *)&local_98,100,"pane_%s_%s",(char *)(param_1 + 0x20),"P_separator");
      uVar7 = local_98;
    }
    bVar4 = (byte)local_98 != '\0';
    local_98 = 0xcbf29ce484222645;
    if (bVar4) {
      uVar7 = uVar7 & 0xff;
      local_98 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        local_98 = (local_98 ^ uVar7) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar7 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar12 + 0x1b0),&local_98);
    *(undefined8 *)(param_1 + 0xa0) = uVar6;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 3 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"pane_%s","P_sec10");
      uVar7 = local_98;
    }
    else {
      snprintf((char *)&local_98,100,"pane_%s_%s",(char *)(param_1 + 0x20),"P_sec10");
      uVar7 = local_98;
    }
    bVar4 = (byte)local_98 != '\0';
    local_98 = 0xcbf29ce484222645;
    if (bVar4) {
      uVar7 = uVar7 & 0xff;
      local_98 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        local_98 = (local_98 ^ uVar7) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar7 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    uVar6 = FUN_0167b6b0(*(undefined8 *)(lVar12 + 0x1b0),&local_98);
    *(undefined8 *)(param_1 + 0xa8) = uVar6;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 4 & 1) == 0) {
    uVar7 = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  else {
    lVar12 = *(long *)(param_1 + 0x10);
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      snprintf((char *)&local_98,100,"pane_%s","P_sec01");
      uVar7 = local_98;
    }
    else {
      snprintf((char *)&local_98,100,"pane_%s_%s",(char *)(param_1 + 0x20),"P_sec01");
      uVar7 = local_98;
    }
    bVar4 = (byte)local_98 != '\0';
    local_98 = 0xcbf29ce484222645;
    if (bVar4) {
      uVar7 = uVar7 & 0xff;
      local_98 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        local_98 = (local_98 ^ uVar7) * 0x100000001b3;
        bVar2 = *pbVar9;
        uVar7 = (ulong)bVar2;
        pbVar9 = pbVar9 + 1;
      } while (bVar2 != 0);
    }
    uVar7 = FUN_0167b6b0(*(undefined8 *)(lVar12 + 0x1b0),&local_98);
    *(ulong *)(param_1 + 0xb0) = uVar7;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 6 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s","min10");
    }
    else {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"min10");
    }
    uVar7 = (ulong)uVar5;
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_98 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        uVar8 = (uVar8 ^ (byte)local_98) * 0x100000001b3;
        local_98._0_1_ = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while ((byte)local_98 != 0);
    }
    *(ulong *)(param_1 + 0xb8) = uVar8;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 7 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s","min01");
    }
    else {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"min01");
    }
    uVar7 = (ulong)uVar5;
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_98 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        uVar8 = (uVar8 ^ (byte)local_98) * 0x100000001b3;
        local_98._0_1_ = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while ((byte)local_98 != 0);
    }
    *(ulong *)(param_1 + 0xc0) = uVar8;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 8 & 1) == 0) {
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s","sec10");
    }
    else {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"sec10");
    }
    uVar7 = (ulong)uVar5;
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_98 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        uVar8 = (uVar8 ^ (byte)local_98) * 0x100000001b3;
        local_98._0_1_ = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while ((byte)local_98 != 0);
    }
    *(ulong *)(param_1 + 200) = uVar8;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 9 & 1) == 0) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s","sec01");
    }
    else {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"sec01");
    }
    uVar7 = (ulong)uVar5;
    uVar8 = 0xcbf29ce484222645;
    if ((byte)local_98 != 0) {
      uVar8 = 0xcbf29ce484222645;
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        uVar8 = (uVar8 ^ (byte)local_98) * 0x100000001b3;
        local_98._0_1_ = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while ((byte)local_98 != 0);
    }
    *(ulong *)(param_1 + 0xd0) = uVar8;
    uVar5 = (uint)*(undefined8 *)(param_1 + 0x18);
  }
  if ((uVar5 >> 5 & 1) == 0) {
    uVar11 = 0;
  }
  else {
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s","color");
    }
    else {
      uVar5 = snprintf((char *)&local_98,100,"anime_%s_%s",(char *)(param_1 + 0x20),"color");
    }
    uVar7 = (ulong)uVar5;
    if ((byte)local_98 != 0) {
      pbVar9 = (byte *)((ulong)&local_98 | 1);
      do {
        uVar11 = (uVar11 ^ (byte)local_98) * 0x100000001b3;
        local_98._0_1_ = *pbVar9;
        pbVar9 = pbVar9 + 1;
      } while ((byte)local_98 != 0);
    }
  }
  *(ulong *)(param_1 + 0xd8) = uVar11;
  return uVar7;
}


