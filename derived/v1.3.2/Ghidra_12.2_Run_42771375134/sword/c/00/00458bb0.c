/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00458bb0; name: FUN_00458bb0
 */


ulong * FUN_00458bb0(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulong *puVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  lVar4 = *(long *)(param_1 + 0x18);
  uVar12 = 0;
  iVar5 = uVar1 - 1;
  if (-1 < iVar5) {
    do {
      while( true ) {
        iVar2 = iVar5 - uVar12;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar2 = uVar12 + (iVar2 >> 1);
        lVar7 = (long)iVar2;
        uVar9 = *(ulong *)(lVar4 + (long)iVar2 * 0x18);
        if ((uVar9 <= param_2) &&
           ((param_2 != uVar9 || (*(uint *)(lVar4 + lVar7 * 0x18 + 8) <= param_3)))) break;
        iVar5 = iVar2 + -1;
        if (iVar5 < (int)uVar12) goto LAB_00458c5c;
      }
      if ((param_2 <= uVar9) &&
         ((param_2 != uVar9 || (param_3 <= *(uint *)(lVar4 + lVar7 * 0x18 + 8))))) {
        return (ulong *)(lVar4 + lVar7 * 0x18);
      }
      uVar12 = iVar2 + 1;
    } while ((int)uVar12 <= iVar5);
  }
LAB_00458c5c:
  uVar11 = *(uint *)(param_1 + 0x24);
  if ((lVar4 == 0) || (lVar4 + (long)(int)uVar12 * 0x18 == 0)) {
    if (uVar11 <= uVar1) {
      uVar11 = uVar11 + 4;
      lVar4 = param_1;
      if (0x18 < (ulong)uVar11 * 0x18) {
        lVar4 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 * 0x18,8);
      }
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if ((lVar7 != 0) && (lVar7 != lVar4)) {
        uVar9 = (ulong)*(uint *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x20) != 0) {
          lVar7 = 0;
          do {
            puVar6 = (undefined8 *)(lVar4 + lVar7);
            if (puVar6 != (undefined8 *)0x0) {
              puVar8 = (undefined8 *)(lVar4 + lVar7);
              *puVar8 = 0xffffffffffffffff;
              *(undefined4 *)(puVar8 + 1) = 0;
              *(undefined4 *)(puVar8 + 2) = 0x3f800000;
            }
            puVar8 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar7);
            lVar7 = lVar7 + 0x18;
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
            puVar6[1] = puVar8[1];
            uVar9 = uVar9 - 1;
            *puVar6 = *puVar8;
          } while (uVar9 != 0);
          lVar7 = *(long *)(param_1 + 0x18);
        }
        if (param_1 != lVar7) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      *(long *)(param_1 + 0x18) = lVar4;
      *(uint *)(param_1 + 0x24) = uVar11;
    }
    if (uVar1 < uVar11) {
      uVar12 = *(uint *)(param_1 + 0x20);
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar12 + 1;
      puVar3 = (ulong *)(lVar4 + (ulong)uVar12 * 0x18);
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
      *puVar3 = 0xffffffffffffffff;
      lVar4 = lVar4 + (ulong)uVar12 * 0x18;
      *(undefined4 *)(lVar4 + 8) = 0;
      *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
      goto LAB_00458f1c;
    }
  }
  else {
    if (uVar11 <= uVar1) {
      uVar11 = uVar11 + 4;
      lVar4 = param_1;
      if (0x18 < (ulong)uVar11 * 0x18) {
        lVar4 = FUN_00404750(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar11 * 0x18,8);
      }
      if (lVar4 == 0) {
        return (ulong *)0x0;
      }
      lVar7 = *(long *)(param_1 + 0x18);
      if ((lVar7 != 0) && (lVar7 != lVar4)) {
        uVar9 = (ulong)*(uint *)(param_1 + 0x20);
        if (*(uint *)(param_1 + 0x20) != 0) {
          lVar7 = 0;
          do {
            puVar6 = (undefined8 *)(lVar4 + lVar7);
            if (puVar6 != (undefined8 *)0x0) {
              puVar8 = (undefined8 *)(lVar4 + lVar7);
              *puVar8 = 0xffffffffffffffff;
              *(undefined4 *)(puVar8 + 1) = 0;
              *(undefined4 *)(puVar8 + 2) = 0x3f800000;
            }
            puVar8 = (undefined8 *)(*(long *)(param_1 + 0x18) + lVar7);
            lVar7 = lVar7 + 0x18;
            *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar8 + 2);
            puVar6[1] = puVar8[1];
            uVar9 = uVar9 - 1;
            *puVar6 = *puVar8;
          } while (uVar9 != 0);
          lVar7 = *(long *)(param_1 + 0x18);
        }
        if (param_1 != lVar7) {
          FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
        }
      }
      *(long *)(param_1 + 0x18) = lVar4;
      *(uint *)(param_1 + 0x24) = uVar11;
    }
    if (uVar1 < uVar11) {
      uVar1 = *(uint *)(param_1 + 0x20);
      lVar4 = *(long *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x20) = uVar1 + 1;
      puVar6 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x18);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = 0xffffffffffffffff;
        lVar4 = lVar4 + (ulong)uVar1 * 0x18;
        *(undefined4 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
        lVar4 = *(long *)(param_1 + 0x18);
      }
      uVar9 = (ulong)uVar12;
      puVar8 = (undefined8 *)(lVar4 + uVar9 * 0x18);
      if (puVar8 < puVar6) {
        do {
          puVar10 = puVar6 + -3;
          *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar6 + -1);
          *puVar6 = *puVar10;
          puVar6[1] = puVar6[-2];
          lVar4 = *(long *)(param_1 + 0x18);
          puVar8 = (undefined8 *)(lVar4 + uVar9 * 0x18);
          puVar6 = puVar10;
        } while (puVar8 < puVar10);
      }
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0xffffffffffffffff;
        lVar4 = lVar4 + uVar9 * 0x18;
        *(undefined4 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x10) = 0x3f800000;
        lVar4 = *(long *)(param_1 + 0x18);
      }
      puVar3 = (ulong *)(lVar4 + uVar9 * 0x18);
      if (puVar3 == (ulong *)0x0) {
        return (ulong *)0x0;
      }
LAB_00458f1c:
      *puVar3 = param_2;
      *(uint *)(puVar3 + 1) = param_3;
      return puVar3;
    }
  }
  return (ulong *)0x0;
}


