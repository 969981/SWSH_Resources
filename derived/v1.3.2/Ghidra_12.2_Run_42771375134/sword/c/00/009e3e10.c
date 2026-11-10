/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009e3e10; name: FUN_009e3e10
 */


void FUN_009e3e10(long param_1,long *param_2,long *param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_02718af8;
  lVar4 = *(long *)PTR_DAT_02718af8;
  *(long **)(lVar4 + 0x10) = param_3;
  *(undefined8 *)(lVar4 + 0x20) = 0x300000;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x300000,8);
  *(long *)(lVar4 + 0x18) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x10) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x18);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,&LAB_002fff48,0);
  *(long *)(lVar4 + 8) = lVar2;
  lVar4 = *(long *)puVar1;
  *(long **)(lVar4 + 0x30) = param_2;
  *(undefined8 *)(lVar4 + 0x40) = 0x6d00000;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x6d00000,8);
  *(long *)(lVar4 + 0x38) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x30) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x38);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0x6cfff48,0);
  *(long *)(lVar4 + 0x28) = lVar2;
  lVar4 = *(long *)puVar1;
  lVar2 = 0xd600000;
  if ((param_4 & 1) == 0) {
    lVar2 = 0x8600000;
  }
  *(long *)(lVar4 + 0x60) = lVar2;
  *(long **)(lVar4 + 0x50) = param_3;
  lVar3 = (**(code **)(*param_3 + 0x10))(param_3,lVar2,8);
  *(long *)(lVar4 + 0x58) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x50) + 0xb8))();
    lVar3 = *(long *)(lVar4 + 0x58);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,lVar2 + -0xb8,0);
  *(long *)(lVar4 + 0x48) = lVar3;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x80) = 0x40000;
  *(long **)(lVar4 + 0x70) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x40000,8);
  *(long *)(lVar4 + 0x78) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x70) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x78);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0x3ff48,0);
  *(long *)(lVar4 + 0x68) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xa0) = 0x40000;
  *(long **)(lVar4 + 0x90) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x40000,8);
  *(long *)(lVar4 + 0x98) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x90) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x98);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0x3ff48,0);
  *(long *)(lVar4 + 0x88) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xc0) = 0x40000;
  *(long **)(lVar4 + 0xb0) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x40000,8);
  *(long *)(lVar4 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0xb0) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0xb8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0x3ff48,0);
  *(long *)(lVar4 + 0xa8) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0xe0) = 0x40000;
  *(long **)(lVar4 + 0xd0) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x40000,8);
  *(long *)(lVar4 + 0xd8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0xd0) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0xd8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0x3ff48,0);
  *(long *)(lVar4 + 200) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x100) = 0x100000;
  *(long **)(lVar4 + 0xf0) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x100000,8);
  *(long *)(lVar4 + 0xf8) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0xf0) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0xf8);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0xfff48,0);
  *(long *)(lVar4 + 0xe8) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x120) = 0x100000;
  *(long **)(lVar4 + 0x110) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x100000,8);
  *(long *)(lVar4 + 0x118) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x110) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x118);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0xfff48,0);
  *(long *)(lVar4 + 0x108) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x140) = 0x100000;
  *(long **)(lVar4 + 0x130) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x100000,8);
  *(long *)(lVar4 + 0x138) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x130) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x138);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0xfff48,0);
  *(long *)(lVar4 + 0x128) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x160) = 0x100000;
  *(long **)(lVar4 + 0x150) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x100000,8);
  *(long *)(lVar4 + 0x158) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x150) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x158);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0xfff48,0);
  *(long *)(lVar4 + 0x148) = lVar2;
  lVar4 = *(long *)puVar1;
  *(undefined8 *)(lVar4 + 0x180) = 0x100000;
  *(long **)(lVar4 + 0x170) = param_3;
  lVar2 = (**(code **)(*param_3 + 0x10))(param_3,0x100000,8);
  *(long *)(lVar4 + 0x178) = lVar2;
  if (lVar2 == 0) {
    (**(code **)(**(long **)(lVar4 + 0x170) + 0xb8))();
    lVar2 = *(long *)(lVar4 + 0x178);
  }
  FUN_00760770(lVar2,lVar2 + 0xb8,0xfff48,0);
  *(long *)(lVar4 + 0x168) = lVar2;
  *(undefined1 *)(param_1 + 400) = 1;
  return;
}


