/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004164b0; name: FUN_004164b0
 */


long * FUN_004164b0(long param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  plVar12 = *(long **)(param_1 + 0x38);
  if (plVar12 == (long *)0x0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return (long *)0x0;
    }
    if (*(int *)(param_1 + 0x30) != 3) {
      if (*(int *)(param_1 + 0x30) != 1) {
        return (long *)0x0;
      }
      plVar12 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x10);
      if (plVar12 != (long *)0x0) {
        FUN_00494d30(plVar12);
      }
      *(long **)(param_1 + 0x38) = plVar12;
      return plVar12;
    }
    lVar7 = FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x38);
    if (lVar7 == 0) {
      *(undefined8 *)(param_1 + 0x38) = 0;
      return (long *)0x0;
    }
    FUN_00494320(lVar7,*(undefined4 *)(param_1 + 0x28));
    *(long *)(param_1 + 0x38) = lVar7;
    iVar6 = FUN_00494360(lVar7,*(undefined2 *)(param_1 + 0x44));
    plVar12 = *(long **)(param_1 + 0x38);
    if (iVar6 != 1) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
      *(undefined8 *)(param_1 + 0x38) = 0;
      return (long *)0x0;
    }
    if ((plVar12 != (long *)0x0) && (*(char *)(param_1 + 0x40) != '\0')) {
      iVar6 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        plVar8 = *(long **)(param_1 + 0x20);
        uVar9 = (ulong)*(uint *)(param_1 + 0x28) * 8 - 8;
        uVar11 = uVar9 >> 3;
        uVar2 = (int)uVar11 + 1;
        uVar10 = (ulong)uVar2 & 3;
        if (uVar9 < 0x18) {
          iVar6 = 0;
        }
        else {
          iVar6 = 0;
          lVar7 = (uVar10 - 1) - uVar11;
          do {
            lVar3 = *plVar8;
            plVar4 = plVar8 + 1;
            plVar1 = plVar8 + 2;
            plVar5 = plVar8 + 3;
            plVar8 = plVar8 + 4;
            iVar6 = *(int *)(*plVar5 + 0x1c) +
                    *(int *)(*plVar1 + 0x1c) +
                    *(int *)(*plVar4 + 0x1c) + *(int *)(lVar3 + 0x1c) + iVar6;
            lVar7 = lVar7 + 4;
          } while (lVar7 != 0);
        }
        if ((uVar2 & 3) != 0) {
          lVar7 = -uVar10;
          do {
            iVar6 = *(int *)(*plVar8 + 0x1c) + iVar6;
            lVar7 = lVar7 + 1;
            plVar8 = plVar8 + 1;
          } while (lVar7 != 0);
        }
      }
      *(int *)((long)plVar12 + 0xc) = iVar6;
      *(int *)(*(long *)(param_1 + 0x38) + 8) = iVar6;
      return *(long **)(param_1 + 0x38);
    }
  }
  return plVar12;
}


