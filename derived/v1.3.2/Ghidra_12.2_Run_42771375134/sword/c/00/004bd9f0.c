/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004bd9f0; name: FUN_004bd9f0
 */


undefined8 FUN_004bd9f0(long *param_1,long *param_2,undefined4 param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  *param_1 = param_2[1];
  bVar3 = *(byte *)(param_1 + 8) & 0xfe | *(byte *)(param_2 + 4);
  *(byte *)(param_1 + 8) = bVar3;
  cVar2 = *(char *)((long)param_2 + 0x22);
  *(byte *)(param_1 + 8) = bVar3 & 0xfd | cVar2 << 1;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(int *)(param_1 + 2) = (int)param_2[2];
  fVar19 = *(float *)(param_2 + 2);
  fVar17 = *(float *)((long)param_2 + 0x14);
  if ((char)param_2[4] == '\0') {
    *(float *)(param_1 + 1) = fVar19;
    *(float *)((long)param_1 + 0xc) = fVar17;
    iVar12 = *(int *)((long)param_2 + 0x1c);
    if (fVar17 <= fVar19) goto LAB_004bdae8;
  }
  else {
    fVar18 = 0.0;
    if (DAT_01d4c2ec <= fVar19 * DAT_01d4c158) {
      uVar11 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar19);
      fVar19 = (float)(uVar11 & 0x7fffff | 0x3f800000);
      fVar18 = (DAT_01d4c23c + fVar19 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar19)) *
               (float)(uVar11 & 0xff800000);
    }
    if (DAT_01d4c2ec <= fVar17 * DAT_01d4c158) {
      uVar11 = (uint)(DAT_01d4c714 + DAT_01d4bda4 * fVar17);
      fVar17 = (float)(uVar11 & 0x7fffff | 0x3f800000);
      fVar17 = (DAT_01d4c23c + fVar17 * (DAT_01d4c1d8 + DAT_01d4c46c * fVar17)) *
               (float)(uVar11 & 0xff800000);
      *(float *)(param_1 + 1) = fVar18;
      *(float *)((long)param_1 + 0xc) = fVar17;
      iVar12 = *(int *)((long)param_2 + 0x1c);
      if (fVar17 <= fVar18) goto LAB_004bdae8;
    }
    else {
      *(float *)(param_1 + 1) = fVar18;
      *(undefined4 *)((long)param_1 + 0xc) = 0;
      iVar12 = *(int *)((long)param_2 + 0x1c);
      if (0.0 <= fVar18) {
LAB_004bdae8:
        if (((*(char *)((long)param_2 + 0x21) != '\0') && (iVar12 != 3)) && (iVar12 != 5)) {
          iVar12 = 8 - iVar12;
        }
      }
    }
  }
  *(int *)(param_1 + 7) = iVar12;
  *(undefined4 *)(param_1 + 3) = param_3;
  iVar12 = *(int *)PTR_DAT_02712e58;
  iVar4 = 0;
  if (iVar12 != 0) {
    iVar4 = ((int)param_2[3] + iVar12 + -1) / iVar12;
  }
  *(int *)((long)param_1 + 0x1c) = iVar4;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((cVar2 != '\0') && ((int)param_2[3] != 0)) {
    fVar17 = expf((float)(int)-(uint)*(ushort *)PTR_DAT_02712ac0 /
                  ((float)(int)param_2[3] * DAT_01d4c490));
    *(float *)((long)param_1 + 0x44) = fVar17;
  }
  puVar5 = PTR_DAT_02712a90;
  plVar9 = (long *)param_1[5];
  uVar11 = *(uint *)(param_1 + 6);
  lVar15 = *param_2;
  plVar10 = plVar9;
  if (uVar11 != 0) {
    lVar14 = (ulong)uVar11 << 3;
    do {
      if (*plVar10 == lVar15) goto LAB_004bdc24;
      lVar14 = lVar14 + -8;
      plVar10 = plVar10 + 1;
    } while (lVar14 != 0);
    plVar10 = plVar9 + uVar11;
  }
LAB_004bdc24:
  if ((plVar10 == (long *)0x0) || (plVar9 + uVar11 == plVar10)) {
    uVar16 = *(uint *)((long)param_1 + 0x34);
    if (uVar11 < uVar16) {
LAB_004bdcc0:
      if (uVar11 < uVar16) {
        plVar10 = (long *)(param_1[5] + (ulong)*(uint *)(param_1 + 6) * 8);
        *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) + 1;
        if (plVar10 != (long *)0x0) {
          *plVar10 = lVar15;
          goto LAB_004bdce4;
        }
      }
    }
    else {
      uVar16 = uVar16 + 4;
      puVar6 = (undefined8 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,(ulong)uVar16 << 3);
      if (puVar6 != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)param_1[5];
        if ((puVar8 != (undefined8 *)0x0) && (puVar8 != puVar6)) {
          uVar1 = *(uint *)(param_1 + 6);
          if (uVar1 != 0) {
            *puVar6 = *puVar8;
            if (uVar1 != 1) {
              if (uVar1 == 2) {
                lVar13 = 1;
              }
              else {
                lVar14 = 0;
                do {
                  lVar13 = lVar14;
                  puVar6[lVar13 + 1] = *(undefined8 *)(param_1[5] + lVar13 * 8 + 8);
                  puVar6[lVar13 + 2] = *(undefined8 *)(param_1[5] + lVar13 * 8 + 0x10);
                  lVar14 = lVar13 + 2;
                } while (((ulong)uVar1 - 1) - (ulong)(~uVar1 & 1) != lVar13 + 2);
                lVar13 = lVar13 + 3;
                if ((~uVar1 & 1) == 0) goto LAB_004bdcac;
              }
              puVar6[lVar13] = *(undefined8 *)(param_1[5] + lVar13 * 8);
            }
LAB_004bdcac:
            puVar8 = (undefined8 *)param_1[5];
          }
          FUN_00404870(*(undefined4 *)puVar5,puVar8);
        }
        param_1[5] = (long)puVar6;
        *(uint *)((long)param_1 + 0x34) = uVar16;
        goto LAB_004bdcc0;
      }
    }
    uVar7 = 2;
  }
  else {
LAB_004bdce4:
    uVar7 = 1;
  }
  return uVar7;
}


