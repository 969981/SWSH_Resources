/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077fa30; name: FUN_0077fa30
 */


undefined8 FUN_0077fa30(long param_1)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (3 < *(byte *)(param_1 + 0xa1)) {
    return 1;
  }
  uVar4 = (ulong)*(byte *)(param_1 + 0x9f);
  lVar8 = *(long *)(param_1 + 0x58);
  switch(*(byte *)(param_1 + 0xa1)) {
  case 0:
    lVar13 = lVar8 + uVar4 * 0xa0;
    uVar7 = *(ushort *)(param_1 + 0x94) + 1;
    puVar9 = (uint *)(lVar13 + 0x3c);
    *puVar9 = 0;
    puVar11 = (uint *)(lVar13 + 0x38);
    *puVar11 = uVar7;
    fVar14 = DAT_01d4c610 / (float)uVar7;
    *(undefined8 *)(lVar13 + 0x30) = 0x437f0000;
    *(undefined1 *)(lVar13 + 0x40) = 0;
    *(float *)(lVar13 + 0x44) = fVar14;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    break;
  case 1:
    lVar13 = lVar8 + uVar4 * 0xa0;
    puVar9 = (uint *)(lVar13 + 0x3c);
    puVar11 = (uint *)(lVar13 + 0x38);
    break;
  case 2:
    uVar4 = (ulong)*(byte *)(param_1 + 0x98);
    if (*(byte *)(param_1 + 0x98) == 0) {
      *(undefined1 *)(param_1 + 0xa1) = 3;
      return 0;
    }
    lVar13 = 0;
    uVar10 = 1;
    cVar2 = *(char *)(lVar8 + 0x92);
    if (cVar2 != '\0') goto LAB_0077fc10;
    while( true ) {
      *(char *)(param_1 + 0xa0) = (char)uVar10 + -1;
      *(char *)(lVar8 + 0x92) = (char)uVar4 + -1;
      lVar8 = *(long *)(param_1 + 0x58) + lVar13;
      lVar12 = *(long *)(param_1 + 0x58) + (ulong)*(byte *)(lVar8 + 0x92) * 0xa0;
      uVar15 = *(undefined8 *)(lVar12 + 0x18);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar12 + 0x10);
      *(undefined8 *)(lVar8 + 0x28) = uVar15;
      plVar3 = (long *)(*(long *)(param_1 + 0x58) + lVar13);
      lVar8 = *plVar3;
      lVar12 = plVar3[5];
      *(long *)(lVar8 + 0x30) = plVar3[4];
      *(int *)(lVar8 + 0x38) = (int)lVar12;
      *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      plVar3 = *(long **)(*(long *)(param_1 + 0x58) + lVar13);
      (**(code **)(*plVar3 + 0x100))(plVar3,&DAT_0213fa00,0);
      uVar4 = (ulong)*(byte *)(param_1 + 0x98);
      if (uVar4 <= uVar10) break;
      while( true ) {
        lVar13 = lVar13 + 0xa0;
        uVar10 = uVar10 + 1;
        lVar8 = *(long *)(param_1 + 0x58) + lVar13;
        cVar2 = *(char *)(lVar8 + 0x92);
        if (cVar2 == '\0') break;
LAB_0077fc10:
        *(char *)(lVar8 + 0x92) = cVar2 + -1;
        lVar12 = *(long *)(param_1 + 0x58);
        lVar8 = lVar12 + lVar13;
        uVar7 = *(ushort *)(param_1 + 0x96) + 1;
        *(uint *)(lVar8 + 0x70) = uVar7;
        lVar12 = lVar12 + (ulong)*(byte *)(lVar8 + 0x92) * 0xa0;
        *(undefined8 *)(lVar8 + 0x50) = *(undefined8 *)(lVar8 + 0x20);
        *(undefined8 *)(lVar8 + 0x58) = *(undefined8 *)(lVar8 + 0x28);
        uVar15 = *(undefined8 *)(lVar12 + 0x18);
        *(undefined8 *)(lVar8 + 0x60) = *(undefined8 *)(lVar12 + 0x10);
        *(undefined8 *)(lVar8 + 0x68) = uVar15;
        uVar16 = *(undefined8 *)(lVar12 + 0x18);
        uVar15 = *(undefined8 *)(lVar12 + 0x10);
        *(undefined4 *)(lVar8 + 0x74) = 0;
        *(undefined1 *)(lVar8 + 0x78) = 0;
        fVar14 = 1.0 / (float)uVar7;
        *(ulong *)(lVar8 + 0x88) =
             CONCAT44(((float)((ulong)uVar16 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x28) >> 0x20)) * fVar14,
                      ((float)uVar16 - (float)*(undefined8 *)(lVar8 + 0x28)) * fVar14);
        *(ulong *)(lVar8 + 0x80) =
             CONCAT44(((float)((ulong)uVar15 >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20)) * fVar14,
                      ((float)uVar15 - (float)*(undefined8 *)(lVar8 + 0x20)) * fVar14);
        uVar4 = (ulong)*(byte *)(param_1 + 0x98);
        if (uVar4 <= uVar10) goto LAB_0077fc74;
      }
    }
LAB_0077fc74:
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    if ((int)uVar4 == 0) {
      return 0;
    }
    goto LAB_0077fcd0;
  case 3:
    uVar4 = (ulong)*(byte *)(param_1 + 0x98);
    if (*(byte *)(param_1 + 0x98) == 0) {
      return 0;
    }
LAB_0077fcd0:
    lVar8 = 0;
    uVar10 = 0;
    uVar7 = 0;
    do {
      if (uVar10 != *(byte *)(param_1 + 0xa0)) {
        lVar12 = *(long *)(param_1 + 0x58);
        lVar13 = lVar12 + lVar8;
        if ((*(uint *)(lVar13 + 0x74) < *(uint *)(lVar13 + 0x70)) &&
           (uVar1 = *(uint *)(lVar13 + 0x74) + 1, *(uint *)(lVar13 + 0x74) = uVar1,
           uVar1 < *(uint *)(lVar13 + 0x70))) {
          puVar6 = (undefined8 *)(lVar13 + 0x50);
          *(ulong *)(lVar13 + 0x58) =
               CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x58) >> 0x20) +
                        (float)((ulong)*(undefined8 *)(lVar13 + 0x88) >> 0x20),
                        (float)*(undefined8 *)(lVar13 + 0x58) +
                        (float)*(undefined8 *)(lVar13 + 0x88));
          *puVar6 = CONCAT44((float)((ulong)*puVar6 >> 0x20) +
                             (float)((ulong)*(undefined8 *)(lVar13 + 0x80) >> 0x20),
                             (float)*puVar6 + (float)*(undefined8 *)(lVar13 + 0x80));
        }
        else {
          *(undefined1 *)(lVar13 + 0x78) = 1;
          puVar6 = (undefined8 *)(lVar12 + uVar10 * 0xa0 + 0x60);
        }
        lVar13 = *(long *)(param_1 + 0x58) + lVar8;
        *(undefined8 *)(lVar13 + 0x28) = puVar6[1];
        *(undefined8 *)(lVar13 + 0x20) = *puVar6;
        plVar3 = (long *)(*(long *)(param_1 + 0x58) + lVar8);
        lVar13 = *plVar3;
        lVar12 = plVar3[5];
        *(long *)(lVar13 + 0x30) = plVar3[4];
        *(int *)(lVar13 + 0x38) = (int)lVar12;
        *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) | 0x10;
        uVar7 = uVar7 + *(byte *)(*(long *)(param_1 + 0x58) + lVar8 + 0x78);
        uVar4 = (ulong)*(byte *)(param_1 + 0x98);
      }
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0xa0;
    } while (uVar10 < uVar4);
    if (uVar7 < (int)uVar4 - 1U) {
      return 0;
    }
    *(undefined1 *)
     (*(long *)(*(long *)(param_1 + 0x58) + (ulong)*(byte *)(param_1 + 0xa0) * 0xa0) + 0x59) = 0xff;
    *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
    return 1;
  }
  uVar7 = *puVar11;
  if ((*puVar9 < uVar7) && (uVar1 = *puVar9 + 1, *puVar9 = uVar1, uVar1 < uVar7)) {
    lVar13 = lVar8 + uVar4 * 0xa0;
    fVar14 = *(float *)(lVar13 + 0x44) + *(float *)(lVar13 + 0x30);
    *(float *)(lVar13 + 0x30) = fVar14;
    pcVar5 = (char *)(lVar13 + 0x40);
  }
  else {
    lVar13 = lVar8 + uVar4 * 0xa0;
    pcVar5 = (char *)(lVar13 + 0x40);
    *pcVar5 = '\x01';
    fVar14 = *(float *)(lVar13 + 0x34);
  }
  *(char *)(*(long *)(lVar8 + uVar4 * 0xa0) + 0x59) = (char)(int)fVar14;
  if (*pcVar5 == '\0') {
    return 0;
  }
  *(char *)(param_1 + 0xa1) = *(char *)(param_1 + 0xa1) + '\x01';
  return 0;
}


