/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7410; name: FUN_012b7410
 */


ulong FUN_012b7410(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  byte *pbVar9;
  ulong uVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  uint local_88;
  byte local_84 [4];
  undefined4 local_80;
  byte local_7c;
  undefined4 local_78;
  byte local_74;
  undefined4 local_70;
  byte local_6c;
  undefined4 local_68;
  byte local_64;
  
  uVar7 = FUN_012b65b0();
  local_84[0] = (byte)(uVar7 >> 0x1f) & 1 ^ 1;
  local_88 = 0x21;
  pbVar9 = (byte *)((ulong)&local_88 | 4);
  iVar6 = FUN_012b65b0(param_1);
  local_7c = (byte)((uint)(iVar6 + -2) >> 0x1f) ^ 1;
  local_80 = 0x25;
  iVar6 = FUN_012b65b0(param_1);
  local_74 = (byte)((uint)(iVar6 + -1) >> 0x1f) ^ 1;
  local_78 = 0x26;
  iVar6 = FUN_012b65b0(param_1);
  local_6c = (byte)((uint)(iVar6 + -4) >> 0x1f) ^ 1;
  local_70 = 0x27;
  iVar6 = FUN_012b65b0(param_1);
  local_68 = 0x28;
  local_64 = (byte)((uint)(iVar6 + -6) >> 0x1f) ^ 1;
  uVar7 = 4;
  uVar15 = 5;
  do {
    uVar10 = uVar7;
    if (uVar10 == 0) {
      bVar4 = *pbVar9;
      puVar5 = &local_88;
      pbVar17 = pbVar9;
    }
    else {
      uVar12 = (0x40 - LZCOUNT(uVar15)) -
               (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar15)) & 0x3f) & uVar15)
                      == 0);
      uVar7 = uVar12 >> 6;
      if ((uVar12 & 0x3f) != 0) {
        uVar7 = uVar7 + 1;
      }
      uVar13 = 0;
      if (uVar7 != 0) {
        uVar13 = uVar12 / uVar7;
      }
      puVar11 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar2 = 0;
      if (uVar7 <= uVar12) {
        uVar2 = 0xffffffffffffffff >> (-uVar13 & 0x3f);
      }
      uVar7 = *puVar11;
      uVar12 = puVar11[1];
      do {
        uVar14 = uVar7 ^ uVar12;
        uVar13 = uVar7 + uVar12;
        uVar12 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar7 = uVar14 ^ (uVar7 >> 0x28 | uVar7 << 0x18) ^ uVar14 << 0x10;
        uVar13 = uVar13 & uVar2;
      } while (uVar15 <= uVar13);
      pbVar17 = (byte *)((ulong)(&local_88 + uVar13 * 2) | 4);
      *puVar11 = uVar7;
      puVar11[1] = uVar12;
      bVar4 = *pbVar17;
      puVar5 = &local_88 + uVar13 * 2;
    }
    if (bVar4 != 0) {
      uVar3 = *puVar5;
      uVar15 = (ulong)uVar3;
      uVar7 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar7 & 1) != 0) && (lVar16 = *(long *)(param_1 + 0xc0), lVar16 != 0)) {
        if (0x54 < uVar3) {
          return uVar15;
        }
        FUN_0131acf0(lVar16);
        piVar8 = *(int **)(lVar16 + 0x130);
        puVar1 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (4 - (long)*piVar8)));
        if (*(char *)((long)puVar1 + uVar15 + *puVar1 + 4) != '\0') {
          return uVar15;
        }
      }
    }
    *puVar5 = (&local_88)[uVar10 * 2];
    *pbVar17 = local_84[uVar10 * 8];
    uVar7 = uVar10 - 1;
    uVar15 = uVar10;
    if (uVar10 == 0) {
      return 0x57;
    }
  } while( true );
}


