/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a61cf0; name: FUN_00a61cf0
 */


void FUN_00a61cf0(long param_1,byte param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  *(byte *)(param_1 + 0x3c8) = param_2 & 1;
  FUN_00aa57c0(param_1 + 0x3d0);
  puVar1 = PTR_DAT_027194a0;
  lVar6 = *(long *)PTR_DAT_027194a0;
  plVar2 = *(long **)(param_1 + 0x2b8);
  *(long **)(lVar6 + 0x10) = plVar2;
  *(undefined1 **)(lVar6 + 0x20) = &LAB_01600000;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&LAB_01600000,8);
  *(long *)(lVar6 + 0x18) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x18);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,&LAB_015fff48,0);
  *(long *)(lVar6 + 8) = lVar3;
  lVar3 = FUN_009c5ff0(param_1);
  if (lVar3 == 0) {
    lVar3 = *(long *)puVar1;
  }
  else {
    uVar4 = FUN_008f35c0(lVar3,0x1000);
    lVar3 = *(long *)puVar1;
    if ((uVar4 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x2b8);
      *(undefined8 *)(lVar3 + 0x40) = 0x5500000;
      *(long **)(lVar3 + 0x30) = plVar2;
      lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,0x5500000,8);
      *(long *)(lVar3 + 0x38) = lVar6;
      if (lVar6 == 0) {
        (**(code **)(**(long **)(lVar3 + 0x30) + 0xb8))();
        lVar6 = *(long *)(lVar3 + 0x38);
      }
      uVar5 = 0x54fff48;
      goto LAB_00a61e48;
    }
  }
  plVar2 = *(long **)(param_1 + 0x2b8);
  *(undefined8 *)(lVar3 + 0x40) = 0x3c00000;
  *(long **)(lVar3 + 0x30) = plVar2;
  lVar6 = (**(code **)(*plVar2 + 0x10))(plVar2,0x3c00000,8);
  *(long *)(lVar3 + 0x38) = lVar6;
  if (lVar6 == 0) {
    (**(code **)(**(long **)(lVar3 + 0x30) + 0xb8))();
    lVar6 = *(long *)(lVar3 + 0x38);
  }
  uVar5 = 0x3bfff48;
LAB_00a61e48:
  FUN_00760770(lVar6,lVar6 + 0xb8,uVar5,0);
  *(long *)(lVar3 + 0x28) = lVar6;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x60) = 0xf00000;
  *(long **)(lVar6 + 0x50) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf00000,8);
  *(long *)(lVar6 + 0x58) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x50) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x58);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0xefff48,0);
  *(long *)(lVar6 + 0x48) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x80) = 0xf00000;
  *(long **)(lVar6 + 0x70) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf00000,8);
  *(long *)(lVar6 + 0x78) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x70) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x78);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0xefff48,0);
  *(long *)(lVar6 + 0x68) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(lVar6 + 0xa0) = 0xf00000;
  *(long **)(lVar6 + 0x90) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf00000,8);
  *(long *)(lVar6 + 0x98) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x90) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x98);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0xefff48,0);
  *(long *)(lVar6 + 0x88) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(lVar6 + 0xc0) = 0xf00000;
  *(long **)(lVar6 + 0xb0) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf00000,8);
  *(long *)(lVar6 + 0xb8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0xb0) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0xb8);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0xefff48,0);
  *(long *)(lVar6 + 0xa8) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(long **)(lVar6 + 0xf0) = plVar2;
  *(undefined8 *)(lVar6 + 0x100) = 0x1b00000;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b00000,8);
  *(long *)(lVar6 + 0xf8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0xf0) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0xf8);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0x1afff48,0);
  *(long *)(lVar6 + 0xe8) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(long **)(lVar6 + 0x110) = plVar2;
  *(undefined8 *)(lVar6 + 0x120) = 0x1b00000;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b00000,8);
  *(long *)(lVar6 + 0x118) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x110) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x118);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0x1afff48,0);
  *(long *)(lVar6 + 0x108) = lVar3;
  if (*(char *)(param_1 + 0x3c8) != '\0') {
    lVar6 = *(long *)puVar1;
    plVar2 = *(long **)(param_1 + 0x2c0);
    *(long **)(lVar6 + 0xd0) = plVar2;
    *(undefined8 *)(lVar6 + 0xe0) = 0xf00000;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0xf00000,8);
    *(long *)(lVar6 + 0xd8) = lVar3;
    if (lVar3 == 0) {
      (**(code **)(**(long **)(lVar6 + 0xd0) + 0xb8))();
      lVar3 = *(long *)(lVar6 + 0xd8);
    }
    FUN_00760770(lVar3,lVar3 + 0xb8,0xefff48,0);
    *(long *)(lVar6 + 200) = lVar3;
    lVar6 = *(long *)puVar1;
    plVar2 = *(long **)(param_1 + 0x2c0);
    *(long **)(lVar6 + 0x130) = plVar2;
    *(undefined8 *)(lVar6 + 0x140) = 0x1b00000;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b00000,8);
    *(long *)(lVar6 + 0x138) = lVar3;
    if (lVar3 == 0) {
      (**(code **)(**(long **)(lVar6 + 0x130) + 0xb8))();
      lVar3 = *(long *)(lVar6 + 0x138);
    }
    FUN_00760770(lVar3,lVar3 + 0xb8,0x1afff48,0);
    *(long *)(lVar6 + 0x128) = lVar3;
    lVar6 = *(long *)puVar1;
    plVar2 = *(long **)(param_1 + 0x2c0);
    *(long **)(lVar6 + 0x150) = plVar2;
    *(undefined8 *)(lVar6 + 0x160) = 0x1b00000;
    lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x1b00000,8);
    *(long *)(lVar6 + 0x158) = lVar3;
    if (lVar3 == 0) {
      (**(code **)(**(long **)(lVar6 + 0x150) + 0xb8))();
      lVar3 = *(long *)(lVar6 + 0x158);
    }
    FUN_00760770(lVar3,lVar3 + 0xb8,0x1afff48,0);
    *(long *)(lVar6 + 0x148) = lVar3;
  }
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined1 **)(lVar6 + 0x180) = &LAB_00500000;
  *(long **)(lVar6 + 0x170) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&LAB_00500000,8);
  *(long *)(lVar6 + 0x178) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x170) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x178);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,&DAT_004fff48,0);
  *(long *)(lVar6 + 0x168) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(long **)(lVar6 + 400) = plVar2;
  *(undefined1 **)(lVar6 + 0x1a0) = &LAB_00500000;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,&LAB_00500000,8);
  *(long *)(lVar6 + 0x198) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 400) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x198);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,&DAT_004fff48,0);
  *(long *)(lVar6 + 0x188) = lVar3;
  lVar6 = *(long *)puVar1;
  plVar2 = *(long **)(param_1 + 0x2c0);
  *(undefined8 *)(lVar6 + 0x1c0) = 0x200000;
  *(long **)(lVar6 + 0x1b0) = plVar2;
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0x200000,8);
  *(long *)(lVar6 + 0x1b8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1b0) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x1b8);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,0x1fff48,0);
  *(long *)(lVar6 + 0x1a8) = lVar3;
  return;
}


