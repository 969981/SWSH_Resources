/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c6010; name: FUN_004c6010
 */


long FUN_004c6010(long *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  
  plVar6 = (long *)PTR_DAT_027134f8;
  for (lVar9 = *(long *)(param_2 + 0x48); PTR_DAT_027134f8 = (undefined *)plVar6, lVar9 != 0;
      lVar9 = *(long *)(lVar9 + 0x40)) {
    plVar6 = (long *)FUN_004699d0(lVar9);
    if ((*plVar6 == *param_1) && (plVar6[1] == param_1[1])) {
      return 0;
    }
    plVar6 = (long *)PTR_DAT_027134f8;
  }
  if (*(uint *)(plVar6 + 1) != 0) {
    plVar7 = (long *)*plVar6;
    lVar9 = (ulong)*(uint *)(plVar6 + 1) << 3;
    do {
      lVar10 = *plVar7;
      if ((((*(long *)(lVar10 + 0x70) == *param_1) && (*(long *)(lVar10 + 0x78) == param_1[1])) &&
          (*(int *)(lVar10 + 0x348) != 2)) &&
         ((*(long *)(lVar10 + 0x20) == 0 ||
          (*(char *)(*(long *)(*(long *)(lVar10 + 0x20) + 0x10) + 0x54) != '\0'))))
      goto LAB_004c60e8;
      plVar7 = plVar7 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  lVar10 = FUN_004c6a50(param_1);
  if (lVar10 != 0) {
LAB_004c60e8:
    FUN_004d0be0(param_2,lVar10,param_3);
    if ((param_3 - 1U < 2) && (uVar3 = *(uint *)(plVar6 + 1), 1 < uVar3)) {
      iVar2 = *(int *)(lVar10 + 0x350);
      lVar9 = *plVar6;
      uVar1 = 0xffffffff;
      do {
        uVar13 = uVar1;
        uVar1 = uVar13 + 1;
      } while (*(int *)(*(long *)(lVar9 + (ulong)uVar1 * 8) + 0x350) < iVar2);
      uVar13 = uVar13 + 2;
      if ((uVar13 < uVar3) &&
         (lVar11 = *(long *)(lVar9 + (ulong)uVar13 * 8), *(int *)(lVar11 + 0x350) == iVar2)) {
        uVar8 = uVar1;
        do {
          if (uVar1 < uVar13) {
            lVar9 = *(long *)(lVar9 + (ulong)(uVar13 - 1) * 8);
            uVar3 = FUN_004d1240(lVar11,iVar2);
            uVar4 = FUN_004d1240(lVar9,*(undefined4 *)(lVar9 + 0x350));
            if (uVar3 < uVar4) {
              lVar14 = (ulong)uVar8 << 3;
              lVar12 = (ulong)uVar13 << 3;
              uVar3 = uVar8;
              do {
                *(long *)(*plVar6 + lVar14) = lVar11;
                *(long *)(*plVar6 + lVar12) = lVar9;
                if (uVar3 <= uVar1) break;
                lVar11 = *(long *)(*plVar6 + lVar12 + -8);
                uVar3 = uVar3 - 1;
                lVar9 = *(long *)(*plVar6 + (ulong)uVar3 * 8);
                uVar4 = FUN_004d1240(lVar11,*(undefined4 *)(lVar11 + 0x350));
                uVar5 = FUN_004d1240(lVar9,*(undefined4 *)(lVar9 + 0x350));
                lVar14 = lVar14 + -8;
                lVar12 = lVar12 + -8;
              } while (uVar4 < uVar5);
            }
            uVar3 = *(uint *)(plVar6 + 1);
          }
          uVar13 = uVar13 + 1;
          if (uVar3 <= uVar13) {
            return lVar10;
          }
          lVar9 = *plVar6;
          lVar11 = *(long *)(lVar9 + (ulong)uVar13 * 8);
          uVar8 = uVar8 + 1;
        } while (*(int *)(lVar11 + 0x350) == iVar2);
      }
    }
  }
  return lVar10;
}


