/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01090360; name: FUN_01090360
 */


void FUN_01090360(long *param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  puVar7 = PTR_DAT_02710848;
  lVar3 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 - lVar3 != 0) {
    uVar11 = 0;
    do {
      uVar10 = (uint)uVar11;
      uVar1 = uVar10 + 1;
      if (uVar10 == 0) {
        lVar13 = 0;
      }
      else {
        uVar14 = (0x20 - LZCOUNT(uVar1)) -
                 (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar1)) & 0x1f) &
                         uVar1) == 0);
        uVar15 = uVar14 >> 6;
        if ((uVar14 & 0x3f) != 0) {
          uVar15 = uVar15 + 1;
        }
        uVar9 = 0;
        if (uVar15 != 0) {
          uVar9 = uVar14 / uVar15;
        }
        puVar12 = *(ulong **)(*(long *)puVar7 + 0x98);
        uVar2 = 0;
        if (uVar15 <= uVar14) {
          uVar2 = (uint)(0xffffffffffffffff >> (-uVar9 & 0x3f));
        }
        uVar15 = *puVar12;
        uVar14 = puVar12[1];
        do {
          uVar9 = uVar15 ^ uVar14;
          iVar5 = (int)uVar15;
          iVar6 = (int)uVar14;
          uVar14 = uVar9 >> 0x1b | uVar9 << 0x25;
          uVar15 = uVar9 ^ (uVar15 >> 0x28 | uVar15 << 0x18) ^ uVar9 << 0x10;
          uVar8 = iVar5 + iVar6 & uVar2;
        } while (uVar1 <= uVar8);
        *puVar12 = uVar15;
        puVar12[1] = uVar14;
        lVar13 = (long)(int)uVar8;
        if (uVar10 != uVar8) {
          *(undefined2 *)(*param_1 + uVar11 * 2) = *(undefined2 *)(*param_1 + lVar13 * 2);
        }
      }
      *(short *)(*param_1 + lVar13 * 2) = (short)uVar11;
      uVar11 = (ulong)uVar1;
    } while (uVar11 < (ulong)(lVar4 - lVar3 >> 1));
  }
  *(undefined4 *)(param_1 + 6) = 0;
  return;
}


