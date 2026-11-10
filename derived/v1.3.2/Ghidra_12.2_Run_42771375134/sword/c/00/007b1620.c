/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007b1620; name: FUN_007b1620
 */


undefined8 FUN_007b1620(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar2 = FUN_017cb1d0(0x1d8);
  if (lVar2 != 0) {
    FUN_017b15a0(lVar2);
  }
  *(long *)(param_1 + 8) = lVar2;
  lVar2 = FUN_017cb1d0(0x98);
  if (lVar2 != 0) {
    FUN_007b1810(lVar2);
  }
  *(long *)(param_1 + 0x30) = lVar2;
  lVar2 = FUN_017cb1d0(0x98);
  if (lVar2 != 0) {
    FUN_007b1810(lVar2);
  }
  *(long *)(param_1 + 0x38) = lVar2;
  plVar3 = (long *)FUN_017cb1d0(0x30);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    plVar3[3] = 0;
    plVar3[4] = 0;
    plVar3[2] = 0;
    *plVar3 = (long)(PTR_DAT_02716938 + 0x10);
    *(undefined4 *)(plVar3 + 5) = 0;
  }
  *(long **)(param_1 + 0x40) = plVar3;
  plVar3 = (long *)FUN_017cb1d0(0x40);
  if (plVar3 != (long *)0x0) {
    *(undefined1 *)(plVar3 + 1) = 0;
    plVar3[4] = 0;
    plVar3[5] = 0;
    plVar3[6] = 0;
    plVar3[7] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = (long)(PTR_DAT_02716940 + 0x10);
    *(undefined4 *)((long)plVar3 + 0xc) = 0;
  }
  *(long **)(param_1 + 0x48) = plVar3;
  plVar3 = (long *)FUN_017cb1d0(0x28);
  if (plVar3 != (long *)0x0) {
    *(undefined2 *)(plVar3 + 1) = 0;
    plVar3[4] = 0;
    puVar1 = PTR_DAT_02716948;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *plVar3 = (long)(puVar1 + 0x10);
  }
  *(long **)(param_1 + 0x50) = plVar3;
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
    if ((uVar4 & 1) != 0) {
      return 1;
    }
    if (*(long **)(param_1 + 8) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 8) + 8))();
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  if (*(long **)(param_1 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 8))();
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  if (*(long **)(param_1 + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40) + 8))();
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 8))();
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x50) + 8))();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  return 0;
}


