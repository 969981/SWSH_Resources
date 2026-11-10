/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012b7bf0; name: FUN_012b7bf0
 */


ulong FUN_012b7bf0(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  int *piVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  float fVar23;
  uint local_a8;
  char local_a4 [4];
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
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
  
  FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  bVar5 = true;
  local_a8 = 0x21;
  local_a4[0] = '\x01';
  FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  local_a0 = 0x20;
  local_9c = 1;
  uVar8 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  uVar8 = (uVar8 & 0xff) - 1 >> 0x1f ^ 1;
  local_98 = 0x25;
  local_94 = (undefined1)uVar8;
  FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  local_90 = 0x26;
  local_8c = 1;
  uVar9 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  uVar9 = (uVar9 & 0xff) - 2 >> 0x1f ^ 1;
  local_88 = 0x27;
  local_84 = (undefined1)uVar9;
  uVar10 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  uVar10 = (uVar10 & 0xff) - 3 >> 0x1f ^ 1;
  local_80 = 0x28;
  local_7c = (undefined1)uVar10;
  uVar11 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  uVar11 = (uVar11 & 0xff) - 1 >> 0x1f ^ 1;
  local_78 = 0x22;
  local_74 = (undefined1)uVar11;
  bVar6 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  if (bVar6 < 2) {
    cVar7 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
    if (cVar7 == '\0') {
      bVar5 = false;
    }
    else {
      uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar13 & 1) == 0) || (lVar20 = *(long *)(param_1 + 0xc0), lVar20 == 0)) {
        bVar5 = false;
      }
      else {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        bVar5 = *(char *)((long)puVar1 + (ulong)*puVar1 + 0x26) != '\0';
      }
      bVar5 = (bool)(bVar5 ^ 1);
    }
  }
  local_70 = 0x23;
  local_6c = bVar5;
  uVar12 = FUN_0087d530(*(undefined8 *)(param_1 + 0x58));
  uVar12 = (uVar12 & 0xff) - 3 >> 0x1f ^ 1;
  local_68 = 0x24;
  local_64 = (undefined1)uVar12;
  fVar23 = (float)FUN_01029020(0x3f800000,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x98));
  if (((0.5 <= fVar23) ||
      (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xa0)), (uVar13 & 1) == 0)) ||
     (*(long *)(param_1 + 0xa0) == 0)) goto LAB_012b8074;
  uVar13 = FUN_0131acf0();
  if ((uVar13 & 1) == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(long *)(param_1 + 0xa0);
  }
  FUN_0131acf0(lVar20);
  piVar14 = *(int **)(lVar20 + 0x130);
  if ((0xc < *(ushort *)((long)piVar14 - (long)*piVar14)) &&
     (uVar13 = (ulong)((ushort *)((long)piVar14 - (long)*piVar14))[6], uVar13 != 0)) {
    iVar4 = *(int *)((long)piVar14 + uVar13);
    if (iVar4 == 2) {
      uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar13 & 1) != 0) && (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x24) != '\0') {
          return 0x20;
        }
      }
      goto LAB_012b8074;
    }
    if (iVar4 == 1) {
      if (((uVar10 != 0) &&
          (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0)) &&
         (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2c) != '\0') {
          return 0x28;
        }
      }
      if (((uVar9 != 0) &&
          (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0)) &&
         (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2b) != '\0') {
          return 0x27;
        }
      }
      uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar13 & 1) != 0) && (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x2a) != '\0') {
          return 0x26;
        }
      }
      if (((uVar8 != 0) &&
          (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0)) &&
         (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x29) != '\0') {
          return 0x25;
        }
      }
      goto LAB_012b8074;
    }
    if (iVar4 != 0) goto LAB_012b8074;
  }
  if (((uVar12 != 0) && (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0))
     && (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
    FUN_0131acf0(lVar20);
    piVar14 = *(int **)(lVar20 + 0x130);
    puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
    if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x28) != '\0') {
      return 0x24;
    }
  }
  if (((bVar5) && (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0)) &&
     (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
    FUN_0131acf0(lVar20);
    piVar14 = *(int **)(lVar20 + 0x130);
    puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
    if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x27) != '\0') {
      return 0x23;
    }
  }
  if (((uVar11 != 0) && (uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0)), (uVar13 & 1) != 0))
     && (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
    FUN_0131acf0(lVar20);
    piVar14 = *(int **)(lVar20 + 0x130);
    puVar1 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
    if (*(char *)((long)puVar1 + (ulong)*puVar1 + 0x26) != '\0') {
      return 0x22;
    }
  }
LAB_012b8074:
  uVar13 = 8;
  uVar21 = 9;
  do {
    uVar15 = uVar13;
    if (uVar15 == 0) {
      cVar7 = *(char *)((ulong)&local_a8 | 4);
      pcVar22 = (char *)((ulong)&local_a8 | 4);
      puVar1 = &local_a8;
    }
    else {
      uVar17 = (0x40 - LZCOUNT(uVar21)) -
               (ulong)((0xffffffffffffffffU >> (0x41U - (0x40 - LZCOUNT(uVar21)) & 0x3f) & uVar21)
                      == 0);
      uVar13 = uVar17 >> 6;
      if ((uVar17 & 0x3f) != 0) {
        uVar13 = uVar13 + 1;
      }
      uVar18 = 0;
      if (uVar13 != 0) {
        uVar18 = uVar17 / uVar13;
      }
      puVar16 = *(ulong **)(*(long *)PTR_DAT_02710848 + 0x98);
      uVar3 = 0;
      if (uVar13 <= uVar17) {
        uVar3 = 0xffffffffffffffff >> (-uVar18 & 0x3f);
      }
      uVar13 = *puVar16;
      uVar17 = puVar16[1];
      do {
        uVar19 = uVar13 ^ uVar17;
        uVar18 = uVar13 + uVar17;
        uVar17 = uVar19 >> 0x1b | uVar19 << 0x25;
        uVar13 = uVar19 ^ (uVar13 >> 0x28 | uVar13 << 0x18) ^ uVar19 << 0x10;
        uVar18 = uVar18 & uVar3;
      } while (uVar21 <= uVar18);
      pcVar22 = (char *)((ulong)(&local_a8 + uVar18 * 2) | 4);
      *puVar16 = uVar13;
      puVar16[1] = uVar17;
      cVar7 = *pcVar22;
      puVar1 = &local_a8 + uVar18 * 2;
    }
    if (cVar7 != '\0') {
      uVar8 = *puVar1;
      uVar21 = (ulong)uVar8;
      uVar13 = FUN_0131acf0(*(undefined8 *)(param_1 + 0xc0));
      if (((uVar13 & 1) != 0) && (lVar20 = *(long *)(param_1 + 0xc0), lVar20 != 0)) {
        if (0x54 < uVar8) {
          return uVar21;
        }
        FUN_0131acf0(lVar20);
        piVar14 = *(int **)(lVar20 + 0x130);
        puVar2 = (uint *)((long)piVar14 + (ulong)*(ushort *)((long)piVar14 + (4 - (long)*piVar14)));
        if (*(char *)((long)puVar2 + uVar21 + *puVar2 + 4) != '\0') {
          return uVar21;
        }
      }
    }
    *puVar1 = (&local_a8)[uVar15 * 2];
    *pcVar22 = local_a4[uVar15 * 8];
    uVar13 = uVar15 - 1;
    uVar21 = uVar15;
    if (uVar15 == 0) {
      return 0x55;
    }
  } while( true );
}


