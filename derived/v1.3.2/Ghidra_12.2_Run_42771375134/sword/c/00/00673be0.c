/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00673be0; name: FUN_00673be0
 */


/* WARNING: Removing unreachable block (ram,0x00673d58) */
/* WARNING: Removing unreachable block (ram,0x00673dd4) */
/* WARNING: Removing unreachable block (ram,0x00673e58) */
/* WARNING: Removing unreachable block (ram,0x00674034) */
/* WARNING: Removing unreachable block (ram,0x00673e00) */
/* WARNING: Removing unreachable block (ram,0x00673e80) */
/* WARNING: Removing unreachable block (ram,0x00673df4) */
/* WARNING: Removing unreachable block (ram,0x00673d78) */
/* WARNING: Removing unreachable block (ram,0x00673d34) */
/* WARNING: Removing unreachable block (ram,0x00674024) */

long FUN_00673be0(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  
  lVar6 = param_2;
  if (param_2 < 0) {
    lVar6 = param_2 + 1;
  }
  lVar7 = 1;
  if (1 < param_2) {
    lVar7 = lVar6 >> 1;
  }
  if (param_2 <= lVar7) {
    return 0;
  }
  if (lVar7 != 0) {
    lVar6 = *param_3;
    *param_3 = param_3[lVar7];
    param_3[lVar7] = lVar6;
  }
  lVar5 = *param_3;
  lVar6 = 1;
  lVar7 = param_2 + -1;
  if (lVar7 != 0 && 0 < param_2) {
    do {
      lVar8 = param_3[lVar6];
      iVar1 = *(int *)(lVar5 + 0x44);
      if (*(int *)(lVar8 + 0x44) <= iVar1) {
        if (*(int *)(lVar8 + 0x44) < iVar1) goto LAB_00673d0c;
        iVar4 = *(int *)(lVar5 + 0x1c);
        if (*(int *)(lVar8 + 0x1c) <= iVar4) {
          if (*(int *)(lVar8 + 0x1c) < iVar4) goto LAB_00673d0c;
          if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x18)) goto LAB_00673d0c;
            if (0 < iVar4) {
              lVar10 = 0;
              do {
                bVar2 = *(byte *)(*(long *)(lVar5 + 0x20) + lVar10);
                bVar3 = *(byte *)(*(long *)(lVar8 + 0x20) + lVar10);
                if (bVar2 < bVar3) goto LAB_00673eac;
                if (bVar3 < bVar2) goto LAB_00673d0c;
                lVar10 = lVar10 + 1;
              } while (lVar10 < iVar4);
            }
            iVar4 = *(int *)(lVar5 + 0x34);
            if (*(int *)(lVar8 + 0x34) <= iVar4) {
              if (*(int *)(lVar8 + 0x34) < iVar4) goto LAB_00673d0c;
              if (*(uint *)(lVar8 + 0x30) <= *(uint *)(lVar5 + 0x30)) {
                if (*(uint *)(lVar8 + 0x30) < *(uint *)(lVar5 + 0x30)) {
LAB_00673d0c:
                  do {
                    lVar6 = lVar6 + 1;
                    if (lVar7 <= lVar6) goto LAB_00673eac;
                    lVar8 = param_3[lVar6];
                    if (iVar1 < *(int *)(lVar8 + 0x44)) goto LAB_00673eac;
                    if (iVar1 <= *(int *)(lVar8 + 0x44)) {
                      iVar4 = *(int *)(lVar5 + 0x1c);
                      if (iVar4 < *(int *)(lVar8 + 0x1c)) goto LAB_00673eac;
                      if (iVar4 <= *(int *)(lVar8 + 0x1c)) {
                        if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar8 + 0x18)) goto LAB_00673eac;
                        if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar8 + 0x18)) {
                          if (0 < iVar4) {
                            lVar10 = 0;
                            do {
                              bVar2 = *(byte *)(*(long *)(lVar5 + 0x20) + lVar10);
                              bVar3 = *(byte *)(*(long *)(lVar8 + 0x20) + lVar10);
                              if (bVar2 < bVar3) goto LAB_00673eac;
                              if (bVar3 < bVar2) goto LAB_00673d0c;
                              lVar10 = lVar10 + 1;
                            } while (lVar10 < iVar4);
                          }
                          iVar4 = *(int *)(lVar5 + 0x34);
                          if (iVar4 < *(int *)(lVar8 + 0x34)) goto LAB_00673eac;
                          if (iVar4 <= *(int *)(lVar8 + 0x34)) {
                            if (*(uint *)(lVar5 + 0x30) < *(uint *)(lVar8 + 0x30))
                            goto LAB_00673eac;
                            if (*(uint *)(lVar5 + 0x30) <= *(uint *)(lVar8 + 0x30)) {
                              if (0 < iVar4) {
                                lVar10 = 0;
                                do {
                                  bVar2 = *(byte *)(*(long *)(lVar5 + 0x38) + lVar10);
                                  bVar3 = *(byte *)(*(long *)(lVar8 + 0x38) + lVar10);
                                  if (bVar2 < bVar3) goto LAB_00673eac;
                                  if (bVar3 < bVar2) goto LAB_00673d0c;
                                  lVar10 = lVar10 + 1;
                                } while (lVar10 < iVar4);
                              }
                              if (*(ulong *)(lVar5 + 0x100) < *(ulong *)(lVar8 + 0x100))
                              goto LAB_00673eac;
                              if (*(ulong *)(lVar5 + 0x100) <= *(ulong *)(lVar8 + 0x100)) {
                                if ((*(uint *)(lVar5 + 0x40) < *(uint *)(lVar8 + 0x40)) ||
                                   (*(uint *)(lVar5 + 0x40) <= *(uint *)(lVar8 + 0x40)))
                                goto LAB_00673eac;
                              }
                            }
                          }
                        }
                      }
                    }
                  } while( true );
                }
                if (0 < iVar4) {
                  lVar10 = 0;
                  do {
                    bVar2 = *(byte *)(*(long *)(lVar5 + 0x38) + lVar10);
                    bVar3 = *(byte *)(*(long *)(lVar8 + 0x38) + lVar10);
                    if (bVar2 < bVar3) goto LAB_00673eac;
                    if (bVar3 < bVar2) goto LAB_00673d0c;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iVar4);
                }
                if ((*(ulong *)(lVar8 + 0x100) <= *(ulong *)(lVar5 + 0x100)) &&
                   ((*(ulong *)(lVar8 + 0x100) < *(ulong *)(lVar5 + 0x100) ||
                    (*(uint *)(lVar8 + 0x40) < *(uint *)(lVar5 + 0x40))))) goto LAB_00673d0c;
              }
            }
          }
        }
      }
LAB_00673eac:
      lVar8 = param_3[lVar7];
      if (iVar1 < *(int *)(lVar8 + 0x44)) {
LAB_00673ee8:
        do {
          lVar7 = lVar7 + -1;
          if (lVar7 <= lVar6) break;
          lVar8 = param_3[lVar7];
          uVar9 = 0xffffffff;
          if (*(int *)(lVar8 + 0x44) <= iVar1) {
            if (*(int *)(lVar8 + 0x44) < iVar1) break;
            iVar4 = *(int *)(lVar5 + 0x1c);
            uVar9 = 0xffffffff;
            if (*(int *)(lVar8 + 0x1c) <= iVar4) {
              if (*(int *)(lVar8 + 0x1c) < iVar4) break;
              uVar9 = 0xffffffff;
              if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar5 + 0x18)) {
                if (*(uint *)(lVar8 + 0x18) < *(uint *)(lVar5 + 0x18)) break;
                if (0 < iVar4) {
                  lVar10 = 0;
                  do {
                    bVar2 = *(byte *)(*(long *)(lVar5 + 0x20) + lVar10);
                    bVar3 = *(byte *)(*(long *)(lVar8 + 0x20) + lVar10);
                    if (bVar2 < bVar3) goto LAB_00673ee8;
                    if (bVar3 < bVar2) goto LAB_006740fc;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iVar4);
                }
                iVar4 = *(int *)(lVar5 + 0x34);
                uVar9 = 0xffffffff;
                if (*(int *)(lVar8 + 0x34) <= iVar4) {
                  if (*(int *)(lVar8 + 0x34) < iVar4) break;
                  uVar9 = 0xffffffff;
                  if (*(uint *)(lVar8 + 0x30) <= *(uint *)(lVar5 + 0x30)) {
                    if (*(uint *)(lVar8 + 0x30) < *(uint *)(lVar5 + 0x30)) break;
                    if (0 < iVar4) {
                      lVar10 = 0;
                      do {
                        bVar2 = *(byte *)(*(long *)(lVar5 + 0x38) + lVar10);
                        bVar3 = *(byte *)(*(long *)(lVar8 + 0x38) + lVar10);
                        if (bVar2 < bVar3) goto LAB_00673ee8;
                        if (bVar3 < bVar2) goto LAB_006740fc;
                        lVar10 = lVar10 + 1;
                      } while (lVar10 < iVar4);
                    }
                    uVar9 = 0xffffffff;
                    if (*(ulong *)(lVar8 + 0x100) <= *(ulong *)(lVar5 + 0x100)) {
                      if (*(ulong *)(lVar8 + 0x100) < *(ulong *)(lVar5 + 0x100)) break;
                      uVar9 = 0xffffffff;
                      if (*(uint *)(lVar8 + 0x40) <= *(uint *)(lVar5 + 0x40)) {
                        uVar9 = (uint)(*(uint *)(lVar8 + 0x40) < *(uint *)(lVar5 + 0x40));
                      }
                    }
                  }
                }
              }
            }
          }
        } while ((int)uVar9 < 1);
      }
      else if (iVar1 <= *(int *)(lVar8 + 0x44)) {
        iVar4 = *(int *)(lVar5 + 0x1c);
        if (iVar4 < *(int *)(lVar8 + 0x1c)) goto LAB_00673ee8;
        if (iVar4 <= *(int *)(lVar8 + 0x1c)) {
          if (*(uint *)(lVar5 + 0x18) < *(uint *)(lVar8 + 0x18)) goto LAB_00673ee8;
          if (*(uint *)(lVar5 + 0x18) == *(uint *)(lVar8 + 0x18)) {
            if (0 < iVar4) {
              lVar10 = 0;
              do {
                bVar2 = *(byte *)(*(long *)(lVar5 + 0x20) + lVar10);
                bVar3 = *(byte *)(*(long *)(lVar8 + 0x20) + lVar10);
                if (bVar2 < bVar3) goto LAB_00673ee8;
                if (bVar3 < bVar2) goto LAB_006740fc;
                lVar10 = lVar10 + 1;
              } while (lVar10 < iVar4);
            }
            iVar4 = *(int *)(lVar5 + 0x34);
            if (iVar4 < *(int *)(lVar8 + 0x34)) goto LAB_00673ee8;
            if (iVar4 <= *(int *)(lVar8 + 0x34)) {
              if (*(uint *)(lVar5 + 0x30) < *(uint *)(lVar8 + 0x30)) goto LAB_00673ee8;
              if (*(uint *)(lVar5 + 0x30) <= *(uint *)(lVar8 + 0x30)) {
                if (0 < iVar4) {
                  lVar10 = 0;
                  do {
                    bVar2 = *(byte *)(*(long *)(lVar5 + 0x38) + lVar10);
                    bVar3 = *(byte *)(*(long *)(lVar8 + 0x38) + lVar10);
                    if (bVar2 < bVar3) goto LAB_00673ee8;
                    if (bVar3 < bVar2) goto LAB_006740fc;
                    lVar10 = lVar10 + 1;
                  } while (lVar10 < iVar4);
                }
                if ((*(ulong *)(lVar5 + 0x100) < *(ulong *)(lVar8 + 0x100)) ||
                   ((*(ulong *)(lVar5 + 0x100) <= *(ulong *)(lVar8 + 0x100) &&
                    (*(uint *)(lVar5 + 0x40) <= *(uint *)(lVar8 + 0x40))))) goto LAB_00673ee8;
              }
            }
          }
        }
      }
LAB_006740fc:
      if (lVar6 < lVar7) {
        lVar8 = param_3[lVar6];
        param_3[lVar6] = param_3[lVar7];
        param_3[lVar7] = lVar8;
      }
    } while (lVar6 <= lVar7);
    lVar5 = *param_3;
  }
  lVar6 = lVar6 + -1;
  *param_3 = param_3[lVar6];
  param_3[lVar6] = lVar5;
  return lVar6;
}


