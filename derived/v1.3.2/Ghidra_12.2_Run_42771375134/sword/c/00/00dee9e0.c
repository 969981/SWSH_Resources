/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00dee9e0; name: FUN_00dee9e0
 */


void FUN_00dee9e0(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(char *)(param_1 + 0xe3) == '\0') {
    if (*(int *)(param_1 + 0xe8) == 2) {
      iVar5 = *(int *)(PTR_DAT_0271ed60 + 0x74);
      if (*(int *)(PTR_DAT_0271ed60 + 0x78) == 0) {
        *(int *)(param_1 + 0x84) = iVar5;
        return;
      }
      puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar1 = *(int *)(PTR_DAT_0271ed60 + 0x78) + 1;
      if (uVar1 == 0) {
LAB_00deebdc:
        uVar9 = *puVar6;
        uVar8 = puVar6[1];
        uVar10 = uVar8 ^ uVar9;
        *puVar6 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
        puVar6[1] = uVar10 >> 0x1b | uVar10 << 0x25;
        *(int *)(param_1 + 0x84) = (int)uVar8 + (int)uVar9 + iVar5;
        return;
      }
      uVar8 = (0x20 - LZCOUNT(uVar1)) -
              (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                     == 0);
      uVar9 = uVar8 >> 6;
      if ((uVar8 & 0x3f) != 0) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar2 = 0;
      if (uVar9 <= uVar8) {
        uVar2 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
      }
      uVar9 = *puVar6;
      uVar8 = puVar6[1];
      do {
        uVar10 = uVar9 ^ uVar8;
        iVar3 = (int)uVar9;
        iVar4 = (int)uVar8;
        uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar9 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
        uVar7 = iVar3 + iVar4 & uVar2;
      } while (uVar1 <= uVar7);
    }
    else {
      iVar5 = *(int *)(PTR_DAT_0271ed60 + 0x6c);
      if (*(int *)(PTR_DAT_0271ed60 + 0x70) == 0) {
        *(int *)(param_1 + 0x84) = iVar5;
        return;
      }
      puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar1 = *(int *)(PTR_DAT_0271ed60 + 0x70) + 1;
      if (uVar1 == 0) goto LAB_00deebdc;
      uVar8 = (0x20 - LZCOUNT(uVar1)) -
              (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                     == 0);
      uVar9 = uVar8 >> 6;
      if ((uVar8 & 0x3f) != 0) {
        uVar9 = uVar9 + 1;
      }
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar8 / uVar9;
      }
      uVar2 = 0;
      if (uVar9 <= uVar8) {
        uVar2 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
      }
      uVar9 = *puVar6;
      uVar8 = puVar6[1];
      do {
        uVar10 = uVar9 ^ uVar8;
        iVar3 = (int)uVar9;
        iVar4 = (int)uVar8;
        uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
        uVar9 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
        uVar7 = iVar3 + iVar4 & uVar2;
      } while (uVar1 <= uVar7);
    }
  }
  else {
    iVar5 = *(int *)(PTR_DAT_0271ed60 + 0x7c);
    if (*(int *)(PTR_DAT_0271ed60 + 0x80) == 0) {
      *(int *)(param_1 + 0x84) = iVar5;
      return;
    }
    puVar6 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = *(int *)(PTR_DAT_0271ed60 + 0x80) + 1;
    if (uVar1 == 0) goto LAB_00deebdc;
    uVar8 = (0x20 - LZCOUNT(uVar1)) -
            (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1) ==
                   0);
    uVar9 = uVar8 >> 6;
    if ((uVar8 & 0x3f) != 0) {
      uVar9 = uVar9 + 1;
    }
    uVar10 = 0;
    if (uVar9 != 0) {
      uVar10 = uVar8 / uVar9;
    }
    uVar2 = 0;
    if (uVar9 <= uVar8) {
      uVar2 = (uint)(0xffffffffffffffff >> (-uVar10 & 0x3f));
    }
    uVar9 = *puVar6;
    uVar8 = puVar6[1];
    do {
      uVar10 = uVar9 ^ uVar8;
      iVar3 = (int)uVar9;
      iVar4 = (int)uVar8;
      uVar8 = uVar10 >> 0x1b | uVar10 << 0x25;
      uVar9 = uVar10 ^ (uVar9 >> 0x28 | uVar9 << 0x18) ^ uVar10 << 0x10;
      uVar7 = iVar3 + iVar4 & uVar2;
    } while (uVar1 <= uVar7);
  }
  *puVar6 = uVar9;
  puVar6[1] = uVar8;
  *(uint *)(param_1 + 0x84) = uVar7 + iVar5;
  return;
}


