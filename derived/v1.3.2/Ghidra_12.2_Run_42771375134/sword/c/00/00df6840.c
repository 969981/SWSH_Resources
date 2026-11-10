/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00df6840; name: FUN_00df6840
 */


void FUN_00df6840(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  puVar3 = PTR_DAT_02710798;
  lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x290);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar4 = FUN_01503010(lVar12,*(undefined4 *)(param_1 + 0xb0));
  iVar5 = FUN_01503590(lVar12,uVar4);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  uVar2 = iVar5 - 1;
  if (uVar2 < 4) {
    uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
    iVar14 = *(int *)(&DAT_01d49ef0 + uVar7);
    iVar13 = *(int *)(&DAT_01d4b070 + uVar7);
    iVar5 = iVar5 + 0xac;
    lVar12 = *(long *)(*(long *)puVar3 + 0x290);
  }
  else {
    iVar13 = 0;
    iVar5 = 0xac;
    iVar14 = 0x17;
    lVar12 = *(long *)(*(long *)puVar3 + 0x290);
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  uVar7 = FUN_00df6a40(param_1);
  if ((uVar7 & 1) == 0) {
    puVar8 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
    uVar2 = (iVar14 - iVar13) + 1;
    if (uVar2 == 0) {
      uVar7 = *puVar8;
      uVar9 = (int)puVar8[1] + (int)uVar7;
      uVar10 = puVar8[1] ^ uVar7;
      *puVar8 = uVar10 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar10 << 0x10;
      puVar8[1] = uVar10 >> 0x1b | uVar10 << 0x25;
    }
    else {
      uVar10 = (0x20 - LZCOUNT(uVar2)) -
               (ulong)((0xffffffffU >> (ulong)(0x21U - (int)(0x20 - LZCOUNT(uVar2)) & 0x1f) & uVar2)
                      == 0);
      uVar7 = uVar10 >> 6;
      if ((uVar10 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar11 = 0;
      if (uVar7 != 0) {
        uVar11 = uVar10 / uVar7;
      }
      uVar1 = 0;
      if (uVar7 <= uVar10) {
        uVar1 = (uint)(0xffffffffffffffff >> (-uVar11 & 0x3f));
      }
      uVar7 = *puVar8;
      uVar10 = puVar8[1];
      do {
        uVar11 = uVar7 ^ uVar10;
        iVar5 = (int)uVar7;
        iVar6 = (int)uVar10;
        uVar10 = uVar11 >> 0x1b | uVar11 << 0x25;
        uVar7 = uVar11 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar11 << 0x10;
        uVar9 = iVar5 + iVar6 & uVar1;
      } while (uVar2 <= uVar9);
      *puVar8 = uVar7;
      puVar8[1] = uVar10;
    }
    iVar5 = iVar13 + uVar9;
    iVar6 = FUN_01502fd0(lVar12,*(undefined4 *)(param_1 + 0xb0));
    if (iVar5 < iVar14) {
      iVar13 = iVar5 + 1;
    }
    if (iVar6 == iVar5) {
      iVar5 = iVar13;
    }
  }
  FUN_01502ff0(lVar12,*(undefined4 *)(param_1 + 0xb0),iVar5);
  FUN_00df6b20(param_1);
  if (lVar12 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00df6a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  return;
}


