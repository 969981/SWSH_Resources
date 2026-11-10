/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008ce770; name: FUN_008ce770
 */


void FUN_008ce770(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar12 = *(long *)(param_1 + 0x2b0);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  lVar11 = *(long *)(lVar12 + 0x2e0);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  uVar3 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x650) + 0xe0) + (param_2 & 0xffffffff) * 8)
  ;
  uVar8 = FUN_00880ae0(uVar3);
  lVar12 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_02145ec0);
  *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) | 1;
  FUN_014c9660(lVar11,0,uVar3);
  local_70 = *(long *)(param_1 + 0x5e0);
  if (local_70 == 0) {
    FUN_008ce1c0(param_1,0xf86b70deb1ed6cd1,0xbd6272a07cb5bd3,&local_70,0);
  }
  else {
    plVar15 = (long *)(local_70 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_008ce1c0(param_1,0xf86b70deb1ed6cd1,0xbd6272a07cb5bd3,&local_70,0);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_70 = 0;
  }
  lVar12 = param_1 + 0x100;
  FUN_014c9660(lVar11,0,uVar3);
  puVar4 = PTR_DAT_02717b40;
  uVar13 = *(undefined8 *)(PTR_DAT_02717b40 + 0x10);
  local_78 = *(long *)(param_1 + 0x5e8);
  if (local_78 == 0) {
    FUN_008ced80(param_1,uVar3,uVar13,&local_78);
  }
  else {
    plVar15 = (long *)(local_78 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_008ced80(param_1,uVar3,uVar13,&local_78);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_78 = 0;
  }
  local_68 = *(undefined8 *)(puVar4 + 0x18);
  uVar13 = FUN_0103bd80(*(undefined8 *)(param_1 + 0x2b0),&local_68);
  lVar16 = *(long *)(param_1 + 0x538);
  if (lVar16 == 0) {
    FUN_016a7910(0,uVar8,1,uVar13,0,0);
  }
  else {
    plVar15 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_016a7910(lVar16,uVar8,1,uVar13,0,0);
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  iVar9 = FUN_00880b10(uVar3);
  local_68 = *(undefined8 *)(puVar4 + 0x20);
  FUN_00ffd510(*(undefined4 *)(&DAT_02145ec8 + (long)iVar9 * 4),lVar12,&local_68);
  uVar6 = FUN_00880ab0(uVar3);
  puVar1 = &DAT_01cd5060;
  if (1 < uVar6) {
    puVar1 = &DAT_01cd5268;
  }
  uVar13 = *puVar1;
  FUN_014ca220(lVar11,0,uVar6,3,0,1);
  uVar14 = *(undefined8 *)(puVar4 + 0x28);
  local_80 = *(long *)(param_1 + 0x5e0);
  if (local_80 == 0) {
    FUN_008ce1c0(param_1,uVar13,uVar14,&local_80,0);
  }
  else {
    plVar15 = (long *)(local_80 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_008ce1c0(param_1,uVar13,uVar14,&local_80,0);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_80 = 0;
  }
  uVar7 = FUN_00880ba0(uVar3);
  uVar10 = FUN_00880bd0(uVar3);
  puVar1 = &DAT_01cd5060;
  if ((uVar10 & 1) == 0) {
    puVar1 = &DAT_01cd51d8;
  }
  uVar13 = *puVar1;
  FUN_014ca220(lVar11,0,uVar7,3,0,1);
  uVar14 = *(undefined8 *)(puVar4 + 0x30);
  local_88 = *(long *)(param_1 + 0x5e0);
  if (local_88 == 0) {
    FUN_008ce1c0(param_1,uVar13,uVar14,&local_88,0);
  }
  else {
    plVar15 = (long *)(local_88 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_008ce1c0(param_1,uVar13,uVar14,&local_88,0);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_88 = 0;
  }
  uVar5 = FUN_00880a40(uVar3,0);
  FUN_014ca220(lVar11,0,uVar5,2,0,1);
  uVar13 = *(undefined8 *)(puVar4 + 0x38);
  local_90 = *(long *)(param_1 + 0x5e0);
  if (local_90 == 0) {
    FUN_008ce1c0(param_1,0x8a36c4dd66f84ba7,uVar13,&local_90,0);
  }
  else {
    plVar15 = (long *)(local_90 + 0x48);
    (**(code **)(*plVar15 + 0x10))(plVar15);
    FUN_008ce1c0(param_1,0x8a36c4dd66f84ba7,uVar13,&local_90,0);
    (**(code **)(*plVar15 + 0x18))(plVar15);
    local_90 = 0;
  }
  FUN_0146c130(*(undefined8 *)(param_1 + 0x628),1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469c8);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  FUN_0146c130(*(long *)(param_1 + 0x628) + 0x218,1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469d0);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  FUN_0146c130(*(long *)(param_1 + 0x628) + 0x430,1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469d8);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  FUN_0146c130(*(long *)(param_1 + 0x628) + 0x648,1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469e0);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  FUN_0146c130(*(long *)(param_1 + 0x628) + 0x860,1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469e8);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  FUN_0146c130(*(long *)(param_1 + 0x628) + 0xa78,1,uVar3);
  lVar16 = FUN_0167b6b0(*(undefined8 *)(param_1 + 0x2b0),&DAT_021469f0);
  *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
  uVar2 = *(uint *)(param_1 + 0x61c);
  if (uVar2 != param_4) {
    if (uVar2 != 0xffffffff) {
      local_68 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)uVar2 * 0x90 + 0x60);
      FUN_00ffd010(lVar12,&local_68);
    }
    puVar4 = PTR_DAT_02717b38;
    if (param_4 != 0xffffffff) {
      local_68 = *(undefined8 *)(PTR_DAT_02717b38 + (ulong)param_4 * 0x90 + 0x60);
      FUN_00ffd430(lVar12,&local_68);
      local_68 = *(undefined8 *)(puVar4 + (ulong)param_4 * 0x90 + 0x58);
      FUN_00ffd010(lVar12,&local_68);
    }
    *(uint *)(param_1 + 0x61c) = param_4;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  return;
}


