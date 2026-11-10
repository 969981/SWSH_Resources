/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010746d0; name: FUN_010746d0
 */


void FUN_010746d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long local_1e0;
  undefined *local_1d8;
  undefined8 uStack_1d0;
  undefined *local_180;
  code *local_178;
  code *local_170;
  undefined *local_168;
  long local_160;
  undefined *local_158;
  undefined8 uStack_150;
  undefined *local_100;
  code *local_f8;
  code *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  long local_78;
  uint local_6c [3];
  
  local_6c[0] = 0;
  uVar5 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,0);
  if (uVar5 != 0) {
    local_6c[0] = uVar5;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,1);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,2);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,3);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,4);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,5);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,6);
  if (uVar5 < uVar6) {
    uVar5 = uVar6;
    local_6c[0] = uVar6;
  }
  uVar6 = FUN_010782f0(*(long *)(param_1 + 0x5d0) + 0x68,7);
  if (uVar5 < uVar6) {
    local_6c[0] = uVar6;
  }
  local_100 = *(undefined **)(param_1 + 8);
  lVar7 = FUN_010767d0(&local_180,local_100,local_6c,&local_100);
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x5e8);
  *(long *)(param_1 + 0x5f0) = lVar7;
  local_78 = lVar7;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))((long *)(lVar7 + 0x48));
  }
  FUN_016c2cb0(uVar9,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  puVar4 = PTR_LAB_02723da8;
  puVar3 = PTR_FUN_02723da0;
  puVar2 = PTR_FUN_02723d98;
  puVar1 = PTR_LAB_02723d90;
  lVar7 = *(long *)(param_1 + 0x5e8);
  pcVar8 = *(code **)(lVar7 + 0x248);
  puStack_d8 = PTR_LAB_02723d88;
  local_d0 = 0;
  local_100 = PTR_LAB_02723d90;
  local_f8 = (code *)PTR_FUN_02723d98;
  local_f0 = (code *)PTR_FUN_02723da0;
  local_e8 = PTR_LAB_02723da8;
  local_e0 = param_1;
  if (pcVar8 == (code *)0x0) {
LAB_01074900:
    (*local_f0)(&local_e0,lVar7 + 0x260);
    *(undefined **)(lVar7 + 600) = local_e8;
    *(code **)(lVar7 + 0x248) = local_f8;
    *(code **)(lVar7 + 0x250) = local_f0;
    *(undefined8 *)(lVar7 + 0x240) = local_100;
  }
  else {
    *(undefined8 *)(lVar7 + 0x250) = 0;
    *(undefined8 *)(lVar7 + 600) = 0;
    *(undefined8 *)(lVar7 + 0x240) = 0;
    *(undefined8 *)(lVar7 + 0x248) = 0;
    (*pcVar8)(lVar7 + 0x260);
    if (local_f0 != (code *)0x0) goto LAB_01074900;
  }
  lVar7 = *(long *)(param_1 + 0x5e8);
  pcVar8 = *(code **)(lVar7 + 200);
  local_180 = puVar1;
  local_178 = (code *)puVar2;
  local_158 = PTR_LAB_02723db0;
  uStack_150 = 0;
  local_170 = (code *)puVar3;
  local_168 = puVar4;
  local_160 = param_1;
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)PTR_FUN_02723da0;
LAB_01074988:
    (*pcVar8)(&local_160,lVar7 + 0xe0);
    *(undefined **)(lVar7 + 0xd8) = local_168;
    *(code **)(lVar7 + 200) = local_178;
    *(code **)(lVar7 + 0xd0) = local_170;
    *(undefined8 *)(lVar7 + 0xc0) = local_180;
  }
  else {
    *(undefined8 *)(lVar7 + 0xd0) = 0;
    *(undefined8 *)(lVar7 + 0xd8) = 0;
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(undefined8 *)(lVar7 + 200) = 0;
    (*pcVar8)(lVar7 + 0xe0);
    pcVar8 = local_170;
    if (local_170 != (code *)0x0) goto LAB_01074988;
  }
  lVar7 = *(long *)(param_1 + 0x5e8);
  pcVar8 = *(code **)(lVar7 + 0x1c8);
  local_1d8 = PTR_LAB_02723db8;
  uStack_1d0 = 0;
  local_1e0 = param_1;
  if (pcVar8 == (code *)0x0) {
    pcVar8 = (code *)PTR_FUN_02723da0;
  }
  else {
    *(undefined8 *)(lVar7 + 0x1d0) = 0;
    *(undefined8 *)(lVar7 + 0x1d8) = 0;
    *(undefined8 *)(lVar7 + 0x1c0) = 0;
    *(undefined8 *)(lVar7 + 0x1c8) = 0;
    (*pcVar8)(lVar7 + 0x1e0);
    pcVar8 = (code *)puVar3;
    if (puVar3 == (undefined *)0x0) goto LAB_01074a3c;
  }
  (*pcVar8)(&local_1e0,lVar7 + 0x1e0);
  *(undefined **)(lVar7 + 0x1d8) = puVar4;
  *(undefined **)(lVar7 + 0x1c8) = puVar2;
  *(undefined **)(lVar7 + 0x1d0) = puVar3;
  *(undefined8 *)(lVar7 + 0x1c0) = puVar1;
LAB_01074a3c:
  *(undefined1 *)(lVar7 + 0x7a2) = 1;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)puVar2)(&local_1e0);
  }
  pcVar8 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined *)0x0;
    local_180 = (undefined *)0x0;
    local_178 = (code *)0x0;
    (*pcVar8)(&local_160);
  }
  pcVar8 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar8)(&local_e0);
  }
  FUN_016c3330(*(undefined8 *)(param_1 + 0x5e8),0x40,0x80);
  return;
}


