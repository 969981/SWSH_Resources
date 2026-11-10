/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ff2c0; name: FUN_004ff2c0
 */


long * FUN_004ff2c0(long param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (*(int *)(param_1 + 0x31c) < 1) {
    return (long *)0x0;
  }
  lVar7 = 0;
  plVar8 = (long *)(param_1 + 0x10);
  while (((uint)(1 << (ulong)(*(int *)(param_1 + 0x318) + (int)lVar7 & 0x1f)) < param_2 ||
         (plVar6 = (long *)*plVar8, plVar6 == (long *)0x0))) {
    lVar7 = lVar7 + 1;
    plVar8 = plVar8 + 3;
    if (*(int *)(param_1 + 0x31c) <= lVar7) {
      return (long *)0x0;
    }
  }
  if (*plVar6 == 0) {
    plVar8[-1] = 0;
    *plVar8 = 0;
    *(int *)(plVar8 + -2) = (int)plVar8[-2] + -1;
  }
  else {
    *plVar8 = *plVar6;
    *(int *)(plVar8 + -2) = (int)plVar8[-2] + -1;
  }
  if ((int)lVar7 != 0) {
    iVar4 = *(int *)(param_1 + 0x300);
    do {
      lVar9 = lVar7 + -1;
      uVar2 = *(int *)(param_1 + 0x318) + (int)lVar9;
      uVar5 = *(int *)(param_1 + 0x310) - param_2;
      if ((1 << (ulong)(uVar2 & 0x1f) & uVar5) != 0) {
        puVar3 = (undefined8 *)
                 (*(long *)(param_1 + 0x300) +
                 (ulong)((*(int *)(param_1 + 0x310) + ((int)plVar6 - iVar4)) -
                        (-1 << (ulong)(uVar2 & 0x1f) & uVar5)));
        if (puVar3 == (undefined8 *)0x0) {
          puVar11 = (undefined8 *)(param_1 + lVar9 * 0x18 + 0x10);
          puVar10 = (undefined8 *)*puVar11;
          puRam0000000000000000 = puVar10;
          *puVar11 = 0;
        }
        else {
          *puVar3 = 0;
          puVar11 = (undefined8 *)(param_1 + lVar9 * 0x18 + 0x10);
          puVar10 = (undefined8 *)*puVar11;
          if ((puVar10 != (undefined8 *)0x0) && (puVar10 < puVar3)) {
            do {
              puVar11 = puVar10;
              puVar10 = (undefined8 *)*puVar11;
            } while ((puVar10 != (undefined8 *)0x0 && puVar10 <= puVar3) &&
                     (puVar10 == (undefined8 *)0x0 || puVar3 != puVar10));
          }
          *puVar3 = puVar10;
          *puVar11 = puVar3;
        }
        if (puVar10 == (undefined8 *)0x0) {
          *(undefined8 **)(param_1 + lVar9 * 0x18 + 8) = puVar3;
        }
        *(int *)(param_1 + lVar9 * 0x18) = *(int *)(param_1 + lVar9 * 0x18) + 1;
      }
      bVar1 = 1 < lVar7;
      lVar7 = lVar9;
    } while (bVar1);
  }
  return plVar6;
}


