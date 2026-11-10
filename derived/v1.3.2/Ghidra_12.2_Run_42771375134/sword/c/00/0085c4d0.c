/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0085c4d0; name: FUN_0085c4d0
 */


void FUN_0085c4d0(undefined8 *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  
  iVar2 = *(int *)(param_2 + 8);
  if (iVar2 != 0) {
    lVar9 = *(long *)(param_2 + 0x10);
    lVar4 = FUN_008241b0(param_1,iVar2);
    iVar10 = *(int *)param_1[2];
    iVar1 = *(int *)(param_1 + 1);
    uVar3 = iVar10 - iVar1;
    if ((0 < iVar2) && (0 < (int)uVar3)) {
      lVar12 = 0;
      do {
        FUN_00860e00(*(undefined8 *)(lVar9 + 8 + lVar12 * 8),*(undefined8 *)(lVar4 + lVar12 * 8));
        lVar12 = lVar12 + 1;
        if ((int)uVar3 <= lVar12) break;
      } while (lVar12 < iVar2);
    }
    if ((int)uVar3 < iVar2) {
      uVar6 = -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3;
      uVar8 = *param_1;
      puVar13 = (undefined8 *)(lVar9 + uVar6);
      iVar10 = (iVar1 + iVar2) - iVar10;
      puVar11 = (undefined8 *)(lVar4 + uVar6);
      do {
        puVar13 = puVar13 + 1;
        uVar7 = *puVar13;
        uVar5 = FUN_008608f0(uVar7,uVar8);
        FUN_00860e00(uVar7,uVar5);
        iVar10 = iVar10 + -1;
        *puVar11 = uVar5;
        puVar11 = puVar11 + 1;
      } while (iVar10 != 0);
    }
    iVar2 = *(int *)(param_1 + 1) + iVar2;
    *(int *)(param_1 + 1) = iVar2;
    if (*(int *)param_1[2] < iVar2) {
      *(int *)param_1[2] = iVar2;
    }
  }
  return;
}


