/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004182f0; name: FUN_004182f0
 */


void FUN_004182f0(long param_1,long param_2,uint param_3,long *param_4,long param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ushort *puVar12;
  ushort *puVar13;
  undefined2 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  
  if (((*(byte *)(param_1 + 0x40) & 1) == 0) || (*(long *)(param_2 + 0x38) != param_5)) {
    cVar3 = *(char *)(param_2 + 0x41);
  }
  else {
    FUN_00418070(param_1,param_2,param_5);
    cVar3 = *(char *)(param_2 + 0x41);
  }
  if (cVar3 == '\0') {
    uVar17 = FUN_004947b0(param_5,param_3);
    if ((uVar17 & 1) == 0) {
      FUN_00494780(param_5,param_3);
      *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
    }
    if (*(short *)(param_2 + 0x44) == 0) {
      return;
    }
    uVar18 = *(uint *)(param_5 + 0x20);
    uVar9 = *(uint *)(param_5 + 0x24);
    *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
    puVar5 = PTR_DAT_02712a90;
    if (uVar9 <= uVar18) {
      uVar9 = uVar9 + 1;
      puVar6 = (undefined2 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar9 << 1);
      if (puVar6 == (undefined2 *)0x0) goto LAB_0041869c;
      puVar7 = *(undefined2 **)(param_5 + 0x18);
      if ((puVar7 != (undefined2 *)0x0) && (puVar7 != puVar6)) {
        uVar10 = *(uint *)(param_5 + 0x20);
        if (uVar10 != 0) {
          *puVar6 = *puVar7;
          if (uVar10 != 1) {
            if (uVar10 == 2) {
              lVar11 = 1;
            }
            else {
              lVar16 = 0;
              do {
                lVar11 = lVar16;
                puVar6[lVar11 + 1] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2 + 2);
                puVar6[lVar11 + 2] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2 + 4);
                lVar16 = lVar11 + 2;
              } while (((ulong)uVar10 - 1) - (ulong)(~uVar10 & 1) != lVar11 + 2);
              lVar11 = lVar11 + 3;
              if ((~uVar10 & 1) == 0) goto LAB_0041858c;
            }
            puVar6[lVar11] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2);
          }
LAB_0041858c:
          puVar7 = *(undefined2 **)(param_5 + 0x18);
        }
        FUN_00404870(*(undefined4 *)puVar5,puVar7);
      }
      *(undefined2 **)(param_5 + 0x18) = puVar6;
      *(uint *)(param_5 + 0x24) = uVar9;
    }
    if (uVar18 < uVar9) {
      puVar6 = (undefined2 *)(*(long *)(param_5 + 0x18) + (ulong)*(uint *)(param_5 + 0x20) * 2);
      *(uint *)(param_5 + 0x20) = *(uint *)(param_5 + 0x20) + 1;
      if (puVar6 != (undefined2 *)0x0) {
        *puVar6 = (short)param_3;
        FUN_00494820(param_5,param_3);
        *(int *)(param_5 + 0xc) =
             *(int *)(param_5 + 0xc) -
             *(int *)(*(long *)(*param_4 + (ulong)(param_3 & 0xffff) * 8) + 0x1c);
        uVar9 = (int)param_4[1] + 0xffff;
        uVar18 = (uint)*(ushort *)(param_2 + 0x44);
        if ((uVar9 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x44)) {
          uVar18 = uVar9;
        }
        if (*(uint *)(param_5 + 0x20) <= (uVar18 & 0xffff)) {
          return;
        }
        uVar4 = **(ushort **)(param_5 + 0x18);
        FUN_00494850(param_5,(ulong)uVar4);
        puVar6 = *(undefined2 **)(param_5 + 0x18);
        uVar9 = *(uint *)(param_5 + 0x20);
        iVar1 = *(int *)(*(long *)(*param_4 + (ulong)uVar4 * 8) + 0x1c);
        *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
        *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) + iVar1;
        puVar7 = puVar6 + ((ulong)uVar9 - 1);
        if (puVar6 < puVar7) {
          uVar17 = (ulong)uVar9 * 2 - 3;
          uVar9 = ((uint)(uVar17 >> 1) & 0x7fffffff) + 1;
          if ((uVar9 & 3) != 0) {
            lVar16 = -((ulong)uVar9 & 3);
            puVar14 = puVar6;
            do {
              puVar6 = puVar14 + 1;
              *puVar14 = *puVar6;
              lVar16 = lVar16 + 1;
              puVar14 = puVar6;
            } while (lVar16 != 0);
          }
          if (5 < uVar17) {
            do {
              *puVar6 = puVar6[1];
              *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + 2);
              puVar14 = puVar6 + 4;
              puVar6[3] = *puVar14;
              puVar6 = puVar14;
            } while (puVar14 < puVar7);
          }
          uVar9 = *(uint *)(param_5 + 0x20);
        }
        *(uint *)(param_5 + 0x20) = uVar9 - 1;
        return;
      }
    }
    goto LAB_0041869c;
  }
  uVar9 = (uint)*(ushort *)(param_2 + 0x44);
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  iVar1 = *(int *)(*(long *)(*param_4 + (ulong)(param_3 & 0xffff) * 8) + 0x1c);
  *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + -1;
  *(int *)(param_5 + 0xc) = *(int *)(param_5 + 0xc) - iVar1;
  *(short *)(param_5 + 0x12) = *(short *)(param_5 + 0x12) + -1;
  FUN_00494780(param_5,param_3);
  puVar5 = PTR_DAT_02712a90;
  uVar10 = *(uint *)(param_5 + 0x20);
  uVar18 = *(uint *)(param_5 + 0x24);
  if (uVar18 <= uVar10) {
    uVar18 = uVar18 + 1;
    puVar6 = (undefined2 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar18 << 1);
    if (puVar6 == (undefined2 *)0x0) goto LAB_0041869c;
    puVar7 = *(undefined2 **)(param_5 + 0x18);
    if ((puVar7 != (undefined2 *)0x0) && (puVar7 != puVar6)) {
      uVar2 = *(uint *)(param_5 + 0x20);
      if (uVar2 != 0) {
        *puVar6 = *puVar7;
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            lVar11 = 1;
          }
          else {
            lVar16 = 0;
            do {
              lVar11 = lVar16;
              puVar6[lVar11 + 1] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2 + 2);
              puVar6[lVar11 + 2] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2 + 4);
              lVar16 = lVar11 + 2;
            } while (((ulong)uVar2 - 1) - (ulong)(~uVar2 & 1) != lVar11 + 2);
            lVar11 = lVar11 + 3;
            if ((~uVar2 & 1) == 0) goto LAB_00418400;
          }
          puVar6[lVar11] = *(undefined2 *)(*(long *)(param_5 + 0x18) + lVar11 * 2);
        }
LAB_00418400:
        puVar7 = *(undefined2 **)(param_5 + 0x18);
      }
      FUN_00404870(*(undefined4 *)puVar5,puVar7);
    }
    *(undefined2 **)(param_5 + 0x18) = puVar6;
    *(uint *)(param_5 + 0x24) = uVar18;
  }
  if (uVar10 < uVar18) {
    puVar6 = (undefined2 *)(*(long *)(param_5 + 0x18) + (ulong)*(uint *)(param_5 + 0x20) * 2);
    *(uint *)(param_5 + 0x20) = *(uint *)(param_5 + 0x20) + 1;
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = (short)param_3;
      FUN_00494820(param_5,param_3);
      uVar18 = (int)param_4[1] + 0xffff;
      uVar10 = *(uint *)(param_5 + 0x20);
      if ((uVar18 & 0xffff) <= uVar9) {
        uVar9 = uVar18;
      }
      if (uVar10 <= (uVar9 & 0xffff)) {
        return;
      }
      puVar12 = *(ushort **)(param_5 + 0x18);
      uVar17 = (ulong)*puVar12;
      puVar8 = puVar12 + ((ulong)uVar10 - 1);
      if (puVar12 < puVar8) {
        uVar15 = (ulong)uVar10 * 2 - 3;
        uVar9 = ((uint)(uVar15 >> 1) & 0x7fffffff) + 1;
        if ((uVar9 & 3) != 0) {
          lVar16 = -((ulong)uVar9 & 3);
          puVar13 = puVar12;
          do {
            puVar12 = puVar13 + 1;
            *puVar13 = *puVar12;
            lVar16 = lVar16 + 1;
            puVar13 = puVar12;
          } while (lVar16 != 0);
        }
        if (5 < uVar15) {
          do {
            *puVar12 = puVar12[1];
            *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar12 + 2);
            puVar13 = puVar12 + 4;
            puVar12[3] = *puVar13;
            puVar12 = puVar13;
          } while (puVar13 < puVar8);
        }
        uVar10 = *(uint *)(param_5 + 0x20);
      }
      *(uint *)(param_5 + 0x20) = uVar10 - 1;
      FUN_00494850(param_5,uVar17);
      uVar15 = FUN_004947b0(param_5,uVar17);
      if ((uVar15 & 1) == 0) {
        *(int *)(param_5 + 0xc) =
             *(int *)(param_5 + 0xc) + *(int *)(*(long *)(*param_4 + uVar17 * 8) + 0x1c);
        *(short *)(param_5 + 0x10) = *(short *)(param_5 + 0x10) + 1;
        return;
      }
      return;
    }
  }
LAB_0041869c:
  *(undefined2 *)(param_5 + 0x12) = 0;
  return;
}


