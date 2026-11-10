/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00493530; name: FUN_00493530
 */


void FUN_00493530(long param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  
  if ((*(ushort *)(param_1 + 0xfd) >> 6 & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0xd8) != 0) {
      lVar4 = *(long *)(param_1 + 0xd0);
      do {
        (**(code **)(**(long **)(lVar4 + 8) + 0x10))();
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != *(long *)(param_1 + 0xd0) + (ulong)*(uint *)(param_1 + 0xd8) * 0x10);
    }
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (*(long **)(param_1 + 0xe0) == (long *)0x0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0xe0) + 0x10))();
    *(undefined8 *)(param_1 + 0xe0) = 0;
    return;
  }
  if ((*(ushort *)(param_1 + 0xfd) >> 7 & 1) != 0) {
    return;
  }
  iVar6 = *(int *)(param_1 + 0xd8) + -1;
  if (iVar6 < 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  iVar8 = 0;
  while( true ) {
    while( true ) {
      iVar10 = iVar6 - iVar8;
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      uVar1 = iVar8 + (iVar10 >> 1);
      uVar11 = *(ulong *)(lVar4 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4)
                         );
      if (uVar11 <= param_2) break;
      iVar6 = uVar1 - 1;
      if (iVar6 < iVar8) {
        return;
      }
    }
    if (param_2 <= uVar11) break;
    iVar8 = uVar1 + 1;
    if (iVar6 < iVar8) {
      return;
    }
  }
  if (lVar4 + (long)(int)uVar1 * 0x10 == 0) {
    return;
  }
  (**(code **)(**(long **)(lVar4 + (long)(int)uVar1 * 0x10 + 8) + 0x10))();
  uVar1 = *(uint *)(param_1 + 0xd8);
  iVar6 = uVar1 - 1;
  if (iVar6 < 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xd0);
  iVar8 = 0;
  iVar10 = iVar6;
  do {
    while( true ) {
      iVar3 = iVar10 - iVar8;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      uVar2 = iVar8 + (iVar3 >> 1);
      uVar11 = *(ulong *)(lVar4 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar2 << 4)
                         );
      if (uVar11 <= param_2) break;
      iVar10 = uVar2 - 1;
      if (iVar10 < iVar8) {
        return;
      }
    }
    if (param_2 <= uVar11) {
      puVar7 = (undefined8 *)(lVar4 + (long)(int)uVar2 * 0x10);
      puVar5 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0x10 + -0x10);
      if (puVar7 < puVar5) {
        uVar11 = (ulong)uVar1 * 0x10 + -0x11 + (long)(int)uVar2 * -0x10;
        uVar1 = ((uint)(uVar11 >> 4) & 0xfffffff) + 1;
        if ((uVar1 & 7) != 0) {
          lVar4 = -((ulong)uVar1 & 7);
          puVar9 = puVar7;
          do {
            puVar7 = puVar9 + 2;
            *puVar9 = *puVar7;
            puVar9[1] = puVar9[3];
            lVar4 = lVar4 + 1;
            puVar9 = puVar7;
          } while (lVar4 != 0);
        }
        if (0x6f < uVar11) {
          do {
            *puVar7 = puVar7[2];
            puVar7[1] = puVar7[3];
            puVar7[2] = puVar7[4];
            puVar7[3] = puVar7[5];
            puVar7[4] = puVar7[6];
            puVar7[5] = puVar7[7];
            puVar7[6] = puVar7[8];
            puVar7[7] = puVar7[9];
            puVar7[8] = puVar7[10];
            puVar7[9] = puVar7[0xb];
            puVar7[10] = puVar7[0xc];
            puVar7[0xb] = puVar7[0xd];
            puVar7[0xc] = puVar7[0xe];
            puVar7[0xd] = puVar7[0xf];
            puVar9 = puVar7 + 0x10;
            puVar7[0xe] = *puVar9;
            puVar7[0xf] = puVar7[0x11];
            puVar7 = puVar9;
          } while (puVar9 < puVar5);
        }
        iVar6 = *(int *)(param_1 + 0xd8) + -1;
      }
      *(int *)(param_1 + 0xd8) = iVar6;
      return;
    }
    iVar8 = uVar2 + 1;
  } while (iVar8 <= iVar10);
  return;
}


