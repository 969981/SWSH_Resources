/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f5e40; name: FUN_005f5e40
 */


/* WARNING: Removing unreachable block (ram,0x005f6300) */
/* WARNING: Removing unreachable block (ram,0x005f5f3c) */
/* WARNING: Removing unreachable block (ram,0x005f6108) */

undefined8
FUN_005f5e40(undefined8 param_1,long *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
            long param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  switch((int)param_3[0xb]) {
  case 2:
    break;
  case 3:
    uVar1 = *(uint *)(param_6 + 0x18);
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (*(int *)((long)param_3 + 0x6c) <= (int)uVar7) {
          return 1;
        }
        iVar3 = *(int *)(param_6 + 0x14);
        iVar4 = *(int *)(param_6 + 8);
        iVar12 = *(int *)(param_6 + 0xc);
        plVar5 = (long *)(**(code **)(*param_3 + 0x98))(param_3,uVar7);
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        if (*plVar5 == 0) {
          return 0;
        }
        uVar6 = FUN_005ed1d0(*(undefined4 *)((long)param_3 + 0x5c));
        if ((uVar6 & 1) == 0) {
          iVar4 = FUN_005ed170(*(undefined4 *)((long)param_3 + 0x5c));
          if (0 < iVar3) {
            iVar12 = *(int *)(param_6 + 8);
            lVar11 = (long)*(int *)(param_6 + 0xc) * (long)iVar4;
            lVar10 = *plVar5;
            iVar4 = 0;
            do {
              if (0 < iVar12) {
                iVar2 = 0;
                do {
                  (**(code **)(*param_2 + 0xa8))(param_2,lVar10,lVar11,1);
                  iVar12 = *(int *)(param_6 + 8);
                  iVar2 = iVar2 + 1;
                  lVar10 = lVar10 + lVar11;
                } while (iVar2 < iVar12);
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 != iVar3);
          }
        }
        else {
          iVar2 = FUN_005ed1a0();
          if (iVar12 < 1) {
            iVar14 = 1;
            if (3 < iVar4) goto LAB_005f65d0;
LAB_005f64e4:
            iVar12 = 1;
          }
          else {
            iVar14 = iVar12 + 6;
            if (-1 < iVar12 + 3) {
              iVar14 = iVar12 + 3;
            }
            iVar14 = iVar14 >> 2;
            if (iVar4 < 4) goto LAB_005f64e4;
LAB_005f65d0:
            iVar12 = iVar4 + 3;
            if (-1 < iVar4) {
              iVar12 = iVar4;
            }
            iVar12 = iVar12 >> 2;
          }
          if ((0 < iVar3) && (0 < iVar12)) {
            lVar11 = (long)(iVar14 * iVar2);
            lVar10 = *plVar5;
            iVar4 = 0;
            do {
              lVar9 = lVar10;
              iVar2 = iVar12;
              do {
                (**(code **)(*param_2 + 0xa8))(param_2,lVar9,lVar11,1);
                lVar9 = lVar9 + lVar11;
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
              iVar4 = iVar4 + 1;
              lVar10 = lVar10 + ((ulong)(iVar12 - 1) + 1) * lVar11;
            } while (iVar4 != iVar3);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar1);
    }
    return 1;
  case 4:
    uVar1 = *(uint *)(param_6 + 0x18);
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        iVar12 = *(int *)(param_6 + 8);
        iVar4 = *(int *)(param_6 + 0xc);
        uVar8 = 0;
        do {
          if (*(int *)((long)param_3 + 0x6c) <= (int)uVar8) {
            return 1;
          }
          plVar5 = (long *)(**(code **)(*param_3 + 0x90))(param_3,0,uVar7,uVar8);
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          if (*plVar5 == 0) {
            return 0;
          }
          uVar6 = FUN_005ed1d0(*(undefined4 *)((long)param_3 + 0x5c));
          if ((uVar6 & 1) == 0) {
            iVar3 = FUN_005ed170(*(undefined4 *)((long)param_3 + 0x5c));
            if (0 < *(int *)(param_6 + 8)) {
              lVar11 = (long)*(int *)(param_6 + 0xc) * (long)iVar3;
              lVar10 = *plVar5;
              iVar3 = 0;
              do {
                (**(code **)(*param_2 + 0xa8))(param_2,lVar10,lVar11,1);
                iVar3 = iVar3 + 1;
                lVar10 = lVar10 + lVar11;
              } while (iVar3 < *(int *)(param_6 + 8));
            }
          }
          else {
            iVar3 = FUN_005ed1a0();
            if (iVar4 < 1) {
              iVar2 = 1;
              if (3 < iVar12) goto LAB_005f6368;
LAB_005f62f4:
              iVar14 = 1;
            }
            else {
              iVar2 = iVar4 + 6;
              if (-1 < iVar4 + 3) {
                iVar2 = iVar4 + 3;
              }
              iVar2 = iVar2 >> 2;
              if (iVar12 < 4) goto LAB_005f62f4;
LAB_005f6368:
              iVar14 = iVar12 + 3;
              if (-1 < iVar12) {
                iVar14 = iVar12;
              }
              iVar14 = iVar14 >> 2;
              if (iVar14 < 1) goto LAB_005f63b4;
            }
            lVar10 = *plVar5;
            do {
              (**(code **)(*param_2 + 0xa8))(param_2,lVar10,(long)(iVar2 * iVar3),1);
              lVar10 = lVar10 + iVar2 * iVar3;
              iVar14 = iVar14 + -1;
            } while (iVar14 != 0);
          }
LAB_005f63b4:
          iVar4 = iVar4 >> 1;
          if (iVar4 < 2) {
            iVar4 = 1;
          }
          iVar12 = iVar12 >> 1;
          uVar8 = uVar8 + 1;
          if (iVar12 < 2) {
            iVar12 = 1;
          }
        } while (uVar8 < uVar1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < 6);
    }
    return 1;
  case 5:
    uVar1 = *(uint *)(param_6 + 0x18);
    if ((int)uVar1 < 2) {
      uVar1 = 1;
    }
    if ((0 < (int)param_3[0xe]) && (0 < (int)uVar1)) {
      iVar4 = 0;
      do {
        iVar3 = *(int *)(param_6 + 8);
        iVar12 = *(int *)(param_6 + 0xc);
        uVar7 = 0;
        do {
          if (*(int *)((long)param_3 + 0x6c) <= (int)uVar7) {
            return 1;
          }
          plVar5 = (long *)(**(code **)(*param_3 + 0x88))(param_3,iVar4,uVar7);
          if (plVar5 == (long *)0x0) {
            return 0;
          }
          if (*plVar5 == 0) {
            return 0;
          }
          uVar6 = FUN_005ed1d0(*(undefined4 *)((long)param_3 + 0x5c));
          if ((uVar6 & 1) == 0) {
            iVar2 = FUN_005ed170(*(undefined4 *)((long)param_3 + 0x5c));
            if (0 < *(int *)(param_6 + 8)) {
              lVar11 = (long)*(int *)(param_6 + 0xc) * (long)iVar2;
              lVar10 = *plVar5;
              iVar2 = 0;
              do {
                (**(code **)(*param_2 + 0xa8))(param_2,lVar10,lVar11,1);
                iVar2 = iVar2 + 1;
                lVar10 = lVar10 + lVar11;
              } while (iVar2 < *(int *)(param_6 + 8));
            }
          }
          else {
            iVar2 = FUN_005ed1a0();
            if (iVar12 < 1) {
              iVar14 = 1;
              if (3 < iVar3) goto LAB_005f6170;
LAB_005f60fc:
              iVar13 = 1;
            }
            else {
              iVar14 = iVar12 + 6;
              if (-1 < iVar12 + 3) {
                iVar14 = iVar12 + 3;
              }
              iVar14 = iVar14 >> 2;
              if (iVar3 < 4) goto LAB_005f60fc;
LAB_005f6170:
              iVar13 = iVar3 + 3;
              if (-1 < iVar3) {
                iVar13 = iVar3;
              }
              iVar13 = iVar13 >> 2;
              if (iVar13 < 1) goto LAB_005f61bc;
            }
            lVar10 = *plVar5;
            do {
              (**(code **)(*param_2 + 0xa8))(param_2,lVar10,(long)(iVar14 * iVar2),1);
              lVar10 = lVar10 + iVar14 * iVar2;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
LAB_005f61bc:
          iVar12 = iVar12 >> 1;
          if (iVar12 < 2) {
            iVar12 = 1;
          }
          iVar3 = iVar3 >> 1;
          uVar7 = uVar7 + 1;
          if (iVar3 < 2) {
            iVar3 = 1;
          }
        } while (uVar7 < uVar1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_3[0xe]);
    }
    return 1;
  default:
    return 0;
  }
  uVar1 = *(uint *)(param_6 + 0x18);
  if ((int)uVar1 < 2) {
    uVar1 = 1;
  }
  if (0 < (int)uVar1) {
    iVar12 = *(int *)(param_6 + 8);
    iVar4 = *(int *)(param_6 + 0xc);
    uVar7 = 0;
    do {
      if (*(int *)((long)param_3 + 0x6c) <= (int)uVar7) {
        return 1;
      }
      plVar5 = (long *)(**(code **)(*param_3 + 0x88))(param_3,0,uVar7);
      if (plVar5 == (long *)0x0) {
        return 0;
      }
      if (*plVar5 == 0) {
        return 0;
      }
      uVar6 = FUN_005ed1d0(*(undefined4 *)((long)param_3 + 0x5c));
      if ((uVar6 & 1) == 0) {
        iVar3 = FUN_005ed170(*(undefined4 *)((long)param_3 + 0x5c));
        if (0 < iVar12) {
          lVar10 = *plVar5;
          iVar2 = iVar12;
          do {
            (**(code **)(*param_2 + 0xa8))(param_2,lVar10,(long)(iVar3 * iVar4),1);
            lVar10 = lVar10 + iVar3 * iVar4;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar3 = FUN_005ed1a0();
        if (iVar4 < 1) {
          iVar2 = 1;
          if (3 < iVar12) goto LAB_005f5f94;
LAB_005f5f30:
          iVar14 = 1;
        }
        else {
          iVar2 = iVar4 + 6;
          if (-1 < iVar4 + 3) {
            iVar2 = iVar4 + 3;
          }
          iVar2 = iVar2 >> 2;
          if (iVar12 < 4) goto LAB_005f5f30;
LAB_005f5f94:
          iVar14 = iVar12 + 3;
          if (-1 < iVar12) {
            iVar14 = iVar12;
          }
          iVar14 = iVar14 >> 2;
          if (iVar14 < 1) goto LAB_005f5fe0;
        }
        lVar10 = *plVar5;
        do {
          (**(code **)(*param_2 + 0xa8))(param_2,lVar10,(long)(iVar2 * iVar3),1);
          lVar10 = lVar10 + iVar2 * iVar3;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
LAB_005f5fe0:
      iVar4 = iVar4 >> 1;
      iVar12 = iVar12 >> 1;
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      uVar7 = uVar7 + 1;
      if (iVar12 < 2) {
        iVar12 = 1;
      }
    } while (uVar7 < uVar1);
  }
  return 1;
}


