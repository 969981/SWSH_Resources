/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cb2d10; name: FUN_00cb2d10
 */


void FUN_00cb2d10(long param_1,undefined8 *param_2,char param_3,undefined8 param_4,long *param_5,
                 long *param_6)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  char cVar4;
  ushort uVar5;
  float fVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  long lVar11;
  ulong uVar12;
  ushort *puVar13;
  long lVar14;
  uint uVar15;
  char *pcVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  long local_100 [8];
  long local_c0 [8];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if (param_3 == '\0') {
    uVar7 = FUN_00cbf610(*(undefined8 *)(&DAT_00001588 + param_1));
  }
  else {
    uVar7 = FUN_00cbf600();
  }
  local_80 = *param_5;
  piVar8 = (int *)FUN_00c97270(uVar7,&local_80);
  if (piVar8 == (int *)0x0) {
    return;
  }
  uVar9 = FUN_00c970b0(uVar7);
  *param_2 = uVar9;
  uVar9 = FUN_00c97120(uVar7);
  param_2[1] = uVar9;
  uVar9 = FUN_00c97190(uVar7);
  param_2[0xe] = uVar9;
  uVar7 = FUN_00c97200(uVar7);
  param_2[0xf] = uVar7;
  puVar17 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x30 - (long)*piVar8)));
  pcVar16 = (char *)((long)puVar17 + (ulong)*puVar17 + 4);
  puVar17 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x3a - (long)*piVar8)));
  pcVar3 = (char *)0x0;
  if (*pcVar16 != '\0') {
    pcVar3 = pcVar16;
  }
  pcVar16 = (char *)((long)puVar17 + (ulong)*puVar17 + 4);
  cVar4 = *pcVar16;
  param_2[2] = pcVar3;
  pcVar3 = (char *)0x0;
  if (cVar4 != '\0') {
    pcVar3 = pcVar16;
  }
  param_2[0x10] = pcVar3;
  lVar11 = 0;
  if (0x12 < *(ushort *)((long)piVar8 - (long)*piVar8)) {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[9];
    lVar11 = 0;
    if (uVar12 != 0) {
      puVar17 = (uint *)((long)piVar8 + uVar12);
      lVar11 = (long)puVar17 + (ulong)*puVar17;
    }
  }
  param_2[0x1c] = lVar11 + 4;
  fVar6 = DAT_01d4c154;
  puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
  uVar5 = *puVar13;
  fVar22 = 0.0;
  if (uVar5 < 0x15) {
    uVar15 = 0;
    fVar21 = 0.0;
  }
  else {
    uVar15 = 0;
    if ((ulong)puVar13[10] != 0) {
      uVar15 = *(uint *)((long)piVar8 + (ulong)puVar13[10]);
    }
    fVar21 = (float)uVar15 / DAT_01d4c154;
    fVar22 = 0.0;
    if (0x16 < uVar5) {
      uVar15 = 0;
      if ((ulong)puVar13[0xb] != 0) {
        uVar15 = *(uint *)((long)piVar8 + (ulong)puVar13[0xb]);
      }
      fVar22 = (float)uVar15 / DAT_01d4c154;
      if (0x18 < uVar5) {
        uVar15 = 0;
        if ((ulong)puVar13[0xc] != 0) {
          uVar15 = *(uint *)((long)piVar8 + (ulong)puVar13[0xc]);
        }
        goto LAB_00cb2e90;
      }
    }
    uVar15 = 0;
  }
LAB_00cb2e90:
  param_2[0x1f] = (ulong)(uint)((float)uVar15 / DAT_01d4c154);
  param_2[0x1e] = CONCAT44(fVar22,fVar21);
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x1b) {
    lVar11 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0xd];
    lVar11 = 0;
    if (uVar12 != 0) {
      puVar17 = (uint *)((long)piVar8 + uVar12);
      lVar11 = (long)puVar17 + (ulong)*puVar17;
    }
  }
  param_2[0x20] = lVar11 + 4;
  puVar13 = (ushort *)((long)piVar8 - (long)*piVar8);
  uVar5 = *puVar13;
  if (uVar5 < 0x1d) {
    fVar22 = 0.0;
LAB_00cb2f68:
    fVar23 = 0.0;
    fVar21 = fVar23;
  }
  else {
    fVar22 = 0.0;
    if ((ulong)puVar13[0xe] != 0) {
      fVar22 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar8 + (ulong)puVar13[0xe]));
    }
    fVar22 = fVar22 / fVar6;
    if (uVar5 < 0x1f) goto LAB_00cb2f68;
    fVar23 = 0.0;
    if ((ulong)puVar13[0xf] != 0) {
      fVar23 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar8 + (ulong)puVar13[0xf]));
    }
    fVar23 = fVar23 / fVar6;
    fVar21 = 0.0;
    if ((0x20 < uVar5) && ((ulong)puVar13[0x10] != 0)) {
      fVar21 = (float)NEON_ucvtf(*(undefined4 *)((long)piVar8 + (ulong)puVar13[0x10]));
    }
  }
  param_2[0x23] = (ulong)(uint)(fVar21 / fVar6);
  param_2[0x22] = CONCAT44(fVar23,fVar22);
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x23) {
    uVar10 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x11];
    uVar10 = 0;
    if (uVar12 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)piVar8 + uVar12);
    }
  }
  *(undefined1 *)(param_2 + 0x24) = uVar10;
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x25) {
    uVar10 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x12];
    uVar10 = 0;
    if (uVar12 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)piVar8 + uVar12);
    }
  }
  *(undefined1 *)((long)param_2 + 0x121) = uVar10;
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x27) {
    uVar10 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x13];
    uVar10 = 0;
    if (uVar12 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)piVar8 + uVar12);
    }
  }
  *(undefined1 *)((long)param_2 + 0x122) = uVar10;
  if (*(ushort *)((long)piVar8 - (long)*piVar8) < 0x29) {
    uVar10 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)piVar8 - (long)*piVar8))[0x14];
    uVar10 = 0;
    if (uVar12 != 0) {
      uVar10 = (undefined1)*(undefined4 *)((long)piVar8 + uVar12);
    }
  }
  *(undefined1 *)((long)param_2 + 0x123) = uVar10;
  FUN_00cbd020(param_2 + 4,piVar8);
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_70 = 0;
  local_68 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_00cb3260(param_1,&local_80);
  local_c0[0] = 0;
  puVar17 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x32 - (long)*piVar8)));
  uVar15 = *puVar17;
  lVar11 = 0;
  puVar19 = (uint *)((long)puVar17 + (ulong)uVar15 + 4);
  local_c0[1] = (long)puVar19 + (ulong)*puVar19;
  puVar19 = (uint *)((long)puVar17 + (ulong)uVar15 + 8);
  piVar1 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar20 = (uint *)((long)puVar17 + (ulong)uVar15 + 0xc);
  puVar19 = (uint *)((long)puVar17 + (ulong)uVar15 + 0x10);
  piVar2 = (int *)((long)puVar19 + (ulong)*puVar19);
  puVar17 = (uint *)((long)puVar17 + (ulong)uVar15 + 0x14);
  local_100[0] = 0;
  puVar19 = (uint *)((long)piVar8 + (ulong)*(ushort *)((long)piVar8 + (0x3c - (long)*piVar8)));
  uVar15 = *puVar19;
  puVar18 = (uint *)((long)puVar19 + (ulong)uVar15 + 4);
  local_100[1] = (long)puVar18 + (ulong)*puVar18;
  puVar18 = (uint *)((long)puVar19 + (ulong)uVar15 + 8);
  local_100[2] = (long)puVar18 + (ulong)*puVar18;
  local_100[3] = 0;
  puVar18 = (uint *)((long)puVar19 + (ulong)uVar15 + 0xc);
  local_100[4] = (long)puVar18 + (ulong)*puVar18;
  puVar18 = (uint *)((long)puVar19 + (ulong)uVar15 + 0x10);
  local_100[5] = (long)puVar18 + (ulong)*puVar18;
  puVar19 = (uint *)((long)puVar19 + (ulong)uVar15 + 0x14);
  local_100[6] = (long)puVar19 + (ulong)*puVar19;
  local_100[7] = local_100[2];
  lVar14 = *param_6;
  if (local_80 == lVar14) {
LAB_00cb314c:
    piVar2 = (int *)local_c0[lVar11];
  }
  else {
    if (local_78 == lVar14) {
      lVar11 = 1;
      goto LAB_00cb314c;
    }
    if (local_70 == lVar14) {
      lVar11 = 2;
      piVar2 = piVar1;
    }
    else {
      if (local_68 == lVar14) {
        lVar11 = 3;
        goto LAB_00cb3168;
      }
      if (local_60 == lVar14) {
        lVar11 = 4;
        piVar2 = (int *)((long)puVar20 + (ulong)*puVar20);
      }
      else if (local_58 == lVar14) {
        lVar11 = 5;
      }
      else if (local_50 == lVar14) {
        lVar11 = 6;
        piVar2 = (int *)((long)puVar17 + (ulong)*puVar17);
      }
      else {
        if (local_48 != lVar14) {
          return;
        }
        lVar11 = 7;
        piVar2 = piVar1;
      }
    }
  }
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    param_2[3] = piVar2 + 1;
  }
LAB_00cb3168:
  piVar8 = (int *)local_100[lVar11];
  if ((piVar8 != (int *)0x0) && (*piVar8 != 0)) {
    param_2[0x11] = piVar8 + 1;
  }
  return;
}


