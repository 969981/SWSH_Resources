/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0071de10; name: FUN_0071de10
 */


/* WARNING: Removing unreachable block (ram,0x0071e350) */
/* WARNING: Removing unreachable block (ram,0x0071e144) */
/* WARNING: Removing unreachable block (ram,0x0071e704) */

void FUN_0071de10(long *param_1,long *param_2)

{
  long *plVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ushort *puVar14;
  int *piVar15;
  ushort *puVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *local_68;
  
  local_68 = param_2;
LAB_0071de50:
  plVar28 = local_68 + -3;
LAB_0071de6c:
  plVar25 = param_1;
  uVar9 = (long)local_68 - (long)plVar25;
  if ((ulong)(((long)uVar9 >> 3) * -0x5555555555555555) < 6) {
                    /* WARNING: Could not recover jumptable at 0x0071e8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0213f070 + *(int *)(&DAT_0213f070 + ((long)uVar9 >> 3) * -0x5555555555555554)))
              ();
    return;
  }
  if (0xa7 < (long)uVar9) {
    plVar24 = plVar25 + (uVar9 / 0x30) * 3;
    if ((long)uVar9 < 0x5da9) {
      iVar4 = FUN_0071ec50(plVar25,plVar24,plVar28);
    }
    else {
      iVar4 = FUN_0071f3c0(plVar25,plVar25 + (uVar9 / 0x60) * 3,plVar24,plVar24 + (uVar9 / 0x60) * 3
                           ,plVar28);
    }
    lVar20 = plVar25[2];
    piVar10 = *(int **)(lVar20 + 0x40);
    puVar14 = (ushort *)((long)piVar10 - (long)*piVar10);
    uVar2 = *puVar14;
    if ((uVar2 < 9) || ((ulong)puVar14[4] == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar10 + (ulong)puVar14[4]);
    }
    piVar15 = *(int **)(plVar25[(uVar9 / 0x30) * 3 + 2] + 0x40);
    puVar16 = (ushort *)((long)piVar15 - (long)*piVar15);
    if (*puVar16 < 9) {
      if (iVar17 < 0) goto LAB_0071df5c;
LAB_0071dfb0:
      plVar22 = local_68;
      if (*puVar16 < 9) {
        do {
          while( true ) {
            while( true ) {
              if (plVar25 + 6 == plVar22) goto LAB_0071e450;
              piVar15 = *(int **)(plVar22[-4] + 0x40);
              if (8 < *(ushort *)((long)piVar15 - (long)*piVar15)) break;
              plVar22 = plVar22 + -3;
            }
            uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4];
            if (uVar9 != 0) break;
            plVar22 = plVar22 + -3;
          }
          plVar22 = plVar22 + -3;
        } while (-1 < *(int *)((long)piVar15 + uVar9));
      }
      else {
        do {
          if (plVar25 + 6 == plVar22) goto LAB_0071e450;
          piVar18 = *(int **)(plVar22[-4] + 0x40);
          if ((*(ushort *)((long)piVar18 - (long)*piVar18) < 9) ||
             (uVar9 = (ulong)((ushort *)((long)piVar18 - (long)*piVar18))[4], uVar9 == 0)) {
            iVar17 = 0;
            uVar9 = (ulong)puVar16[4];
            iVar19 = 0;
            if (uVar9 != 0) goto LAB_0071e00c;
          }
          else {
            iVar17 = *(int *)((long)piVar18 + uVar9);
            uVar9 = (ulong)puVar16[4];
            if (uVar9 == 0) {
              iVar19 = 0;
            }
            else {
LAB_0071e00c:
              iVar19 = *(int *)((long)piVar15 + uVar9);
            }
          }
          plVar22 = plVar22 + -3;
        } while (iVar19 <= iVar17);
      }
      plVar23 = plVar22 + -3;
      lVar26 = *plVar25;
      lVar12 = plVar25[1];
      *plVar25 = 0;
      plVar25[1] = 0;
      lVar11 = *plVar23;
      *plVar23 = 0;
      *plVar25 = lVar11;
      if (plVar25[1] != 0) {
        (**(code **)(*(long *)(plVar25[1] + 0x48) + 0x18))();
        plVar25[1] = 0;
      }
      lVar11 = plVar22[-2];
      plVar22[-2] = 0;
      plVar25[1] = lVar11;
      plVar25[2] = plVar22[-1];
      if (*plVar23 != 0) {
        (**(code **)(*(long *)(*plVar23 + 0x48) + 0x18))();
        *plVar23 = 0;
      }
      *plVar23 = lVar26;
      if (plVar22[-2] != 0) {
        (**(code **)(*(long *)(plVar22[-2] + 0x48) + 0x18))();
        plVar22[-2] = 0;
      }
      iVar4 = iVar4 + 1;
      plVar22[-2] = lVar12;
      plVar22[-1] = lVar20;
      plVar22 = plVar25 + 3;
      if (plVar22 < plVar23) {
LAB_0071e1f8:
        do {
          piVar10 = *(int **)(plVar24[2] + 0x40);
          puVar14 = (ushort *)((long)piVar10 - (long)*piVar10);
          if (*puVar14 < 9) {
            do {
              plVar21 = plVar22;
              piVar15 = *(int **)(plVar21[2] + 0x40);
              if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
                 (uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar9 == 0))
              break;
              plVar22 = plVar21 + 3;
            } while (*(int *)((long)piVar15 + uVar9) < 0);
          }
          else {
            uVar2 = puVar14[4];
            plVar21 = plVar22 + -3;
            do {
              while( true ) {
                piVar15 = *(int **)(plVar21[5] + 0x40);
                if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
                   (uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar9 == 0))
                break;
                iVar17 = *(int *)((long)piVar15 + uVar9);
                if (uVar2 != 0) goto LAB_0071e264;
LAB_0071e248:
                plVar21 = plVar21 + 3;
                if (-1 < iVar17) goto LAB_0071e2ac;
              }
              iVar17 = 0;
              if (uVar2 == 0) goto LAB_0071e248;
LAB_0071e264:
              plVar21 = plVar21 + 3;
            } while (iVar17 < *(int *)((long)piVar10 + (ulong)uVar2));
          }
LAB_0071e2ac:
          if (*puVar14 < 9) {
            do {
              do {
                plVar22 = plVar23 + -1;
                plVar23 = plVar23 + -3;
                piVar10 = *(int **)(*plVar22 + 0x40);
              } while (*(ushort *)((long)piVar10 - (long)*piVar10) < 9);
              uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4];
            } while ((uVar9 == 0) || (-1 < *(int *)((long)piVar10 + uVar9)));
          }
          else {
            uVar2 = puVar14[4];
            do {
              while( true ) {
                piVar15 = *(int **)(plVar23[-1] + 0x40);
                if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
                   (uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar9 == 0))
                break;
                iVar17 = *(int *)((long)piVar15 + uVar9);
                if (uVar2 != 0) goto LAB_0071e304;
LAB_0071e2e8:
                plVar23 = plVar23 + -3;
                if (iVar17 < 0) goto LAB_0071e35c;
              }
              iVar17 = 0;
              if (uVar2 == 0) goto LAB_0071e2e8;
LAB_0071e304:
              plVar23 = plVar23 + -3;
            } while (*(int *)((long)piVar10 + (ulong)uVar2) <= iVar17);
          }
LAB_0071e35c:
          if (plVar23 < plVar21) goto LAB_0071e3e4;
          lVar20 = *plVar21;
          lVar26 = plVar21[1];
          lVar11 = plVar21[2];
          *plVar21 = 0;
          plVar21[1] = 0;
          lVar12 = *plVar23;
          *plVar23 = 0;
          *plVar21 = lVar12;
          if (plVar21[1] != 0) {
            (**(code **)(*(long *)(plVar21[1] + 0x48) + 0x18))();
            plVar21[1] = 0;
          }
          lVar12 = plVar23[1];
          plVar23[1] = 0;
          plVar21[1] = lVar12;
          plVar21[2] = plVar23[2];
          if (*plVar23 != 0) {
            (**(code **)(*(long *)(*plVar23 + 0x48) + 0x18))();
            *plVar23 = 0;
          }
          *plVar23 = lVar20;
          if (plVar23[1] != 0) {
            (**(code **)(*(long *)(plVar23[1] + 0x48) + 0x18))();
            plVar23[1] = 0;
          }
          iVar4 = iVar4 + 1;
          plVar1 = plVar23;
          if (plVar24 != plVar21) {
            plVar1 = plVar24;
          }
          plVar23[1] = lVar26;
          plVar23[2] = lVar11;
          plVar22 = plVar21 + 3;
          plVar24 = plVar1;
        } while( true );
      }
    }
    else {
      iVar19 = 0;
      if ((ulong)puVar16[4] != 0) {
        iVar19 = *(int *)((long)piVar15 + (ulong)puVar16[4]);
      }
      if (iVar19 <= iVar17) goto LAB_0071dfb0;
LAB_0071df5c:
      plVar22 = plVar25 + 3;
      plVar23 = plVar28;
      if (plVar22 < plVar28) goto LAB_0071e1f8;
    }
    plVar21 = plVar25 + 3;
    if (plVar21 != plVar24) goto LAB_0071df78;
    goto joined_r0x0071e3f4;
  }
  FUN_0071ec50(plVar25,plVar25 + 3,plVar25 + 6);
  if (plVar25 + 9 == local_68) {
    return;
  }
  lVar20 = 0;
  plVar28 = plVar25 + 9;
  plVar24 = plVar25 + 6;
  goto LAB_0071e914;
LAB_0071e450:
  if ((uVar2 < 9) || ((ulong)puVar14[4] == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar10 + (ulong)puVar14[4]);
  }
  piVar15 = *(int **)(local_68[-1] + 0x40);
  param_1 = plVar25 + 3;
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar9 == 0)) {
    if (iVar4 < 0) goto joined_r0x0071e530;
  }
  else if (iVar4 < *(int *)((long)piVar15 + uVar9)) goto joined_r0x0071e530;
  if (param_1 == plVar28) {
    return;
  }
  if (8 < uVar2) {
    param_1 = plVar25 + 6;
    goto LAB_0071e4b8;
  }
  param_1 = plVar25 + 6;
  while( true ) {
    piVar10 = *(int **)(param_1[-1] + 0x40);
    if (((8 < *(ushort *)((long)piVar10 - (long)*piVar10)) &&
        (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 != 0)) &&
       (0 < *(int *)((long)piVar10 + uVar9))) break;
    param_1 = param_1 + 3;
    if (local_68 == param_1) {
      return;
    }
  }
LAB_0071e584:
  plVar24 = param_1 + -3;
  lVar20 = *plVar24;
  lVar26 = param_1[-2];
  lVar11 = param_1[-1];
  *plVar24 = 0;
  param_1[-2] = 0;
  lVar12 = local_68[-3];
  local_68[-3] = 0;
  *plVar24 = lVar12;
  if (param_1[-2] != 0) {
    (**(code **)(*(long *)(param_1[-2] + 0x48) + 0x18))();
    param_1[-2] = 0;
  }
  lVar12 = local_68[-2];
  local_68[-2] = 0;
  param_1[-2] = lVar12;
  param_1[-1] = local_68[-1];
  if (local_68[-3] != 0) {
    (**(code **)(*(long *)(local_68[-3] + 0x48) + 0x18))();
    *plVar28 = 0;
  }
  local_68[-3] = lVar20;
  if (local_68[-2] != 0) {
    (**(code **)(*(long *)(local_68[-2] + 0x48) + 0x18))();
    local_68[-2] = 0;
  }
  local_68[-2] = lVar26;
  local_68[-1] = lVar11;
joined_r0x0071e530:
  if (param_1 == plVar28) {
    return;
  }
  do {
    piVar10 = *(int **)(plVar25[2] + 0x40);
    puVar14 = (ushort *)((long)piVar10 - (long)*piVar10);
    if (*puVar14 < 9) {
      param_1 = param_1 + -3;
      do {
        while( true ) {
          while( true ) {
            piVar15 = *(int **)(param_1[5] + 0x40);
            if (8 < *(ushort *)((long)piVar15 - (long)*piVar15)) break;
            param_1 = param_1 + 3;
          }
          uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4];
          if (uVar9 != 0) break;
          param_1 = param_1 + 3;
        }
        param_1 = param_1 + 3;
      } while (*(int *)((long)piVar15 + uVar9) < 1);
    }
    else {
      param_1 = param_1 + -3;
      do {
        while( true ) {
          if (puVar14[4] == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)((long)piVar10 + (ulong)puVar14[4]);
          }
          piVar15 = *(int **)(param_1[5] + 0x40);
          if (*(ushort *)((long)piVar15 - (long)*piVar15) < 9) break;
          uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4];
          if (uVar9 == 0) {
            param_1 = param_1 + 3;
            if (iVar4 < 0) goto LAB_0071e718;
          }
          else {
            param_1 = param_1 + 3;
            if (iVar4 < *(int *)((long)piVar15 + uVar9)) goto LAB_0071e718;
          }
        }
        param_1 = param_1 + 3;
      } while (-1 < iVar4);
    }
LAB_0071e718:
    if (*puVar14 < 9) {
      do {
        plVar24 = plVar28;
        plVar28 = plVar24 + -3;
        piVar10 = *(int **)(plVar24[-1] + 0x40);
        if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
           (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) break;
      } while (0 < *(int *)((long)piVar10 + uVar9));
    }
    else {
      do {
        while( true ) {
          plVar24 = plVar28;
          if (puVar14[4] == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)((long)piVar10 + (ulong)puVar14[4]);
          }
          plVar28 = plVar24 + -3;
          piVar15 = *(int **)(plVar24[-1] + 0x40);
          if (*(ushort *)((long)piVar15 - (long)*piVar15) < 9) break;
          uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4];
          if (uVar9 == 0) {
            if (-1 < iVar4) goto joined_r0x0071e7d8;
          }
          else if (*(int *)((long)piVar15 + uVar9) <= iVar4) goto joined_r0x0071e7d8;
        }
      } while (iVar4 < 0);
    }
joined_r0x0071e7d8:
    if (plVar28 <= param_1) goto LAB_0071e858;
    lVar20 = *param_1;
    lVar26 = param_1[1];
    lVar11 = param_1[2];
    *param_1 = 0;
    param_1[1] = 0;
    lVar12 = *plVar28;
    *plVar28 = 0;
    *param_1 = lVar12;
    if (param_1[1] != 0) {
      (**(code **)(*(long *)(param_1[1] + 0x48) + 0x18))();
      param_1[1] = 0;
    }
    lVar12 = plVar24[-2];
    plVar24[-2] = 0;
    param_1[1] = lVar12;
    param_1[2] = plVar24[-1];
    if (*plVar28 != 0) {
      (**(code **)(*(long *)(*plVar28 + 0x48) + 0x18))();
      *plVar28 = 0;
    }
    *plVar28 = lVar20;
    if (plVar24[-2] != 0) {
      (**(code **)(*(long *)(plVar24[-2] + 0x48) + 0x18))();
      plVar24[-2] = 0;
    }
    param_1 = param_1 + 3;
    plVar24[-2] = lVar26;
    plVar24[-1] = lVar11;
  } while( true );
LAB_0071e4b8:
  if (puVar14[4] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar10 + (ulong)puVar14[4]);
  }
  piVar15 = *(int **)(param_1[-1] + 0x40);
  if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[4], uVar9 == 0)) {
    if (iVar4 < 0) goto LAB_0071e584;
  }
  else if (iVar4 < *(int *)((long)piVar15 + uVar9)) goto LAB_0071e584;
  param_1 = param_1 + 3;
  if (local_68 == param_1) {
    return;
  }
  goto LAB_0071e4b8;
LAB_0071e858:
  uVar8 = 4;
  goto LAB_0071e868;
LAB_0071e3e4:
  if (plVar21 == plVar24) {
joined_r0x0071e3f4:
    if (iVar4 != 0) goto LAB_0071e420;
  }
  else {
LAB_0071df78:
    piVar10 = *(int **)(plVar24[2] + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
      iVar17 = 0;
    }
    else {
      iVar17 = *(int *)((long)piVar10 + uVar9);
    }
    lVar20 = plVar21[2];
    piVar10 = *(int **)(lVar20 + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
      if (iVar17 < 0) goto LAB_0071e06c;
      goto joined_r0x0071e3f4;
    }
    if (*(int *)((long)piVar10 + uVar9) <= iVar17) goto joined_r0x0071e3f4;
LAB_0071e06c:
    lVar26 = *plVar21;
    lVar12 = plVar21[1];
    *plVar21 = 0;
    plVar21[1] = 0;
    lVar11 = *plVar24;
    *plVar24 = 0;
    *plVar21 = lVar11;
    if (plVar21[1] != 0) {
      (**(code **)(*(long *)(plVar21[1] + 0x48) + 0x18))();
      plVar21[1] = 0;
    }
    lVar11 = plVar24[1];
    plVar24[1] = 0;
    plVar21[1] = lVar11;
    plVar21[2] = plVar24[2];
    if (*plVar24 != 0) {
      (**(code **)(*(long *)(*plVar24 + 0x48) + 0x18))();
      *plVar24 = 0;
    }
    *plVar24 = lVar26;
    if (plVar24[1] != 0) {
      (**(code **)(*(long *)(plVar24[1] + 0x48) + 0x18))();
      plVar24[1] = 0;
    }
    plVar24[1] = lVar12;
    plVar24[2] = lVar20;
    if (iVar4 != -1) goto LAB_0071e420;
  }
  uVar9 = FUN_0071f7d0(plVar25,plVar21);
  uVar5 = FUN_0071f7d0(plVar21 + 3,local_68);
  if ((uVar5 & 1) != 0) goto LAB_0071e880;
  param_1 = plVar21 + 3;
  if ((uVar9 & 1) != 0) goto LAB_0071de6c;
LAB_0071e420:
  if (((long)local_68 - (long)plVar21 >> 3) * -0x5555555555555555 <=
      ((long)plVar21 - (long)plVar25 >> 3) * -0x5555555555555555) {
    FUN_0071de10(plVar21 + 3,local_68);
    param_1 = plVar25;
    local_68 = plVar21;
    goto LAB_0071de50;
  }
  FUN_0071de10(plVar25,plVar21);
  param_1 = plVar21 + 3;
  goto LAB_0071de6c;
LAB_0071e880:
  bVar3 = (uVar9 & 1) == 0;
  if (bVar3) {
    local_68 = plVar21;
  }
  uVar8 = 1;
  if (bVar3) {
    uVar8 = 2;
  }
  param_1 = plVar25;
  if (4 < uVar8) {
    return;
  }
LAB_0071e868:
  if ((1 << (ulong)uVar8 & 0x15U) == 0) {
    return;
  }
  goto LAB_0071de50;
LAB_0071e914:
  plVar22 = plVar28;
  lVar26 = plVar22[2];
  piVar10 = *(int **)(lVar26 + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)((long)piVar10 + uVar9);
  }
  piVar10 = *(int **)(plVar24[2] + 0x40);
  if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
    if (iVar4 < 0) goto LAB_0071e990;
  }
  else if (iVar4 < *(int *)((long)piVar10 + uVar9)) {
LAB_0071e990:
    lVar12 = *plVar22;
    lVar11 = plVar22[1];
    *plVar22 = 0;
    plVar22[1] = 0;
    lVar7 = lVar20;
LAB_0071e9c8:
    lVar27 = lVar7;
    uVar13 = *(undefined8 *)((long)plVar25 + lVar27 + 0x30);
    lVar7 = *(long *)((long)plVar25 + lVar27 + 0x50);
    *(undefined8 *)((long)plVar25 + lVar27 + 0x30) = 0;
    *(undefined8 *)((long)plVar25 + lVar27 + 0x48) = uVar13;
    if (lVar7 != 0) {
      (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
      *(undefined8 *)((long)plVar25 + lVar27 + 0x50) = 0;
    }
    uVar13 = *(undefined8 *)((long)plVar25 + lVar27 + 0x38);
    *(undefined8 *)((long)plVar25 + lVar27 + 0x38) = 0;
    *(undefined8 *)((long)plVar25 + lVar27 + 0x50) = uVar13;
    *(undefined8 *)((long)plVar25 + lVar27 + 0x58) = *(undefined8 *)((long)plVar25 + lVar27 + 0x40);
    if (lVar27 == -0x30) {
      lVar7 = *plVar25;
      plVar28 = plVar25;
      goto joined_r0x0071ea88;
    }
    piVar10 = *(int **)(lVar26 + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)((long)piVar10 + uVar9);
    }
    piVar10 = *(int **)(*(long *)((long)plVar25 + lVar27 + 0x28) + 0x40);
    if ((*(ushort *)((long)piVar10 - (long)*piVar10) < 9) ||
       (uVar9 = (ulong)((ushort *)((long)piVar10 - (long)*piVar10))[4], uVar9 == 0)) {
      if (-1 < iVar4) goto LAB_0071ea70;
    }
    else if (*(int *)((long)piVar10 + uVar9) <= iVar4) goto LAB_0071ea70;
    lVar6 = *(long *)((long)plVar25 + lVar27 + 0x30);
    lVar7 = lVar27 + -0x18;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
      *(undefined8 *)((long)plVar25 + lVar27 + 0x30) = 0;
    }
    goto LAB_0071e9c8;
  }
  goto LAB_0071eac0;
LAB_0071ea70:
  plVar28 = (long *)((long)plVar25 + lVar27 + 0x30);
  lVar7 = *plVar28;
joined_r0x0071ea88:
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
    *plVar28 = 0;
  }
  *plVar28 = lVar12;
  lVar12 = *(long *)((long)plVar25 + lVar27 + 0x38);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))();
    *(undefined8 *)((long)plVar25 + lVar27 + 0x38) = 0;
  }
  *(long *)((long)plVar25 + lVar27 + 0x38) = lVar11;
  *(long *)((long)plVar25 + lVar27 + 0x40) = lVar26;
LAB_0071eac0:
  lVar20 = lVar20 + 0x18;
  plVar28 = plVar22 + 3;
  plVar24 = plVar22;
  if (plVar22 + 3 == local_68) {
    return;
  }
  goto LAB_0071e914;
}


