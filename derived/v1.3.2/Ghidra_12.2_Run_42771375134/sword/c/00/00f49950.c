/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f49950; name: FUN_00f49950
 */


undefined4 FUN_00f49950(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  bool bVar6;
  uint *puVar7;
  ulong *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  
  if (99 < param_2 - 1U) {
    return 0;
  }
  uVar10 = (ulong)(param_2 - 1U & 0xff) / 10;
  puVar7 = *(uint **)(*(long *)(param_1 + 0x68) + 400);
  piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
  uVar11 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  if (uVar11 == 0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = (uint *)((long)piVar1 + uVar11);
    puVar7 = (uint *)((long)puVar7 + (ulong)*puVar7);
  }
  puVar12 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
  iVar5 = *(int *)((long)puVar12 + uVar10 * 4 + (ulong)*puVar12 + 4);
  puVar8 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
  uVar11 = *puVar8;
  uVar15 = puVar8[1];
  do {
    uVar16 = uVar11 ^ uVar15;
    iVar14 = (int)uVar15;
    iVar13 = (int)uVar11;
    uVar15 = uVar16 >> 0x1b | uVar16 << 0x25;
    uVar11 = uVar16 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar16 << 0x10;
    uVar3 = iVar13 + iVar14 & 0x7f;
  } while (99 < uVar3);
  *puVar8 = uVar11;
  puVar8[1] = uVar15;
  if (*puVar7 == 0) {
    return 0;
  }
  iVar13 = 0;
  puVar12 = puVar7 + 2;
  do {
    uVar11 = (ulong)puVar12[-1];
    lVar17 = uVar11 - (long)*(int *)((long)puVar12 + (uVar11 - 4));
    lVar2 = uVar11 + *(ushort *)((long)puVar12 + lVar17 + 2);
    iVar13 = *(int *)((long)puVar12 +
                     uVar10 * 4 + lVar2 + (ulong)*(uint *)((long)puVar12 + lVar2 + -4)) + iVar13;
    if ((int)uVar3 < iVar13) {
      if (*(ushort *)((long)puVar12 + lVar17 + -4) < 5) {
        return 0;
      }
      uVar9 = 0;
      if ((ulong)*(ushort *)((long)puVar12 + lVar17) != 0) {
        uVar9 = *(undefined4 *)((long)puVar12 + *(ushort *)((long)puVar12 + lVar17) + uVar11 + -4);
      }
      uVar4 = 0;
      if (iVar13 <= iVar5) {
        uVar4 = uVar9;
      }
      return uVar4;
    }
    bVar6 = puVar12 < puVar7 + (ulong)*puVar7 + 1;
    puVar12 = puVar12 + 1;
  } while (bVar6);
  return 0;
}


