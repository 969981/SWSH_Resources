/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004ed360; name: FUN_004ed360
 */


undefined4 FUN_004ed360(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  float fVar18;
  
  uVar5 = *(uint *)(param_1 + 0x20);
  plVar1 = (long *)(param_1 + 0x18);
  uVar17 = (uint)param_2;
  if (uVar5 != 0) {
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = uVar17 / uVar5;
    }
    for (puVar16 = *(undefined8 **)(*plVar1 + (ulong)(uVar17 - uVar11 * uVar5) * 8);
        puVar16 != (undefined8 *)0x0; puVar16 = (undefined8 *)puVar16[8]) {
      if (puVar16[7] == param_2) goto LAB_004ed494;
    }
  }
  puVar16 = (undefined8 *)FUN_004eec90(param_1 + 0x78);
  if (puVar16 == (undefined8 *)0x0) {
    return 0x34;
  }
  *(undefined4 *)(puVar16 + 0x10) = 0xffffffff;
  puVar16[5] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 4) = 0;
  *(undefined4 *)(puVar16 + 0xd) = 0;
  *(undefined8 *)((long)puVar16 + 0x84) = 0x3f800000;
  puVar16[2] = 0;
  puVar16[3] = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[0xe] = 0;
  puVar16[0xf] = 0;
  puVar16[0xb] = 0;
  puVar16[0xc] = 0;
  puVar16[9] = 0;
  puVar16[10] = 0;
  puVar2 = PTR_DAT_02713640;
  *(undefined4 *)((long)puVar16 + 0x8c) = 0;
  puVar16[7] = param_2;
  puVar16[8] = 0;
  lVar4 = FUN_00404690(*(undefined4 *)puVar2,0x10);
  puVar16[5] = lVar4;
  if (lVar4 != 0) {
    *(undefined4 *)((long)puVar16 + 0x34) = 2;
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  if ((uVar5 == 0) ||
     (fVar18 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x28)),
     DAT_01d4bee0 < fVar18 / (float)uVar5)) {
    FUN_004ef000(plVar1);
    uVar5 = *(uint *)(param_1 + 0x20);
    if (uVar5 == 0) goto LAB_004ed670;
  }
  uVar11 = 0;
  if (uVar5 != 0) {
    uVar11 = *(uint *)(puVar16 + 7) / uVar5;
  }
  lVar4 = (ulong)(*(uint *)(puVar16 + 7) - uVar11 * uVar5) * 8;
  puVar16[8] = *(undefined8 *)(*plVar1 + lVar4);
  *(undefined8 **)(*plVar1 + lVar4) = puVar16;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
LAB_004ed494:
  FUN_004ea7b0(puVar16,param_3);
  uVar5 = *(uint *)(puVar16 + 6);
  if (uVar5 != 0) {
    plVar7 = (long *)puVar16[5];
    plVar9 = plVar7;
    do {
      while( true ) {
        lVar4 = *plVar7;
        uVar11 = *(uint *)(lVar4 + 0x30);
        if (uVar11 == 0) break;
        puVar14 = *(undefined8 **)(lVar4 + 0x28);
        lVar15 = (ulong)uVar11 * 8;
        puVar8 = puVar14;
        lVar13 = lVar15;
LAB_004ed590:
        if ((undefined8 *)*puVar8 != puVar16) goto code_r0x004ed59c;
        if (puVar8 < puVar14 + ((ulong)uVar11 - 1)) {
          uVar12 = (long)puVar14 + (lVar15 - (long)puVar8) + -9;
          uVar5 = ((uint)(uVar12 >> 3) & 0x1fffffff) + 1;
          if ((uVar5 & 7) != 0) {
            lVar13 = -((ulong)uVar5 & 7);
            puVar10 = puVar8;
            do {
              puVar8 = puVar10 + 1;
              *puVar10 = *puVar8;
              lVar13 = lVar13 + 1;
              puVar10 = puVar8;
            } while (lVar13 != 0);
          }
          if (0x37 < uVar12) {
            do {
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              puVar8[2] = puVar8[3];
              puVar8[3] = puVar8[4];
              puVar8[4] = puVar8[5];
              puVar8[5] = puVar8[6];
              puVar8[6] = puVar8[7];
              puVar10 = puVar8 + 8;
              puVar8[7] = *puVar10;
              puVar8 = puVar10;
            } while (puVar10 < puVar14 + ((ulong)uVar11 - 1));
          }
          uVar11 = *(uint *)(lVar4 + 0x30);
        }
        *(uint *)(lVar4 + 0x30) = uVar11 - 1;
        plVar9 = (long *)puVar16[5];
        uVar5 = *(uint *)(puVar16 + 6);
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar9 + uVar5) goto LAB_004ed5b8;
      }
LAB_004ed5a8:
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar9 + uVar5);
  }
LAB_004ed5b8:
  *(undefined4 *)(puVar16 + 6) = 0;
  iVar3 = FUN_004ecb60(param_1,puVar16,*(undefined8 *)(param_3 + 0x48));
  if (iVar3 == 1) {
    iVar3 = FUN_004ecb60(param_1,puVar16,*(undefined8 *)(param_3 + 0x50));
    uVar6 = 0x34;
    if (iVar3 == 1) {
      uVar6 = 1;
    }
    if (puVar16 == (undefined8 *)0x0) {
      return uVar6;
    }
    if (iVar3 == 1) {
      return uVar6;
    }
  }
  uVar5 = *(uint *)(param_1 + 0x20);
  if (uVar5 != 0) {
    uVar11 = 0;
    if (uVar5 != 0) {
      uVar11 = uVar17 / uVar5;
    }
    plVar1 = (long *)(*plVar1 + (ulong)(uVar17 - uVar11 * uVar5) * 8);
    lVar4 = *plVar1;
    if (lVar4 != 0) {
      lVar13 = 0;
      do {
        lVar15 = lVar4;
        if (*(long *)(lVar15 + 0x38) == param_2) {
          if (lVar13 != 0) {
            plVar1 = (long *)(lVar13 + 0x40);
          }
          *plVar1 = *(long *)(lVar15 + 0x40);
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          break;
        }
        lVar4 = *(long *)(lVar15 + 0x40);
        lVar13 = lVar15;
      } while (*(long *)(lVar15 + 0x40) != 0);
    }
  }
LAB_004ed670:
  FUN_004ed690(param_1 + 0x78,puVar16);
  return 0x34;
code_r0x004ed59c:
  puVar8 = puVar8 + 1;
  lVar13 = lVar13 + -8;
  if (lVar13 == 0) goto LAB_004ed5a8;
  goto LAB_004ed590;
}


