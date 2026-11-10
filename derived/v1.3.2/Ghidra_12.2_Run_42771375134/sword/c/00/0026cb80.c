/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0026cb80; name: FUN_0026cb80
 */


void FUN_0026cb80(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint local_104;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  
  uVar5 = *(uint *)(*(long *)(param_1 + 0xe98) + 0x1110);
  if ((uVar5 == 0) || (uVar5 < 0xf)) {
    return;
  }
  lVar19 = *(long *)(*(long *)(param_1 + 0xe98) + 0x1108);
  puVar1 = (uint *)(param_1 + 0x988);
  lVar2 = param_1 + 0x1128;
  uVar21 = 0;
LAB_0026cc40:
  while( true ) {
    lVar14 = lVar19 + uVar21 * 0x3c;
    uVar3 = *(uint *)(lVar14 + 0x24);
    uVar4 = *(uint *)(lVar14 + 0x28);
    uVar6 = *(uint *)(lVar14 + 0x2c);
    bVar9 = *(byte *)(lVar14 + 0x38);
    if ((bVar9 >> 3 & 1) == 0) {
      uVar7 = uVar4;
      uVar8 = uVar3;
      if (uVar4 <= uVar3) {
        uVar7 = uVar3;
        uVar8 = uVar4;
      }
      uVar24 = uVar7 | uVar8 << 0x10;
      uVar24 = uVar24 + (uVar24 << 0xf ^ 0xffffffff);
      uVar24 = (uVar24 ^ uVar24 >> 10) * 9;
      uVar24 = uVar24 ^ uVar24 >> 6;
      uVar24 = uVar24 + (uVar24 << 0xb ^ 0xffffffff);
      bVar10 = *(byte *)(param_1 + (ulong)((uVar24 ^ uVar24 >> 0x10) & 0x7f) + 0xe14);
      while (bVar10 != 0xff) {
        uVar17 = (ulong)bVar10;
        if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar8) &&
           (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar7)) goto LAB_0026d1ac;
        bVar10 = *(byte *)(param_1 + uVar17 + 0xd94);
      }
    }
    if ((bVar9 >> 4 & 1) == 0) {
      uVar7 = uVar6;
      uVar8 = uVar4;
      if (uVar6 <= uVar4) {
        uVar7 = uVar4;
        uVar8 = uVar6;
      }
      uVar24 = uVar7 | uVar8 << 0x10;
      uVar24 = uVar24 + (uVar24 << 0xf ^ 0xffffffff);
      uVar24 = (uVar24 ^ uVar24 >> 10) * 9;
      uVar24 = uVar24 ^ uVar24 >> 6;
      uVar24 = uVar24 + (uVar24 << 0xb ^ 0xffffffff);
      bVar10 = *(byte *)(param_1 + (ulong)((uVar24 ^ uVar24 >> 0x10) & 0x7f) + 0xe14);
      while (bVar10 != 0xff) {
        uVar17 = (ulong)bVar10;
        if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar8) &&
           (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar7)) goto LAB_0026d1ac;
        bVar10 = *(byte *)(param_1 + uVar17 + 0xd94);
      }
    }
    if ((bVar9 >> 5 & 1) == 0) {
      uVar7 = uVar3;
      uVar8 = uVar6;
      if (uVar3 <= uVar6) {
        uVar7 = uVar6;
        uVar8 = uVar3;
      }
      uVar24 = uVar7 | uVar8 << 0x10;
      uVar24 = uVar24 + (uVar24 << 0xf ^ 0xffffffff);
      uVar24 = (uVar24 ^ uVar24 >> 10) * 9;
      uVar24 = uVar24 ^ uVar24 >> 6;
      uVar24 = uVar24 + (uVar24 << 0xb ^ 0xffffffff);
      bVar10 = *(byte *)(param_1 + (ulong)((uVar24 ^ uVar24 >> 0x10) & 0x7f) + 0xe14);
      while (bVar10 != 0xff) {
        uVar17 = (ulong)bVar10;
        if ((*(uint *)(param_1 + uVar17 * 8 + 0x994) == uVar8) &&
           (*(uint *)(param_1 + uVar17 * 8 + 0x998) == uVar7)) goto LAB_0026d1ac;
        bVar10 = *(byte *)(param_1 + uVar17 + 0xd94);
      }
    }
    local_b4 = 0x57f7fffff;
    puVar15 = (undefined8 *)(lVar19 + uVar21 * 0x3c);
    local_ac = 0;
    local_a0 = *puVar15;
    uStack_90 = *(undefined8 *)((long)puVar15 + 0xc);
    local_80 = puVar15[3];
    uStack_98 = (ulong)(uint)*(float *)(puVar15 + 1);
    uStack_88 = (ulong)(uint)*(float *)((long)puVar15 + 0x14);
    local_c0 = &DAT_7f7fffff00000000;
    local_b8 = 0x7f7fffff;
    uStack_78 = (ulong)(uint)*(float *)(puVar15 + 4);
    uStack_c8 = (ulong)(uint)((*(float *)(puVar15 + 1) + *(float *)((long)puVar15 + 0x14) +
                              *(float *)(puVar15 + 4)) * 0.333333);
    local_d0 = CONCAT44(((float)((ulong)local_a0 >> 0x20) + (float)((ulong)uStack_90 >> 0x20) +
                        (float)((ulong)local_80 >> 0x20)) * 0.333333,
                        ((float)local_a0 + (float)uStack_90 + (float)local_80) * 0.333333);
    uVar7 = *(uint *)(param_1 + 0x988);
                    /* try { // try from 0026ce84 to 0026ce9f has its CatchHandler @ 0026d22c */
    FUN_0028f060(param_1,&local_d0,*(undefined4 *)((long)puVar15 + 0x34),
                 *(undefined4 *)(puVar15 + 6),bVar9,*(undefined8 *)(param_1 + 0x980),puVar1,
                 param_1 + 0x900,auStack_e0);
    uVar8 = *puVar1;
    local_104 = uVar8;
    if (uVar7 < uVar8) break;
LAB_0026d1c8:
    *puVar1 = local_104;
    if (uVar7 < local_104) {
                    /* try { // try from 0026d1e0 to 0026d1eb has its CatchHandler @ 0026d228 */
      FUN_0026c490(param_1,auStack_e0);
    }
    uVar21 = uVar21 + 1;
    if ((ulong)uVar5 / 0xf <= uVar21) {
      return;
    }
  }
  uVar17 = (ulong)(uVar8 - 1);
  lVar14 = uVar17 << 6;
  iVar25 = -uVar8;
  iVar23 = 0;
  uVar24 = uVar8;
LAB_0026cf0c:
  uVar11 = uVar24 - 1;
  uVar16 = (ulong)uVar11;
                    /* try { // try from 0026cf20 to 0026cf37 has its CatchHandler @ 0026d230 */
  FUN_00231940(*(long *)(param_1 + 0x980) + uVar16 * 0x40 + 0x10,&local_a0,&uStack_90,&local_80,
               &local_e8,&local_f0);
  if ((float)local_e8 <= 0.97) {
    if ((float)local_f0 <= 0.97) {
      if ((float)local_e8 + (float)local_f0 <= 0.029999971) {
        for (bVar9 = *(byte *)(lVar2 + (ulong)(uVar3 & 0x7f)); bVar9 != 0xff;
            bVar9 = *(byte *)(param_1 + (ulong)bVar9 + 0x10a8)) {
          if (*(uint *)(param_1 + (ulong)bVar9 * 4 + 0xea8) == uVar3) goto LAB_0026d020;
        }
      }
    }
    else {
      for (bVar9 = *(byte *)(lVar2 + (ulong)(uVar6 & 0x7f)); bVar9 != 0xff;
          bVar9 = *(byte *)(param_1 + (ulong)bVar9 + 0x10a8)) {
        if (*(uint *)(param_1 + (ulong)bVar9 * 4 + 0xea8) == uVar6) goto LAB_0026d020;
      }
    }
  }
  else {
    for (bVar9 = *(byte *)(lVar2 + (ulong)(uVar4 & 0x7f)); bVar9 != 0xff;
        bVar9 = *(byte *)(param_1 + (ulong)bVar9 + 0x10a8)) {
      if (*(uint *)(param_1 + (ulong)bVar9 * 4 + 0xea8) == uVar4) goto LAB_0026d020;
    }
  }
  goto LAB_0026d188;
LAB_0026d1ac:
  uVar21 = uVar21 + 1;
  if ((ulong)uVar5 / 0xf <= uVar21) {
    return;
  }
  goto LAB_0026cc40;
LAB_0026d020:
  uVar12 = local_104 - 1;
  if (uVar11 < uVar12) {
    uVar13 = uVar17;
    if ((local_104 + (iVar23 - uVar8) & 3) != 0) {
      lVar20 = 0;
      lVar22 = lVar14;
      do {
        memcpy((void *)(*(long *)(param_1 + 0x980) + lVar22),
               (void *)(*(long *)(param_1 + 0x980) + (ulong)(uVar24 + (int)lVar20) * 0x40),0x34);
        lVar20 = lVar20 + 1;
        lVar22 = lVar22 + 0x40;
      } while ((local_104 + iVar25 & 3) != (uint)lVar20);
      uVar16 = uVar17 + lVar20;
      uVar13 = uVar16;
    }
    if (2 < local_104 + iVar23 + ~uVar8) {
      lVar20 = uVar13 << 6;
      uVar18 = (int)uVar16 + 4;
      do {
        memcpy((void *)(*(long *)(param_1 + 0x980) + lVar20),
               (void *)(*(long *)(param_1 + 0x980) + (ulong)(uVar18 - 3) * 0x40),0x34);
        memcpy((void *)(*(long *)(param_1 + 0x980) + lVar20 + 0x40),
               (void *)(*(long *)(param_1 + 0x980) + (ulong)(uVar18 - 2) * 0x40),0x34);
        memcpy((void *)(*(long *)(param_1 + 0x980) + lVar20 + 0x80),
               (void *)(*(long *)(param_1 + 0x980) + (ulong)(uVar18 - 1) * 0x40),0x34);
        memcpy((void *)(*(long *)(param_1 + 0x980) + lVar20 + 0xc0),
               (void *)(*(long *)(param_1 + 0x980) + (ulong)uVar18 * 0x40),0x34);
        uVar18 = uVar18 + 4;
        lVar20 = lVar20 + 0x100;
      } while (uVar18 - local_104 != 3);
      local_104 = uVar12;
      goto LAB_0026d188;
    }
  }
  local_104 = uVar12;
LAB_0026d188:
  uVar17 = uVar17 - 1;
  uVar24 = uVar24 - 1;
  iVar23 = iVar23 + 1;
  lVar14 = lVar14 + -0x40;
  iVar25 = iVar25 + 1;
  if (uVar11 <= uVar7) goto LAB_0026d1c8;
  goto LAB_0026cf0c;
}


