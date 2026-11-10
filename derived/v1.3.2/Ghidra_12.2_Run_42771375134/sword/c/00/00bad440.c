/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bad440; name: FUN_00bad440
 */


void FUN_00bad440(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long local_1a0;
  undefined *local_198;
  undefined8 uStack_190;
  undefined *local_140;
  code *local_138;
  code *local_130;
  undefined *local_128;
  long local_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined *local_c0;
  code *local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  long local_38;
  
  local_c0 = (undefined *)0x8810f6ba0b0e64ea;
  lVar5 = FUN_00ffde30(param_1 + 0x100,&local_c0);
  FUN_016c2c80(lVar5,0,0);
  FUN_016c2c90(lVar5,0);
  local_38 = *(long *)(param_1 + 0x5f8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar5,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  puVar4 = PTR_LAB_0271b650;
  puVar3 = PTR_FUN_0271b648;
  puVar2 = PTR_FUN_0271b640;
  puVar1 = PTR_LAB_0271b638;
  local_98 = PTR_LAB_0271b660;
  local_90 = 0;
  local_c0 = PTR_LAB_0271b638;
  local_b8 = (code *)PTR_FUN_0271b640;
  local_b0 = (code *)PTR_FUN_0271b648;
  local_a8 = PTR_LAB_0271b650;
  puStack_118 = PTR_LAB_0271b668;
  local_110 = 0;
  local_140 = PTR_LAB_0271b638;
  local_138 = (code *)PTR_FUN_0271b640;
  local_130 = (code *)PTR_FUN_0271b648;
  local_128 = PTR_LAB_0271b650;
  pcVar7 = *(code **)(lVar5 + 0x248);
  local_198 = PTR_LAB_0271b670;
  uStack_190 = 0;
  local_1a0 = param_1;
  local_120 = param_1;
  local_a0 = param_1;
  if (pcVar7 == (code *)0x0) {
LAB_00bad564:
    (*local_b0)(&local_a0,lVar5 + 0x260);
    *(undefined **)(lVar5 + 600) = local_a8;
    *(code **)(lVar5 + 0x248) = local_b8;
    *(code **)(lVar5 + 0x250) = local_b0;
    *(undefined8 *)(lVar5 + 0x240) = local_c0;
  }
  else {
    *(undefined8 *)(lVar5 + 0x250) = 0;
    *(undefined8 *)(lVar5 + 600) = 0;
    *(undefined8 *)(lVar5 + 0x240) = 0;
    *(undefined8 *)(lVar5 + 0x248) = 0;
    (*pcVar7)(lVar5 + 0x260);
    if (local_b0 != (code *)0x0) goto LAB_00bad564;
  }
  pcVar7 = *(code **)(lVar5 + 200);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    (*pcVar7)(lVar5 + 0xe0);
  }
  if (local_130 != (code *)0x0) {
    (*local_130)(&local_120,lVar5 + 0xe0);
    *(undefined **)(lVar5 + 0xd8) = local_128;
    *(code **)(lVar5 + 200) = local_138;
    *(code **)(lVar5 + 0xd0) = local_130;
    *(undefined8 *)(lVar5 + 0xc0) = local_140;
  }
  pcVar7 = *(code **)(lVar5 + 0x1c8);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar5 + 0x1d0) = 0;
    *(undefined8 *)(lVar5 + 0x1d8) = 0;
    *(undefined8 *)(lVar5 + 0x1c0) = 0;
    *(undefined8 *)(lVar5 + 0x1c8) = 0;
    (*pcVar7)(lVar5 + 0x1e0);
  }
  if (puVar3 != (undefined *)0x0) {
    (*(code *)puVar3)(&local_1a0,lVar5 + 0x1e0);
    *(undefined **)(lVar5 + 0x1d8) = puVar4;
    *(undefined **)(lVar5 + 0x1c8) = puVar2;
    *(undefined **)(lVar5 + 0x1d0) = puVar3;
    *(undefined8 *)(lVar5 + 0x1c0) = puVar1;
  }
  *(undefined1 *)(lVar5 + 0x7a2) = 1;
  FUN_016bef00(lVar5);
  switch(**(undefined4 **)(param_1 + 0x608)) {
  case 0:
    uVar6 = 0x7ca1f6b1f8677309;
    break;
  case 1:
    uVar6 = 0x7ca1f5b1f8677156;
    if (*(int *)(param_1 + 0x600) != 1) {
      uVar6 = 0x7ca200b1f8678407;
    }
    break;
  case 2:
    uVar6 = 0x7c9e72b1f8645ce6;
    break;
  case 3:
    uVar6 = 0x7c9e73b1f8645e99;
    break;
  case 4:
    uVar6 = 0x7c9e76b1f86463b2;
    break;
  case 5:
    uVar6 = 0x7c9e71b1f8645b33;
    break;
  case 6:
    uVar6 = 0x7c9e77b1f8646565;
    break;
  case 7:
    uVar6 = 0x7c9e74b1f864604c;
    break;
  case 8:
    uVar6 = 0x7c9e75b1f86461ff;
    break;
  case 9:
    uVar6 = 0x7c9e7bb1f8646c31;
    break;
  case 10:
  case 0xb:
    if (*(uint *)(param_1 + 0x600) < 6) {
      uVar6 = *(undefined8 *)(&DAT_021598d0 + (long)(int)*(uint *)(param_1 + 0x600) * 8);
      break;
    }
  case 0xc:
    uVar6 = 0x7c9b0cb1f86179bd;
    break;
  default:
    uVar6 = 0;
  }
  FUN_00bae160(param_1,0,uVar6,0x7dc9fc953a6a55f2);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)puVar2)(&local_1a0);
  }
  pcVar7 = local_138;
  if (local_138 != (code *)0x0) {
    local_130 = (code *)0x0;
    local_128 = (undefined *)0x0;
    local_140 = (undefined *)0x0;
    local_138 = (code *)0x0;
    (*pcVar7)(&local_120);
  }
  pcVar7 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar7)(&local_a0);
  }
  return;
}


