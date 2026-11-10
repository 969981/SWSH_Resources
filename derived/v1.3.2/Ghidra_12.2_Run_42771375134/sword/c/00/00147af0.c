/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00147af0; name: FUN_00147af0
 */


void FUN_00147af0(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x1b0);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(uint *)(lVar2 + -8) = *(uint *)(lVar2 + -8) | 0x80000000;
    plVar3 = *(long **)(lVar1 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3 + 1) < 0))) {
      *(long **)(lVar1 + 0x10) = plVar3;
      plVar3 = (long *)*plVar3;
      *(long **)(lVar1 + 0x18) = plVar3;
    }
  }
  lVar2 = *(long *)(param_1 + 0x1b8);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(uint *)(lVar2 + -8) = *(uint *)(lVar2 + -8) | 0x80000000;
    plVar3 = *(long **)(lVar1 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3 + 1) < 0))) {
      *(long **)(lVar1 + 0x10) = plVar3;
      plVar3 = (long *)*plVar3;
      *(long **)(lVar1 + 0x18) = plVar3;
    }
  }
  lVar2 = *(long *)(param_1 + 0x1a0);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(uint *)(lVar2 + -8) = *(uint *)(lVar2 + -8) | 0x80000000;
    plVar3 = *(long **)(lVar1 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3 + 1) < 0))) {
      *(long **)(lVar1 + 0x10) = plVar3;
      plVar3 = (long *)*plVar3;
      *(long **)(lVar1 + 0x18) = plVar3;
    }
  }
  lVar2 = *(long *)(param_1 + 0x1a8);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x1c8);
    *(uint *)(lVar2 + -8) = *(uint *)(lVar2 + -8) | 0x80000000;
    plVar3 = *(long **)(lVar1 + 0x18);
    while ((plVar3 != (long *)0x0 && (*(int *)(plVar3 + 1) < 0))) {
      *(long **)(lVar1 + 0x10) = plVar3;
      plVar3 = (long *)*plVar3;
      *(long **)(lVar1 + 0x18) = plVar3;
    }
  }
  return;
}


