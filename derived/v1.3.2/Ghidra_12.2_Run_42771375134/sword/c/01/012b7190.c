/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7190; name: FUN_012b7190
 */


undefined8 FUN_012b7190(long param_1)

{
  ulong uVar1;
  int *piVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0));
  if (((uVar1 & 1) != 0) && (*(long *)(param_1 + 0xa0) != 0)) {
    uVar1 = FUN_0131acf0();
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    FUN_0131acf0(lVar3);
    piVar2 = *(int **)(lVar3 + 0x130);
    fVar6 = 0.0;
    if ((0xe < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[7], uVar1 != 0)) {
      fVar6 = (float)*(int *)((long)piVar2 + uVar1);
    }
    uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    FUN_0131acf0(lVar3);
    piVar2 = *(int **)(lVar3 + 0x130);
    fVar5 = 0.0;
    if ((8 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar1 != 0)) {
      fVar5 = (float)*(int *)((long)piVar2 + uVar1);
    }
    uVar1 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0));
    if ((uVar1 & 1) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(param_1 + 0xa0);
    }
    FUN_0131acf0(lVar3);
    piVar2 = *(int **)(lVar3 + 0x130);
    fVar7 = 0.0;
    if ((6 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
       (uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar1 != 0)) {
      fVar7 = (float)*(int *)((long)piVar2 + uVar1);
    }
    uVar1 = FUN_012b7310(param_1);
    fVar4 = fVar5 + fVar5;
    if ((uVar1 & 1) == 0) {
      fVar4 = fVar5;
    }
    fVar7 = fVar6 + fVar4 + fVar7;
    fVar5 = (float)FUN_01029020(fVar7,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
    if (fVar6 < fVar5) {
      if (fVar5 <= fVar6 + fVar4) {
        return 2;
      }
      if (fVar5 <= fVar7) {
        return 3;
      }
    }
  }
  return 1;
}


