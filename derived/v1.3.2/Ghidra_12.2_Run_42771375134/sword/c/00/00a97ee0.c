/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a97ee0; name: FUN_00a97ee0
 */


undefined4 FUN_00a97ee0(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = param_3 & param_2 & 0xff;
  if (uVar1 != 0) {
    uVar7 = param_3 & param_2 & 1;
    uVar6 = (uVar1 >> 1 & 1) + uVar7 + (uVar1 >> 2 & 1) + (uVar1 >> 3 & 1) + (uVar1 >> 4 & 1) +
            (uVar1 >> 5 & 1) + (uVar1 >> 6 & 1);
    if (uVar6 == 1) {
      uVar8 = 0;
    }
    else {
      puVar9 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      if (uVar6 == 0) {
        uVar11 = *puVar9;
        uVar8 = (int)puVar9[1] + (int)uVar11;
        uVar10 = puVar9[1] ^ uVar11;
        *puVar9 = uVar10 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar10 << 0x10;
        puVar9[1] = uVar10 >> 0x1b | uVar10 << 0x25;
      }
      else {
        uVar10 = (0x20 - LZCOUNT(uVar6)) -
                 (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar6)) & 0x1f) &
                         uVar6) == 0);
        uVar11 = uVar10 >> 6;
        if ((uVar10 & 0x3f) != 0) {
          uVar11 = uVar11 + 1;
        }
        uVar12 = 0;
        if (uVar11 != 0) {
          uVar12 = uVar10 / uVar11;
        }
        uVar2 = 0;
        if (uVar11 <= uVar10) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar12 & 0x3f));
        }
        uVar11 = *puVar9;
        uVar10 = puVar9[1];
        do {
          uVar12 = uVar11 ^ uVar10;
          iVar3 = (int)uVar11;
          iVar4 = (int)uVar10;
          uVar10 = uVar12 >> 0x1b | uVar12 << 0x25;
          uVar11 = uVar12 ^ (uVar11 >> 0x28 | uVar11 << 0x18) ^ uVar12 << 0x10;
          uVar8 = iVar3 + iVar4 & uVar2;
        } while (uVar6 <= uVar8);
        *puVar9 = uVar11;
        puVar9[1] = uVar10;
      }
    }
    uVar6 = uVar8;
    if ((uVar7 == 0) || (uVar6 = uVar8 - 1, 0 < (int)uVar8)) {
      uVar7 = uVar6;
      if (((uVar1 >> 1 & 1) != 0) && (uVar7 = uVar6 - 1, (int)uVar6 < 1)) {
        return 1;
      }
      uVar6 = uVar7;
      if (((uVar1 >> 2 & 1) != 0) && (uVar6 = uVar7 - 1, (int)uVar7 < 1)) {
        return 2;
      }
      uVar7 = uVar6;
      if (((uVar1 >> 3 & 1) != 0) && (uVar7 = uVar6 - 1, (int)uVar6 < 1)) {
        return 3;
      }
      uVar6 = uVar7;
      if (((uVar1 >> 4 & 1) != 0) && (uVar6 = uVar7 - 1, (int)uVar7 < 1)) {
        return 4;
      }
      uVar7 = uVar6;
      if (((uVar1 >> 5 & 1) != 0) && (uVar7 = uVar6 - 1, (int)uVar6 < 1)) {
        return 5;
      }
      uVar5 = 6;
      if (((uint)((int)uVar7 < 1) & uVar1 >> 6) == 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  return 0;
}


