/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00473ec0; name: FUN_00473ec0
 */


/* WARNING: Removing unreachable block (ram,0x00473f70) */

void FUN_00473ec0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  puVar4 = PTR_DAT_02712a90;
  if (param_2 == (long *)0x0) {
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x28);
  if (uVar2 != 0) {
    lVar7 = (ulong)uVar2 << 3;
    puVar5 = *(undefined8 **)(param_1 + 0x20);
    do {
      if ((long *)*puVar5 == param_2) {
        return;
      }
      lVar7 = lVar7 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar7 != 0);
  }
  uVar9 = *(uint *)(param_1 + 0x2c);
  if (uVar2 < uVar9) goto LAB_00473fe0;
  uVar9 = uVar9 + 1;
  puVar5 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 << 3);
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x20);
  if ((puVar6 != (undefined8 *)0x0) && (puVar6 != puVar5)) {
    uVar3 = *(uint *)(param_1 + 0x28);
    if (uVar3 != 0) {
      *puVar5 = *puVar6;
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          lVar8 = 1;
        }
        else {
          lVar7 = 0;
          do {
            lVar8 = lVar7;
            puVar5[lVar8 + 1] = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8 * 8 + 8);
            puVar5[lVar8 + 2] = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8 * 8 + 0x10);
            lVar7 = lVar8 + 2;
          } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar3 & 1) == 0) goto LAB_00473fcc;
        }
        puVar5[lVar8] = *(undefined8 *)(*(long *)(param_1 + 0x20) + lVar8 * 8);
      }
LAB_00473fcc:
      puVar6 = *(undefined8 **)(param_1 + 0x20);
    }
    FUN_00404870(*(undefined4 *)puVar4,puVar6);
  }
  *(undefined8 **)(param_1 + 0x20) = puVar5;
  *(uint *)(param_1 + 0x2c) = uVar9;
LAB_00473fe0:
  if (uVar2 < uVar9) {
    plVar1 = (long *)(*(long *)(param_1 + 0x20) + (ulong)*(uint *)(param_1 + 0x28) * 8);
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) + 1;
    if (plVar1 != (long *)0x0) {
      *plVar1 = (long)param_2;
                    /* WARNING: Could not recover jumptable at 0x00474020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2);
      return;
    }
  }
  return;
}


