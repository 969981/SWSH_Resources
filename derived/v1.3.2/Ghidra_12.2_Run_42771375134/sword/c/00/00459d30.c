/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00459d30; name: FUN_00459d30
 */


undefined8 FUN_00459d30(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong *puVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  
  uVar10 = *(uint *)(param_2 + 0x10);
  if (uVar10 == 0) {
    return 0;
  }
  puVar11 = *(ulong **)(param_2 + 8);
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar6 = 0;
  puVar12 = puVar11;
LAB_00459e20:
  iVar9 = uVar2 - 1;
  if (-1 < iVar9) {
    uVar15 = *puVar11;
    puVar5 = *(ulong **)(param_1 + 0x18);
    iVar16 = 0;
    do {
      while( true ) {
        iVar17 = iVar9 - iVar16;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        iVar17 = iVar16 + (iVar17 >> 1);
        uVar14 = puVar5[(long)iVar17 * 3];
        if ((uVar14 <= uVar15) && ((uVar15 != uVar14 || ((int)puVar5[(long)iVar17 * 3 + 1] == 0))))
        break;
        iVar9 = iVar17 + -1;
        if (iVar9 < iVar16) goto LAB_00459f7c;
      }
      if (uVar15 <= uVar14) {
        puVar4 = puVar5 + (long)iVar17 * 3;
        if (puVar4 != (ulong *)0x0) {
          if (((uVar14 == 0xffffffffffffffff) || ((puVar5 <= puVar4 + -3 && (puVar4[-3] == uVar14)))
              ) || ((puVar4 + 3 <= puVar5 + (ulong)uVar2 * 3 + -3 && (puVar4[3] == uVar14))))
          goto LAB_00459f30;
          uVar10 = *(uint *)(param_1 + 0x38);
          iVar9 = uVar10 - 1;
          if (iVar9 < 0) goto LAB_00459f30;
          lVar8 = *(long *)(param_1 + 0x30);
          iVar16 = 0;
          iVar17 = iVar9;
          goto LAB_00459ef0;
        }
        break;
      }
      iVar16 = iVar17 + 1;
    } while (iVar16 <= iVar9);
  }
  goto LAB_00459f7c;
LAB_00459ef0:
  do {
    iVar1 = iVar17 - iVar16;
    if (iVar1 < 0) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar16 + (iVar1 >> 1);
    uVar15 = *(ulong *)(lVar8 + (long)iVar1 * 8);
    if (uVar15 <= uVar14) {
      if (uVar15 < uVar14) goto code_r0x00459f24;
      puVar3 = (undefined8 *)(lVar8 + (long)iVar1 * 8);
      puVar7 = (undefined8 *)(lVar8 + (ulong)uVar10 * 8 + -8);
      if (puVar3 < puVar7) {
        uVar15 = (ulong)uVar10 * 8 + -9 + (long)iVar1 * -8;
        uVar10 = ((uint)(uVar15 >> 3) & 0x1fffffff) + 1;
        if ((uVar10 & 7) != 0) {
          lVar8 = -((ulong)uVar10 & 7);
          puVar13 = puVar3;
          do {
            puVar3 = puVar13 + 1;
            *puVar13 = *puVar3;
            lVar8 = lVar8 + 1;
            puVar13 = puVar3;
          } while (lVar8 != 0);
        }
        if (0x37 < uVar15) {
          do {
            *puVar3 = puVar3[1];
            puVar3[1] = puVar3[2];
            puVar3[2] = puVar3[3];
            puVar3[3] = puVar3[4];
            puVar3[4] = puVar3[5];
            puVar3[5] = puVar3[6];
            puVar3[6] = puVar3[7];
            puVar13 = puVar3 + 8;
            puVar3[7] = *puVar13;
            puVar3 = puVar13;
          } while (puVar13 < puVar7);
        }
        iVar9 = *(int *)(param_1 + 0x38) + -1;
        puVar5 = *(ulong **)(param_1 + 0x18);
        uVar2 = *(uint *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x38) = iVar9;
      puVar5 = puVar5 + (ulong)uVar2 * 3 + -3;
      goto joined_r0x00459e08;
    }
    iVar17 = iVar1 + -1;
  } while (iVar16 <= iVar17);
  goto LAB_00459f30;
code_r0x00459f24:
  iVar16 = iVar1 + 1;
  if (iVar17 < iVar16) goto LAB_00459f30;
  goto LAB_00459ef0;
LAB_00459f30:
  puVar5 = puVar5 + (ulong)uVar2 * 3 + -3;
joined_r0x00459e08:
  if (puVar4 < puVar5) {
    do {
      puVar12 = puVar4 + 3;
      *(int *)(puVar4 + 2) = (int)puVar4[5];
      *puVar4 = *puVar12;
      puVar4[1] = puVar4[4];
      puVar4 = puVar12;
    } while (puVar12 < puVar5);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  uVar2 = uVar2 - 1;
  *(uint *)(param_1 + 0x20) = uVar2;
  puVar12 = *(ulong **)(param_2 + 8);
  uVar10 = *(uint *)(param_2 + 0x10);
  uVar6 = 1;
LAB_00459f7c:
  puVar11 = puVar11 + 1;
  if (puVar11 == puVar12 + uVar10) {
    return uVar6;
  }
  goto LAB_00459e20;
}


