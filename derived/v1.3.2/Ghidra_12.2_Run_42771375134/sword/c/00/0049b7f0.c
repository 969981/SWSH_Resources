/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049b7f0; name: FUN_0049b7f0
 */


void FUN_0049b7f0(long param_1,long param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 != 0) {
    uVar2 = (int)param_2 + param_3;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar2 / uVar3;
    }
    plVar1 = (long *)(*(long *)(param_1 + 0x18) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
    plVar6 = (long *)*plVar1;
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6;
      do {
        if ((*plVar9 == param_2) && ((int)plVar9[1] == param_3)) {
          plVar8 = (long *)0x0;
          goto LAB_0049b854;
        }
        plVar9 = (long *)plVar9[2];
      } while (plVar9 != (long *)0x0);
    }
  }
  return;
LAB_0049b854:
  plVar7 = plVar6;
  if ((*plVar7 == param_2) && ((int)plVar7[1] == param_3)) {
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 2;
    }
    *plVar1 = plVar7[2];
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    goto LAB_0049b8a0;
  }
  plVar6 = (long *)plVar7[2];
  plVar8 = plVar7;
  if ((long *)plVar7[2] == (long *)0x0) {
LAB_0049b8a0:
    FUN_0049b020(param_1,plVar9);
    uVar4 = *(undefined4 *)PTR_DAT_02712a90;
    if (plVar9[10] != 0) {
      *(undefined4 *)(plVar9 + 0xb) = 0;
      FUN_00404870(uVar4);
      plVar9[10] = 0;
      *(undefined4 *)((long)plVar9 + 0x5c) = 0;
    }
    FUN_00404870(uVar4,plVar9);
    return;
  }
  goto LAB_0049b854;
}


