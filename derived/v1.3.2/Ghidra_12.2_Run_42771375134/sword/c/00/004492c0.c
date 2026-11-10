/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004492c0; name: FUN_004492c0
 */


undefined8 FUN_004492c0(long param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  uint uVar19;
  
  puVar6 = PTR_DAT_02712a90;
  if (*(char *)(param_1 + 0xd0) == '\0') {
    uVar8 = FUN_004497a0(param_1,param_2);
    return uVar8;
  }
  plVar17 = (long *)(param_1 + 0xc0);
  lVar18 = *plVar17;
  uVar3 = *(uint *)(param_1 + 200);
  iVar10 = uVar3 - 1;
  if (iVar10 < 0) {
    lVar16 = lVar18;
    if (lVar18 == 0) goto LAB_00449410;
LAB_00449358:
    uVar19 = *(uint *)(param_1 + 0xcc);
    if (uVar19 <= uVar3) {
      uVar19 = uVar19 + 8;
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar19 << 5);
      if (puVar7 == (undefined8 *)0x0) {
        return 0x34;
      }
      puVar9 = *(undefined8 **)(param_1 + 0xc0);
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar7)) {
        uVar4 = *(uint *)(param_1 + 200);
        if (uVar4 != 0) {
          puVar7[3] = puVar9[3];
          puVar7[2] = puVar9[2];
          puVar7[1] = puVar9[1];
          *puVar7 = *puVar9;
          if (uVar4 != 1) {
            uVar2 = uVar4 + 3 & 3;
            if ((ulong)uVar4 - 2 < 3) {
              lVar12 = 1;
            }
            else {
              lVar12 = 1;
              lVar11 = 0x80;
              do {
                lVar1 = *plVar17 + lVar11;
                puVar9 = (undefined8 *)((long)puVar7 + lVar11);
                puVar9[-9] = *(undefined8 *)(lVar1 + -0x48);
                puVar9[-10] = *(undefined8 *)(lVar1 + -0x50);
                puVar9[-0xb] = *(undefined8 *)(lVar1 + -0x58);
                puVar9[-0xc] = *(undefined8 *)(lVar1 + -0x60);
                lVar1 = *plVar17 + lVar11;
                puVar9[-5] = *(undefined8 *)(lVar1 + -0x28);
                puVar9[-6] = *(undefined8 *)(lVar1 + -0x30);
                puVar9[-7] = *(undefined8 *)(lVar1 + -0x38);
                puVar9[-8] = *(undefined8 *)(lVar1 + -0x40);
                lVar1 = *plVar17 + lVar11;
                puVar9[-1] = *(undefined8 *)(lVar1 + -8);
                puVar9[-2] = *(undefined8 *)(lVar1 + -0x10);
                puVar9[-3] = *(undefined8 *)(lVar1 + -0x18);
                puVar9[-4] = *(undefined8 *)(lVar1 + -0x20);
                puVar15 = (undefined8 *)(*plVar17 + lVar11);
                lVar11 = lVar11 + 0x80;
                puVar9[3] = puVar15[3];
                puVar9[2] = puVar15[2];
                puVar9[1] = puVar15[1];
                lVar12 = lVar12 + 4;
                *puVar9 = *puVar15;
              } while ((ulong)uVar4 - (ulong)uVar2 != lVar12);
            }
            if (uVar2 != 0) {
              lVar12 = lVar12 << 5;
              lVar11 = -(ulong)uVar2;
              do {
                puVar9 = (undefined8 *)(*plVar17 + lVar12);
                puVar15 = (undefined8 *)((long)puVar7 + lVar12);
                lVar12 = lVar12 + 0x20;
                puVar15[3] = puVar9[3];
                puVar15[2] = puVar9[2];
                puVar15[1] = puVar9[1];
                lVar11 = lVar11 + 1;
                *puVar15 = *puVar9;
              } while (lVar11 != 0);
            }
          }
          puVar9 = (undefined8 *)*plVar17;
        }
        FUN_00404870(*(undefined4 *)puVar6,puVar9);
      }
      *plVar17 = (long)puVar7;
      *(uint *)(param_1 + 0xcc) = uVar19;
    }
    if (uVar19 <= uVar3) {
      return 0x34;
    }
    uVar3 = *(uint *)(param_1 + 200);
    lVar11 = *(long *)(param_1 + 0xc0);
    uVar13 = (ulong)(lVar16 - lVar18) >> 5 & 0xffffffff;
    *(uint *)(param_1 + 200) = uVar3 + 1;
    if ((uint)((ulong)(lVar16 - lVar18) >> 5) < uVar3) {
      puVar9 = (undefined8 *)(lVar11 + (ulong)uVar3 * 0x20);
      do {
        puVar15 = puVar9 + -4;
        puVar9[2] = puVar9[-2];
        puVar9[3] = puVar9[-1];
        *puVar9 = *puVar15;
        puVar9[1] = puVar9[-3];
        puVar7 = (undefined8 *)(*plVar17 + uVar13 * 0x20);
        puVar9 = puVar15;
      } while (puVar7 < puVar15);
      goto joined_r0x0044974c;
    }
  }
  else {
    uVar19 = *(uint *)((long)param_2 + 4);
    iVar14 = 0;
    do {
      while( true ) {
        iVar5 = iVar10 - iVar14;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar14 + (iVar5 >> 1);
        lVar16 = (long)iVar5;
        uVar4 = *(uint *)(lVar18 + lVar16 * 0x20 + 4);
        if (uVar19 > uVar4 || uVar4 == uVar19) break;
        iVar10 = iVar5 + -1;
        if (iVar10 < iVar14) goto LAB_0044934c;
      }
      if (uVar19 <= uVar4) goto LAB_00449350;
      iVar14 = iVar5 + 1;
    } while (iVar14 <= iVar10);
LAB_0044934c:
    lVar16 = (long)iVar14;
LAB_00449350:
    lVar16 = lVar18 + lVar16 * 0x20;
    if (lVar16 != 0) goto LAB_00449358;
LAB_00449410:
    uVar19 = *(uint *)(param_1 + 0xcc);
    if (uVar19 <= uVar3) {
      uVar19 = uVar19 + 8;
      puVar7 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar19 << 5);
      if (puVar7 == (undefined8 *)0x0) {
        return 0x34;
      }
      puVar9 = *(undefined8 **)(param_1 + 0xc0);
      if ((puVar9 != (undefined8 *)0x0) && (puVar9 != puVar7)) {
        uVar4 = *(uint *)(param_1 + 200);
        if (uVar4 != 0) {
          puVar7[3] = puVar9[3];
          puVar7[2] = puVar9[2];
          puVar7[1] = puVar9[1];
          *puVar7 = *puVar9;
          if (uVar4 != 1) {
            uVar2 = uVar4 + 3 & 3;
            if ((ulong)uVar4 - 2 < 3) {
              lVar16 = 1;
            }
            else {
              lVar16 = 1;
              lVar18 = 0x80;
              do {
                lVar11 = *plVar17 + lVar18;
                puVar9 = (undefined8 *)((long)puVar7 + lVar18);
                puVar9[-9] = *(undefined8 *)(lVar11 + -0x48);
                puVar9[-10] = *(undefined8 *)(lVar11 + -0x50);
                puVar9[-0xb] = *(undefined8 *)(lVar11 + -0x58);
                puVar9[-0xc] = *(undefined8 *)(lVar11 + -0x60);
                lVar11 = *plVar17 + lVar18;
                puVar9[-5] = *(undefined8 *)(lVar11 + -0x28);
                puVar9[-6] = *(undefined8 *)(lVar11 + -0x30);
                puVar9[-7] = *(undefined8 *)(lVar11 + -0x38);
                puVar9[-8] = *(undefined8 *)(lVar11 + -0x40);
                lVar11 = *plVar17 + lVar18;
                puVar9[-1] = *(undefined8 *)(lVar11 + -8);
                puVar9[-2] = *(undefined8 *)(lVar11 + -0x10);
                puVar9[-3] = *(undefined8 *)(lVar11 + -0x18);
                puVar9[-4] = *(undefined8 *)(lVar11 + -0x20);
                puVar15 = (undefined8 *)(*plVar17 + lVar18);
                lVar18 = lVar18 + 0x80;
                puVar9[3] = puVar15[3];
                puVar9[2] = puVar15[2];
                puVar9[1] = puVar15[1];
                lVar16 = lVar16 + 4;
                *puVar9 = *puVar15;
              } while ((ulong)uVar4 - (ulong)uVar2 != lVar16);
            }
            if (uVar2 != 0) {
              lVar16 = lVar16 << 5;
              lVar18 = -(ulong)uVar2;
              do {
                puVar9 = (undefined8 *)(*plVar17 + lVar16);
                puVar15 = (undefined8 *)((long)puVar7 + lVar16);
                lVar16 = lVar16 + 0x20;
                puVar15[3] = puVar9[3];
                puVar15[2] = puVar9[2];
                puVar15[1] = puVar9[1];
                lVar18 = lVar18 + 1;
                *puVar15 = *puVar9;
              } while (lVar18 != 0);
            }
          }
          puVar9 = (undefined8 *)*plVar17;
        }
        FUN_00404870(*(undefined4 *)puVar6,puVar9);
      }
      *plVar17 = (long)puVar7;
      *(uint *)(param_1 + 0xcc) = uVar19;
    }
    if (uVar19 <= uVar3) {
      return 0x34;
    }
    uVar13 = (ulong)*(uint *)(param_1 + 200);
    lVar11 = *(long *)(param_1 + 0xc0);
    *(uint *)(param_1 + 200) = *(uint *)(param_1 + 200) + 1;
  }
  puVar7 = (undefined8 *)(lVar11 + uVar13 * 0x20);
joined_r0x0044974c:
  if (puVar7 == (undefined8 *)0x0) {
    return 0x34;
  }
  puVar7[3] = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[1] = param_2[1];
  *puVar7 = *param_2;
  return 1;
}


