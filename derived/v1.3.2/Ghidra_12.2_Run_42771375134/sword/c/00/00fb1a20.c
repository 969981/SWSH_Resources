/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fb1a20; name: FUN_00fb1a20
 */


void FUN_00fb1a20(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x3f8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x3f8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  if (*(long *)(param_1 + 0x400) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x400) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  *(undefined8 *)(param_1 + 0x408) = 0x1e00000000;
  *(undefined4 *)(param_1 + 0x410) = 0x1e;
  lVar9 = *param_2;
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x88);
  *(long *)(param_1 + 0x88) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar9 = param_2[1];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x90);
  *(long *)(param_1 + 0x90) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x98) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar9 = param_2[2];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0xa0);
  *(long *)(param_1 + 0xa0) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  *(long *)(param_1 + 0xa8) = param_2[3];
  lVar9 = param_2[4];
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0xb0);
  *(long *)(param_1 + 0xb0) = lVar9;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  pcVar8 = *(code **)(param_1 + 0xd8);
  if (pcVar8 == (code *)0x0) {
    plVar6 = (long *)param_2[10];
  }
  else {
    *(undefined8 *)(param_1 + 0xe0) = 0;
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined8 *)(param_1 + 0xd8) = 0;
    (*pcVar8)(param_1 + 0xf0);
    plVar6 = (long *)param_2[10];
  }
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  else if (param_2 + 6 == plVar6) {
    *(long *)(param_1 + 0x110) = param_1 + 0xf0;
    (**(code **)(*(long *)param_2[10] + 0x18))((long *)param_2[10],param_1 + 0xf0);
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x10))();
    *(undefined8 *)(param_1 + 0x110) = uVar7;
  }
  puVar4 = PTR_LAB_02719570;
  puVar3 = PTR_LAB_02719568;
  puVar2 = PTR_FUN_02719560;
  puVar1 = PTR_LAB_02719558;
  pcVar8 = *(code **)(param_1 + 0x158);
  *(undefined **)(param_1 + 0xd0) = PTR_LAB_02719558;
  *(undefined **)(param_1 + 0xd8) = puVar2;
  *(undefined **)(param_1 + 0xe0) = puVar3;
  *(undefined **)(param_1 + 0xe8) = puVar4;
  if (pcVar8 == (code *)0x0) {
    plVar6 = (long *)param_2[0x10];
  }
  else {
    *(undefined8 *)(param_1 + 0x160) = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    (*pcVar8)(param_1 + 0x170);
    plVar6 = (long *)param_2[0x10];
  }
  if (plVar6 == (long *)0x0) {
    *(undefined8 *)(param_1 + 400) = 0;
  }
  else if (param_2 + 0xc == plVar6) {
    *(long *)(param_1 + 400) = param_1 + 0x170;
    (**(code **)(*(long *)param_2[0x10] + 0x18))((long *)param_2[0x10],param_1 + 0x170);
  }
  else {
    uVar7 = (**(code **)(*plVar6 + 0x10))();
    *(undefined8 *)(param_1 + 400) = uVar7;
  }
  *(undefined **)(param_1 + 0x150) = puVar1;
  *(undefined **)(param_1 + 0x158) = puVar2;
  *(undefined **)(param_1 + 0x160) = puVar3;
  *(undefined **)(param_1 + 0x168) = puVar4;
  lVar9 = FUN_00a89d20(auStack_48,*(undefined8 *)(param_1 + 8));
  if (lVar9 != 0) {
    (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  *(long *)(param_1 + 0xc0) = lVar9;
  FUN_0078b230(lVar9,*(undefined8 *)(param_1 + 0xa0));
  FUN_0078ad30(*(undefined8 *)(param_1 + 0xc0),1);
  *(long *)(param_1 + 0x3f0) = param_2[0x12];
  return;
}


