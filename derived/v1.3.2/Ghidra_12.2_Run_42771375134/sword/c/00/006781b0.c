/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006781b0; name: FUN_006781b0
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_006781b0(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  
  uVar5 = *(uint *)(param_2 + 8);
  if ((int)uVar5 < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xd0) <= (int)uVar5) {
    return 0;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar5 * 8);
  if (lVar12 == 0) {
    return 0;
  }
  lVar10 = *(long *)(param_2 + 0x10);
  if ((lVar10 == 0) && (*(long *)(param_3 + 0x10) == 0)) {
    if (*(long *)(lVar12 + 0x20) == 0) {
      return 0;
    }
    lVar12 = *(long *)(lVar12 + 0x38);
  }
  else {
    lVar15 = *(long *)(lVar12 + 0x70);
    if (lVar15 == 0) {
      return 0;
    }
    plVar13 = *(long **)(lVar12 + 0x88);
    if (lVar15 != 1) {
      iVar6 = *(int *)(param_2 + 0xc);
      iVar14 = (int)lVar15 + -1;
      if ((int)lVar15 < 3) {
        iVar17 = 0;
      }
      else {
        iVar2 = *(int *)(param_3 + 0xc);
        iVar17 = 0;
        do {
          iVar1 = iVar17 + iVar14 >> 1;
          iVar8 = -1;
          lVar12 = *(long *)(plVar13[iVar1] + 8);
          iVar7 = *(int *)(lVar12 + 0x44);
          if (iVar7 < iVar6) {
LAB_00678338:
            iVar7 = *(int *)(lVar12 + 0xb4);
joined_r0x00678450:
            iVar9 = -1;
            if (iVar2 <= iVar7) goto LAB_00678348;
joined_r0x00678358:
            if (0 < iVar8) goto LAB_00678378;
LAB_00678464:
            if (-1 < iVar8) {
              if (0 < iVar9) goto LAB_00678378;
              if (-1 < iVar9) {
                return plVar13[iVar1];
              }
            }
          }
          else {
            if (iVar6 < iVar7) {
LAB_00678310:
              iVar8 = 1;
              iVar7 = *(int *)(lVar12 + 0xb4);
            }
            else {
              iVar8 = -1;
              if (*(uint *)(lVar12 + 0x40) < uVar5) goto LAB_00678338;
              if (uVar5 < *(uint *)(lVar12 + 0x40)) goto LAB_00678310;
              if (0 < iVar7) {
                lVar15 = 0;
                do {
                  bVar3 = *(byte *)(*(long *)(lVar12 + 0x48) + lVar15);
                  if (bVar3 < *(byte *)(lVar10 + lVar15)) {
                    iVar8 = -1;
                    iVar7 = *(int *)(lVar12 + 0xb4);
                    goto joined_r0x00678450;
                  }
                  if (*(byte *)(lVar10 + lVar15) < bVar3) goto LAB_00678310;
                  lVar15 = lVar15 + 1;
                  iVar8 = 0;
                } while (lVar15 < iVar7);
                goto LAB_00678338;
              }
              iVar8 = 0;
              iVar7 = *(int *)(lVar12 + 0xb4);
            }
            iVar9 = -1;
            if (iVar7 < iVar2) goto joined_r0x00678358;
LAB_00678348:
            if (iVar2 < iVar7) {
LAB_00678350:
              iVar9 = 1;
              goto joined_r0x00678358;
            }
            iVar9 = -1;
            if (*(uint *)(lVar12 + 0xb0) < *(uint *)(param_3 + 8)) goto joined_r0x00678358;
            if (*(uint *)(param_3 + 8) < *(uint *)(lVar12 + 0xb0)) goto LAB_00678350;
            if (0 < iVar7) {
              lVar15 = 0;
              do {
                bVar3 = *(byte *)(*(long *)(lVar12 + 0xb8) + lVar15);
                bVar4 = *(byte *)(*(long *)(param_3 + 0x10) + lVar15);
                if (bVar3 < bVar4) {
                  iVar9 = -1;
                  goto joined_r0x00678460;
                }
                if (bVar4 < bVar3) goto LAB_00678350;
                lVar15 = lVar15 + 1;
                iVar9 = 0;
              } while (lVar15 < iVar7);
              goto joined_r0x00678358;
            }
            iVar9 = 0;
joined_r0x00678460:
            if (iVar8 < 1) goto LAB_00678464;
LAB_00678378:
            iVar14 = iVar1;
            iVar1 = iVar17;
          }
          iVar17 = iVar1;
        } while (iVar17 < iVar14 + -1);
      }
      lVar12 = plVar13[iVar17];
      lVar15 = plVar13[iVar14];
      lVar11 = *(long *)(lVar12 + 8);
      if ((*(int *)(lVar11 + 0x44) == iVar6) && (*(uint *)(lVar11 + 0x40) == uVar5)) {
        if (0 < iVar6) {
          lVar16 = 0;
          do {
            bVar3 = *(byte *)(*(long *)(lVar11 + 0x48) + lVar16);
            if (bVar3 < *(byte *)(lVar10 + lVar16) || *(byte *)(lVar10 + lVar16) < bVar3)
            goto LAB_00678540;
            lVar16 = lVar16 + 1;
          } while (lVar16 < iVar6);
        }
        iVar14 = *(int *)(lVar11 + 0xb4);
        if ((iVar14 == *(int *)(param_3 + 0xc)) &&
           (*(int *)(lVar11 + 0xb0) == *(int *)(param_3 + 8))) {
          if (iVar14 < 1) {
            return lVar12;
          }
          lVar16 = 0;
          while (bVar3 = *(byte *)(*(long *)(lVar11 + 0xb8) + lVar16),
                bVar4 = *(byte *)(*(long *)(param_3 + 0x10) + lVar16),
                bVar4 <= bVar3 && bVar3 <= bVar4) {
            lVar16 = lVar16 + 1;
            if (iVar14 <= lVar16) {
              return lVar12;
            }
          }
        }
      }
LAB_00678540:
      lVar12 = *(long *)(lVar15 + 8);
      if (*(int *)(lVar12 + 0x44) != iVar6) {
        return 0;
      }
      if (*(uint *)(lVar12 + 0x40) != uVar5) {
        return 0;
      }
      if (0 < iVar6) {
        lVar11 = 0;
        do {
          bVar3 = *(byte *)(*(long *)(lVar12 + 0x48) + lVar11);
          if (bVar3 < *(byte *)(lVar10 + lVar11)) {
            return 0;
          }
          if (*(byte *)(lVar10 + lVar11) < bVar3) {
            return 0;
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar6);
      }
      iVar6 = *(int *)(lVar12 + 0xb4);
      if (iVar6 != *(int *)(param_3 + 0xc)) {
        return 0;
      }
      if (*(int *)(lVar12 + 0xb0) != *(int *)(param_3 + 8)) {
        return 0;
      }
      if (iVar6 < 1) {
        return lVar15;
      }
      lVar10 = 0;
      while( true ) {
        bVar3 = *(byte *)(*(long *)(lVar12 + 0xb8) + lVar10);
        bVar4 = *(byte *)(*(long *)(param_3 + 0x10) + lVar10);
        if (bVar3 < bVar4) {
          return 0;
        }
        if (bVar4 < bVar3) break;
        lVar10 = lVar10 + 1;
        if (iVar6 <= lVar10) {
          return lVar15;
        }
      }
      return 0;
    }
    lVar12 = *plVar13;
    lVar15 = *(long *)(lVar12 + 8);
    iVar6 = *(int *)(lVar15 + 0x44);
    if (iVar6 != *(int *)(param_2 + 0xc)) {
      return 0;
    }
    if (*(uint *)(lVar15 + 0x40) != uVar5) {
      return 0;
    }
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        bVar3 = *(byte *)(*(long *)(lVar15 + 0x48) + lVar11);
        if (bVar3 < *(byte *)(lVar10 + lVar11)) {
          return 0;
        }
        if (*(byte *)(lVar10 + lVar11) < bVar3) {
          return 0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar6);
    }
    iVar6 = *(int *)(lVar15 + 0xb4);
    if (iVar6 != *(int *)(param_3 + 0xc)) {
      return 0;
    }
    if (*(int *)(lVar15 + 0xb0) != *(int *)(param_3 + 8)) {
      return 0;
    }
    if (0 < iVar6) {
      lVar10 = 0;
      do {
        bVar3 = *(byte *)(*(long *)(lVar15 + 0xb8) + lVar10);
        bVar4 = *(byte *)(*(long *)(param_3 + 0x10) + lVar10);
        if (bVar3 < bVar4) {
          return 0;
        }
        if (bVar4 < bVar3) {
          return 0;
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar6);
    }
  }
  return lVar12;
}


