/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004b8420; name: FUN_004b8420
 */


undefined8 FUN_004b8420(undefined8 param_1,long *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  puVar3 = PTR_DAT_02712a90;
  piVar6 = (int *)*param_2;
  uVar1 = *(uint *)(param_2 + 1);
  piVar7 = piVar6;
  if (uVar1 != 0) {
    lVar9 = (ulong)uVar1 << 2;
    do {
      if (*piVar7 == param_3) goto LAB_004b8474;
      lVar9 = lVar9 + -4;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0);
    piVar7 = piVar6 + uVar1;
  }
LAB_004b8474:
  if ((piVar7 != (int *)0x0) && (piVar6 + uVar1 != piVar7)) {
    return 0x39;
  }
  uVar10 = *(uint *)((long)param_2 + 0xc);
  if (uVar1 < uVar10) goto LAB_004b8518;
  uVar10 = uVar10 + 1;
  puVar4 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar10 << 2);
  if (puVar4 == (undefined4 *)0x0) {
    return 2;
  }
  puVar5 = (undefined4 *)*param_2;
  if ((puVar5 != (undefined4 *)0x0) && (puVar5 != puVar4)) {
    uVar2 = *(uint *)(param_2 + 1);
    if (uVar2 != 0) {
      *puVar4 = *puVar5;
      if (uVar2 != 1) {
        if (uVar2 == 2) {
          lVar8 = 1;
        }
        else {
          lVar9 = 0;
          do {
            lVar8 = lVar9;
            puVar4[lVar8 + 1] = *(undefined4 *)(*param_2 + lVar8 * 4 + 4);
            puVar4[lVar8 + 2] = *(undefined4 *)(*param_2 + lVar8 * 4 + 8);
            lVar9 = lVar8 + 2;
          } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar8 + 2);
          lVar8 = lVar8 + 3;
          if ((~uVar2 & 1) == 0) goto LAB_004b8504;
        }
        puVar4[lVar8] = *(undefined4 *)(*param_2 + lVar8 * 4);
      }
LAB_004b8504:
      puVar5 = (undefined4 *)*param_2;
    }
    FUN_00404870(*(undefined4 *)puVar3,puVar5);
  }
  *param_2 = (long)puVar4;
  *(uint *)((long)param_2 + 0xc) = uVar10;
LAB_004b8518:
  if (uVar1 < uVar10) {
    piVar7 = (int *)(*param_2 + (ulong)*(uint *)(param_2 + 1) * 4);
    *(uint *)(param_2 + 1) = *(uint *)(param_2 + 1) + 1;
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_3;
      return 1;
    }
  }
  return 2;
}


