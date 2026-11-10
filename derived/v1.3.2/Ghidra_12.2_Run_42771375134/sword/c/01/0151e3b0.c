/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151e3b0; name: FUN_0151e3b0
 */


void FUN_0151e3b0(long param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  int param5;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 local_11c [4];
  undefined1 local_118 [4];
  undefined2 local_114 [2];
  uint local_110 [2];
  uint local_108 [2];
  uint local_100 [2];
  uint local_f8 [2];
  uint local_f0 [2];
  ulong local_e8 [17];
  
  local_e8[0xe] = 0;
  local_e8[0xf] = 0;
  uVar2 = 0x811c9dc5;
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
  snprintf((char *)local_e8,0x80,"%s_%02d","wins",*(int *)(param_1 + 0x58));
  uVar5 = local_e8[0] & 0xff;
  uVar3 = uVar2;
  if ((byte)local_e8[0] != '\0') {
    pbVar8 = (byte *)((ulong)local_e8 | 1);
    do {
      uVar3 = (uVar3 ^ (uint)uVar5) * 0x1000193;
      bVar1 = *pbVar8;
      uVar5 = (ulong)bVar1;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
  }
  local_e8[0] = CONCAT44(local_e8[0]._4_4_,uVar3);
  FUN_01502d70(param_2,local_e8,param_1);
  lVar7 = 0;
  pbVar8 = (byte *)((ulong)local_e8 | 1);
  do {
    param5 = (int)lVar7;
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_monsno",*(int *)(param_1 + 0x58),param5);
    uVar3 = (uint)(byte)local_e8[0];
    local_f0[0] = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        local_f0[0] = (local_f0[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_formno",*(int *)(param_1 + 0x58),param5);
    uVar3 = (uint)(byte)local_e8[0];
    local_f8[0] = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        local_f8[0] = (local_f8[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_gender",*(int *)(param_1 + 0x58),param5);
    uVar3 = (uint)(byte)local_e8[0];
    local_100[0] = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        local_100[0] = (local_100[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_rare",*(int *)(param_1 + 0x58),param5);
    uVar3 = (uint)(byte)local_e8[0];
    local_108[0] = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        local_108[0] = (local_108[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_perrand",*(int *)(param_1 + 0x58),param5)
    ;
    uVar3 = (uint)(byte)local_e8[0];
    local_110[0] = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        local_110[0] = (local_110[0] ^ uVar3) * 0x1000193;
        uVar3 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar3 != 0);
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
    snprintf((char *)local_e8,0x80,"%s_%02d_%02d","members_species",*(int *)(param_1 + 0x58),param5)
    ;
    uVar4 = (uint)(byte)local_e8[0];
    uVar3 = uVar2;
    if ((byte)local_e8[0] != 0) {
      pbVar6 = pbVar8;
      do {
        uVar3 = (uVar3 ^ uVar4) * 0x1000193;
        uVar4 = (uint)*pbVar6;
        pbVar6 = pbVar6 + 1;
      } while (uVar4 != 0);
    }
    lVar9 = param_1 + lVar7 * 0x1c;
    local_e8[0] = CONCAT44(local_e8[0]._4_4_,uVar3);
    local_114[0] = (undefined2)*(undefined4 *)(lVar9 + 4);
    local_118[0] = *(undefined1 *)(lVar9 + 8);
    local_11c[0] = (undefined1)*(undefined4 *)(lVar9 + 0xc);
    FUN_014fb490(param_2,local_f0,local_114);
    FUN_01502ea0(param_2,local_f8,local_118);
    FUN_01502ea0(param_2,local_100,local_11c);
    FUN_01515e40(param_2,local_108,lVar9 + 0x10);
    FUN_01502d70(param_2,local_110,lVar9 + 0x14);
    FUN_0150ec10(param_2,local_e8,lVar9 + 0x1c);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  return;
}


