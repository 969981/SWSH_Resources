/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01522bc0; name: FUN_01522bc0
 */


void FUN_01522bc0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  
LAB_01522bfc:
  puVar10 = param_2 + -1;
LAB_01522c18:
  puVar15 = param_1;
  lVar11 = (long)param_2 - (long)puVar15;
  uVar9 = lVar11 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    return;
  case 2:
    uVar5 = FUN_00888e60((ushort)param_2[-1] & 0x7fff);
    uVar6 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
    if (uVar5 < uVar6) {
      uVar5 = *puVar15;
      *puVar15 = param_2[-1];
      param_2[-1] = uVar5;
      return;
    }
    return;
  case 3:
    FUN_01523100(puVar15,puVar15 + 1,puVar10);
    return;
  case 4:
    FUN_01523240(puVar15,puVar15 + 1,puVar15 + 2,puVar10);
    return;
  case 5:
    FUN_01523340(puVar15,puVar15 + 1,puVar15 + 2,puVar15 + 3,puVar10);
    return;
  }
  if (0x7b < lVar11) {
    uVar8 = uVar9;
    if ((long)uVar9 < 0) {
      uVar8 = uVar9 + 1;
    }
    puVar14 = (uint *)((long)puVar15 + (uVar8 & 0x7ffffffffffffffe) * 2);
    if (lVar11 < 0xf9d) {
      iVar4 = FUN_01523100(puVar15,puVar14,puVar10);
    }
    else {
      uVar8 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar8 = uVar9;
      }
      iVar4 = FUN_01523340(puVar15,(long)puVar15 + (uVar8 & 0xfffffffffffffffc),puVar14,
                           (long)puVar14 + (uVar8 & 0xfffffffffffffffc),puVar10);
    }
    uVar5 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
    uVar6 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
    if (uVar6 <= uVar5) {
      puVar12 = param_2 + -2;
LAB_01522cd4:
      puVar17 = puVar12;
      if (puVar15 != puVar17) goto code_r0x01522cdc;
      puVar14 = puVar15 + 1;
      uVar5 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
      uVar6 = FUN_00888e60((ushort)*puVar10 & 0x7fff);
      if (uVar6 <= uVar5) {
        if (puVar14 == puVar10) {
          return;
        }
        puVar14 = puVar15 + 2;
        while( true ) {
          uVar5 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
          uVar6 = FUN_00888e60((ushort)puVar14[-1] & 0x7fff);
          if (uVar5 < uVar6) break;
          puVar14 = puVar14 + 1;
          if (param_2 == puVar14) {
            return;
          }
        }
        uVar5 = puVar14[-1];
        puVar14[-1] = *puVar10;
        *puVar10 = uVar5;
      }
      if (puVar14 == puVar10) {
        return;
      }
      while( true ) {
        param_1 = puVar14 + -1;
        do {
          puVar14 = param_1;
          uVar5 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
          param_1 = puVar14 + 1;
          uVar6 = FUN_00888e60((ushort)*param_1 & 0x7fff);
        } while (uVar6 <= uVar5);
        puVar14 = puVar14 + 2;
        do {
          uVar5 = FUN_00888e60((ushort)*puVar15 & 0x7fff);
          puVar10 = puVar10 + -1;
          uVar6 = FUN_00888e60((ushort)*puVar10 & 0x7fff);
        } while (uVar5 < uVar6);
        if (puVar10 <= param_1) break;
        uVar5 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar5;
      }
      uVar5 = 4;
      goto LAB_01522f18;
    }
    puVar12 = puVar15 + 1;
    puVar17 = puVar10;
    if (puVar10 <= puVar12) goto LAB_01522cc4;
    goto LAB_01522d40;
  }
  FUN_01523100(puVar15,puVar15 + 1,puVar15 + 2);
  if (puVar15 + 3 == param_2) {
    return;
  }
  lVar11 = 0;
  puVar10 = puVar15 + 3;
  puVar14 = puVar15 + 2;
LAB_01522fc4:
  puVar12 = puVar10;
  uVar5 = FUN_00888e60((ushort)*puVar12 & 0x7fff);
  uVar6 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
  if (uVar5 < uVar6) {
    uVar5 = *puVar12;
    lVar2 = lVar11;
    do {
      lVar16 = lVar2;
      *(undefined4 *)((long)puVar15 + lVar16 + 0xc) = *(undefined4 *)((long)puVar15 + lVar16 + 8);
      if (lVar16 == -8) {
        puVar10 = puVar15;
        goto LAB_01523044;
      }
      uVar6 = FUN_00888e60(uVar5 & 0x7fff);
      uVar7 = FUN_00888e60(*(ushort *)((long)puVar15 + lVar16 + 4) & 0x7fff);
      lVar2 = lVar16 + -4;
    } while (uVar6 < uVar7);
    puVar10 = (uint *)((long)puVar15 + lVar16 + 8);
LAB_01523044:
    *puVar10 = uVar5;
  }
  lVar11 = lVar11 + 4;
  puVar10 = puVar12 + 1;
  puVar14 = puVar12;
  if (puVar12 + 1 == param_2) {
    return;
  }
  goto LAB_01522fc4;
code_r0x01522cdc:
  uVar5 = FUN_00888e60((ushort)*puVar17 & 0x7fff);
  uVar6 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
  puVar12 = puVar17 + -1;
  if (uVar5 < uVar6) goto code_r0x01522d00;
  goto LAB_01522cd4;
code_r0x01522d00:
  uVar5 = *puVar15;
  iVar4 = iVar4 + 1;
  *puVar15 = *puVar17;
  *puVar17 = uVar5;
  puVar12 = puVar15 + 1;
  if (puVar12 < puVar17) {
LAB_01522d40:
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        uVar5 = FUN_00888e60((ushort)*puVar13 & 0x7fff);
        uVar6 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
      } while (uVar5 < uVar6);
      puVar12 = puVar12 + 2;
      do {
        puVar17 = puVar17 + -1;
        uVar5 = FUN_00888e60((ushort)*puVar17 & 0x7fff);
        uVar6 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
      } while (uVar6 <= uVar5);
      if (puVar17 < puVar13) break;
      uVar5 = *puVar13;
      iVar4 = iVar4 + 1;
      puVar1 = puVar17;
      if (puVar14 != puVar13) {
        puVar1 = puVar14;
      }
      *puVar13 = *puVar17;
      *puVar17 = uVar5;
      puVar14 = puVar1;
    }
    if (puVar13 == puVar14) goto LAB_01522ddc;
  }
  else {
LAB_01522cc4:
    puVar13 = puVar15 + 1;
    if (puVar13 == puVar14) goto LAB_01522ddc;
  }
  uVar5 = FUN_00888e60((ushort)*puVar14 & 0x7fff);
  uVar6 = FUN_00888e60((ushort)*puVar13 & 0x7fff);
  if (uVar5 < uVar6) {
    uVar5 = *puVar13;
    iVar4 = iVar4 + 1;
    *puVar13 = *puVar14;
    *puVar14 = uVar5;
  }
LAB_01522ddc:
  if (iVar4 == 0) {
    uVar9 = FUN_01523480(puVar15,puVar13);
    uVar8 = FUN_01523480(puVar13 + 1,param_2);
    if ((uVar8 & 1) != 0) goto LAB_01522f30;
    param_1 = puVar13 + 1;
    if ((uVar9 & 1) != 0) goto LAB_01522c18;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)puVar15) {
    FUN_01522bc0(puVar13 + 1,param_2);
    param_1 = puVar15;
    param_2 = puVar13;
    goto LAB_01522bfc;
  }
  FUN_01522bc0(puVar15,puVar13);
  param_1 = puVar13 + 1;
  goto LAB_01522c18;
LAB_01522f30:
  bVar3 = (uVar9 & 1) == 0;
  if (bVar3) {
    param_2 = puVar13;
  }
  uVar5 = 1;
  if (bVar3) {
    uVar5 = 2;
  }
  param_1 = puVar15;
  if (4 < uVar5) {
    return;
  }
LAB_01522f18:
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_01522bfc;
}


