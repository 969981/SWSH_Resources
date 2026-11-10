/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00604eb0; name: FUN_00604eb0
 */


undefined8 FUN_00604eb0(long param_1,uint *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (uint *)0x0) {
    return 6;
  }
  if (*(long *)(param_2 + 2) < 0) {
    return 6;
  }
  if (*(long *)(param_2 + 4) < 0) {
    return 6;
  }
  if (4 < *param_2) {
    return 6;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0xa0) + 0x50) + 0x18) = 0;
  lVar8 = *(long *)(*(long *)(param_1 + 0xb0) + 0x18);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0xb0);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
LAB_00604f48:
                    /* WARNING: Could not recover jumptable at 0x00604f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(param_1 + 0xa0));
    return uVar6;
  }
  if (((*(ulong *)(param_1 + 0x10) & 1) != 0) || (((uint)*(ulong *)(param_1 + 0x10) >> 1 & 1) == 0))
  {
    FUN_00604b70();
    return 0;
  }
  if (*param_2 != 0) {
    return 7;
  }
  lVar7 = *(long *)(param_2 + 2);
  if (param_2[6] == 0) {
    uVar3 = param_2[7];
    lVar9 = *(long *)(param_2 + 4);
    lVar5 = lVar7;
  }
  else {
    lVar5 = (long)(lVar7 * (ulong)param_2[6] + 0x24) / 0x48;
    uVar3 = param_2[7];
    lVar9 = *(long *)(param_2 + 4);
  }
  if (uVar3 == 0) {
    lVar10 = lVar9;
  }
  else {
    lVar10 = (long)(lVar9 * (ulong)uVar3 + 0x24) / 0x48;
  }
  lVar2 = lVar5;
  if (lVar9 != 0) {
    lVar2 = lVar10;
  }
  if (lVar7 != 0) {
    lVar10 = lVar2;
    lVar2 = lVar5;
  }
  uVar1 = lVar2 + 0x20U & 0xffffffffffffffc0;
  if ((uVar1 != 0) && (uVar11 = lVar10 + 0x20U & 0xffffffffffffffc0, uVar11 != 0)) {
    iVar4 = *(int *)(param_1 + 0x38);
    if (iVar4 < 1) {
      return 0x17;
    }
    lVar7 = 0;
    plVar12 = (long *)(*(long *)(param_1 + 0x40) + 0x18);
    do {
      if ((uVar11 == (*plVar12 + 0x20U & 0xffffffffffffffc0)) &&
         (uVar1 == (plVar12[-1] + 0x20U & 0xffffffffffffffc0))) {
        if ((int)lVar7 < 0) {
          return 6;
        }
        if (iVar4 <= (int)lVar7) {
          return 6;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0xb8);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          FUN_00604a20();
          return 0;
        }
        goto LAB_00604f48;
      }
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 4;
    } while (lVar7 < iVar4);
  }
  return 0x17;
}


