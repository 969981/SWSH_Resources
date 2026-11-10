/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0100c020; name: FUN_0100c020
 */


int FUN_0100c020(void)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  
  puVar1 = PTR_DAT_02710798;
  lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar10 == 0) {
    uVar2 = FUN_01510f00(0,0x22936f41299e4801);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar2 = FUN_01510f00(lVar10,0x22936f41299e4801);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar3 = FUN_01510f00(0,0xa8094414ff80169d);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar3 = FUN_01510f00(lVar10,0xa8094414ff80169d);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar4 = FUN_01510f00(0,0x82d47cf97f29d95e);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar4 = FUN_01510f00(lVar10,0x82d47cf97f29d95e);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar5 = FUN_01510f00(0,0xe10dc20971bfded1);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar5 = FUN_01510f00(lVar10,0xe10dc20971bfded1);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar6 = FUN_01510f00(0,0xcfe185418bcbbcde);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar6 = FUN_01510f00(lVar10,0xcfe185418bcbbcde);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar7 = FUN_01510f00(0,0xe0522bd5fe5a7d5f);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar7 = FUN_01510f00(lVar10,0xe0522bd5fe5a7d5f);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar8 = FUN_01510f00(0,0xd02c8568c90b46c2);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar8 = FUN_01510f00(lVar10,0xd02c8568c90b46c2);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  lVar10 = *(long *)(*(long *)puVar1 + 0x1b8);
  if (lVar10 == 0) {
    uVar9 = FUN_01510f00(0,0x2277dcc8375fd6a8);
  }
  else {
    plVar11 = (long *)(lVar10 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    uVar9 = FUN_01510f00(lVar10,0x2277dcc8375fd6a8);
    (**(code **)(*plVar11 + 0x18))(plVar11);
  }
  return (uVar2 & 1) + (uVar3 & 1) + (uVar4 & 1) + (uVar5 & 1) + (uVar6 & 1) + (uVar7 & 1) +
         (uVar8 & 1) + (uVar9 & 1);
}


