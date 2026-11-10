/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008301d0; name: FUN_008301d0
 */


void FUN_008301d0(long *param_1,long *param_2,long *param_3,long param_4)

{
  undefined4 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  string *this;
  long *plVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  int iVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  string *psVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined1 auStack_88 [8];
  string local_80 [16];
  void *local_70;
  
  puVar4 = PTR_DAT_02716e20;
  if (*(int *)(param_4 + 0x40) != 3) {
    switch(*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_4 + 0x3c) * 4) + -1) {
    case 0:
    case 2:
    case 5:
    case 7:
      lVar9 = *(long *)(param_4 + 0x58);
      if (lVar9 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39)
                                         * 4);
      }
      else {
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                               (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 
                                                  0x10) + 0x40)) >> 4) * -0x55555555) * 4);
        if (lVar9 != 0) {
          iVar8 = *(int *)(param_1[1] + 0x2c) +
                  (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) *
                  -0x55555555;
          goto LAB_008309fc;
        }
      }
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_008309fc:
      lVar9 = (long)*(int *)(lVar10 + (long)iVar8 * 4);
      uVar1 = *(undefined4 *)((long)param_2 + lVar12);
      *(undefined4 *)((long)param_2 + lVar12) = *(undefined4 *)((long)param_3 + lVar9);
      *(undefined4 *)((long)param_3 + lVar9) = uVar1;
      return;
    case 1:
    case 3:
    case 4:
      lVar9 = *(long *)(param_4 + 0x58);
      if (lVar9 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39)
                                         * 4);
      }
      else {
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                               (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 
                                                  0x10) + 0x40)) >> 4) * -0x55555555) * 4);
        if (lVar9 != 0) {
          iVar8 = *(int *)(param_1[1] + 0x2c) +
                  (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) *
                  -0x55555555;
          goto LAB_00830a84;
        }
      }
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_00830a84:
      lVar9 = (long)*(int *)(lVar10 + (long)iVar8 * 4);
      uVar7 = *(undefined8 *)((long)param_2 + lVar12);
      *(undefined8 *)((long)param_2 + lVar12) = *(undefined8 *)((long)param_3 + lVar9);
      *(undefined8 *)((long)param_3 + lVar9) = uVar7;
      return;
    case 6:
      lVar9 = *(long *)(param_4 + 0x58);
      if (lVar9 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39)
                                         * 4);
      }
      else {
        lVar10 = param_1[4];
        lVar12 = (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                               (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 
                                                  0x10) + 0x40)) >> 4) * -0x55555555) * 4);
        if (lVar9 != 0) {
          iVar8 = *(int *)(param_1[1] + 0x2c) +
                  (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) *
                  -0x55555555;
          goto LAB_0083150c;
        }
      }
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_0083150c:
      lVar9 = (long)*(int *)(lVar10 + (long)iVar8 * 4);
      uVar2 = *(undefined1 *)((long)param_2 + lVar12);
      *(undefined1 *)((long)param_2 + lVar12) = *(undefined1 *)((long)param_3 + lVar9);
      *(undefined1 *)((long)param_3 + lVar9) = uVar2;
      return;
    case 8:
      goto switchD_0083028c_caseD_8;
    case 9:
      lVar9 = (long)(int)param_1[7];
      if ((int)param_1[7] == -1) {
        uVar5 = 0;
        uVar11 = 0;
        lVar9 = *(long *)(param_4 + 0x58);
joined_r0x00830984:
        if (lVar9 == 0) goto LAB_008307e4;
LAB_00830b64:
        lVar12 = param_1[4];
        lVar10 = (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                               (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 
                                                  0x10) + 0x40)) >> 4) * -0x55555555) * 4);
        if (lVar9 == 0) {
LAB_00830ebc:
          if (*(char *)(param_4 + 0x44) == '\0') {
            plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
          }
          else if (*(long *)(param_4 + 0x60) == 0) {
            plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
          }
          else {
            plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
          }
          lVar9 = (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39
                                                ) * 4);
          if (uVar5 == uVar11) goto LAB_008312ec;
          goto LAB_00830bc4;
        }
      }
      else {
        if ((int)param_1[6] == -1) {
          uVar5 = *(ulong *)((long)param_2 + lVar9) & 0xfffffffffffffffe;
          if ((*(ulong *)((long)param_2 + lVar9) & 1) == 0) {
            uVar13 = *(ulong *)((long)param_3 + lVar9);
          }
          else {
            uVar5 = *(ulong *)(uVar5 + 8);
            uVar13 = *(ulong *)((long)param_3 + lVar9);
          }
          uVar11 = uVar13 & 0xfffffffffffffffe;
          if ((uVar13 & 1) != 0) {
            uVar11 = *(ulong *)(uVar11 + 8);
            lVar9 = *(long *)(param_4 + 0x58);
            goto joined_r0x00830984;
          }
          lVar9 = *(long *)(param_4 + 0x58);
        }
        else {
          uVar5 = *(ulong *)((long)param_2 + lVar9);
          uVar11 = *(ulong *)((long)param_3 + lVar9);
          lVar9 = *(long *)(param_4 + 0x58);
        }
        if (lVar9 != 0) goto LAB_00830b64;
LAB_008307e4:
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        lVar12 = param_1[4];
        lVar10 = (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39)
                                         * 4);
        if (lVar9 == 0) goto LAB_00830ebc;
      }
      lVar9 = (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                            (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                           + 0x40)) >> 4) *
                                            -0x55555555) * 4);
      if (uVar5 == uVar11) {
LAB_008312ec:
        uVar7 = *(undefined8 *)((long)param_2 + lVar10);
        *(undefined8 *)((long)param_2 + lVar10) = *(undefined8 *)((long)param_3 + lVar9);
        *(undefined8 *)((long)param_3 + lVar9) = uVar7;
        return;
      }
LAB_00830bc4:
      plVar6 = *(long **)((long)param_2 + lVar10);
      plVar17 = *(long **)((long)param_3 + lVar9);
      if (plVar6 == (long *)0x0) {
        if (plVar17 == (long *)0x0) {
          return;
        }
        uVar7 = (**(code **)(*param_2 + 0x28))(param_2);
        plVar6 = (long *)(**(code **)(*plVar17 + 0x20))(plVar17,uVar7);
        *(long **)((long)param_2 + lVar10) = plVar6;
        (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined8 *)((long)param_3 + lVar9));
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
      }
      else if (plVar17 == (long *)0x0) {
        uVar7 = (**(code **)(*param_3 + 0x28))(param_3);
        plVar6 = (long *)(**(code **)(*plVar6 + 0x20))(plVar6,uVar7);
        *(long **)((long)param_3 + lVar9) = plVar6;
        (**(code **)(*plVar6 + 0x88))(plVar6,*(undefined8 *)((long)param_2 + lVar10));
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x38);
        param_3 = param_2;
      }
      else {
        param_1 = (long *)(**(code **)(*plVar6 + 0xb0))(plVar6);
        param_4 = *(long *)((long)param_3 + lVar9);
        UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x68);
        param_3 = *(long **)((long)param_2 + lVar10);
      }
                    /* WARNING: Could not recover jumptable at 0x00830da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
      return;
    default:
      uVar7 = 0x1fc;
      goto LAB_008306e4;
    }
  }
  switch(*(int *)(PTR_DAT_02716e20 + (ulong)*(uint *)(param_4 + 0x3c) * 4) + -1) {
  case 0:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
LAB_00831154:
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_008311b4;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') goto LAB_00831194;
    lVar9 = *(long *)(param_4 + 0x60);
joined_r0x00831188:
    if (lVar9 == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(lVar9 + 0x80);
    }
    break;
  case 1:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_00831320;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_00831320:
    FUN_0081ae70(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 2:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_00831364;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_00831364:
    FUN_0081a910(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 3:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_008313a8;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_008313a8:
    FUN_0081b3d0(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 4:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_008313ec;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_008313ec:
    FUN_0081beb0(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 5:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_00831430;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_00831430:
    FUN_0081b940(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 6:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
        goto LAB_00831474;
      }
    }
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_00831474:
    FUN_0081c400(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
    return;
  case 7:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                       4);
    }
    else {
      lVar10 = param_1[4];
      lVar12 = (long)param_2 +
               (long)*(int *)(lVar10 + (long)(*(int *)(param_1[1] + 0x2c) +
                                             (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                            + 0x40)) >> 4) *
                                             -0x55555555) * 4);
      if (lVar9 != 0) goto LAB_00831154;
    }
    if (*(char *)(param_4 + 0x44) != '\0') {
      lVar9 = *(long *)(param_4 + 0x60);
      goto joined_r0x00831188;
    }
LAB_00831194:
    plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    break;
  case 8:
    lVar9 = *(long *)(param_4 + 0x58);
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar12 = param_1[4];
      param_2 = (long *)((long)param_2 +
                        (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) *
                                                      0x38e38e39) * 4));
LAB_00831208:
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
    }
    else {
      lVar12 = param_1[4];
      param_2 = (long *)((long)param_2 +
                        (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                                      (int)((ulong)(lVar9 - *(long *)(*(long *)(
                                                  lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555) * 4));
      if (lVar9 == 0) goto LAB_00831208;
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555;
    }
    param_3 = (long *)((long)param_3 + (long)*(int *)(lVar12 + (long)iVar8 * 4));
    if (*param_3 != *param_2) {
      FUN_0083e020();
      return;
    }
LAB_008316ec:
    lVar9 = param_2[2];
    param_2[2] = param_3[2];
    param_3[2] = lVar9;
    lVar9 = param_2[1];
    *(int *)(param_2 + 1) = (int)param_3[1];
    *(int *)(param_3 + 1) = (int)lVar9;
    uVar1 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)param_3 + 0xc);
    *(undefined4 *)((long)param_3 + 0xc) = uVar1;
    return;
  case 9:
    uVar5 = FUN_007e4b30(param_4);
    lVar9 = *(long *)(param_4 + 0x58);
    if ((uVar5 & 1) != 0) {
      if (lVar9 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
      }
      else {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
      }
      param_2 = (long *)FUN_0081dc50((long)param_2 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
      lVar9 = *(long *)(param_4 + 0x58);
      if (lVar9 == 0) {
        if (*(char *)(param_4 + 0x44) == '\0') {
          plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
        }
        else if (*(long *)(param_4 + 0x60) == 0) {
          plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
        }
        else {
          plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
        }
        iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
      }
      else {
        iVar8 = *(int *)(param_1[1] + 0x2c) +
                (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555
        ;
      }
      plVar6 = (long *)FUN_0081dc50((long)param_3 + (long)*(int *)(param_1[4] + (long)iVar8 * 4));
      if (*plVar6 == *param_2) {
        lVar9 = param_2[2];
        param_2[2] = plVar6[2];
        plVar6[2] = lVar9;
        lVar9 = param_2[1];
        *(int *)(param_2 + 1) = (int)plVar6[1];
        *(int *)(plVar6 + 1) = (int)lVar9;
        uVar1 = *(undefined4 *)((long)param_2 + 0xc);
        *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)((long)plVar6 + 0xc);
        *(undefined4 *)((long)plVar6 + 0xc) = uVar1;
        return;
      }
      goto LAB_008316d0;
    }
    if (lVar9 == 0) {
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      lVar12 = param_1[4];
      param_2 = (long *)((long)param_2 +
                        (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) *
                                                      0x38e38e39) * 4));
LAB_008315f4:
      if (*(char *)(param_4 + 0x44) == '\0') {
        plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      }
      else if (*(long *)(param_4 + 0x60) == 0) {
        plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
      }
      else {
        plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
      }
      iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
    }
    else {
      lVar12 = param_1[4];
      param_2 = (long *)((long)param_2 +
                        (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                                      (int)((ulong)(lVar9 - *(long *)(*(long *)(
                                                  lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555) * 4));
      if (lVar9 == 0) goto LAB_008315f4;
      iVar8 = *(int *)(param_1[1] + 0x2c) +
              (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10) + 0x40)) >> 4) * -0x55555555;
    }
    param_3 = (long *)((long)param_3 + (long)*(int *)(lVar12 + (long)iVar8 * 4));
    if (*param_3 != *param_2) {
LAB_008316d0:
      FUN_0083e320(param_2);
      return;
    }
    goto LAB_008316ec;
  default:
    uVar7 = 0x1b7;
LAB_008306e4:
    FUN_00801270(local_80,3,
                 "C:/jenkins/workspace/rigel/rom/RomBuild/program/lib/gflnet3/external/include/google/protobuf/generated_message_reflection.cc"
                 ,uVar7);
    uVar7 = FUN_00800f30(local_80,"Unimplemented type: ");
    uVar7 = FUN_00801220(uVar7,*(undefined4 *)(puVar4 + (ulong)*(uint *)(param_4 + 0x3c) * 4));
    FUN_00800fa0(auStack_88,uVar7);
    FUN_00801290(local_80);
    return;
  }
  iVar8 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
LAB_008311b4:
  FUN_0081a3a0(lVar12,(long)param_3 + (long)*(int *)(lVar10 + (long)iVar8 * 4));
  return;
switchD_0083028c_caseD_8:
  lVar9 = (long)(int)param_1[7];
  if ((int)param_1[7] == -1) {
    uVar5 = 0;
    uVar11 = 0;
    lVar9 = *(long *)(param_4 + 0x58);
joined_r0x00830970:
    if (lVar9 == 0) goto LAB_008307a4;
LAB_00830abc:
    lVar12 = param_1[4];
    puVar16 = (undefined8 *)
              ((long)param_2 +
              (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                            (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                           + 0x40)) >> 4) *
                                            -0x55555555) * 4));
    if (lVar9 != 0) goto LAB_00830af0;
LAB_00830e6c:
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    puVar14 = (undefined8 *)
              ((long)param_3 +
              (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                      4));
    if (uVar5 == uVar11) goto LAB_008312ac;
  }
  else {
    if ((int)param_1[6] == -1) {
      uVar5 = *(ulong *)((long)param_2 + lVar9) & 0xfffffffffffffffe;
      if ((*(ulong *)((long)param_2 + lVar9) & 1) == 0) {
        uVar13 = *(ulong *)((long)param_3 + lVar9);
      }
      else {
        uVar5 = *(ulong *)(uVar5 + 8);
        uVar13 = *(ulong *)((long)param_3 + lVar9);
      }
      uVar11 = uVar13 & 0xfffffffffffffffe;
      if ((uVar13 & 1) != 0) {
        uVar11 = *(ulong *)(uVar11 + 8);
        lVar9 = *(long *)(param_4 + 0x58);
        goto joined_r0x00830970;
      }
      lVar9 = *(long *)(param_4 + 0x58);
    }
    else {
      uVar5 = *(ulong *)((long)param_2 + lVar9);
      uVar11 = *(ulong *)((long)param_3 + lVar9);
      lVar9 = *(long *)(param_4 + 0x58);
    }
    if (lVar9 != 0) goto LAB_00830abc;
LAB_008307a4:
    if (*(char *)(param_4 + 0x44) == '\0') {
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
    }
    else if (*(long *)(param_4 + 0x60) == 0) {
      plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
    }
    else {
      plVar6 = (long *)(*(long *)(param_4 + 0x60) + 0x80);
    }
    lVar12 = param_1[4];
    puVar16 = (undefined8 *)
              ((long)param_2 +
              (long)*(int *)(lVar12 + (long)((int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39) *
                                      4));
    if (lVar9 == 0) goto LAB_00830e6c;
LAB_00830af0:
    puVar14 = (undefined8 *)
              ((long)param_3 +
              (long)*(int *)(lVar12 + (long)(*(int *)(param_1[1] + 0x2c) +
                                            (int)((ulong)(lVar9 - *(long *)(*(long *)(lVar9 + 0x10)
                                                                           + 0x40)) >> 4) *
                                            -0x55555555) * 4));
    if (uVar5 == uVar11) {
LAB_008312ac:
      uVar7 = *puVar16;
      *puVar16 = *puVar14;
      *puVar14 = uVar7;
      return;
    }
  }
  if (lVar9 == 0) {
    lVar9 = param_1[2];
    if (*(char *)(param_4 + 0x44) == '\0') goto LAB_00830c68;
    lVar10 = *(long *)(param_4 + 0x60);
  }
  else {
    lVar9 = param_1[3];
    if (*(char *)(param_4 + 0x44) == '\0') {
LAB_00830c68:
      plVar6 = (long *)(*(long *)(param_4 + 0x50) + 0x30);
      goto LAB_00830c70;
    }
    lVar10 = *(long *)(param_4 + 0x60);
  }
  if (lVar10 == 0) {
    plVar6 = (long *)(*(long *)(param_4 + 0x30) + 0x88);
  }
  else {
    plVar6 = (long *)(lVar10 + 0x80);
  }
LAB_00830c70:
  uVar3 = (int)((ulong)(param_4 - *plVar6) >> 4) * 0x38e38e39;
  psVar15 = *(string **)
             (lVar9 + *(int *)(lVar12 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 |
                                        (ulong)uVar3 << 2)));
  std::string::string(local_80,(string *)*puVar16);
  if ((string *)*puVar16 == psVar15) {
    FUN_0083dfa0(puVar16,uVar5);
    this = (string *)*puVar14;
  }
  else {
    std::string::operator=((string *)*puVar16,(string *)*puVar14);
    this = (string *)*puVar14;
  }
  if (this == psVar15) {
    FUN_0083dfa0(puVar14,uVar11,local_80);
  }
  else {
    std::string::operator=(this,local_80);
  }
  if (((byte)local_80[0] & 1) == 0) {
    return;
  }
  operator_delete(local_70);
  return;
}


