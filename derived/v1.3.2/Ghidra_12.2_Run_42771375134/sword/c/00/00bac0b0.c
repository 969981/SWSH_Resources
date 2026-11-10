/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bac0b0; name: FUN_00bac0b0
 */


void FUN_00bac0b0(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  code *pcVar8;
  long local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_c0;
  code *local_b8;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  long local_38;
  
  local_c0 = (undefined *)0x6aeb7356315d2e51;
  lVar7 = FUN_00ffde30(param_1 + 0x100,&local_c0);
  if ((param_2 & 1) == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_016c0010(lVar7);
    uVar6 = FUN_016c0020(lVar7);
  }
  FUN_016c2c80(lVar7,uVar5,0);
  FUN_016c2c90(lVar7,uVar6);
  local_38 = *(long *)(param_1 + 0x5f0);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_016c2cb0(lVar7,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  puVar4 = PTR_LAB_0271b650;
  puVar3 = PTR_FUN_0271b648;
  puVar2 = PTR_FUN_0271b640;
  puVar1 = PTR_LAB_0271b638;
  local_98 = PTR_LAB_0271b630;
  uStack_90 = 0;
  local_c0 = PTR_LAB_0271b638;
  local_b8 = (code *)PTR_FUN_0271b640;
  local_b0 = (code *)PTR_FUN_0271b648;
  local_a8 = PTR_LAB_0271b650;
  pcVar8 = *(code **)(lVar7 + 0x248);
  local_118 = PTR_LAB_0271b658;
  uStack_110 = 0;
  local_120 = param_1;
  local_a0 = param_1;
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x250) = 0;
    *(undefined8 *)(lVar7 + 600) = 0;
    *(undefined8 *)(lVar7 + 0x240) = 0;
    *(undefined8 *)(lVar7 + 0x248) = 0;
    (*pcVar8)(lVar7 + 0x260);
    if (local_b0 == (code *)0x0) goto LAB_00bac21c;
  }
  (*local_b0)(&local_a0,lVar7 + 0x260);
  *(undefined **)(lVar7 + 600) = local_a8;
  *(code **)(lVar7 + 0x248) = local_b8;
  *(code **)(lVar7 + 0x250) = local_b0;
  *(undefined8 *)(lVar7 + 0x240) = local_c0;
LAB_00bac21c:
  pcVar8 = *(code **)(lVar7 + 200);
  if (pcVar8 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0xd0) = 0;
    *(undefined8 *)(lVar7 + 0xd8) = 0;
    *(undefined8 *)(lVar7 + 0xc0) = 0;
    *(undefined8 *)(lVar7 + 200) = 0;
    (*pcVar8)(lVar7 + 0xe0);
  }
  if (puVar3 != (undefined *)0x0) {
    (*(code *)puVar3)(&local_120,lVar7 + 0xe0);
    *(undefined **)(lVar7 + 0xd8) = puVar4;
    *(undefined **)(lVar7 + 200) = puVar2;
    *(undefined **)(lVar7 + 0xd0) = puVar3;
    *(undefined8 *)(lVar7 + 0xc0) = puVar1;
  }
  FUN_016bef00(lVar7);
  FUN_00bae160(param_1,0,0x7c9b0cb1f86179bd,0x7dc9fc953a6a55f2);
  if (puVar2 != (undefined *)0x0) {
    (*(code *)puVar2)(&local_120);
  }
  pcVar8 = local_b8;
  if (local_b8 != (code *)0x0) {
    local_b0 = (code *)0x0;
    local_a8 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar8)(&local_a0);
  }
  return;
}


