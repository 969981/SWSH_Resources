/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bd4230; name: FUN_00bd4230
 */


void FUN_00bd4230(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  long local_1b0;
  undefined *local_1a8;
  undefined8 uStack_1a0;
  undefined *local_150;
  code *local_148;
  code *local_140;
  undefined *local_138;
  long local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *local_d0;
  code *local_c8;
  code *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_48;
  
  local_d0 = (undefined *)0xaf29d7bfffad6d9f;
  lVar9 = FUN_00ffde30(param_1 + 0x100,&local_d0);
  iVar2 = *(int *)(lVar9 + 0x65c);
  lVar15 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x10))();
  }
  lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
  }
  if (lVar15 != 0) {
    (**(code **)(*(long *)(lVar15 + 0x48) + 0x18))((long *)(lVar15 + 0x48));
  }
  uVar7 = FUN_0150b350(lVar13);
  uVar8 = FUN_0150b180(lVar13,uVar7);
  iVar1 = iVar2;
  if (iVar2 < 0) {
    iVar1 = iVar2 + 1;
  }
  uVar11 = iVar1 >> 1;
  if (uVar8 < uVar11) {
    uVar14 = 0;
    uVar10 = uVar8;
  }
  else {
    uVar10 = uVar11;
    if (uVar11 < 0x14) {
      uVar14 = 0;
      do {
        if ((uVar10 + uVar14 == uVar8) || (uVar10 + uVar14 == 0x13)) break;
        uVar11 = uVar11 + 1;
        if (uVar14 < 0x14U - iVar2) {
          uVar14 = uVar14 + 1;
        }
        else {
          uVar10 = uVar10 + 1;
        }
      } while (uVar11 < 0x14);
    }
    else {
      uVar14 = 0;
    }
  }
  FUN_016c2c80(lVar9,uVar10,0);
  FUN_016c2c90(lVar9,uVar14);
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  local_48 = *(long *)(param_1 + 0x5d8);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar9,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  puVar6 = PTR_LAB_0271b768;
  puVar5 = PTR_FUN_0271b760;
  puVar4 = PTR_FUN_0271b758;
  puVar3 = PTR_LAB_0271b750;
  local_a8 = PTR_LAB_0271b748;
  local_a0 = 0;
  local_d0 = PTR_LAB_0271b750;
  local_c8 = (code *)PTR_FUN_0271b758;
  local_c0 = (code *)PTR_FUN_0271b760;
  local_b8 = PTR_LAB_0271b768;
  puStack_128 = PTR_LAB_0271b770;
  local_120 = 0;
  local_150 = PTR_LAB_0271b750;
  local_148 = (code *)PTR_FUN_0271b758;
  local_140 = (code *)PTR_FUN_0271b760;
  local_138 = PTR_LAB_0271b768;
  pcVar12 = *(code **)(lVar9 + 0x248);
  local_1a8 = PTR_LAB_0271b778;
  uStack_1a0 = 0;
  local_1b0 = param_1;
  local_130 = param_1;
  local_b0 = param_1;
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x250) = 0;
    *(undefined8 *)(lVar9 + 600) = 0;
    *(undefined8 *)(lVar9 + 0x240) = 0;
    *(undefined8 *)(lVar9 + 0x248) = 0;
    (*pcVar12)(lVar9 + 0x260);
    if (local_c0 == (code *)0x0) goto LAB_00bd447c;
  }
  (*local_c0)(&local_b0,lVar9 + 0x260);
  *(undefined **)(lVar9 + 600) = local_b8;
  *(code **)(lVar9 + 0x248) = local_c8;
  *(code **)(lVar9 + 0x250) = local_c0;
  *(undefined8 *)(lVar9 + 0x240) = local_d0;
LAB_00bd447c:
  pcVar12 = *(code **)(lVar9 + 200);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0xd0) = 0;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 200) = 0;
    (*pcVar12)(lVar9 + 0xe0);
  }
  if (local_140 != (code *)0x0) {
    (*local_140)(&local_130,lVar9 + 0xe0);
    *(undefined **)(lVar9 + 0xd8) = local_138;
    *(code **)(lVar9 + 200) = local_148;
    *(code **)(lVar9 + 0xd0) = local_140;
    *(undefined8 *)(lVar9 + 0xc0) = local_150;
  }
  pcVar12 = *(code **)(lVar9 + 0x1c8);
  if (pcVar12 != (code *)0x0) {
    *(undefined8 *)(lVar9 + 0x1d0) = 0;
    *(undefined8 *)(lVar9 + 0x1d8) = 0;
    *(undefined8 *)(lVar9 + 0x1c0) = 0;
    *(undefined8 *)(lVar9 + 0x1c8) = 0;
    (*pcVar12)(lVar9 + 0x1e0);
  }
  if (puVar5 != (undefined *)0x0) {
    (*(code *)puVar5)(&local_1b0,lVar9 + 0x1e0);
    *(undefined **)(lVar9 + 0x1d8) = puVar6;
    *(undefined **)(lVar9 + 0x1c8) = puVar4;
    *(undefined **)(lVar9 + 0x1d0) = puVar5;
    *(undefined8 *)(lVar9 + 0x1c0) = puVar3;
  }
  *(undefined1 *)(lVar9 + 0x7a2) = 1;
  FUN_016bef00(lVar9);
  if (puVar4 != (undefined *)0x0) {
    (*(code *)puVar4)(&local_1b0);
  }
  pcVar12 = local_148;
  if (local_148 != (code *)0x0) {
    local_140 = (code *)0x0;
    local_138 = (undefined *)0x0;
    local_150 = (undefined *)0x0;
    local_148 = (code *)0x0;
    (*pcVar12)(&local_130);
  }
  pcVar12 = local_c8;
  if (local_c8 != (code *)0x0) {
    local_c0 = (code *)0x0;
    local_b8 = (undefined *)0x0;
    local_d0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar12)(&local_b0);
  }
  return;
}


