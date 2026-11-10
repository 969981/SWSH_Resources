/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0151b9f0; name: FUN_0151b9f0
 */


void FUN_0151b9f0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong local_38;
  ulong local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_38 = 0xf4b17a579f18960;
  local_30 = 0x82a2b175229d6a5b;
  FUN_01028fc0(&local_38,*(undefined8 *)(param_1 + 0x860));
  lVar5 = 0;
  do {
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar2 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar2);
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar3 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar3);
    lVar1 = param_1 + lVar5 * 4;
    if (*(char *)(lVar1 + 0x60) == '\x02') {
      *(char *)(lVar1 + 0x60) = '\x01';
      *(char *)(lVar1 + 0x61) = (char)uVar2 + '\x01';
      *(char *)(lVar1 + 0x62) = (char)uVar3 + '\x01';
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x200);
  *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_1 + 0x868);
  uVar4 = FUN_01028fe0();
  *(undefined8 *)(param_1 + 0x868) = uVar4;
  FUN_01028fc0(&local_38,*(undefined8 *)(param_1 + 0x1070));
  lVar5 = 0;
  do {
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar2 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar2);
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar3 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar3);
    lVar1 = param_1 + lVar5 * 4;
    if (*(char *)(lVar1 + 0x870) == '\x02') {
      *(undefined1 *)(lVar1 + 0x870) = 1;
      *(char *)(lVar1 + 0x871) = (char)uVar2 + '\x01';
      *(char *)(lVar1 + 0x872) = (char)uVar3 + '\x01';
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x200);
  *(undefined8 *)(param_1 + 0x1070) = *(undefined8 *)(param_1 + 0x1078);
  uVar4 = FUN_01028fe0();
  *(undefined8 *)(param_1 + 0x1078) = uVar4;
  FUN_01028fc0(&local_38,*(undefined8 *)(param_1 + 0x1880));
  lVar5 = 0;
  do {
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar2 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar2);
    do {
      uVar8 = local_38 ^ local_30;
      iVar7 = (int)local_30;
      iVar6 = (int)local_38;
      local_30 = uVar8 >> 0x1b | uVar8 << 0x25;
      local_38 = uVar8 ^ (local_38 >> 0x28 | local_38 << 0x18) ^ uVar8 << 0x10;
      uVar3 = iVar6 + iVar7 & 0x7f;
    } while (99 < uVar3);
    lVar1 = param_1 + lVar5 * 4;
    if (*(char *)(lVar1 + 0x1080) == '\x02') {
      *(char *)(lVar1 + 0x1080) = '\x01';
      *(char *)(lVar1 + 0x1081) = (char)uVar2 + '\x01';
      *(char *)(lVar1 + 0x1082) = (char)uVar3 + '\x01';
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x200);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1888);
  uVar4 = FUN_01028fe0();
  *(undefined8 *)(param_1 + 0x1888) = uVar4;
  return;
}


