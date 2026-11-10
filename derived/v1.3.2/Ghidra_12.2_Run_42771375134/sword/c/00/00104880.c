/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00104880; name: FUN_00104880
 */


void FUN_00104880(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  puVar2 = PTR_DAT_02710540;
  lVar6 = *(long *)PTR_DAT_02710540;
  plVar5 = *(long **)(lVar6 + 0x28);
  *(long **)(lVar6 + 0x1d0) = plVar5;
  puVar1 = PTR_DAT_027104d8;
  uVar4 = *(undefined8 *)PTR_DAT_027104d8;
  *(undefined8 *)(lVar6 + 0x1e0) = uVar4;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,8);
  *(long *)(lVar6 + 0x1d8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1d0) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x1d8);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,*(long *)puVar1 + -0xb8,0);
  *(long *)(lVar6 + 0x1c8) = lVar3;
  lVar6 = *(long *)puVar2;
  *(long **)(lVar6 + 0x1f0) = plVar5;
  puVar1 = PTR_DAT_027104f8;
  uVar4 = *(undefined8 *)PTR_DAT_027104f8;
  *(undefined8 *)(lVar6 + 0x200) = uVar4;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,8);
  *(long *)(lVar6 + 0x1f8) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x1f0) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x1f8);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,*(long *)puVar1 + -0xb8,0);
  *(long *)(lVar6 + 0x1e8) = lVar3;
  lVar6 = *(long *)puVar2;
  *(long **)(lVar6 + 0x210) = plVar5;
  puVar1 = PTR_DAT_027108f0;
  uVar4 = *(undefined8 *)PTR_DAT_027108f0;
  *(undefined8 *)(lVar6 + 0x220) = uVar4;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,8);
  *(long *)(lVar6 + 0x218) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x210) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x218);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,*(long *)puVar1 + -0xb8,0);
  *(long *)(lVar6 + 0x208) = lVar3;
  lVar6 = *(long *)puVar2;
  *(long **)(lVar6 + 0x230) = plVar5;
  puVar1 = PTR_DAT_027108f8;
  uVar4 = *(undefined8 *)PTR_DAT_027108f8;
  *(undefined8 *)(lVar6 + 0x240) = uVar4;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,8);
  *(long *)(lVar6 + 0x238) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x230) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 0x238);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,*(long *)puVar1 + -0xb8,0);
  *(long *)(lVar6 + 0x228) = lVar3;
  lVar6 = *(long *)puVar2;
  *(long **)(lVar6 + 0x250) = plVar5;
  puVar1 = PTR_DAT_02710900;
  uVar4 = *(undefined8 *)PTR_DAT_02710900;
  *(undefined8 *)(lVar6 + 0x260) = uVar4;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,uVar4,8);
  *(long *)(lVar6 + 600) = lVar3;
  if (lVar3 == 0) {
    (**(code **)(**(long **)(lVar6 + 0x250) + 0xb8))();
    lVar3 = *(long *)(lVar6 + 600);
  }
  FUN_00760770(lVar3,lVar3 + 0xb8,*(long *)puVar1 + -0xb8,0);
  *(long *)(lVar6 + 0x248) = lVar3;
  return;
}


