/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f00bf0; name: FUN_00f00bf0
 */


void FUN_00f00bf0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (*(int *)(param_1 + 0x230) == 0) {
    lVar8 = 3;
    lVar9 = 0;
    *(undefined4 *)(param_1 + 0x230) = 3;
  }
  else {
    puVar7 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar1 = *(int *)(param_1 + 0x230) + 1;
    if (uVar1 == 0) {
      uVar12 = *puVar7;
      uVar10 = (int)puVar7[1] + (int)uVar12;
      uVar11 = puVar7[1] ^ uVar12;
      *puVar7 = uVar11 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar11 << 0x10;
      puVar7[1] = uVar11 >> 0x1b | uVar11 << 0x25;
    }
    else {
      uVar11 = (0x20 - LZCOUNT(uVar1)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) & uVar1)
                      == 0);
      uVar12 = uVar11 >> 6;
      if ((uVar11 & 0x3f) != 0) {
        uVar12 = uVar12 + 1;
      }
      uVar13 = 0;
      if (uVar12 != 0) {
        uVar13 = uVar11 / uVar12;
      }
      uVar3 = 0;
      if (uVar12 <= uVar11) {
        uVar3 = (uint)(0xffffffffffffffff >> (-uVar13 & 0x3f));
      }
      uVar12 = *puVar7;
      uVar11 = puVar7[1];
      do {
        uVar13 = uVar12 ^ uVar11;
        iVar5 = (int)uVar12;
        iVar6 = (int)uVar11;
        uVar11 = uVar13 >> 0x1b | uVar13 << 0x25;
        uVar12 = uVar13 ^ (uVar12 >> 0x28 | uVar12 << 0x18) ^ uVar13 << 0x10;
        uVar10 = iVar5 + iVar6 & uVar3;
      } while (uVar1 <= uVar10);
      *puVar7 = uVar12;
      puVar7[1] = uVar11;
    }
    lVar8 = (long)*(int *)(param_1 + 0x230);
    lVar9 = (long)(int)uVar10;
  }
  lVar2 = param_1 + 0x220;
  uVar4 = *(undefined4 *)(lVar2 + lVar9 * 4);
  *(undefined4 *)(lVar2 + lVar9 * 4) = *(undefined4 *)(lVar2 + lVar8 * 4);
  *(undefined4 *)(lVar2 + (long)*(int *)(param_1 + 0x230) * 4) = uVar4;
  *(int *)(param_1 + 0x230) = *(int *)(param_1 + 0x230) + -1;
                    /* WARNING: Could not recover jumptable at 0x00f00cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x1d0) + 400))(*(long **)(param_1 + 0x1d0),param_1 + 0x300);
  return;
}


