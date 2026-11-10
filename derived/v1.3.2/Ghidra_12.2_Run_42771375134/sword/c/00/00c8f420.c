/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c8f420; name: FUN_00c8f420
 */


long FUN_00c8f420(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  lVar8 = *(long *)(param_2 + 0x18);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  uVar7 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = uVar7;
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  lVar8 = *(long *)(param_2 + 0x58);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  uVar2 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  lVar8 = *(long *)(param_2 + 0x70);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(param_1 + 0x70);
  *(long *)(param_1 + 0x70) = lVar8;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
  }
  lVar8 = 0;
  *(undefined1 *)(param_1 + 0x78) = *(undefined1 *)(param_2 + 0x78);
  do {
    lVar5 = param_2 + lVar8;
    uVar2 = *(undefined8 *)(lVar5 + 0x90);
    lVar1 = param_1 + lVar8;
    *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(lVar5 + 0x88);
    *(undefined8 *)(lVar1 + 0x90) = uVar2;
    lVar9 = *(long *)(lVar5 + 0x98);
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x10))();
    }
    lVar6 = *(long *)(lVar1 + 0x98);
    *(long *)(lVar1 + 0x98) = lVar9;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
    uVar4 = *(undefined4 *)(lVar5 + 0xa0);
    *(undefined2 *)(lVar1 + 0xa4) = *(undefined2 *)(lVar5 + 0xa4);
    *(undefined4 *)(lVar1 + 0xa0) = uVar4;
    *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(lVar5 + 0xa8);
    *(undefined8 *)(lVar1 + 0xb0) = *(undefined8 *)(lVar5 + 0xb0);
    uVar7 = *(undefined8 *)(lVar5 + 200);
    uVar2 = *(undefined8 *)(lVar5 + 0xb8);
    uVar3 = *(undefined8 *)(lVar5 + 0xc0);
    *(undefined4 *)(lVar1 + 0xd0) = *(undefined4 *)(lVar5 + 0xd0);
    *(undefined8 *)(lVar1 + 0xc0) = uVar3;
    *(undefined8 *)(lVar1 + 200) = uVar7;
    *(undefined8 *)(lVar1 + 0xb8) = uVar2;
    lVar5 = *(long *)(lVar5 + 0xd8);
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    lVar9 = *(long *)(lVar1 + 0xd8);
    *(long *)(lVar1 + 0xd8) = lVar5;
    if (lVar9 != 0) {
      (**(code **)(*(long *)(lVar9 + 0x48) + 0x18))();
    }
    lVar8 = lVar8 + 0x60;
  } while (lVar8 != 0x240);
  uVar4 = *(undefined4 *)(param_2 + 0x2c0);
  *(undefined2 *)(param_1 + 0x2c4) = *(undefined2 *)(param_2 + 0x2c4);
  *(undefined4 *)(param_1 + 0x2c0) = uVar4;
  return param_1;
}


