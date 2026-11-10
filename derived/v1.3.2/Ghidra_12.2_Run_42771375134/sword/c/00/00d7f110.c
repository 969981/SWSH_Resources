/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d7f110; name: FUN_00d7f110
 */


void FUN_00d7f110(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
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
  local_100 = (undefined *)((ulong)local_100 & 0xffffffffffffff00);
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 1;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 2;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 3;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 4;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 5;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 6;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 7;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 8;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100._0_1_ = 9;
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100 = (undefined *)CONCAT71(local_100._1_7_,10);
  uVar5 = FUN_00d75740(*(long *)(param_1 + 0x5d0) + 0x60,&local_100);
  if (local_6c[0] < uVar5) {
    local_6c[0] = uVar5;
  }
  local_100 = *(undefined **)(param_1 + 8);
  lVar6 = FUN_00d822c0(&local_180,local_100,local_6c,&local_100);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0x5f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x5f0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x5f0) = 0;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x5e8);
  *(long *)(param_1 + 0x5f0) = lVar6;
  local_78 = lVar6;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  }
  FUN_016c2cb0(uVar8,&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)(local_78 + 0x48) + 0x18))();
    local_78 = 0;
  }
  puVar4 = PTR_LAB_0271e460;
  puVar3 = PTR_FUN_0271e458;
  puVar2 = PTR_FUN_0271e450;
  puVar1 = PTR_LAB_0271e448;
  lVar6 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar6 + 0x248);
  puStack_d8 = PTR_LAB_0271e440;
  local_d0 = 0;
  local_100 = PTR_LAB_0271e448;
  local_f8 = (code *)PTR_FUN_0271e450;
  local_f0 = (code *)PTR_FUN_0271e458;
  local_e8 = PTR_LAB_0271e460;
  local_e0 = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00d7f3fc:
    (*local_f0)(&local_e0,lVar6 + 0x260);
    *(undefined **)(lVar6 + 600) = local_e8;
    *(code **)(lVar6 + 0x248) = local_f8;
    *(code **)(lVar6 + 0x250) = local_f0;
    *(undefined8 *)(lVar6 + 0x240) = local_100;
  }
  else {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar7)(lVar6 + 0x260);
    if (local_f0 != (code *)0x0) goto LAB_00d7f3fc;
  }
  lVar6 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar6 + 200);
  local_180 = puVar1;
  local_178 = (code *)puVar2;
  local_158 = PTR_LAB_0271e468;
  uStack_150 = 0;
  local_170 = (code *)puVar3;
  local_168 = puVar4;
  local_160 = param_1;
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)PTR_FUN_0271e458;
LAB_00d7f484:
    (*pcVar7)(&local_160,lVar6 + 0xe0);
    *(undefined **)(lVar6 + 0xd8) = local_168;
    *(code **)(lVar6 + 200) = local_178;
    *(code **)(lVar6 + 0xd0) = local_170;
    *(undefined8 *)(lVar6 + 0xc0) = local_180;
  }
  else {
    *(undefined8 *)(lVar6 + 0xd0) = 0;
    *(undefined8 *)(lVar6 + 0xd8) = 0;
    *(undefined8 *)(lVar6 + 0xc0) = 0;
    *(undefined8 *)(lVar6 + 200) = 0;
    (*pcVar7)(lVar6 + 0xe0);
    pcVar7 = local_170;
    if (local_170 != (code *)0x0) goto LAB_00d7f484;
  }
  lVar6 = *(long *)(param_1 + 0x5e8);
  pcVar7 = *(code **)(lVar6 + 0x1c8);
  local_1d8 = PTR_LAB_0271e470;
  uStack_1d0 = 0;
  local_1e0 = param_1;
  if (pcVar7 == (code *)0x0) {
    pcVar7 = (code *)PTR_FUN_0271e458;
  }
  else {
    *(undefined8 *)(lVar6 + 0x1d0) = 0;
    *(undefined8 *)(lVar6 + 0x1d8) = 0;
    *(undefined8 *)(lVar6 + 0x1c0) = 0;
    *(undefined8 *)(lVar6 + 0x1c8) = 0;
    (*pcVar7)(lVar6 + 0x1e0);
    pcVar7 = (code *)puVar3;
    if (puVar3 == (undefined *)0x0) goto LAB_00d7f538;
  }
  (*pcVar7)(&local_1e0,lVar6 + 0x1e0);
  *(undefined **)(lVar6 + 0x1d8) = puVar4;
  *(undefined **)(lVar6 + 0x1c8) = puVar2;
  *(undefined **)(lVar6 + 0x1d0) = puVar3;
  *(undefined8 *)(lVar6 + 0x1c0) = puVar1;
LAB_00d7f538:
  *(undefined1 *)(lVar6 + 0x7a2) = 1;
  if (puVar2 != (undefined *)0x0) {
    (*(code *)puVar2)(&local_1e0);
  }
  pcVar7 = local_178;
  if (local_178 != (code *)0x0) {
    local_170 = (code *)0x0;
    local_168 = (undefined *)0x0;
    local_180 = (undefined *)0x0;
    local_178 = (code *)0x0;
    (*pcVar7)(&local_160);
  }
  pcVar7 = local_f8;
  if (local_f8 != (code *)0x0) {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0x0;
    local_100 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    (*pcVar7)(&local_e0);
  }
  FUN_016c3330(*(undefined8 *)(param_1 + 0x5e8),0x40,0x80);
  return;
}


