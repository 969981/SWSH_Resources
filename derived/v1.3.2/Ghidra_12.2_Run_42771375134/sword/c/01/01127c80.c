/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01127c80; name: FUN_01127c80
 */


void FUN_01127c80(long param_1,long *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  ulong *puVar5;
  ulong uVar6;
  uint uVar7;
  char local_100 [4];
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  long local_e0 [7];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  long local_88;
  long local_80 [10];
  
  if ((param_3 & 0xff) == 0) {
    FUN_01128420(local_80,*(undefined8 *)(param_1 + 0x60));
    uVar7 = *(byte *)(local_80[0] + 0x3a8) - 1;
    if (*(char *)(local_80[0] + 0x3aa) == '\0') {
      if ((uVar7 & 0xff) < 4) {
        uVar7 = uVar7 * 2 + 0x13;
      }
      else {
        uVar7 = 0x11;
      }
    }
    else if ((uVar7 & 0xff) < 4) {
      uVar7 = uVar7 * 2 + 0x14;
    }
    else {
      uVar7 = 0x12;
    }
    if (local_80[0] != 0) {
      (**(code **)(*(long *)(local_80[0] + 0x48) + 0x18))();
      local_80[0] = 0;
    }
  }
  else {
    uVar7 = param_3 >> 8 & 0xff;
  }
  FUN_0121b630(local_80,uVar7);
  if (*(long *)(param_1 + 0x60) == 0) {
    local_88 = 0;
  }
  else {
    FUN_01128420(&local_88);
  }
  lVar3 = local_88;
  FUN_01222680(&local_a8,*(undefined8 *)(local_88 + 0x68));
  if (*param_2 == 0) {
    local_e0[0] = 0;
    bVar4 = DAT_00000068 != '\0';
  }
  else {
    FUN_011285f0(local_e0);
    bVar4 = *(char *)(local_e0[0] + 0x68) != '\0';
    if (local_e0[0] != 0) {
      (**(code **)(*(long *)(local_e0[0] + 0x48) + 0x18))();
      local_e0[0] = 0;
    }
  }
  FUN_0121c070(local_e0,&local_a8,*(undefined1 *)(local_88 + 0x3a9),
               *(undefined1 *)(local_88 + 0x3a8),*(undefined1 *)(local_88 + 0x3aa),
               *(undefined1 *)(local_88 + 0x3ab),bVar4,*(undefined4 *)(lVar3 + 0xe8),
               (short)*(undefined4 *)(lVar3 + 0xec),(short)*(undefined4 *)(lVar3 + 0xf0),
               *(undefined4 *)(lVar3 + 0x108),*(undefined2 *)(lVar3 + 0x10c),
               *(undefined2 *)(lVar3 + 0x10e),*(undefined2 *)(lVar3 + 0x110),
               *(undefined2 *)(lVar3 + 0x112),*(undefined1 *)(lVar3 + 0x105),
               *(undefined1 *)(lVar3 + 0x106));
  if (*(char *)(local_88 + 0x3ab) != '\0') {
    local_e4 = local_90;
    local_ec = uStack_98;
    local_f4 = local_a0;
    local_fc = local_a8;
    local_100[0] = '\x01';
    FUN_0121b910(local_80,local_100);
    if (local_100[0] != '\0') {
      local_100[0] = '\0';
    }
  }
  puVar5 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar1 = *puVar5;
  uVar2 = puVar5[1];
  uVar6 = uVar2 ^ uVar1;
  *puVar5 = uVar6 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar6 << 0x10;
  puVar5[1] = uVar6 >> 0x1b | uVar6 << 0x25;
  FUN_0121bc10(local_80,(int)uVar2 + (int)uVar1);
  FUN_0121bc50(local_80,bVar4);
  if (*(long *)PTR_DAT_02710958 != 0) {
    FUN_012115f0(*(long *)PTR_DAT_02710958,local_e0);
  }
  if (*(long *)PTR_DAT_027108d8 != 0) {
    FUN_010a1250(*(long *)PTR_DAT_027108d8,local_80);
  }
  if (local_88 != 0) {
    (**(code **)(*(long *)(local_88 + 0x48) + 0x18))();
  }
  return;
}


