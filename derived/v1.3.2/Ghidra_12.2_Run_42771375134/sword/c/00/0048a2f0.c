/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a2f0; name: FUN_0048a2f0
 */


/* WARNING: Removing unreachable block (ram,0x0048a36c) */

long * FUN_0048a2f0(int param_1)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_02712a90;
  plVar5 = (long *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,0x18);
  if (plVar5 == (long *)0x0) {
    return (long *)0x0;
  }
  *(undefined2 *)(plVar5 + 2) = 0;
  *plVar5 = 0;
  plVar5[1] = 0;
  if (param_1 == 0) {
    return plVar5;
  }
  puVar6 = (undefined1 *)FUN_00404690(*(undefined4 *)puVar4,param_1);
  if (puVar6 == (undefined1 *)0x0) {
    if (*plVar5 != 0) {
      *(undefined4 *)(plVar5 + 1) = 0;
      FUN_00404870(*(undefined4 *)puVar4);
      *plVar5 = 0;
      *(undefined4 *)((long)plVar5 + 0xc) = 0;
    }
    FUN_00404870(*(undefined4 *)puVar4,plVar5);
    return (long *)0x0;
  }
  puVar7 = (undefined1 *)*plVar5;
  if (puVar7 == (undefined1 *)0x0 || puVar7 == puVar6) goto LAB_0048a3ec;
  uVar3 = *(uint *)(plVar5 + 1);
  if (uVar3 != 0) {
    if (uVar3 == 1) {
      lVar9 = 0;
    }
    else {
      lVar9 = 0;
      do {
        puVar1 = puVar6 + lVar9;
        *puVar1 = puVar7[lVar9];
        lVar2 = *plVar5 + lVar9;
        lVar9 = lVar9 + 2;
        puVar1[1] = *(undefined1 *)(lVar2 + 1);
        puVar7 = (undefined1 *)*plVar5;
      } while ((ulong)uVar3 - ((ulong)uVar3 & 1) != lVar9);
      if ((uVar3 & 1) == 0) goto LAB_0048a3e4;
    }
    puVar6[lVar9] = puVar7[lVar9];
    puVar7 = (undefined1 *)*plVar5;
  }
LAB_0048a3e4:
  FUN_00404870(*(undefined4 *)puVar4,puVar7);
LAB_0048a3ec:
  *plVar5 = (long)puVar6;
  *(int *)(plVar5 + 1) = param_1;
  *(int *)((long)plVar5 + 0xc) = param_1;
  *puVar6 = 0;
  if (1 < *(uint *)(plVar5 + 1)) {
    uVar8 = 1;
    do {
      *(undefined1 *)(*plVar5 + uVar8) = 0;
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(plVar5 + 1));
  }
  return plVar5;
}


