/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0048fe70; name: FUN_0048fe70
 */


uint * FUN_0048fe70(long *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  
  puVar5 = PTR_DAT_02712a90;
  uVar2 = *(uint *)(param_1 + 1);
  lVar8 = *param_1;
  uVar14 = 0;
  iVar9 = uVar2 - 1;
  if (-1 < iVar9) {
    do {
      while( true ) {
        iVar4 = iVar9 - uVar14;
        if (iVar4 < 0) {
          iVar4 = iVar4 + 1;
        }
        iVar4 = uVar14 + (iVar4 >> 1);
        uVar13 = *(uint *)(lVar8 + (long)iVar4 * 4);
        if (param_2 > uVar13 || uVar13 == param_2) break;
        iVar9 = iVar4 + -1;
        if (iVar9 < (int)uVar14) goto LAB_0048fee4;
      }
      if (param_2 <= uVar13) {
        return (uint *)(lVar8 + (long)iVar4 * 4);
      }
      uVar14 = iVar4 + 1;
    } while ((int)uVar14 <= iVar9);
  }
LAB_0048fee4:
  uVar13 = *(uint *)((long)param_1 + 0xc);
  if ((lVar8 == 0) || (lVar8 + (long)(int)uVar14 * 4 == 0)) {
    if (uVar13 <= uVar2) {
      uVar13 = uVar13 + 1;
      puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 2);
      if (puVar6 == (undefined4 *)0x0) {
        return (uint *)0x0;
      }
      puVar7 = (undefined4 *)*param_1;
      if ((puVar7 != (undefined4 *)0x0) && (puVar7 != puVar6)) {
        uVar14 = *(uint *)(param_1 + 1);
        if (uVar14 != 0) {
          *puVar6 = *puVar7;
          if (uVar14 != 1) {
            if (uVar14 == 2) {
              lVar10 = 1;
            }
            else {
              lVar8 = 0;
              do {
                lVar10 = lVar8;
                puVar6[lVar10 + 1] = *(undefined4 *)(*param_1 + lVar10 * 4 + 4);
                puVar6[lVar10 + 2] = *(undefined4 *)(*param_1 + lVar10 * 4 + 8);
                lVar8 = lVar10 + 2;
              } while (((ulong)uVar14 - 1) - (ulong)(~uVar14 & 1) != lVar10 + 2);
              lVar10 = lVar10 + 3;
              if ((~uVar14 & 1) == 0) goto LAB_00490048;
            }
            puVar6[lVar10] = *(undefined4 *)(*param_1 + lVar10 * 4);
          }
LAB_00490048:
          puVar7 = (undefined4 *)*param_1;
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar7);
      }
      *param_1 = (long)puVar6;
      *(uint *)((long)param_1 + 0xc) = uVar13;
    }
    if (uVar13 <= uVar2) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(*param_1 + (ulong)*(uint *)(param_1 + 1) * 4);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) + 1;
    goto joined_r0x00490078;
  }
  if (uVar13 <= uVar2) {
    uVar13 = uVar13 + 1;
    puVar6 = (undefined4 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar13 << 2);
    if (puVar6 == (undefined4 *)0x0) {
      return (uint *)0x0;
    }
    puVar7 = (undefined4 *)*param_1;
    if ((puVar7 != (undefined4 *)0x0) && (puVar7 != puVar6)) {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) {
        *puVar6 = *puVar7;
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            lVar10 = 1;
          }
          else {
            lVar8 = 0;
            do {
              lVar10 = lVar8;
              puVar6[lVar10 + 1] = *(undefined4 *)(*param_1 + lVar10 * 4 + 4);
              puVar6[lVar10 + 2] = *(undefined4 *)(*param_1 + lVar10 * 4 + 8);
              lVar8 = lVar10 + 2;
            } while (((ulong)uVar3 - 1) - (ulong)(~uVar3 & 1) != lVar10 + 2);
            lVar10 = lVar10 + 3;
            if ((~uVar3 & 1) == 0) goto LAB_0048ff6c;
          }
          puVar6[lVar10] = *(undefined4 *)(*param_1 + lVar10 * 4);
        }
LAB_0048ff6c:
        puVar7 = (undefined4 *)*param_1;
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar7);
    }
    *param_1 = (long)puVar6;
    *(uint *)((long)param_1 + 0xc) = uVar13;
  }
  if (uVar13 <= uVar2) {
    return (uint *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (uVar14 < uVar2) {
    puVar12 = (uint *)(*param_1 + (ulong)uVar2 * 4);
    do {
      puVar11 = puVar12 + -1;
      *puVar12 = *puVar11;
      puVar1 = (uint *)(*param_1 + (ulong)uVar14 * 4);
      puVar12 = puVar11;
    } while (puVar1 < puVar11);
  }
  else {
    puVar1 = (uint *)(*param_1 + (ulong)uVar14 * 4);
  }
joined_r0x00490078:
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_2;
  }
  return puVar1;
}


