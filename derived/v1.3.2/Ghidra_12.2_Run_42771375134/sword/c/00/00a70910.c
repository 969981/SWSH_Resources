/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a70910; name: FUN_00a70910
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00a70910(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  bool bVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  bool bVar21;
  
  uVar9 = *(uint *)((long)param_1 + 0x16fc);
  if (((uVar9 == 0xff) || (*(int *)((long)param_1 + 0x1704) == 0xff)) ||
     (((iVar5 = (**(code **)(*param_1 + 0x870))(param_1), iVar5 == 0 ||
       (iVar5 = (**(code **)(*param_1 + 0x870))(param_1), iVar5 == 1)) &&
      (uVar10 = FUN_00a6f8d0(param_1), (uVar10 & 1) == 0)))) {
    FUN_00a70400(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
  uVar10 = 1;
  if (iVar5 == 1) {
    uVar10 = 2;
  }
  uVar14 = 0;
  bVar21 = false;
  uVar8 = 0;
  uVar11 = 4;
  if (iVar5 != 2) {
    uVar11 = uVar10;
  }
  lVar15 = 0x548;
  do {
    plVar18 = *(long **)((long)param_1 + lVar15);
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 9;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      uVar10 = (**(code **)(*plVar18 + 400))(plVar18);
      if (((uVar10 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar18), cVar2 == '\0')) {
        uVar6 = (**(code **)(*plVar18 + 0x218))(plVar18);
        if ((uVar8 & 0xff) <= (uVar6 & 0xff)) {
          uVar8 = uVar6;
        }
        bVar21 = true;
      }
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    uVar14 = uVar14 + 1;
    lVar15 = lVar15 + 0x10;
  } while (uVar14 < uVar11);
  iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
  uVar10 = 0;
  bVar16 = false;
  uVar6 = 0;
  uVar14 = 1;
  if (iVar5 == 1) {
    uVar14 = 2;
  }
  lVar15 = 0x550;
  do {
    plVar18 = *(long **)((long)param_1 + lVar15);
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 9;
      (**(code **)(*plVar17 + 0x10))(plVar17);
      uVar11 = (**(code **)(*plVar18 + 400))(plVar18);
      if (((uVar11 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar18), cVar2 == '\0')) {
        uVar7 = (**(code **)(*plVar18 + 0x218))(plVar18);
        if ((uVar6 & 0xff) <= (uVar7 & 0xff)) {
          uVar6 = uVar7;
        }
        bVar16 = true;
      }
      (**(code **)(*plVar17 + 0x18))(plVar17);
    }
    uVar10 = uVar10 + 1;
    lVar15 = lVar15 + 0x10;
  } while (uVar10 < uVar14);
  if (!bVar21) {
    uVar8 = 1;
  }
  if (!bVar16) {
    uVar6 = 1;
  }
  uVar10 = (**(code **)(*param_1 + 0x748))(param_1,uVar9);
  plVar17 = (long *)param_1[(ulong)uVar9 + 0xa9];
  plVar18 = plVar17;
  if ((uVar10 & 1) == 0) {
    if (plVar17 != (long *)0x0) {
      (**(code **)(plVar17[9] + 0x10))(plVar17 + 9);
      plVar18 = (long *)0x0;
    }
  }
  else {
    if (plVar17 != (long *)0x0) {
      (**(code **)(plVar17[9] + 0x10))();
    }
    plVar17 = (long *)0x0;
  }
  uVar7 = *(uint *)((long)param_1 + 0x1704);
  uVar9 = 1;
  if (uVar7 != 0xff) {
    uVar9 = 2;
  }
  uVar1 = (uint)(uVar7 != 0xff);
  if ((int)param_1[0x2e1] != 0xff) {
    uVar1 = uVar9;
  }
  if (*(int *)((long)param_1 + 0x170c) != 0xff) {
    uVar1 = uVar1 + 1;
  }
  if ((int)param_1[0x2e2] != 0xff) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)((long)param_1 + 0x1714) != 0xff) {
    uVar1 = uVar1 + 1;
  }
  if ((int)param_1[0x2e3] != 0xff) {
    uVar1 = uVar1 + 1;
  }
  if (*(int *)((long)param_1 + 0x171c) != 0xff) {
    uVar1 = uVar1 + 1;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (uVar1 != 0) {
    lVar15 = 0x5c2;
    do {
      if (uVar7 != 0xff) {
        plVar19 = (long *)param_1[(ulong)uVar7 + 0xa9];
        if (plVar19 != (long *)0x0) {
          (**(code **)(plVar19[9] + 0x10))();
        }
        uVar10 = (**(code **)(*param_1 + 0x748))(param_1,uVar7);
        if ((uVar10 & 1) == 0) {
          if (plVar17 == (long *)0x0) {
            plVar17 = plVar19;
            if (plVar19 == (long *)0x0) goto joined_r0x00a70d90;
            plVar17 = plVar19 + 9;
            pcVar12 = *(code **)(*plVar17 + 0x10);
          }
          else {
            bVar3 = (**(code **)(*plVar19 + 0x218))(plVar19);
            bVar4 = (**(code **)(*plVar17 + 0x218))(plVar17);
            if (bVar3 <= bVar4) goto LAB_00a70d34;
            (**(code **)(plVar19[9] + 0x10))();
            plVar17 = plVar17 + 9;
            pcVar12 = *(code **)(*plVar17 + 0x18);
          }
          (*pcVar12)(plVar17);
          plVar17 = plVar19;
        }
        else {
          if (plVar18 == (long *)0x0) {
            plVar18 = plVar19;
            if (plVar19 == (long *)0x0) goto joined_r0x00a70d90;
            plVar18 = plVar19 + 9;
            pcVar12 = *(code **)(*plVar18 + 0x10);
          }
          else {
            bVar3 = (**(code **)(*plVar19 + 0x218))(plVar19);
            bVar4 = (**(code **)(*plVar18 + 0x218))(plVar18);
            if (bVar3 <= bVar4) goto LAB_00a70d34;
            (**(code **)(plVar19[9] + 0x10))();
            plVar18 = plVar18 + 9;
            pcVar12 = *(code **)(*plVar18 + 0x18);
          }
          (*pcVar12)(plVar18);
          plVar18 = plVar19;
        }
LAB_00a70d34:
        (**(code **)(plVar19[9] + 0x18))(plVar19 + 9);
      }
joined_r0x00a70d90:
      if ((long)(int)uVar1 <= lVar15 + -0x5c1) break;
      uVar7 = *(uint *)((long)param_1 + lVar15 * 4);
      lVar15 = lVar15 + 1;
    } while( true );
  }
  if (plVar18 != (long *)0x0) {
    uVar8 = (**(code **)(*plVar18 + 0x218))(plVar18);
    cVar2 = FUN_00ad59f0(plVar18);
    if ((cVar2 == '\0') && (uVar10 = FUN_00a6fdc0(param_1,1), (uVar10 & 1) == 0)) {
      iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
      uVar10 = 1;
      if (iVar5 == 1) {
        uVar10 = 2;
      }
      bVar21 = false;
      uVar14 = 0;
      uVar8 = 0;
      uVar11 = 4;
      if (iVar5 != 2) {
        uVar11 = uVar10;
      }
      plVar19 = param_1 + 0xa9;
      do {
        plVar20 = (long *)*plVar19;
        if (plVar20 != (long *)0x0) {
          plVar13 = plVar20 + 9;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar10 = (**(code **)(*plVar20 + 400))(plVar20);
          if (((uVar10 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar20), cVar2 == '\0')) {
            uVar9 = (**(code **)(*plVar20 + 0x218))(plVar20);
            if ((uVar8 & 0xff) <= (uVar9 & 0xff)) {
              uVar8 = uVar9;
            }
            bVar21 = true;
          }
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        uVar14 = uVar14 + 1;
        plVar19 = plVar19 + 2;
      } while (uVar14 < uVar11);
      if (!bVar21) {
        uVar8 = 1;
      }
    }
  }
  if (plVar17 != (long *)0x0) {
    uVar6 = (**(code **)(*plVar17 + 0x218))(plVar17);
    cVar2 = FUN_00ad59f0(plVar17);
    if ((cVar2 == '\0') && (uVar10 = FUN_00a6fdc0(param_1,0), (uVar10 & 1) == 0)) {
      iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
      uVar10 = 0;
      bVar21 = false;
      uVar6 = 0;
      uVar14 = 1;
      if (iVar5 == 1) {
        uVar14 = 2;
      }
      plVar19 = param_1 + 0xaa;
      do {
        plVar20 = (long *)*plVar19;
        if (plVar20 != (long *)0x0) {
          plVar13 = plVar20 + 9;
          (**(code **)(*plVar13 + 0x10))(plVar13);
          uVar11 = (**(code **)(*plVar20 + 400))(plVar20);
          if (((uVar11 & 1) != 0) && (cVar2 = FUN_00ad59f0(plVar20), cVar2 == '\0')) {
            uVar9 = (**(code **)(*plVar20 + 0x218))(plVar20);
            if ((uVar6 & 0xff) <= (uVar9 & 0xff)) {
              uVar6 = uVar9;
            }
            bVar21 = true;
          }
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
        uVar10 = uVar10 + 1;
        plVar19 = plVar19 + 2;
      } while (uVar10 < uVar14);
      if (!bVar21) {
        uVar6 = 1;
      }
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
  if (iVar5 == 2) {
    iVar5 = (**(code **)(*param_1 + 0x870))(param_1);
    uVar10 = 0;
    bVar21 = false;
    uVar6 = 0;
    uVar14 = 1;
    if (iVar5 == 1) {
      uVar14 = 2;
    }
    lVar15 = 0x550;
    do {
      plVar19 = *(long **)((long)param_1 + lVar15);
      if (plVar19 != (long *)0x0) {
        plVar20 = plVar19 + 9;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        uVar11 = (**(code **)(*plVar19 + 400))(plVar19);
        if ((uVar11 & 1) != 0) {
          uVar9 = (**(code **)(*plVar19 + 0x218))(plVar19);
          if ((uVar6 & 0xff) <= (uVar9 & 0xff)) {
            uVar6 = uVar9;
          }
          bVar21 = true;
        }
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      uVar10 = uVar10 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar10 < uVar14);
    if (!bVar21) {
      uVar6 = 1;
    }
    FUN_00a6f8d0(param_1);
  }
  FUN_00a705d0(param_1,uVar8,uVar6,0,param_2,param_3,param_4,param_5,param_6);
  if (plVar17 != (long *)0x0) {
    (**(code **)(plVar17[9] + 0x18))(plVar17 + 9);
  }
  if (plVar18 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a710b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(plVar18[9] + 0x18))(plVar18 + 9);
  return;
}


