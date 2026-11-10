/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006cc2d0; name: FUN_006cc2d0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_006cc2d0(undefined8 param_1,int param_2,long param_3,long *param_4,undefined8 *param_5)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar5 = PTR_DAT_02715288;
  puVar4 = PTR_DAT_02715280;
  if (*param_4 == 0) {
    return false;
  }
  if (*(int *)(*param_4 + 0x54) == 0) {
    return false;
  }
  lVar13 = *param_4;
  piVar1 = (int *)(lVar13 + 0x54);
  iVar18 = *(int *)(lVar13 + 0x54);
  do {
    while( true ) {
      plVar19 = *(long **)(lVar13 + 0x58);
      if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
        uVar9 = FUN_01590a70();
        *(undefined8 *)puVar5 = uVar9;
        __cxa_guard_release(puVar4);
      }
      for (; plVar19 != (long *)puVar5; plVar19 = (long *)*plVar19) {
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar18) break;
      ClearExclusiveLocal();
      iVar18 = iVar7;
    }
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    iVar18 = iVar7;
  } while (cVar3 != '\0');
  lVar13 = *(long *)(lVar13 + 0x60);
  (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
  puVar4 = PTR_DAT_02715298;
  uVar22 = *(undefined8 *)(lVar13 + 0x28);
  uVar21 = *(undefined8 *)(lVar13 + 0x20);
  uVar20 = *(undefined8 *)(lVar13 + 0x38);
  uVar9 = *(undefined8 *)(lVar13 + 0x30);
  if (param_2 == -1) {
    bVar6 = true;
  }
  else {
    uVar12 = 0;
    while (*(long *)(param_3 + 0x48) != 0) {
      plVar19 = *(long **)(param_3 + 0x40);
      plVar2 = plVar19 + *(long *)(param_3 + 0x48);
      iVar18 = 0;
      do {
        while ((*plVar19 == 0 || (*(int *)(*plVar19 + 0x54) == 0))) {
LAB_006cc4c4:
          plVar19 = plVar19 + 1;
          if (plVar19 == plVar2) goto LAB_006cc600;
        }
        lVar15 = *plVar19;
        if ((lVar15 != 0) && (*(int *)(lVar15 + 0x54) != 0)) {
          piVar1 = (int *)(lVar15 + 0x54);
          iVar7 = *(int *)(lVar15 + 0x54);
          do {
            while( true ) {
              plVar14 = *(long **)(lVar15 + 0x58);
              if (((*PTR_DAT_02715290 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_02715290), iVar8 != 0)) {
                uVar10 = FUN_01590a70();
                *(undefined8 *)puVar4 = uVar10;
                __cxa_guard_release(PTR_DAT_02715290);
              }
              while( true ) {
                if (plVar14 == (long *)0x0) goto LAB_006cc4d4;
                if (plVar14 == (long *)puVar4) break;
                plVar14 = (long *)*plVar14;
              }
              iVar8 = *piVar1;
              if (iVar8 == iVar7) break;
              ClearExclusiveLocal();
              iVar7 = iVar8;
              if (iVar8 == 0) goto LAB_006cc4d4;
            }
            cVar3 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar7 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar15 = *(long *)(lVar15 + 0x60);
              if (lVar15 != 0) {
                cVar3 = *(char *)(lVar15 + 0x10);
                (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
                if (cVar3 != '\0') goto LAB_006cc4e0;
                goto LAB_006cc4c4;
              }
              break;
            }
            iVar7 = iVar8;
          } while (iVar8 != 0);
        }
LAB_006cc4d4:
        if (DAT_00000060 == '\0') goto LAB_006cc4c4;
LAB_006cc4e0:
        lVar15 = *plVar19;
        if ((lVar15 == 0) || (*(int *)(lVar15 + 0x54) == 0)) {
LAB_006cc5a4:
          lVar17 = 0;
        }
        else {
          piVar1 = (int *)(lVar15 + 0x54);
          iVar7 = *(int *)(lVar15 + 0x54);
          do {
            while( true ) {
              puVar16 = *(undefined8 **)(lVar15 + 0x58);
              if (((*PTR_DAT_02715290 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_02715290), iVar8 != 0)) {
                uVar10 = FUN_01590a70();
                *(undefined8 *)puVar4 = uVar10;
                __cxa_guard_release(PTR_DAT_02715290);
              }
              lVar17 = 0;
              if (puVar16 == (undefined8 *)0x0) goto LAB_006cc5a8;
              while (puVar16 != (undefined8 *)puVar4) {
                puVar16 = (undefined8 *)*puVar16;
                if (puVar16 == (undefined8 *)0x0) {
                  lVar17 = 0;
                  goto LAB_006cc5a8;
                }
              }
              iVar8 = *piVar1;
              if (iVar8 != iVar7) break;
              cVar3 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar7 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar15 = *(long *)(lVar15 + 0x60);
                if (lVar15 == 0) goto LAB_006cc5a4;
                lVar17 = lVar15 + -0x50;
                (**(code **)(*(long *)(lVar15 + -8) + 0x18))();
                goto LAB_006cc5a8;
              }
              lVar17 = 0;
              iVar7 = iVar8;
              if (iVar8 == 0) goto LAB_006cc5a8;
            }
            ClearExclusiveLocal();
            lVar17 = 0;
            iVar7 = iVar8;
          } while (iVar8 != 0);
        }
LAB_006cc5a8:
        local_70 = 0;
        uStack_68 = 0;
        uVar11 = FUN_006cbf20(lVar13 + -0x50,lVar17,&local_70);
        if ((uVar11 & 1) != 0) {
          if (*(char *)(lVar13 + 0x160) != '\0') {
            *(ulong *)(lVar13 + 0x28) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x28) >> 0x20) +
                          (float)((ulong)uStack_68 >> 0x20),
                          (float)*(undefined8 *)(lVar13 + 0x28) + (float)uStack_68);
            *(ulong *)(lVar13 + 0x20) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x20) >> 0x20) +
                          (float)((ulong)local_70 >> 0x20),
                          (float)*(undefined8 *)(lVar13 + 0x20) + (float)local_70);
          }
          iVar18 = iVar18 + 1;
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != plVar2);
LAB_006cc600:
      bVar6 = iVar18 == 0;
      uVar12 = uVar12 + 1;
      if ((param_2 + 1U <= uVar12) || (iVar18 == 0)) goto joined_r0x006cc67c;
    }
    bVar6 = true;
  }
joined_r0x006cc67c:
  if (param_5 != (undefined8 *)0x0) {
    uVar10 = *(undefined8 *)(lVar13 + 0x20);
    param_5[1] = CONCAT44((float)((ulong)*(undefined8 *)(lVar13 + 0x28) >> 0x20) -
                          (float)((ulong)uVar22 >> 0x20),
                          (float)*(undefined8 *)(lVar13 + 0x28) - (float)uVar22);
    *param_5 = CONCAT44((float)((ulong)uVar10 >> 0x20) - (float)((ulong)uVar21 >> 0x20),
                        (float)uVar10 - (float)uVar21);
  }
  *(undefined8 *)(lVar13 + 0x28) = uVar22;
  *(undefined8 *)(lVar13 + 0x20) = uVar21;
  *(undefined8 *)(lVar13 + 0x38) = uVar20;
  *(undefined8 *)(lVar13 + 0x30) = uVar9;
  return bVar6;
}


