/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c66e10; name: FUN_00c66e10
 */


void FUN_00c66e10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_0271bfa0;
  plVar3 = (long *)*param_2;
  plVar5 = (long *)*param_3;
  lVar6 = *(long *)PTR_DAT_0271bfa0;
  lVar4 = *plVar5;
  *(long **)(lVar6 + 0x10) = plVar3;
  *(long *)(lVar6 + 0x20) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x18);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[1];
  *(long **)(lVar6 + 0x30) = plVar3;
  *(long *)(lVar6 + 0x40) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x38) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x30) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x38);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x28) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[2];
  *(long **)(lVar6 + 0x50) = plVar3;
  *(long *)(lVar6 + 0x60) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x58) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x50) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x58);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x48) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[3];
  *(long **)(lVar6 + 0x70) = plVar3;
  *(long *)(lVar6 + 0x80) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x78) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x70) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x78);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x68) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[4];
  *(long **)(lVar6 + 0x90) = plVar3;
  *(long *)(lVar6 + 0xa0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x98) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x90) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x98);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x88) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[5];
  *(long **)(lVar6 + 0xb0) = plVar3;
  *(long *)(lVar6 + 0xc0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0xb0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0xb8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0xa8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[6];
  *(long **)(lVar6 + 0xd0) = plVar3;
  *(long *)(lVar6 + 0xe0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0xd8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0xd0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0xd8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 200) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[7];
  *(long **)(lVar6 + 0xf0) = plVar3;
  *(long *)(lVar6 + 0x100) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0xf0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0xf8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0xe8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[8];
  *(long **)(lVar6 + 0x110) = plVar3;
  *(long *)(lVar6 + 0x120) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x118) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x110) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x118);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x108) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[9];
  *(long **)(lVar6 + 0x130) = plVar3;
  *(long *)(lVar6 + 0x140) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x138) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x130) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x138);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x128) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[10];
  *(long **)(lVar6 + 0x150) = plVar3;
  *(long *)(lVar6 + 0x160) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x158) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x150) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x158);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x148) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0xb];
  *(long **)(lVar6 + 0x170) = plVar3;
  *(long *)(lVar6 + 0x180) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x178) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x170) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x178);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x168) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0xc];
  *(long **)(lVar6 + 400) = plVar3;
  *(long *)(lVar6 + 0x1a0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x198) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 400) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x198);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x188) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0xd];
  *(long **)(lVar6 + 0x1b0) = plVar3;
  *(long *)(lVar6 + 0x1c0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x1b8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1b0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x1b8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x1a8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0xe];
  *(long **)(lVar6 + 0x1d0) = plVar3;
  *(long *)(lVar6 + 0x1e0) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x1d8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1d0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x1d8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x1c8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0xf];
  *(long **)(lVar6 + 0x1f0) = plVar3;
  *(long *)(lVar6 + 0x200) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x1f8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1f0) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x1f8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x1e8) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0x10];
  *(long **)(lVar6 + 0x210) = plVar3;
  *(long *)(lVar6 + 0x220) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x218) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x210) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x218);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x208) = lVar2;
  lVar6 = *(long *)puVar1;
  lVar4 = plVar5[0x11];
  *(long **)(lVar6 + 0x230) = plVar3;
  *(long *)(lVar6 + 0x240) = lVar4;
  lVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar4,8);
  *(long *)(lVar6 + 0x238) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x230) + 0xb8))();
    lVar2 = *(long *)(lVar6 + 0x238);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,lVar4 + -0xb8,0);
  *(long *)(lVar6 + 0x228) = lVar2;
  return;
}


