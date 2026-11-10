/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c65d70; name: FUN_00c65d70
 */


void FUN_00c65d70(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_027108e0;
  plVar3 = (long *)*param_2;
  plVar5 = (long *)*param_3;
  lVar6 = *(long *)PTR_DAT_027108e0;
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
  lVar2 = (**(code **)(*plVar3 + 0x40))(plVar3);
  *(long **)(lVar6 + 0x110) = plVar3;
  *(long *)(lVar6 + 0x120) = lVar2 + -0x8000;
  lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2 + -0x8000,8);
  *(long *)(lVar6 + 0x118) = lVar4;
  if (lVar4 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x110) + 0xb8))();
    lVar4 = *(long *)(lVar6 + 0x118);
  }
  FUN_00760770(lVar4,lVar4 + 0xb8,lVar2 + -0x80b8,0);
  *(long *)(lVar6 + 0x108) = lVar4;
  return;
}


