/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005f37b0; name: FUN_005f37b0
 */


undefined8 FUN_005f37b0(long param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  void *pvVar15;
  size_t __n;
  long *plVar16;
  long lVar17;
  undefined4 local_64;
  
  local_64 = param_3;
  uVar5 = FUN_005ed200(*(undefined4 *)(param_1 + 0x5c));
  if ((((uVar5 & 1) == 0) &&
      (iVar2 = FUN_005ed6e0(*(undefined4 *)(param_1 + 0x5c),param_2), -1 < iVar2)) &&
     (iVar3 = FUN_005ed730(*(undefined4 *)(param_1 + 0x5c),param_2), -1 < iVar3)) {
    iVar4 = FUN_005ed170(*(undefined4 *)(param_1 + 0x5c));
    iVar8 = *(int *)(param_1 + 0x58);
    if ((iVar8 - 4U < 2) || (iVar8 == 2)) {
      uVar7 = *(undefined8 *)(param_1 + 0xf0);
      if (0 < (int)uVar7) {
        lVar10 = (long)iVar2;
        __n = (size_t)iVar3;
        lVar14 = (long)iVar4;
        if (param_4 < 0) {
          if (param_5 < 0) {
            lVar13 = 0;
            do {
              plVar16 = (long *)(*(long *)(param_1 + 0x108) + lVar13 * 0x20);
              iVar2 = (int)plVar16[3];
              if (0 < iVar2) {
                lVar17 = *plVar16;
                iVar4 = *(int *)((long)plVar16 + 0x1c);
                iVar3 = 0;
                iVar8 = *(int *)((long)plVar16 + 0x14);
                do {
                  if (0 < iVar8) {
                    iVar2 = 0;
                    pvVar15 = (void *)(lVar17 + lVar10);
                    do {
                      memcpy(pvVar15,&local_64,__n);
                      iVar8 = *(int *)((long)plVar16 + 0x14);
                      iVar2 = iVar2 + 1;
                      pvVar15 = (void *)((long)pvVar15 + lVar14);
                    } while (iVar2 < iVar8);
                    iVar2 = (int)plVar16[3];
                  }
                  iVar3 = iVar3 + 1;
                  lVar17 = lVar17 + iVar4;
                } while (iVar3 < iVar2);
                uVar7 = *(undefined8 *)(param_1 + 0xf0);
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)uVar7);
            return 1;
          }
          lVar13 = 0;
          do {
            iVar2 = *(int *)(param_1 + 0x6c);
            iVar3 = 0;
            if (iVar2 != 0) {
              iVar3 = (int)lVar13 / iVar2;
            }
            if ((int)lVar13 - iVar3 * iVar2 == param_5) {
              plVar16 = (long *)(*(long *)(param_1 + 0x108) + lVar13 * 0x20);
              iVar2 = (int)plVar16[3];
              if (0 < iVar2) {
                lVar17 = *plVar16;
                iVar4 = *(int *)((long)plVar16 + 0x1c);
                iVar3 = 0;
                iVar8 = *(int *)((long)plVar16 + 0x14);
                do {
                  if (0 < iVar8) {
                    iVar2 = 0;
                    pvVar15 = (void *)(lVar17 + lVar10);
                    do {
                      memcpy(pvVar15,&local_64,__n);
                      iVar8 = *(int *)((long)plVar16 + 0x14);
                      iVar2 = iVar2 + 1;
                      pvVar15 = (void *)((long)pvVar15 + lVar14);
                    } while (iVar2 < iVar8);
                    iVar2 = (int)plVar16[3];
                  }
                  iVar3 = iVar3 + 1;
                  lVar17 = lVar17 + iVar4;
                } while (iVar3 < iVar2);
                uVar7 = *(undefined8 *)(param_1 + 0xf0);
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)uVar7);
          return 1;
        }
        lVar13 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0x6c);
          iVar3 = 0;
          if (iVar2 != 0) {
            iVar3 = (int)lVar13 / iVar2;
          }
          if (iVar3 == param_4 && (param_5 < 0 || (int)lVar13 - iVar3 * iVar2 == param_5)) {
            plVar16 = (long *)(*(long *)(param_1 + 0x108) + lVar13 * 0x20);
            iVar2 = (int)plVar16[3];
            if (0 < iVar2) {
              lVar17 = *plVar16;
              iVar4 = *(int *)((long)plVar16 + 0x1c);
              iVar3 = 0;
              iVar8 = *(int *)((long)plVar16 + 0x14);
              do {
                if (0 < iVar8) {
                  iVar2 = 0;
                  pvVar15 = (void *)(lVar17 + lVar10);
                  do {
                    memcpy(pvVar15,&local_64,__n);
                    iVar8 = *(int *)((long)plVar16 + 0x14);
                    iVar2 = iVar2 + 1;
                    pvVar15 = (void *)((long)pvVar15 + lVar14);
                  } while (iVar2 < iVar8);
                  iVar2 = (int)plVar16[3];
                }
                iVar3 = iVar3 + 1;
                lVar17 = lVar17 + iVar4;
              } while (iVar3 < iVar2);
              uVar7 = *(undefined8 *)(param_1 + 0xf0);
            }
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uVar7);
      }
    }
    else if ((iVar8 == 3) && (uVar7 = *(undefined8 *)(param_1 + 0x140), 0 < (int)uVar7)) {
      if (param_5 < 0) {
        lVar10 = 0;
        do {
          piVar12 = (int *)(*(long *)(param_1 + 0x158) + lVar10 * 0x28 + 0x1c);
          iVar8 = *piVar12;
          if (0 < iVar8) {
            plVar16 = (long *)(*(long *)(param_1 + 0x158) + lVar10 * 0x28);
            lVar14 = *plVar16;
            lVar13 = plVar16[4];
            iVar1 = *(int *)((long)plVar16 + 0x24);
            iVar6 = (int)plVar16[3];
            iVar11 = 0;
            do {
              if (0 < iVar6) {
                iVar9 = *(int *)((long)plVar16 + 0x14);
                iVar8 = 0;
                lVar17 = lVar14;
                do {
                  if (0 < iVar9) {
                    iVar6 = 0;
                    pvVar15 = (void *)(lVar17 + iVar2);
                    do {
                      memcpy(pvVar15,&local_64,(long)iVar3);
                      iVar9 = *(int *)((long)plVar16 + 0x14);
                      iVar6 = iVar6 + 1;
                      pvVar15 = (void *)((long)pvVar15 + (long)iVar4);
                    } while (iVar6 < iVar9);
                    iVar6 = (int)plVar16[3];
                  }
                  iVar8 = iVar8 + 1;
                  lVar17 = lVar17 + (int)lVar13;
                } while (iVar8 < iVar6);
                iVar8 = *piVar12;
              }
              iVar11 = iVar11 + 1;
              lVar14 = lVar14 + iVar1;
            } while (iVar11 < iVar8);
            uVar7 = *(undefined8 *)(param_1 + 0x140);
          }
          lVar10 = lVar10 + 1;
        } while (lVar10 < (int)uVar7);
        return 1;
      }
      lVar10 = 0;
      do {
        iVar8 = *(int *)(param_1 + 0x6c);
        iVar11 = 0;
        if (iVar8 != 0) {
          iVar11 = (int)lVar10 / iVar8;
        }
        if ((int)lVar10 - iVar11 * iVar8 == param_5) {
          piVar12 = (int *)(*(long *)(param_1 + 0x158) + lVar10 * 0x28 + 0x1c);
          iVar8 = *piVar12;
          if (0 < iVar8) {
            plVar16 = (long *)(*(long *)(param_1 + 0x158) + lVar10 * 0x28);
            lVar14 = *plVar16;
            lVar13 = plVar16[4];
            iVar1 = *(int *)((long)plVar16 + 0x24);
            iVar6 = (int)plVar16[3];
            iVar11 = 0;
            do {
              if (0 < iVar6) {
                iVar9 = *(int *)((long)plVar16 + 0x14);
                iVar8 = 0;
                lVar17 = lVar14;
                do {
                  if (0 < iVar9) {
                    iVar6 = 0;
                    pvVar15 = (void *)(lVar17 + iVar2);
                    do {
                      memcpy(pvVar15,&local_64,(long)iVar3);
                      iVar9 = *(int *)((long)plVar16 + 0x14);
                      iVar6 = iVar6 + 1;
                      pvVar15 = (void *)((long)pvVar15 + (long)iVar4);
                    } while (iVar6 < iVar9);
                    iVar6 = (int)plVar16[3];
                  }
                  iVar8 = iVar8 + 1;
                  lVar17 = lVar17 + (int)lVar13;
                } while (iVar8 < iVar6);
                iVar8 = *piVar12;
              }
              iVar11 = iVar11 + 1;
              lVar14 = lVar14 + iVar1;
            } while (iVar11 < iVar8);
            uVar7 = *(undefined8 *)(param_1 + 0x140);
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)uVar7);
      return 1;
    }
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}


