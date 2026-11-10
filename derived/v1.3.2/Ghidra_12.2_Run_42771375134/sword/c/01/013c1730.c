/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013c1730; name: FUN_013c1730
 */


bool FUN_013c1730(long *param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    lVar15 = param_2[-1];
    lVar10 = *param_1;
    if (lVar15 != 0 || lVar10 != 0) {
      if ((lVar15 == 0) && (lVar10 != 0)) {
        return true;
      }
      if ((lVar15 == 0) || (lVar10 != 0)) {
        puVar7 = (undefined8 *)FUN_012e3520(lVar15);
        iVar2 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar15);
        iVar3 = FUN_012b68c0(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar10);
        iVar4 = FUN_012b6590(*puVar7);
        puVar7 = (undefined8 *)FUN_012e3520(lVar10);
        iVar5 = FUN_012b68c0(*puVar7);
        if ((uint)(iVar3 * iVar2) <= (uint)(iVar5 * iVar4)) {
          return true;
        }
        lVar10 = *param_1;
        lVar15 = param_2[-1];
      }
    }
    *param_1 = lVar15;
    param_2[-1] = lVar10;
    break;
  case 3:
    FUN_013c0fb0(param_1,param_1 + 1,param_2 + -1);
    break;
  case 4:
    FUN_013c12a0(param_1,param_1 + 1,param_1 + 2,param_2 + -1);
    break;
  case 5:
    FUN_013c14a0(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
    break;
  default:
    FUN_013c0fb0(param_1,param_1 + 1,param_1 + 2);
    if (param_1 + 3 != param_2) {
      lVar15 = 0;
      iVar2 = 0;
      lVar10 = 8;
      plVar16 = param_1 + 3;
      plVar11 = param_1 + 2;
      do {
        plVar8 = plVar16;
        lVar12 = *plVar8;
        lVar13 = *plVar11;
        if (lVar12 == 0 && lVar13 == 0) {
LAB_013c1880:
          *plVar8 = lVar13;
joined_r0x013c19c8:
          if (plVar11 != param_1) {
            lVar13 = lVar15;
            if (lVar12 == 0) {
              do {
                if (*(long *)((long)param_1 + lVar13 + 8) != 0) {
                  plVar11 = (long *)((long)param_1 + lVar13 + 0x10);
                  goto LAB_013c19d8;
                }
                bVar1 = lVar13 != -8;
                *(undefined8 *)((long)param_1 + lVar13 + 0x10) = 0;
                lVar13 = lVar13 + -8;
              } while (bVar1);
              plVar11 = param_1;
            }
            else {
              lVar13 = lVar10;
              plVar16 = plVar11;
              do {
                lVar14 = *(long *)((long)param_1 + lVar13);
                plVar11 = plVar11 + -1;
                if (lVar14 == 0) {
                  plVar9 = (long *)((long)param_1 + lVar13);
                  lVar14 = 0;
                }
                else {
                  puVar7 = (undefined8 *)FUN_012e3520(lVar12);
                  iVar3 = FUN_012b6590(*puVar7);
                  puVar7 = (undefined8 *)FUN_012e3520(lVar12);
                  iVar4 = FUN_012b68c0(*puVar7);
                  puVar7 = (undefined8 *)FUN_012e3520(lVar14);
                  iVar5 = FUN_012b6590(*puVar7);
                  puVar7 = (undefined8 *)FUN_012e3520(lVar14);
                  iVar6 = FUN_012b68c0(*puVar7);
                  if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) goto LAB_013c1930;
                  lVar14 = *(long *)((long)param_1 + lVar13);
                  plVar9 = plVar11;
                }
                *plVar16 = lVar14;
                bVar1 = lVar13 != 0;
                lVar13 = lVar13 + -8;
                plVar16 = plVar9;
              } while (bVar1);
              plVar16 = param_1;
LAB_013c1930:
              plVar11 = plVar16;
            }
          }
LAB_013c19d8:
          *plVar11 = lVar12;
          iVar2 = iVar2 + 1;
          if (iVar2 == 8) {
            return plVar8 + 1 == param_2;
          }
        }
        else if ((lVar12 != 0) || (lVar13 == 0)) {
          if ((lVar12 != 0) && (lVar13 == 0)) goto LAB_013c1880;
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar3 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar12);
          iVar4 = FUN_012b68c0(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar13);
          iVar5 = FUN_012b6590(*puVar7);
          puVar7 = (undefined8 *)FUN_012e3520(lVar13);
          iVar6 = FUN_012b68c0(*puVar7);
          if ((uint)(iVar4 * iVar3) <= (uint)(iVar6 * iVar5)) goto LAB_013c19ec;
          lVar12 = *plVar8;
          *plVar8 = *plVar11;
          goto joined_r0x013c19c8;
        }
LAB_013c19ec:
        lVar10 = lVar10 + 8;
        lVar15 = lVar15 + 8;
        plVar16 = plVar8 + 1;
        plVar11 = plVar8;
      } while (plVar8 + 1 != param_2);
    }
  }
  return true;
}


