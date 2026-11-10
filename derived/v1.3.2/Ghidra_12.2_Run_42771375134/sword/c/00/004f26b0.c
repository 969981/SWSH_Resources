/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f26b0; name: FUN_004f26b0
 */


undefined8
FUN_004f26b0(undefined8 param_1,int *param_2,float *param_3,int *param_4,undefined8 *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 *puVar12;
  long lVar13;
  float *pfVar14;
  uint uVar15;
  long *plVar16;
  
  iVar8 = *param_2;
  if (param_2[1] < 1) {
    if (iVar8 < 1) {
      return 1;
    }
    lVar13 = 0;
    puVar12 = (undefined4 *)PTR_DAT_02713640;
    do {
      while ((((*param_3 <= (float)param_2[lVar13 * 10 + 5] &&
               ((float)param_2[lVar13 * 10 + 2] <= param_3[3])) &&
              (param_3[1] <= (float)param_2[lVar13 * 10 + 6])) &&
             ((((float)param_2[lVar13 * 10 + 3] <= param_3[4] &&
               (param_3[2] <= (float)param_2[lVar13 * 10 + 7])) &&
              ((float)param_2[lVar13 * 10 + 4] <= param_3[5]))))) {
        *param_4 = *param_4 + 1;
        lVar9 = *(long *)(param_2 + lVar13 * 10 + 10);
        lVar11 = *(long *)(lVar9 + 0x58);
        if ((*(char *)(lVar11 + 0x28) != '\0') ||
           ((*(uint *)(lVar11 + 0x10) & *(uint *)(param_5 + 1)) == 0)) break;
        *(undefined1 *)(lVar11 + 0x28) = 1;
        uVar10 = *(undefined8 *)(lVar9 + 0x58);
        plVar16 = (long *)*param_5;
        uVar2 = *(uint *)(plVar16 + 1);
        uVar15 = *(uint *)((long)plVar16 + 0xc);
        if (uVar15 <= uVar2) {
          uVar15 = uVar15 + 0x20;
          puVar6 = (undefined8 *)FUN_00404690(*puVar12,(ulong)uVar15 << 3);
          puVar4 = PTR_DAT_02713640;
          puVar12 = (undefined4 *)PTR_DAT_02713640;
          if (puVar6 == (undefined8 *)0x0) break;
          puVar7 = (undefined8 *)*plVar16;
          if ((puVar7 != (undefined8 *)0x0) && (puVar7 != puVar6)) {
            uVar3 = *(uint *)(plVar16 + 1);
            if (uVar3 != 0) {
              *puVar6 = *puVar7;
              if (uVar3 != 1) {
                uVar1 = uVar3 + 3 & 3;
                if ((ulong)uVar3 - 2 < 3) {
                  lVar11 = 1;
                }
                else {
                  lVar9 = 0;
                  do {
                    lVar11 = lVar9;
                    lVar9 = lVar11 * 8;
                    puVar6[lVar11 + 1] = *(undefined8 *)(*plVar16 + lVar9 + 8);
                    puVar6[lVar11 + 2] = *(undefined8 *)(*plVar16 + lVar9 + 0x10);
                    puVar6[lVar11 + 3] = *(undefined8 *)(*plVar16 + lVar9 + 0x18);
                    puVar6[lVar11 + 4] = *(undefined8 *)(*plVar16 + lVar9 + 0x20);
                    lVar9 = lVar11 + 4;
                  } while (((ulong)uVar3 - 1) - (ulong)uVar1 != lVar11 + 4);
                  lVar11 = lVar11 + 5;
                }
                if (uVar1 != 0) {
                  lVar11 = lVar11 << 3;
                  lVar9 = -(ulong)uVar1;
                  do {
                    *(undefined8 *)((long)puVar6 + lVar11) = *(undefined8 *)(*plVar16 + lVar11);
                    lVar11 = lVar11 + 8;
                    lVar9 = lVar9 + 1;
                  } while (lVar9 != 0);
                }
              }
              puVar7 = (undefined8 *)*plVar16;
            }
            FUN_00404870(*(undefined4 *)puVar4,puVar7);
          }
          puVar12 = (undefined4 *)PTR_DAT_02713640;
          *plVar16 = (long)puVar6;
          *(uint *)((long)plVar16 + 0xc) = uVar15;
        }
        if (uVar15 <= uVar2) break;
        puVar6 = (undefined8 *)(*plVar16 + (ulong)*(uint *)(plVar16 + 1) * 8);
        *(uint *)(plVar16 + 1) = *(uint *)(plVar16 + 1) + 1;
        if (puVar6 == (undefined8 *)0x0) break;
        *puVar6 = uVar10;
        lVar13 = lVar13 + 1;
        if (*param_2 <= lVar13) {
          return 1;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *param_2);
  }
  else if (0 < iVar8) {
    lVar13 = 0;
    pfVar14 = (float *)(param_2 + 4);
    do {
      if (((((*param_3 <= pfVar14[1]) && (pfVar14[-2] <= param_3[3])) && (param_3[1] <= pfVar14[2]))
          && ((pfVar14[-1] <= param_3[4] && (param_3[2] <= pfVar14[3])))) &&
         (*pfVar14 <= param_3[5])) {
        uVar5 = FUN_004f26b0(param_1,*(undefined8 *)(pfVar14 + 4),param_3,param_4,param_5);
        if ((uVar5 & 1) == 0) {
          return 0;
        }
        iVar8 = *param_2;
      }
      lVar13 = lVar13 + 1;
      pfVar14 = pfVar14 + 10;
    } while (lVar13 < iVar8);
  }
  return 1;
}


