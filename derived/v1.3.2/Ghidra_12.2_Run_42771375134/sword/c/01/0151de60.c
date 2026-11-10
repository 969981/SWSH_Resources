/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151de60; name: FUN_0151de60
 */


void FUN_0151de60(undefined8 *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  int param5;
  long *plVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  uint local_110 [2];
  uint local_108 [2];
  uint local_100 [2];
  uint local_f8 [2];
  uint local_f0 [2];
  ulong local_e8 [17];
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  uVar3 = 0x811c9dc5;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0xffffffff;
  local_e8[0xe] = 0;
  local_e8[0xf] = 0;
  local_e8[0xc] = 0;
  local_e8[0xd] = 0;
  local_e8[10] = 0;
  local_e8[0xb] = 0;
  local_e8[8] = 0;
  local_e8[9] = 0;
  local_e8[6] = 0;
  local_e8[7] = 0;
  local_e8[4] = 0;
  local_e8[5] = 0;
  local_e8[2] = 0;
  local_e8[3] = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  snprintf((char *)local_e8,0x80,"%s_%02d","wins",*(int *)(param_1 + 0xb));
  uVar6 = local_e8[0] & 0xff;
  uVar5 = uVar3;
  if ((byte)local_e8[0] != '\0') {
    pbVar9 = (byte *)((ulong)local_e8 | 1);
    do {
      uVar5 = (uVar5 ^ (uint)uVar6) * 0x1000193;
      bVar1 = *pbVar9;
      uVar6 = (ulong)bVar1;
      pbVar9 = pbVar9 + 1;
    } while (bVar1 != 0);
  }
  local_e8[0] = CONCAT44(local_e8[0]._4_4_,uVar5);
  uVar6 = FUN_01503ae0(param_2,local_e8);
  if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x50))(plVar4,local_e8);
  }
  lVar8 = 0;
  *(int *)param_1 = (int)(uVar6 >> 0x20);
  pbVar9 = (byte *)((ulong)local_e8 | 1);
  do {
    param5 = (int)lVar8;
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_monsno",*(int *)(param_1 + 0xb),param5);
    uVar5 = (uint)(byte)local_e8[0];
    local_f0[0] = uVar3;
    if ((byte)local_e8[0] != 0) {
      pbVar7 = pbVar9;
      do {
        local_f0[0] = (local_f0[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_formno",*(int *)(param_1 + 0xb),param5);
    uVar5 = (uint)(byte)local_e8[0];
    local_f8[0] = uVar3;
    if ((byte)local_e8[0] != 0) {
      pbVar7 = pbVar9;
      do {
        local_f8[0] = (local_f8[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_gender",*(int *)(param_1 + 0xb),param5);
    uVar5 = (uint)(byte)local_e8[0];
    local_100[0] = uVar3;
    if ((byte)local_e8[0] != 0) {
      pbVar7 = pbVar9;
      do {
        local_100[0] = (local_100[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_rare",*(int *)(param_1 + 0xb),param5);
    uVar5 = (uint)(byte)local_e8[0];
    local_108[0] = uVar3;
    if ((byte)local_e8[0] != 0) {
      pbVar7 = pbVar9;
      do {
        local_108[0] = (local_108[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_perrand",*(int *)(param_1 + 0xb),param5);
    uVar5 = (uint)(byte)local_e8[0];
    local_110[0] = uVar3;
    if ((byte)local_e8[0] != 0) {
      pbVar7 = pbVar9;
      do {
        local_110[0] = (local_110[0] ^ uVar5) * 0x1000193;
        uVar5 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar5 != 0);
    }
    local_e8[0xe] = 0;
    local_e8[0xf] = 0;
    local_e8[0xc] = 0;
    local_e8[0xd] = 0;
    local_e8[10] = 0;
    local_e8[0xb] = 0;
    local_e8[8] = 0;
    local_e8[9] = 0;
    local_e8[6] = 0;
    local_e8[7] = 0;
    local_e8[4] = 0;
    local_e8[5] = 0;
    local_e8[2] = 0;
    local_e8[3] = 0;
    local_e8[0] = 0;
    local_e8[1] = 0;
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_species",*(int *)(param_1 + 0xb),param5);
    uVar6 = local_e8[0] & 0xff;
    uVar5 = uVar3;
    if ((byte)local_e8[0] != '\0') {
      pbVar7 = pbVar9;
      do {
        uVar5 = (uVar5 ^ (uint)uVar6) * 0x1000193;
        bVar1 = *pbVar7;
        uVar6 = (ulong)bVar1;
        pbVar7 = pbVar7 + 1;
      } while (bVar1 != 0);
    }
    local_e8[0] = CONCAT44(local_e8[0]._4_4_,uVar5);
    uVar6 = FUN_014fcbf0(param_2,local_f0);
    if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_f0);
    }
    *(uint *)((long)param_1 + lVar8 * 0x1c + 4) = (uint)(uVar6 >> 0x10) & 0xffff;
    uVar6 = FUN_01503e30(param_2,local_f8);
    if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_f8);
    }
    *(ushort *)((long)param_1 + lVar8 * 0x1c + 8) = (ushort)(uVar6 >> 8) & 0xff;
    uVar5 = FUN_01503e30(param_2,local_100);
    if (((uVar5 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_100);
    }
    *(uint *)((long)param_1 + lVar8 * 0x1c + 0xc) = uVar5 >> 8 & 0xff;
    uVar6 = FUN_01515610(param_2,local_108);
    if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_108);
    }
    *(bool *)((long)param_1 + lVar8 * 0x1c + 0x10) = (uVar6 & 0xff00) != 0;
    *(undefined1 *)((long)param_1 + lVar8 * 0x1c + 0x11) = 0;
    uVar6 = FUN_01503ae0(param_2,local_110);
    if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_110);
    }
    *(int *)((long)param_1 + lVar8 * 0x1c + 0x14) = (int)(uVar6 >> 0x20);
    *(undefined4 *)((long)param_1 + lVar8 * 0x1c + 0x18) = 0;
    uVar6 = FUN_0150f170(param_2,local_e8);
    if (((uVar6 & 0xff) == 0) && (plVar4 = *(long **)(param_2 + 0x58), plVar4 != (long *)0x0)) {
      (**(code **)(*plVar4 + 0x50))(plVar4,local_e8);
    }
    lVar2 = lVar8 * 0x1c;
    lVar8 = lVar8 + 1;
    *(int *)((long)param_1 + lVar2 + 0x1c) = (int)(uVar6 >> 0x20);
  } while (lVar8 != 3);
  return;
}


