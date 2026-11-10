/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f486e0; name: FUN_00f486e0
 */


byte FUN_00f486e0(long param_1,long param_2,long param_3,ushort param_4)

{
  uint *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  
  if (param_4 == 0) {
    return 0;
  }
  uVar4 = 0;
  uVar5 = 0;
  bVar6 = 0;
  do {
    puVar8 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
    piVar9 = (int *)((long)puVar8 + (ulong)*puVar8);
    puVar8 = (uint *)((long)piVar9 + (ulong)*(ushort *)((long)piVar9 + (4 - (long)*piVar9)));
    puVar8 = (uint *)((long)puVar8 + (ulong)*puVar8);
    uVar10 = (ulong)*puVar8;
    if (uVar10 != 0) {
      lVar12 = 0;
      do {
        uVar2 = (ulong)*(uint *)((long)puVar8 + lVar12 + 4);
        lVar11 = lVar12 + (uVar2 - (long)*(int *)((long)puVar8 + lVar12 + uVar2 + 4));
        uVar13 = (uint)*(ushort *)(param_2 + uVar5 * 2);
        if ((*(ushort *)((long)puVar8 + lVar11 + 4) < 0x1b) ||
           (uVar3 = (ulong)*(ushort *)((long)puVar8 + lVar11 + 0x1e), uVar3 == 0)) {
          if (uVar13 == 0) goto LAB_00f487a4;
        }
        else if (*(uint *)((long)puVar8 + lVar12 + uVar2 + uVar3 + 4) == uVar13) {
LAB_00f487a4:
          puVar1 = (uint *)((long)puVar8 + lVar12 + 4);
          if (puVar1 != puVar8 + uVar10 + 1) {
            piVar9 = (int *)((long)puVar1 + (ulong)*puVar1);
            goto LAB_00f487d4;
          }
          break;
        }
        lVar12 = lVar12 + 4;
      } while (uVar10 * 4 != lVar12);
    }
    piVar9 = (int *)0x0;
LAB_00f487d4:
    if ((*(ushort *)((long)piVar9 - (long)*piVar9) < 0x19) ||
       (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[0xc], uVar10 == 0)) {
      iVar7 = 0;
      *(undefined4 *)(param_3 + uVar5 * 4) = 0;
    }
    else {
      iVar7 = *(int *)((long)piVar9 + uVar10);
      *(int *)(param_3 + uVar5 * 4) = iVar7;
    }
    if (uVar5 != 0) {
      if (uVar5 - 1 < 3) {
        lVar12 = 0;
      }
      else {
        lVar12 = 0;
        piVar9 = (int *)(param_3 + 8);
        do {
          lVar12 = lVar12 + 4;
          bVar6 = bVar6 | iVar7 == piVar9[-2] | iVar7 == piVar9[-1] | iVar7 == *piVar9 |
                  iVar7 == piVar9[1];
          piVar9 = piVar9 + 4;
        } while (uVar5 - (uVar4 & 3) != lVar12);
      }
      if ((uVar5 & 3) != 0) {
        lVar11 = -(uVar4 & 3);
        piVar9 = (int *)(param_3 + lVar12 * 4);
        do {
          lVar11 = lVar11 + 1;
          bVar6 = bVar6 | iVar7 == *piVar9;
          piVar9 = piVar9 + 1;
        } while (lVar11 != 0);
      }
    }
    uVar5 = uVar5 + 1;
    uVar4 = (ulong)((int)uVar4 + 1);
    if (uVar5 == param_4) {
      return bVar6;
    }
  } while( true );
}


