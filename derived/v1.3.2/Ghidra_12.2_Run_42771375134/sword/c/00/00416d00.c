/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00416d00; name: FUN_00416d00
 */


void FUN_00416d00(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  plVar1 = *(long **)(param_1 + 0x10);
  if (uVar2 != 0) {
    plVar5 = plVar1;
    do {
      if (((*(uint *)(*plVar5 + 0x30) | 2) == 2) && ((long *)plVar5[2] != (long *)0x0)) {
        (**(code **)(*(long *)plVar5[2] + 0x10))();
        plVar1 = *(long **)(param_1 + 0x10);
        uVar2 = *(uint *)(param_1 + 0x18);
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1 + (ulong)uVar2 * 3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90);
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  lVar3 = *(long *)(param_1 + 0x30);
  lVar4 = lVar3;
  if (*(int *)(param_1 + 0x38) != 0) {
    do {
      (**(code **)(**(long **)(lVar4 + 8) + 0x10))();
      lVar3 = *(long *)(param_1 + 0x30);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != lVar3 + (ulong)*(uint *)(param_1 + 0x38) * 0x10);
  }
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_00404870(*(undefined4 *)PTR_DAT_02712a90,lVar3);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


