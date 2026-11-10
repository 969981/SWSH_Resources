/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c0580; name: FUN_013c0580
 */


void FUN_013c0580(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  
LAB_013c05c0:
  plVar13 = param_2 + -1;
  plVar14 = param_1;
LAB_013c05e0:
  param_1 = plVar14;
  lVar12 = (long)param_2 - (long)param_1;
  uVar10 = lVar12 >> 3;
  switch(uVar10) {
  case 0:
  case 1:
    return;
  case 2:
    lVar21 = param_2[-1];
    lVar12 = *param_1;
    if (lVar21 != 0 || lVar12 != 0) {
      if ((lVar21 == 0) && (lVar12 != 0)) {
        return;
      }
      if ((lVar21 == 0) || (lVar12 != 0)) {
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar2 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar3 = FUN_012b68c0(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar4 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar5 = FUN_012b68c0(*puVar7);
        if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
          return;
        }
        lVar12 = *param_1;
        lVar21 = param_2[-1];
      }
    }
    *param_1 = lVar21;
    param_2[-1] = lVar12;
    return;
  case 3:
    FUN_013c0fb0(param_1,param_1 + 1,plVar13);
    return;
  case 4:
    FUN_013c12a0(param_1,param_1 + 1,param_1 + 2,plVar13);
    return;
  case 5:
    FUN_013c14a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,plVar13);
    return;
  }
  if (0xf7 < lVar12) {
    uVar8 = uVar10;
    if ((long)uVar10 < 0) {
      uVar8 = uVar10 + 1;
    }
    plVar14 = (long *)((long)param_1 + (uVar8 & 0x3ffffffffffffffe) * 4);
    if (lVar12 < 0x1f39) {
      iVar2 = FUN_013c0fb0(param_1,plVar14,plVar13);
    }
    else {
      uVar8 = uVar10 + 3;
      if (-1 < (long)uVar10) {
        uVar8 = uVar10;
      }
      lVar12 = (uVar8 & 0x7ffffffffffffffc) * 2;
      iVar2 = FUN_013c14a0(param_1,(long)param_1 + lVar12,plVar14,(long)plVar14 + lVar12,plVar13);
    }
    lVar21 = *param_1;
    lVar12 = *plVar14;
    if (lVar21 != 0 || lVar12 != 0) {
      plVar16 = param_2 + -2;
      if ((lVar21 == 0) && (lVar12 != 0)) {
joined_r0x013c0680:
        do {
          if (param_1 == plVar16) {
            plVar14 = param_1 + 1;
            lVar21 = *param_1;
            lVar12 = *plVar13;
            if (lVar21 == 0 && lVar12 == 0) goto joined_r0x013c0af0;
            if ((lVar21 != 0) || (lVar12 == 0)) {
              if ((lVar21 != 0) && (lVar12 == 0)) goto joined_r0x013c0af0;
              puVar7 = (undefined8 *)FUN_012e3520(lVar21);
              iVar2 = FUN_012b6590(*puVar7);
              puVar7 = (undefined8 *)FUN_012e3520(lVar21);
              iVar3 = FUN_012b68c0(*puVar7);
              puVar7 = (undefined8 *)FUN_012e3520(lVar12);
              iVar4 = FUN_012b6590(*puVar7);
              puVar7 = (undefined8 *)FUN_012e3520(lVar12);
              iVar5 = FUN_012b68c0(*puVar7);
              if ((uint)(iVar5 * iVar4) < (uint)(iVar3 * iVar2)) goto joined_r0x013c0af0;
            }
            if (plVar14 == plVar13) {
              return;
            }
            plVar14 = param_1 + 2;
            goto LAB_013c09f4;
          }
          lVar21 = *plVar16;
          lVar12 = *plVar14;
          if (lVar21 == 0 && lVar12 == 0) goto LAB_013c0784;
          if ((lVar21 != 0) || (lVar12 == 0)) {
            if ((lVar21 != 0) && (lVar12 == 0)) goto LAB_013c0784;
            puVar7 = (undefined8 *)FUN_012e3520(lVar21);
            iVar3 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar21);
            iVar4 = FUN_012b68c0(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar12);
            iVar5 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar12);
            iVar6 = FUN_012b68c0(*puVar7);
            if ((uint)(iVar6 * iVar5) < (uint)(iVar4 * iVar3)) goto LAB_013c0780;
          }
          plVar16 = plVar16 + -1;
        } while( true );
      }
      if ((lVar21 == 0) || (lVar12 != 0)) {
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar3 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar4 = FUN_012b68c0(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar5 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar6 = FUN_012b68c0(*puVar7);
        if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) goto joined_r0x013c0680;
      }
    }
    plVar11 = param_1 + 1;
    plVar16 = plVar13;
    if (plVar11 < plVar13) goto LAB_013c07a8;
    goto LAB_013c08f0;
  }
  FUN_013c0fb0(param_1,param_1 + 1,param_1 + 2);
  if (param_1 + 3 == param_2) {
    return;
  }
  lVar21 = 0;
  lVar12 = 8;
  plVar13 = param_1 + 3;
  plVar14 = param_1 + 2;
  goto LAB_013c0d5c;
LAB_013c09f4:
  lVar21 = *param_1;
  lVar12 = plVar14[-1];
  if (lVar21 == 0 && lVar12 == 0) goto LAB_013c0b20;
  if ((lVar21 != 0) || (lVar12 == 0)) {
    if ((lVar21 != 0) && (lVar12 == 0)) goto LAB_013c0b20;
    puVar7 = (undefined8 *)FUN_012e3520(lVar21);
    iVar2 = FUN_012b6590(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar21);
    iVar3 = FUN_012b68c0(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar12);
    iVar4 = FUN_012b6590(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar12);
    iVar5 = FUN_012b68c0(*puVar7);
    if ((uint)(iVar5 * iVar4) < (uint)(iVar3 * iVar2)) {
      lVar12 = plVar14[-1];
      goto LAB_013c0b20;
    }
  }
  plVar14 = plVar14 + 1;
  if (param_2 == plVar14) {
    return;
  }
  goto LAB_013c09f4;
LAB_013c0b20:
  plVar14[-1] = *plVar13;
  *plVar13 = lVar12;
joined_r0x013c0af0:
  if (plVar14 == plVar13) {
    return;
  }
  do {
    lVar21 = *param_1;
    lVar12 = *plVar14;
    plVar16 = plVar14;
    if (lVar21 != 0 || lVar12 != 0) {
      do {
        if ((lVar21 != 0) || (lVar12 == 0)) {
          plVar16 = plVar14;
          if (lVar21 != 0 && lVar12 == 0) break;
          puVar7 = (undefined8 *)FUN_012e3520(lVar21);
          iVar2 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar21);
          iVar3 = FUN_012b68c0(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar4 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar5 = FUN_012b68c0(*puVar7);
          if ((uint)(iVar5 * iVar4) < (uint)(iVar3 * iVar2)) break;
          lVar21 = *param_1;
        }
        plVar14 = plVar14 + 1;
        lVar12 = *plVar14;
        plVar16 = plVar14;
      } while (lVar21 != 0 || lVar12 != 0);
    }
    do {
      do {
        do {
          lVar21 = *param_1;
          plVar13 = plVar13 + -1;
          lVar12 = *plVar13;
        } while (lVar21 == 0 && lVar12 == 0);
        if ((lVar21 == 0) && (lVar12 != 0)) goto LAB_013c0c64;
      } while ((lVar21 != 0) && (lVar12 == 0));
      puVar7 = (undefined8 *)FUN_012e3520(lVar21);
      iVar2 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar21);
      iVar3 = FUN_012b68c0(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar12);
      iVar4 = FUN_012b6590(*puVar7);
      puVar7 = (undefined8 *)FUN_012e3520(lVar12);
      iVar5 = FUN_012b68c0(*puVar7);
    } while ((uint)(iVar5 * iVar4) < (uint)(iVar3 * iVar2));
LAB_013c0c64:
    if (plVar13 <= plVar16) break;
    lVar12 = *plVar16;
    plVar14 = plVar16 + 1;
    *plVar16 = *plVar13;
    *plVar13 = lVar12;
  } while( true );
  uVar9 = 4;
  param_1 = plVar16;
  goto LAB_013c0c7c;
LAB_013c0780:
  lVar21 = *plVar16;
LAB_013c0784:
  lVar12 = *param_1;
  iVar2 = iVar2 + 1;
  *param_1 = lVar21;
  *plVar16 = lVar12;
  plVar11 = param_1 + 1;
  if (plVar11 < plVar16) {
LAB_013c07a8:
    do {
      lVar21 = *plVar11;
      lVar12 = *plVar14;
      plVar15 = plVar14;
      plVar20 = plVar11;
      if (lVar21 != 0 || lVar12 != 0) {
        do {
          plVar15 = plVar14;
          if ((lVar21 == 0) && (lVar12 != 0)) {
            plVar16 = plVar16 + -1;
            lVar21 = *plVar16;
            bVar1 = true;
            goto LAB_013c082c;
          }
          plVar20 = plVar11;
          if ((lVar21 != 0) && (lVar12 == 0)) break;
          puVar7 = (undefined8 *)FUN_012e3520(lVar21);
          iVar3 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar21);
          iVar4 = FUN_012b68c0(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar5 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar6 = FUN_012b68c0(*puVar7);
          if ((uint)(iVar6 * iVar5) < (uint)(iVar4 * iVar3)) break;
          do {
            lVar12 = *plVar14;
            do {
              plVar16 = plVar16 + -1;
              lVar21 = *plVar16;
              bVar1 = lVar12 != 0;
              if (lVar21 == 0 && lVar12 == 0) goto LAB_013c08b8;
LAB_013c082c:
            } while ((lVar21 == 0) && (bVar1));
            if ((bool)(lVar21 != 0 & (bVar1 ^ 1U))) break;
            puVar7 = (undefined8 *)FUN_012e3520(lVar21);
            iVar3 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar21);
            iVar4 = FUN_012b68c0(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar12);
            iVar5 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar12);
            iVar6 = FUN_012b68c0(*puVar7);
          } while ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5));
LAB_013c08b8:
          if (plVar16 < plVar11) goto LAB_013c08f0;
          lVar12 = *plVar11;
          plVar20 = plVar11 + 1;
          *plVar11 = *plVar16;
          *plVar16 = lVar12;
          iVar2 = iVar2 + 1;
          plVar15 = plVar16;
          if (plVar14 != plVar11) {
            plVar15 = plVar14;
          }
          lVar21 = *plVar20;
          lVar12 = *plVar15;
          plVar14 = plVar15;
          plVar11 = plVar20;
        } while (lVar21 != 0 || lVar12 != 0);
      }
      plVar11 = plVar20 + 1;
      plVar14 = plVar15;
    } while( true );
  }
LAB_013c08f0:
  if (plVar11 != plVar14) {
    lVar21 = *plVar14;
    lVar12 = *plVar11;
    if (lVar21 != 0 || lVar12 != 0) {
      if ((lVar21 == 0) && (lVar12 != 0)) goto LAB_013c0988;
      if ((lVar21 == 0) || (lVar12 != 0)) {
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar3 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar21);
        iVar4 = FUN_012b68c0(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar5 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar12);
        iVar6 = FUN_012b68c0(*puVar7);
        if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) goto LAB_013c0988;
        lVar12 = *plVar11;
        lVar21 = *plVar14;
      }
    }
    iVar2 = iVar2 + 1;
    *plVar11 = lVar21;
    *plVar14 = lVar12;
  }
LAB_013c0988:
  if (iVar2 == 0) {
    uVar10 = FUN_013c1730(param_1,plVar11);
    uVar8 = FUN_013c1730(plVar11 + 1,param_2);
    if ((uVar8 & 1) != 0) goto LAB_013c0af8;
    plVar14 = plVar11 + 1;
    if ((uVar10 & 1) != 0) goto LAB_013c05e0;
  }
  if ((long)param_2 - (long)plVar11 <= (long)plVar11 - (long)param_1) {
    FUN_013c0580(plVar11 + 1,param_2);
    param_2 = plVar11;
    goto LAB_013c05c0;
  }
  FUN_013c0580(param_1,plVar11);
  plVar14 = plVar11 + 1;
  goto LAB_013c05e0;
LAB_013c0af8:
  bVar1 = (uVar10 & 1) == 0;
  if (bVar1) {
    param_2 = plVar11;
  }
  uVar9 = 1;
  if (bVar1) {
    uVar9 = 2;
  }
  if (4 < uVar9) {
    return;
  }
LAB_013c0c7c:
  if ((1 << (ulong)uVar9 & 0x15U) == 0) {
    return;
  }
  goto LAB_013c05c0;
LAB_013c0d5c:
  plVar16 = plVar13;
  lVar17 = *plVar16;
  lVar18 = *plVar14;
  if (lVar17 == 0 && lVar18 == 0) {
LAB_013c0d84:
    *plVar16 = lVar18;
joined_r0x013c0d8c:
    if (plVar14 != param_1) {
      lVar18 = lVar21;
      if (lVar17 == 0) {
        do {
          if (*(long *)((long)param_1 + lVar18 + 8) != 0) {
            plVar14 = (long *)((long)param_1 + lVar18 + 0x10);
            goto LAB_013c0ee0;
          }
          bVar1 = lVar18 != -8;
          *(undefined8 *)((long)param_1 + lVar18 + 0x10) = 0;
          lVar18 = lVar18 + -8;
        } while (bVar1);
        plVar14 = param_1;
      }
      else {
        lVar18 = lVar12;
        plVar13 = plVar14;
        do {
          lVar19 = *(long *)((long)param_1 + lVar18);
          plVar14 = plVar14 + -1;
          if (lVar19 == 0) {
            lVar19 = 0;
            plVar11 = (long *)((long)param_1 + lVar18);
          }
          else {
            puVar7 = (undefined8 *)FUN_012e3520(lVar17);
            iVar2 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar17);
            iVar3 = FUN_012b68c0(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar19);
            iVar4 = FUN_012b6590(*puVar7);
            puVar7 = (undefined8 *)FUN_012e3520(lVar19);
            iVar5 = FUN_012b68c0(*puVar7);
            if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
              plVar14 = plVar13;
              goto LAB_013c0ee0;
            }
            lVar19 = *(long *)((long)param_1 + lVar18);
            plVar11 = plVar14;
          }
          *plVar13 = lVar19;
          bVar1 = lVar18 != 0;
          lVar18 = lVar18 + -8;
          plVar13 = plVar11;
        } while (bVar1);
        plVar14 = param_1;
      }
    }
LAB_013c0ee0:
    *plVar14 = lVar17;
  }
  else if ((lVar17 != 0) || (lVar18 == 0)) {
    if ((lVar17 != 0) && (lVar18 == 0)) goto LAB_013c0d84;
    puVar7 = (undefined8 *)FUN_012e3520(lVar17);
    iVar2 = FUN_012b6590(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar17);
    iVar3 = FUN_012b68c0(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar18);
    iVar4 = FUN_012b6590(*puVar7);
    puVar7 = (undefined8 *)FUN_012e3520(lVar18);
    iVar5 = FUN_012b68c0(*puVar7);
    if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) goto LAB_013c0ee8;
    lVar17 = *plVar16;
    *plVar16 = *plVar14;
    goto joined_r0x013c0d8c;
  }
LAB_013c0ee8:
  lVar12 = lVar12 + 8;
  lVar21 = lVar21 + 8;
  plVar13 = plVar16 + 1;
  plVar14 = plVar16;
  if (plVar16 + 1 == param_2) {
    return;
  }
  goto LAB_013c0d5c;
}


