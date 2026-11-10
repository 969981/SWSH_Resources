/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0136cbd0; name: FUN_0136cbd0
 */


undefined4 FUN_0136cbd0(long param_1)

{
  int *piVar1;
  uint *puVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  lVar8 = *(long *)(param_1 + 0x68);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(char *)(lVar8 + 0x170) == '\0') {
    return 0;
  }
  puVar11 = *(uint **)(lVar8 + 400);
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar12);
  uVar14 = (ulong)*puVar2;
  uVar7 = *(uint *)((long)puVar2 + uVar14);
  if (uVar7 == 0) {
    return 0;
  }
  lVar8 = (ulong)uVar7 * 4;
  if ((ulong)uVar7 == 0) {
    puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  }
  else {
    lVar3 = *puVar11 + uVar14 + uVar12;
    lVar9 = 0;
    uVar7 = 0;
    do {
      while( true ) {
        uVar12 = (ulong)*(uint *)((long)puVar11 + lVar9 + lVar3 + 4);
        lVar6 = lVar9 + (uVar12 - (long)*(int *)((long)puVar11 + lVar9 + uVar12 + lVar3 + 4)) +
                        lVar3;
        if ((*(ushort *)((long)puVar11 + lVar6 + 4) < 7) ||
           (uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar6 + 10), uVar14 == 0)) break;
        lVar6 = lVar9 + uVar12 + uVar14 + lVar3;
        lVar9 = lVar9 + 4;
        uVar7 = *(int *)((long)puVar11 + lVar6 + 4) + uVar7;
        if (lVar8 == lVar9) goto LAB_0136cc94;
      }
      lVar9 = lVar9 + 4;
    } while (lVar8 != lVar9);
LAB_0136cc94:
    if (uVar7 == 1) {
      uVar12 = 0;
      goto LAB_0136cd78;
    }
    puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    if (uVar7 != 0) {
      uVar14 = (0x20 - LZCOUNT(uVar7)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar7)) & 0x1f) & uVar7)
                      == 0);
      uVar12 = uVar14 >> 6;
      if ((uVar14 & 0x3f) != 0) {
        uVar12 = uVar12 + 1;
      }
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar14 / uVar12;
      }
      uVar16 = 0;
      if (uVar12 <= uVar14) {
        uVar16 = 0xffffffffffffffff >> (-uVar13 & 0x3f);
      }
      uVar14 = *puVar10;
      uVar13 = puVar10[1];
      do {
        uVar15 = uVar14 ^ uVar13;
        uVar12 = uVar14 + uVar13;
        uVar13 = uVar15 >> 0x1b | uVar15 << 0x25;
        uVar14 = uVar15 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar15 << 0x10;
        uVar12 = uVar12 & uVar16;
      } while (uVar7 <= (uint)uVar12);
      *puVar10 = uVar14;
      puVar10[1] = uVar13;
      goto LAB_0136cd78;
    }
  }
  uVar14 = *puVar10;
  uVar12 = (ulong)(uint)((int)puVar10[1] + (int)uVar14);
  uVar13 = puVar10[1] ^ uVar14;
  *puVar10 = uVar13 ^ (uVar14 >> 0x28 | uVar14 << 0x18) ^ uVar13 << 0x10;
  puVar10[1] = uVar13 >> 0x1b | uVar13 << 0x25;
LAB_0136cd78:
  puVar11 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  uVar13 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar13);
  uVar16 = (ulong)*puVar2;
  uVar14 = (ulong)*(uint *)((long)puVar2 + uVar16);
  if (uVar14 == 0) {
    return 0;
  }
  lVar9 = *puVar11 + uVar16 + uVar13;
  lVar8 = 0;
  while( true ) {
    uVar13 = (ulong)*(uint *)((long)puVar11 + lVar8 + lVar9 + 4);
    lVar3 = lVar8 + (uVar13 - (long)*(int *)((long)puVar11 + lVar8 + uVar13 + lVar9 + 4)) + lVar9;
    uVar4 = *(ushort *)((long)puVar11 + lVar3 + 4);
    if ((uVar4 < 7) || (uVar16 = (ulong)*(ushort *)((long)puVar11 + lVar3 + 10), uVar16 == 0)) {
      iVar5 = 0;
    }
    else {
      iVar5 = -*(int *)((long)puVar11 + lVar8 + uVar13 + uVar16 + lVar9 + 4);
    }
    uVar7 = (int)uVar12 + iVar5;
    if ((int)uVar7 < 1) break;
    uVar12 = (ulong)uVar7;
    lVar8 = lVar8 + 4;
    if (uVar14 * 4 == lVar8) {
      return 0;
    }
  }
  if (uVar4 < 5) {
    return 0;
  }
  uVar12 = (ulong)*(ushort *)((long)puVar11 + lVar3 + 8);
  if (uVar12 == 0) {
    return 0;
  }
  return *(undefined4 *)((long)puVar11 + lVar8 + uVar12 + uVar13 + lVar9 + 4);
}


