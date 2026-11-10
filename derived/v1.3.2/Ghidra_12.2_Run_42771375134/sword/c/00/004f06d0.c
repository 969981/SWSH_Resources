/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f06d0; name: FUN_004f06d0
 */


undefined8
FUN_004f06d0(long param_1,float *param_2,long *param_3,long *param_4,long *param_5,
            undefined4 *param_6)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  float *pfVar8;
  long lVar9;
  undefined4 uVar10;
  long *plVar11;
  bool bVar12;
  float *pfVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar4 = (int)*param_4;
  if (*(int *)((long)param_4 + 4) < 1) {
    if (0 < iVar4) {
      lVar14 = 0;
      plVar11 = param_4;
      do {
        if (plVar11[5] == *param_3) {
          memcpy(plVar11 + 1,param_4 + (long)(iVar4 + -1) * 5 + 1,0x28);
          *(int *)param_4 = iVar4 + -1;
          return 0;
        }
        lVar14 = lVar14 + 1;
        plVar11 = plVar11 + 5;
      } while (lVar14 < iVar4);
    }
  }
  else if (0 < iVar4) {
    lVar14 = 0;
    pfVar13 = (float *)(param_4 + 2);
    do {
      if (((((*param_2 <= pfVar13[1]) && (pfVar13[-2] <= param_2[3])) && (param_2[1] <= pfVar13[2]))
          && ((pfVar13[-1] <= param_2[4] && (param_2[2] <= pfVar13[3])))) &&
         (*pfVar13 <= param_2[5])) {
        uVar2 = FUN_004f06d0(param_1,param_2,param_3,*(long *)(pfVar13 + 4),param_5,param_6);
        if ((uVar2 & 1) == 0) {
          plVar11 = *(long **)(pfVar13 + 4);
          if (3 < (int)*plVar11) {
            fVar18 = *(float *)(plVar11 + 1);
            fVar16 = *(float *)((long)plVar11 + 0xc);
            lVar14 = (long)(int)*plVar11 + -1;
            fVar15 = *(float *)(plVar11 + 2);
            fVar17 = *(float *)((long)plVar11 + 0x14);
            fVar20 = *(float *)(plVar11 + 3);
            fVar19 = *(float *)((long)plVar11 + 0x1c);
            pfVar8 = (float *)((long)plVar11 + 0x44);
            do {
              fVar16 = (float)NEON_fminnm(fVar16,pfVar8[-4]);
              fVar18 = (float)NEON_fminnm(fVar18,pfVar8[-5]);
              if (fVar20 <= pfVar8[-1]) {
                fVar20 = pfVar8[-1];
              }
              if (fVar17 <= pfVar8[-2]) {
                fVar17 = pfVar8[-2];
              }
              fVar15 = (float)NEON_fminnm(fVar15,pfVar8[-3]);
              if (fVar19 <= *pfVar8) {
                fVar19 = *pfVar8;
              }
              lVar14 = lVar14 + -1;
              pfVar8 = pfVar8 + 10;
            } while (lVar14 != 0);
            pfVar13[-2] = fVar18;
            pfVar13[-1] = fVar16;
            *pfVar13 = fVar15;
            pfVar13[1] = fVar17;
            pfVar13[2] = fVar20;
            pfVar13[3] = fVar19;
            return 0;
          }
          lVar14 = *(long *)(param_1 + 0x20);
          goto joined_r0x004f0890;
        }
        iVar4 = (int)*param_4;
      }
      lVar14 = lVar14 + 1;
      pfVar13 = pfVar13 + 10;
    } while (lVar14 < iVar4);
  }
  return 1;
joined_r0x004f0890:
  if (lVar14 == 0) goto LAB_004f08a4;
  if (*(long *)(lVar14 + 0x410) != 0) goto LAB_004f093c;
  lVar14 = *(long *)(lVar14 + 0x400);
  goto joined_r0x004f0890;
LAB_004f093c:
  plVar6 = *(long **)(lVar14 + 0x410);
joined_r0x004f0940:
  if (plVar6 != (long *)0x0) {
    if (*plVar6 == 0) {
      *(undefined8 *)(lVar14 + 0x410) = 0;
    }
    else {
      *(long *)(lVar14 + 0x410) = *plVar6;
    }
    *(int *)(lVar14 + 0x408) = *(int *)(lVar14 + 0x408) + -1;
    plVar6[1] = (long)plVar11;
    *plVar6 = *param_5;
    *param_5 = (long)plVar6;
    bVar12 = true;
    uVar10 = 1;
    goto LAB_004f0988;
  }
  goto LAB_004f0954;
LAB_004f08a4:
  lVar14 = FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0x418);
  if (lVar14 != 0) {
    lVar5 = 0;
    *(undefined8 *)(lVar14 + 0x400) = 0;
    *(undefined4 *)(lVar14 + 0x408) = 0;
    *(undefined8 *)(lVar14 + 0x410) = 0;
    lVar9 = lVar14;
    do {
      *(long *)(lVar14 + 0x410) = lVar9;
      *(undefined8 *)(lVar14 + lVar5) = 0;
      while( true ) {
        if (lVar5 == 0x3f0) {
          *(undefined4 *)(lVar14 + 0x408) = 0x40;
          if (*(long *)(param_1 + 0x20) != 0) {
            *(long *)(lVar14 + 0x400) = *(long *)(param_1 + 0x20);
            *(long *)(param_1 + 0x20) = lVar14;
            plVar6 = *(long **)(lVar14 + 0x410);
            goto joined_r0x004f0940;
          }
          *(long *)(param_1 + 0x20) = lVar14;
          *(undefined8 *)(lVar14 + 0x400) = 0;
          goto LAB_004f093c;
        }
        lVar5 = lVar5 + 0x10;
        lVar9 = lVar14 + lVar5;
        if (*(long *)(lVar14 + 0x410) == 0) break;
        *(long *)(lVar14 + lVar5) = *(long *)(lVar14 + 0x410);
        *(long *)(lVar14 + 0x410) = lVar9;
      }
    } while( true );
  }
LAB_004f0954:
  bVar12 = false;
  uVar10 = 0x34;
LAB_004f0988:
  lVar14 = (long)(int)*param_4 + -1;
  memcpy(pfVar13 + -2,param_4 + lVar14 * 5 + 1,0x28);
  *(int *)param_4 = (int)lVar14;
  if (!bVar12) {
    plVar6 = (long *)(param_1 + 0x18);
    if ((long *)*plVar6 == (long *)0x0) {
      plVar7 = (long *)0x0;
    }
    else {
      plVar7 = (long *)0x0;
      plVar1 = (long *)*plVar6;
      do {
        plVar3 = plVar1;
        if ((plVar3 <= plVar11) && (plVar11 < plVar3 + 0x1ec)) goto LAB_004f09f4;
        plVar7 = plVar3;
        plVar1 = (long *)plVar3[0x1ec];
      } while ((long *)plVar3[0x1ec] != (long *)0x0);
    }
    plVar3 = (long *)0x0;
LAB_004f09f4:
    if (plVar3[0x1ee] == 0) {
      plVar3[0x1ee] = (long)plVar11;
      *plVar11 = 0;
    }
    else {
      *plVar11 = plVar3[0x1ee];
      plVar3[0x1ee] = (long)plVar11;
    }
    iVar4 = (int)plVar3[0x1ed] + 1;
    *(int *)(plVar3 + 0x1ed) = iVar4;
    if (iVar4 == 0xc) {
      if ((long *)*plVar6 != plVar3) {
        plVar6 = plVar7 + 0x1ec;
      }
      *plVar6 = plVar3[0x1ec];
      FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
    }
    *param_6 = uVar10;
  }
  return 0;
}


