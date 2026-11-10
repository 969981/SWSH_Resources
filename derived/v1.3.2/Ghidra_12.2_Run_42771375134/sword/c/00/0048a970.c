/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048a970; name: FUN_0048a970
 */


undefined8 FUN_0048a970(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)*param_1;
  uVar3 = *(uint *)(param_1 + 1);
  plVar1 = plVar4 + uVar3;
  if (uVar3 != 0) {
    lVar5 = (ulong)uVar3 << 3;
    do {
      if (*plVar4 == param_2) goto LAB_0048a9a8;
      lVar5 = lVar5 + -8;
      plVar4 = plVar4 + 1;
    } while (lVar5 != 0);
    plVar4 = plVar1;
  }
LAB_0048a9a8:
  if (plVar1 == plVar4) {
    return 0x24;
  }
  lVar5 = *plVar4;
  if (1 < uVar3) {
    *plVar4 = plVar1[-1];
    uVar3 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar3 - 1;
  FUN_004896b0(lVar5);
  if (lVar5 != 0) {
    uVar2 = *(undefined4 *)PTR_DAT_02712a90;
    FUN_00489640(lVar5);
    FUN_00404870(uVar2,lVar5);
  }
  return 1;
}


