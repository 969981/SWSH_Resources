/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004815f0; name: FUN_004815f0
 */


void FUN_004815f0(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  
  uVar1 = *(uint *)(param_1 + 1);
  uVar8 = uVar1 - 1;
  if (-1 < (int)uVar8) {
    fVar16 = *(float *)(param_2 + 0x270);
    uVar2 = *(uint *)(param_2 + 0x274);
    iVar14 = 0;
    uVar3 = *(uint *)(param_2 + 0x278);
    lVar12 = *param_1;
    uVar13 = uVar8;
    do {
      while( true ) {
        iVar5 = uVar13 - iVar14;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        iVar5 = iVar14 + (iVar5 >> 1);
        lVar15 = *(long *)(lVar12 + (long)iVar5 * 8);
        fVar17 = *(float *)(lVar15 + 0x270);
        if (fVar17 != fVar16) {
          if (fVar16 <= fVar17) {
            if (fVar17 <= fVar16) goto LAB_004816d0;
            goto LAB_0048166c;
          }
          goto LAB_004816b8;
        }
        uVar4 = *(uint *)(lVar15 + 0x278);
        if (*(char *)((long)param_1 + 0x12) == '\0') break;
        if (uVar4 != uVar3) {
          if (uVar3 < uVar4) goto LAB_004816b8;
          if (uVar3 <= uVar4) goto LAB_004816d0;
        }
        else {
          if (uVar2 < *(uint *)(lVar15 + 0x274)) goto LAB_004816b8;
          if (uVar2 <= *(uint *)(lVar15 + 0x274)) goto LAB_004816d0;
        }
LAB_0048166c:
        iVar14 = iVar5 + 1;
        if ((int)uVar13 < iVar14) goto LAB_00481728;
      }
      if (uVar4 != uVar3) {
        if (uVar4 < uVar3) goto LAB_004816b8;
        if (uVar4 <= uVar3) goto LAB_004816d0;
        goto LAB_0048166c;
      }
      if (uVar2 <= *(uint *)(lVar15 + 0x274)) {
        if (uVar2 < *(uint *)(lVar15 + 0x274)) goto LAB_0048166c;
LAB_004816d0:
        puVar7 = (undefined8 *)(lVar12 + (long)iVar5 * 8);
        puVar10 = (undefined8 *)(lVar12 + (ulong)uVar1 * 8 + -8);
        if (puVar10 <= puVar7) goto LAB_00481788;
        uVar9 = (ulong)uVar1 * 8 + -9 + (long)iVar5 * -8;
        uVar1 = ((uint)(uVar9 >> 3) & 0x1fffffff) + 1;
        if ((uVar1 & 3) == 0) {
          if (uVar9 < 0x18) goto LAB_00481780;
          goto LAB_00481758;
        }
        lVar12 = -((ulong)uVar1 & 3);
        puVar11 = puVar7;
        do {
          puVar7 = puVar11 + 1;
          *puVar11 = *puVar7;
          lVar12 = lVar12 + 1;
          puVar11 = puVar7;
        } while (lVar12 != 0);
        if (0x17 < uVar9) {
LAB_00481758:
          do {
            *puVar7 = puVar7[1];
            puVar7[1] = puVar7[2];
            puVar7[2] = puVar7[3];
            puVar11 = puVar7 + 4;
            puVar7[3] = *puVar11;
            puVar7 = puVar11;
          } while (puVar11 < puVar10);
        }
LAB_00481780:
        uVar8 = (int)param_1[1] - 1;
LAB_00481788:
        bVar6 = true;
        *(uint *)(param_1 + 1) = uVar8;
        uVar1 = uVar8;
        goto joined_r0x00481794;
      }
LAB_004816b8:
      uVar13 = iVar5 - 1;
    } while (iVar14 <= (int)uVar13);
  }
LAB_00481728:
  bVar6 = false;
joined_r0x00481794:
  if (uVar1 == 0) {
    FUN_004c03f0(param_1);
  }
  if (bVar6) {
    *(short *)(param_1 + 5) = (short)param_1[5] + -1;
    return;
  }
  return;
}


