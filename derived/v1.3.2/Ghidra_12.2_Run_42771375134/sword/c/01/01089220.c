/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01089220; name: FUN_01089220
 */


void FUN_01089220(long param_1,uint param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  uVar1 = (&DAT_02163540)[-(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1];
  FUN_008d37c0(uVar1,*(undefined8 *)(param_1 + 8),param_2 == 1);
  puVar2 = PTR_DAT_02710798;
  lVar4 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1f0);
  if (lVar4 == 0) {
    uVar3 = FUN_008d3fc0(uVar1,param_2 == 1);
    FUN_0150df90(0,uVar3);
    lVar4 = *(long *)(*(long *)puVar2 + 0x1e8);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    uVar3 = FUN_008d3fc0(uVar1,param_2 == 1);
    FUN_0150df90(lVar4,uVar3);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    lVar4 = *(long *)(*(long *)puVar2 + 0x1e8);
  }
  if (lVar4 == 0) {
    FUN_01524c10(0,uVar1);
  }
  else {
    plVar5 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_01524c10(lVar4,uVar1);
    (**(code **)(*plVar5 + 0x18))(plVar5);
  }
  FUN_012b2bf0(*(undefined8 *)(*(long *)PTR_DAT_02710870 + 0x60));
  return;
}


