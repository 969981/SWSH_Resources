/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01523660; name: FUN_01523660
 */


void FUN_01523660(uint *param_1,uint *param_2)

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
  undefined1 auStack_70 [16];
  
LAB_015236a0:
  puVar10 = param_2 + -1;
LAB_015236c0:
  puVar15 = param_1;
  lVar11 = (long)param_2 - (long)puVar15;
  uVar9 = lVar11 >> 2;
  switch(uVar9) {
  case 0:
  case 1:
    return;
  case 2:
    FUN_008885c0(auStack_70,param_2[-1] & 0x7fff);
    uVar5 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
    uVar6 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    if (uVar5 < uVar6) {
      uVar5 = *puVar15;
      *puVar15 = param_2[-1];
      param_2[-1] = uVar5;
      return;
    }
    return;
  case 3:
    FUN_01523d80(puVar15,puVar15 + 1,puVar10);
    return;
  case 4:
    FUN_01523f80(puVar15,puVar15 + 1,puVar15 + 2,puVar10);
    return;
  case 5:
    FUN_01524110(puVar15,puVar15 + 1,puVar15 + 2,puVar15 + 3,puVar10);
    return;
  }
  if (0x7b < lVar11) {
    uVar8 = uVar9;
    if ((long)uVar9 < 0) {
      uVar8 = uVar9 + 1;
    }
    puVar14 = (uint *)((long)puVar15 + (uVar8 & 0x7ffffffffffffffe) * 2);
    if (lVar11 < 0xf9d) {
      iVar4 = FUN_01523d80(puVar15,puVar14,puVar10);
    }
    else {
      uVar8 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar8 = uVar9;
      }
      iVar4 = FUN_01524110(puVar15,(long)puVar15 + (uVar8 & 0xfffffffffffffffc),puVar14,
                           (long)puVar14 + (uVar8 & 0xfffffffffffffffc),puVar10);
    }
    FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
    uVar5 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
    uVar6 = FUN_00889210(auStack_70);
    FUN_00888620(auStack_70);
    if (uVar6 <= uVar5) {
      puVar12 = param_2 + -2;
LAB_015237a8:
      puVar17 = puVar12;
      if (puVar15 != puVar17) goto code_r0x015237b0;
      puVar14 = puVar15 + 1;
      FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
      uVar5 = FUN_00889210(auStack_70);
      FUN_00888620(auStack_70);
      FUN_008885c0(auStack_70,*puVar10 & 0x7fff);
      uVar6 = FUN_00889210(auStack_70);
      FUN_00888620(auStack_70);
      if (uVar6 <= uVar5) {
        if (puVar14 == puVar10) {
          return;
        }
        puVar14 = puVar15 + 2;
        while( true ) {
          FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
          uVar5 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
          FUN_008885c0(auStack_70,puVar14[-1] & 0x7fff);
          uVar6 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
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
          FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
          uVar5 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
          param_1 = puVar14 + 1;
          FUN_008885c0(auStack_70,*param_1 & 0x7fff);
          uVar6 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
        } while (uVar6 <= uVar5);
        puVar14 = puVar14 + 2;
        do {
          FUN_008885c0(auStack_70,*puVar15 & 0x7fff);
          uVar5 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
          puVar10 = puVar10 + -1;
          FUN_008885c0(auStack_70,*puVar10 & 0x7fff);
          uVar6 = FUN_00889210(auStack_70);
          FUN_00888620(auStack_70);
        } while (uVar5 < uVar6);
        if (puVar10 <= param_1) break;
        uVar5 = *param_1;
        *param_1 = *puVar10;
        *puVar10 = uVar5;
      }
      uVar5 = 4;
      goto LAB_01523b4c;
    }
    puVar12 = puVar15 + 1;
    puVar17 = puVar10;
    if (puVar10 <= puVar12) goto LAB_01523798;
    goto LAB_01523840;
  }
  FUN_01523d80(puVar15,puVar15 + 1,puVar15 + 2);
  if (puVar15 + 3 == param_2) {
    return;
  }
  lVar11 = 0;
  puVar10 = puVar15 + 3;
  puVar14 = puVar15 + 2;
LAB_01523c24:
  puVar12 = puVar10;
  FUN_008885c0(auStack_70,*puVar12 & 0x7fff);
  uVar5 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
  uVar6 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  if (uVar5 < uVar6) {
    uVar5 = *puVar12;
    lVar2 = lVar11;
    do {
      lVar16 = lVar2;
      *(undefined4 *)((long)puVar15 + lVar16 + 0xc) = *(undefined4 *)((long)puVar15 + lVar16 + 8);
      if (lVar16 == -8) {
        puVar10 = puVar15;
        goto LAB_01523cfc;
      }
      FUN_008885c0(auStack_70,uVar5 & 0x7fff);
      uVar6 = FUN_00889210(auStack_70);
      FUN_00888620(auStack_70);
      FUN_008885c0(auStack_70,*(uint *)((long)puVar15 + lVar16 + 4) & 0x7fff);
      uVar7 = FUN_00889210(auStack_70);
      FUN_00888620(auStack_70);
      lVar2 = lVar16 + -4;
    } while (uVar6 < uVar7);
    puVar10 = (uint *)((long)puVar15 + lVar16 + 8);
LAB_01523cfc:
    *puVar10 = uVar5;
  }
  lVar11 = lVar11 + 4;
  puVar10 = puVar12 + 1;
  puVar14 = puVar12;
  if (puVar12 + 1 == param_2) {
    return;
  }
  goto LAB_01523c24;
code_r0x015237b0:
  FUN_008885c0(auStack_70,*puVar17 & 0x7fff);
  uVar5 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
  uVar6 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  puVar12 = puVar17 + -1;
  if (uVar5 < uVar6) goto code_r0x01523800;
  goto LAB_015237a8;
code_r0x01523800:
  uVar5 = *puVar15;
  iVar4 = iVar4 + 1;
  *puVar15 = *puVar17;
  *puVar17 = uVar5;
  puVar12 = puVar15 + 1;
  if (puVar12 < puVar17) {
LAB_01523840:
    while( true ) {
      puVar13 = puVar12 + -1;
      do {
        puVar12 = puVar13;
        puVar13 = puVar12 + 1;
        FUN_008885c0(auStack_70,*puVar13 & 0x7fff);
        uVar5 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
        FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
        uVar6 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
      } while (uVar5 < uVar6);
      puVar12 = puVar12 + 2;
      do {
        puVar17 = puVar17 + -1;
        FUN_008885c0(auStack_70,*puVar17 & 0x7fff);
        uVar5 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
        FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
        uVar6 = FUN_00889210(auStack_70);
        FUN_00888620(auStack_70);
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
    if (puVar13 == puVar14) goto LAB_01523960;
  }
  else {
LAB_01523798:
    puVar13 = puVar15 + 1;
    if (puVar13 == puVar14) goto LAB_01523960;
  }
  FUN_008885c0(auStack_70,*puVar14 & 0x7fff);
  uVar5 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  FUN_008885c0(auStack_70,*puVar13 & 0x7fff);
  uVar6 = FUN_00889210(auStack_70);
  FUN_00888620(auStack_70);
  if (uVar5 < uVar6) {
    uVar5 = *puVar13;
    iVar4 = iVar4 + 1;
    *puVar13 = *puVar14;
    *puVar14 = uVar5;
  }
LAB_01523960:
  if (iVar4 == 0) {
    uVar9 = FUN_01524310(puVar15,puVar13);
    uVar8 = FUN_01524310(puVar13 + 1,param_2);
    if ((uVar8 & 1) != 0) goto LAB_01523b64;
    param_1 = puVar13 + 1;
    if ((uVar9 & 1) != 0) goto LAB_015236c0;
  }
  if ((long)param_2 - (long)puVar13 <= (long)puVar13 - (long)puVar15) {
    FUN_01523660(puVar13 + 1,param_2);
    param_1 = puVar15;
    param_2 = puVar13;
    goto LAB_015236a0;
  }
  FUN_01523660(puVar15,puVar13);
  param_1 = puVar13 + 1;
  goto LAB_015236c0;
LAB_01523b64:
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
LAB_01523b4c:
  if ((1 << (ulong)uVar5 & 0x15U) == 0) {
    return;
  }
  goto LAB_015236a0;
}


