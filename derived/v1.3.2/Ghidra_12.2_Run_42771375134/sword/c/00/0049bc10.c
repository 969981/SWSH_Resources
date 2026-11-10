/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0049bc10; name: FUN_0049bc10
 */


undefined8
FUN_0049bc10(undefined8 param_1,undefined4 *param_2,float *param_3,float *param_4,long *param_5,
            int *param_6,uint param_7,uint param_8)

{
  int iVar1;
  long *plVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  float *pfVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = (float)param_1;
  if (param_3 == (float *)0x0) {
    if (param_4 != (float *)0x0) {
      pfVar6 = param_4;
      goto LAB_0049bc80;
    }
    fVar14 = (float)param_2[4];
    iVar4 = param_2[5];
joined_r0x0049bcd0:
    if ((iVar4 != 0) && ((char)param_6[2] == '\0')) {
      if (iVar4 == 2) {
        if (fVar13 <= fVar14) {
          fVar12 = (float)param_2[7];
        }
        else {
          fVar12 = (float)param_2[6];
        }
        goto LAB_0049bd0c;
      }
      if (iVar4 == 1) {
        if (fVar13 <= fVar14) {
          if ((float)param_2[7] == 0.0) goto LAB_0049bd00;
          fVar12 = (fVar14 - fVar13) / (float)param_2[7];
        }
        else {
          if ((float)param_2[6] == 0.0) goto LAB_0049bd00;
          fVar12 = (fVar13 - fVar14) / (float)param_2[6];
        }
LAB_0049bd0c:
        iVar4 = (int)(fVar12 * DAT_01d4bec0);
      }
      else {
LAB_0049bd00:
        iVar4 = 0;
      }
      iVar1 = *param_6;
      if (*param_6 <= iVar4) {
        iVar1 = iVar4;
      }
      *param_6 = iVar1;
    }
    if (*param_6 < 1) {
      bVar10 = true;
      bVar11 = true;
      plVar7 = *(long **)(param_2 + 0x10);
      goto joined_r0x0049bd98;
    }
    if ((param_3 != (float *)0x0) || (iVar4 = FUN_004a5680(*param_2,param_5), iVar4 == 1)) {
      uVar5 = FUN_0049bf00(fVar14,param_1,param_2,param_5,param_6,param_7 & 1);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      goto LAB_0049bd70;
    }
LAB_0049be20:
    pfVar6 = (float *)(param_2 + 4);
    if (param_4 != (float *)0x0) {
      pfVar6 = param_4;
    }
    if ((param_7 & 1) != 0) {
      return 1;
    }
    fVar14 = *pfVar6;
    iVar4 = FUN_004a5680(*param_2,param_5);
    if (iVar4 != 1) {
      return 1;
    }
    param_3 = (float *)FUN_0049c8e0(param_2 + 8,param_5);
    if (param_3 == (float *)0x0) {
      return 1;
    }
  }
  else {
    pfVar6 = param_3;
    if (*param_3 != fVar13) {
LAB_0049bc80:
      fVar14 = *pfVar6;
      iVar4 = param_2[5];
      goto joined_r0x0049bcd0;
    }
    bVar10 = false;
    bVar11 = false;
    plVar7 = *(long **)(param_2 + 0x10);
joined_r0x0049bd98:
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7;
      plVar9 = (long *)0x0;
      do {
        plVar8 = plVar2;
        if ((((plVar8[4] == *param_5) && ((int)plVar8[5] == (int)param_5[1])) &&
            ((int)plVar8[6] == (int)param_5[2])) &&
           ((((char)plVar8[7] == (char)param_5[3] && ((char)plVar8[8] == (char)param_5[4])) &&
            (plVar8[9] == param_5[5])))) {
          plVar2 = (long *)(param_2 + 0x10);
          if (plVar7 != plVar8) {
            plVar2 = plVar9 + 1;
          }
          *plVar2 = plVar8[1];
          uVar3 = *(undefined4 *)PTR_DAT_02712a90;
          *plVar8 = (long)(PTR_DAT_02713368 + 0x10);
          if (plVar8[2] != 0) {
            FUN_004be250(*(undefined8 *)PTR_DAT_02712b18,plVar8[2],plVar8);
          }
          FUN_00404870(uVar3,plVar8);
          if (!bVar10 && (param_7 & 1) == 0) {
            return 1;
          }
          goto LAB_0049bd70;
        }
        plVar2 = (long *)plVar8[1];
        plVar9 = plVar8;
        bVar11 = bVar10;
      } while ((long *)plVar8[1] != (long *)0x0);
    }
    if (!bVar11 && (param_7 & 1) == 0) {
      return 1;
    }
LAB_0049bd70:
    if (param_3 == (float *)0x0) goto LAB_0049be20;
    fVar14 = *param_3;
    if ((param_7 & 1) != 0) {
      FUN_0049a1b0(param_2 + 8,param_5);
      goto LAB_0049be60;
    }
  }
  *param_3 = fVar13;
LAB_0049be60:
  FUN_0049c9d0(fVar14,param_1,param_2,param_5,param_8 & 1);
  return 1;
}


