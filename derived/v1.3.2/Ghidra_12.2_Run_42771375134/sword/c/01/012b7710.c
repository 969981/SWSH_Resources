/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7710; name: FUN_012b7710
 */


ulong FUN_012b7710(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  uint local_a0;
  byte local_9c [4];
  undefined4 local_98;
  byte local_94;
  undefined4 local_90;
  byte local_8c;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  
  iVar6 = FUN_012b65b0();
  local_a0 = 0x2a;
  local_9c[0] = (byte)((uint)(iVar6 + -4) >> 0x1f) ^ 1;
  pbVar8 = (byte *)((ulong)&local_a0 | 4);
  iVar6 = FUN_012b65b0(param_1);
  local_94 = (byte)((uint)(iVar6 + -5) >> 0x1f) ^ 1;
  local_98 = 0x2b;
  iVar6 = FUN_012b65b0(param_1);
  local_90 = 0x30;
  local_80 = 0x25;
  local_78 = 0x26;
  local_8c = (byte)((uint)(iVar6 + -4) >> 0x1f) ^ 1;
  local_88 = 0x21;
  local_70 = 0x27;
  local_84 = 1;
  local_7c = 1;
  local_74 = 1;
  local_6c = 1;
  local_68 = 0x28;
  local_64 = 1;
  uVar13 = 7;
  uVar15 = 8;
  do {
    uVar9 = uVar13;
    if (uVar9 == 0) {
      bVar4 = *pbVar8;
      puVar5 = &local_a0;
      pbVar17 = pbVar8;
    }
    else {
      uVar11 = (0x40 - LZCOUNT(uVar15)) -
               (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar15)) & 0x3f) & uVar15)
                      == 0);
      uVar13 = uVar11 >> 6;
      if ((uVar11 & 0x3f) != 0) {
        uVar13 = uVar13 + 1;
      }
      uVar12 = 0;
      if (uVar13 != 0) {
        uVar12 = uVar11 / uVar13;
      }
      puVar10 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar2 = 0;
      if (uVar13 <= uVar11) {
        uVar2 = 0xffffffffffffffff >> (-uVar12 & 0x3f);
      }
      uVar13 = *puVar10;
      uVar11 = puVar10[1];
      do {
        uVar14 = uVar13 ^ uVar11;
        uVar12 = uVar13 + uVar11;
        uVar11 = uVar14 >> 0x1b | uVar14 << 0x25;
        uVar13 = uVar14 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar14 << 0x10;
        uVar12 = uVar12 & uVar2;
      } while (uVar15 <= uVar12);
      pbVar17 = (byte *)((ulong)(&local_a0 + uVar12 * 2) | 4);
      *puVar10 = uVar13;
      puVar10[1] = uVar11;
      bVar4 = *pbVar17;
      puVar5 = &local_a0 + uVar12 * 2;
    }
    if (bVar4 != 0) {
      uVar3 = *puVar5;
      uVar15 = (ulong)uVar3;
      uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar13 & 1) != 0) && (lVar16 = *(long *)(param_1 + 0xc0), lVar16 != 0)) {
        if (0x54 < uVar3) {
          return uVar15;
        }
        FUN_0131acf0(lVar16);
        piVar7 = *(int **)(lVar16 + 0x130);
        puVar1 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (4 - (long)*piVar7)));
        if (*(char *)((long)puVar1 + uVar15 + *puVar1 + 4) != '\0') {
          return uVar15;
        }
      }
    }
    *puVar5 = (&local_a0)[uVar9 * 2];
    *pbVar17 = local_9c[uVar9 * 8];
    uVar13 = uVar9 - 1;
    uVar15 = uVar9;
    if (uVar9 == 0) {
      return 0x55;
    }
  } while( true );
}


