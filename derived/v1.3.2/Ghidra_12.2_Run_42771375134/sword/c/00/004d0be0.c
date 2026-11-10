/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d0be0; name: FUN_004d0be0
 */


void FUN_004d0be0(ulong param_1,long param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  long local_60;
  long lStack_58;
  
  lVar20 = param_2;
  if ((*(byte *)(param_2 + 0x354) >> 1 & 1) == 0) {
    lVar11 = *(long *)(param_2 + 0x48);
    if (lVar11 == 0) {
      lVar20 = 0;
    }
    else {
      lVar20 = 0;
      do {
        if ((*(int *)(lVar11 + 0x2a0) == 0) &&
           (lVar20 = *(long *)(lVar11 + 0x58), *(long *)(lVar11 + 200) == *(long *)(param_2 + 0x78))
           ) break;
        lVar11 = *(long *)(lVar11 + 0x40);
      } while (lVar11 != 0);
    }
  }
  lVar11 = FUN_004d0f30((long *)(param_2 + 0x10),param_1);
  if (lVar11 == 0) {
    return;
  }
  bVar3 = *(byte *)(param_1 + 0x60);
  *(byte *)(param_1 + 0x60) = bVar3 | 2;
  lVar20 = FUN_00469850(param_1 + 0x40,param_1,param_2,lVar20,param_3,(bVar3 & 5) != 1);
  if (lVar20 == 0) {
    uVar9 = *(uint *)(param_2 + 0x18);
    iVar10 = uVar9 - 1;
    if (iVar10 < 0) {
      return;
    }
    lVar20 = *(long *)(param_2 + 0x10);
    iVar16 = 0;
    iVar18 = iVar10;
    do {
      while( true ) {
        iVar6 = iVar18 - iVar16;
        if (iVar6 < 0) {
          iVar6 = iVar6 + 1;
        }
        iVar6 = iVar16 + (iVar6 >> 1);
        uVar19 = *(ulong *)(lVar20 + (long)iVar6 * 8);
        if (param_1 > uVar19 || uVar19 == param_1) break;
        iVar18 = iVar6 + -1;
        if (iVar18 < iVar16) {
          return;
        }
      }
      if (param_1 <= uVar19) {
        puVar13 = (undefined8 *)(lVar20 + (long)iVar6 * 8);
        puVar14 = (undefined8 *)(lVar20 + (ulong)uVar9 * 8 + -8);
        if (puVar13 < puVar14) {
          uVar19 = (ulong)uVar9 * 8 + -9 + (long)iVar6 * -8;
          uVar9 = ((uint)(uVar19 >> 3) & 0x1fffffff) + 1;
          if ((uVar9 & 3) != 0) {
            lVar20 = -((ulong)uVar9 & 3);
            puVar17 = puVar13;
            do {
              puVar13 = puVar17 + 1;
              *puVar17 = *puVar13;
              lVar20 = lVar20 + 1;
              puVar17 = puVar13;
            } while (lVar20 != 0);
          }
          if (0x17 < uVar19) {
            do {
              *puVar13 = puVar13[1];
              puVar13[1] = puVar13[2];
              puVar13[2] = puVar13[3];
              puVar17 = puVar13 + 4;
              puVar13[3] = *puVar17;
              puVar13 = puVar17;
            } while (puVar17 < puVar14);
          }
          iVar10 = *(int *)(param_2 + 0x18) + -1;
        }
        *(int *)(param_2 + 0x18) = iVar10;
        return;
      }
      iVar16 = iVar6 + 1;
    } while (iVar16 <= iVar18);
    return;
  }
  FUN_004699d0(lVar20);
  lVar11 = FUN_0047d760();
  if (lVar11 == 0) goto LAB_004d0e84;
  uVar9 = FUN_004699c0(lVar20);
  if ((uVar9 & 0xf00) != 0x100) {
    return;
  }
  uVar4 = uVar9 >> 0xc;
  uVar1 = uVar4 & 0xffff7;
  uVar5 = uVar9 - (uVar4 - uVar1 >> 3);
  if ((uVar5 & 0xfe) == 0) {
    return;
  }
  puVar12 = *(uint **)(lVar11 + 0x78);
  uVar2 = *(uint *)(lVar11 + 0x80);
  puVar15 = puVar12;
  if (uVar2 == 0) {
LAB_004d0de0:
    if (puVar15 == puVar12 + (ulong)uVar2 * 4) goto LAB_004d0df8;
    bVar8 = true;
  }
  else {
    lVar20 = (ulong)uVar2 << 4;
    do {
      if (*puVar15 == (uVar5 & 0xff | uVar1 << 0xc | 0x100)) goto LAB_004d0de0;
      lVar20 = lVar20 + -0x10;
      puVar15 = puVar15 + 4;
    } while (lVar20 != 0);
LAB_004d0df8:
    lVar20 = FUN_0047b520(lVar11);
    bVar8 = lVar20 != 0;
  }
  bVar7 = bVar8;
  if (((uVar9 >> 0xe & 1) == 0) || (bVar7 = false, !bVar8)) {
    if (bVar7) {
      return;
    }
  }
  else {
    puVar12 = *(uint **)(lVar11 + 0x78);
    uVar9 = *(uint *)(lVar11 + 0x80);
    puVar15 = puVar12;
    if (uVar9 == 0) {
LAB_004d0e6c:
      if (puVar15 != puVar12 + (ulong)uVar9 * 4) {
        return;
      }
    }
    else {
      lVar20 = (ulong)uVar9 << 4;
      do {
        if (*puVar15 ==
            (uVar5 - (uVar1 - (uVar4 & 0xffff3) >> 2) & 0xff | (uVar4 & 0xffff3) << 0xc | 0x100))
        goto LAB_004d0e6c;
        lVar20 = lVar20 + -0x10;
        puVar15 = puVar15 + 4;
      } while (lVar20 != 0);
    }
    lVar20 = FUN_0047b520(lVar11);
    if (lVar20 != 0) {
      return;
    }
  }
LAB_004d0e84:
  if (*(long *)(param_1 + 0x48) != 0) {
    lVar20 = *(long *)(param_1 + 0x48);
    lStack_58 = 0;
    do {
      local_60 = lVar20;
      if (*(long *)(local_60 + 0x50) == param_2) {
        FUN_004cf990(param_1,&local_60);
        return;
      }
      lVar20 = *(long *)(local_60 + 0x40);
      lStack_58 = local_60;
    } while (*(long *)(local_60 + 0x40) != 0);
  }
  return;
}


