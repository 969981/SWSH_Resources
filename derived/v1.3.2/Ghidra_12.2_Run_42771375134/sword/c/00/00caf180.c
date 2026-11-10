/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00caf180; name: FUN_00caf180
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00caf180(long *param_1,long param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  undefined8 *local_88;
  long *local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_78 = 0;
  local_70 = 0;
  local_88 = (undefined8 *)0x0;
  local_80 = (long *)0x0;
  FUN_00cb0090(param_2,param_3,&local_88,*(undefined8 *)(param_2 + 0x15a8));
  puVar14 = param_3;
  if (local_88 != (undefined8 *)0x0) {
    puVar14 = local_88;
  }
  FUN_00cb00d0(param_1,param_2,puVar14);
  if ((*param_1 != 0) && (*(int *)(*param_1 + 0x54) != 0)) {
    lVar17 = *param_1;
    iVar8 = _DAT_00000070;
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x10))((long *)(lVar17 + 0x48));
      puVar7 = PTR_DAT_0271c2b8;
      puVar6 = PTR_DAT_0271c2b0;
      iVar8 = _DAT_00000070;
      if (*(int *)(lVar17 + 0x54) != 0) {
        piVar1 = (int *)(lVar17 + 0x54);
        iVar19 = *(int *)(lVar17 + 0x54);
        do {
          while( true ) {
            plVar20 = *(long **)(lVar17 + 0x58);
            if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
              uVar12 = FUN_00c72b60();
              *(undefined8 *)puVar7 = uVar12;
              __cxa_guard_release(puVar6);
            }
            while( true ) {
              iVar8 = _DAT_00000070;
              if (plVar20 == (long *)0x0) goto joined_r0x00caf2c8;
              if (plVar20 == (long *)puVar7) break;
              plVar20 = (long *)*plVar20;
            }
            iVar9 = *piVar1;
            if (iVar9 != iVar19) break;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar19 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            iVar8 = _DAT_00000070;
            if (cVar3 == '\0') {
              lVar18 = *(long *)(lVar17 + 0x60);
              if (lVar18 != 0) {
                iVar8 = *(int *)(lVar18 + 0x20);
                (**(code **)(*(long *)(lVar18 + -8) + 0x18))();
              }
              goto joined_r0x00caf2c8;
            }
            iVar19 = iVar9;
            if (iVar9 == 0) goto joined_r0x00caf2c8;
          }
          ClearExclusiveLocal();
          iVar19 = iVar9;
        } while (iVar9 != 0);
      }
    }
joined_r0x00caf2c8:
    if (lVar17 != 0) {
      (**(code **)(*(long *)(lVar17 + 0x48) + 0x18))((long *)(lVar17 + 0x48));
    }
    puVar7 = PTR_DAT_0271c2b8;
    puVar6 = PTR_DAT_0271c2b0;
    lVar17 = *param_1;
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0x54) != 0)) {
      piVar1 = (int *)(lVar17 + 0x54);
      iVar19 = *(int *)(lVar17 + 0x54);
      do {
        while( true ) {
          plVar20 = *(long **)(lVar17 + 0x58);
          if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
            uVar12 = FUN_00c72b60();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar20 == (long *)0x0) goto LAB_00caf3b0;
            if (plVar20 == (long *)puVar7) break;
            plVar20 = (long *)*plVar20;
          }
          iVar9 = *piVar1;
          if (iVar9 != iVar19) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar19 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar17 = *(long *)(lVar17 + 0x60);
            if (lVar17 != 0) {
              iVar19 = *(int *)(lVar17 + 0x20);
              (**(code **)(*(long *)(lVar17 + -8) + 0x18))();
              goto LAB_00caf3b8;
            }
            goto LAB_00caf3b0;
          }
          iVar19 = iVar9;
          if (iVar9 == 0) goto LAB_00caf3b0;
        }
        ClearExclusiveLocal();
        iVar19 = iVar9;
      } while (iVar9 != 0);
    }
LAB_00caf3b0:
    iVar19 = _DAT_00000070;
LAB_00caf3b8:
    switch(iVar19) {
    case 2:
      lVar17 = *(long *)(param_2 + 0x15d0);
      if (lVar17 == 0) goto switchD_00caf3dc_caseD_4;
      goto LAB_00caf404;
    case 3:
      lVar17 = *(long *)(param_2 + 0x15f0);
      break;
    default:
      goto switchD_00caf3dc_caseD_4;
    case 6:
      lVar17 = *(long *)(param_2 + 0x1650);
      break;
    case 7:
      lVar17 = *(long *)(param_2 + 0x1670);
    }
    if (lVar17 != 0) {
LAB_00caf404:
      lVar18 = *param_1;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      iVar8 = *(int *)PTR_DAT_0271c508;
      if (0 < *(int *)(lVar17 + 8)) {
        uVar15 = 0;
        lVar13 = 0x10;
        do {
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= uVar15) goto LAB_00cafffc;
          if (*(long *)(*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + lVar13) == lVar18) {
            iVar8 = (int)uVar15;
            break;
          }
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 0x28;
        } while ((int)uVar15 < *(int *)(lVar17 + 8));
      }
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
      }
      puVar5 = local_88;
      if ((-1 < iVar8) && (iVar8 < *(int *)(lVar17 + 8))) {
        if ((ulong)(long)iVar8 < *(ulong *)(*(long *)(lVar17 + 0x38) + 0x48)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar8 * 0x28;
          iVar8 = 1;
          if (-1 < *(int *)(lVar17 + 0x1c)) {
            iVar8 = *(int *)(lVar17 + 0x1c) + 1;
          }
          *(int *)(lVar17 + 0x1c) = iVar8;
          *(undefined4 *)(lVar17 + 0x20) = 0;
          goto joined_r0x00caf4cc;
        }
        goto LAB_00cafffc;
      }
      goto joined_r0x00caf4cc;
    }
switchD_00caf3dc_caseD_4:
    puVar5 = local_88;
    if (iVar8 == 1) goto joined_r0x00caf4cc;
  }
  puVar5 = local_88;
  iVar8 = *(int *)PTR_DAT_0271c508;
  iVar19 = iVar8;
  if (local_88 == (undefined8 *)0x0) {
    lVar17 = 0;
    goto switchD_00caf530_caseD_4;
  }
  lVar17 = 0;
  switch(*(undefined4 *)(local_88 + 3)) {
  case 1:
    lVar17 = 0;
    local_88[2] = *(undefined8 *)(*(long *)PTR_DAT_027108e0 + 0x28);
    break;
  case 2:
    lVar17 = *(long *)(param_2 + 0x15d0);
    goto joined_r0x00caf578;
  case 3:
    lVar17 = *(long *)(param_2 + 0x15f0);
joined_r0x00caf578:
    if (lVar17 != 0) {
      local_88[2] = 0;
      local_88[8] = 0;
      iVar9 = FUN_00c9b360(lVar17);
      if (iVar9 != iVar8) {
        lVar18 = *(long *)(lVar17 + 0x10);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        lVar13 = lVar18;
        if ((-1 < iVar9) && (iVar9 < *(int *)(lVar17 + 8))) {
          uVar15 = (ulong)iVar9;
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= uVar15) goto LAB_00cafffc;
          lVar16 = *(long *)(*(long *)(lVar17 + 0x38) + 0x40);
          plVar20 = (long *)(lVar16 + uVar15 * 0x28 + 0x10);
          lVar13 = *plVar20;
          if (lVar13 != 0) {
            (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
          }
          if (lVar18 != 0) {
            (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
          }
          lVar18 = *(long *)(lVar17 + 0x10);
          if (lVar18 != 0) {
            (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
          }
          lVar11 = *plVar20;
          *plVar20 = lVar18;
          if (lVar11 != 0) {
            (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
          }
          lVar16 = lVar16 + uVar15 * 0x28;
          *(undefined1 *)(lVar16 + 0x18) = 0;
          *(undefined8 *)(lVar16 + 0x1c) = 0;
        }
        iVar19 = iVar9;
        if ((lVar13 == 0) || (*(int *)(lVar13 + 0x54) == 0)) {
          if (iVar9 < 0) {
            puVar5[2] = 0;
            puVar5[8] = 0;
          }
          else {
            if (iVar9 < *(int *)(lVar17 + 8)) {
              if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9)
              goto LAB_00cafffc;
              puVar5[2] = *(undefined8 *)
                           (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28);
              iVar10 = *(int *)(lVar17 + 8);
            }
            else {
              puVar5[2] = 0;
              iVar10 = *(int *)(lVar17 + 8);
            }
            if (iVar10 <= iVar9) {
              puVar5[8] = 0;
              if (lVar13 != 0) goto LAB_00cafd38;
              goto LAB_00cafd4c;
            }
            if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9)
            goto LAB_00cafffc;
            puVar5[8] = *(undefined8 *)
                         (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28 + 8);
          }
          if (lVar13 == 0) goto LAB_00cafd4c;
        }
        else {
          plVar20 = (long *)(lVar13 + 0x48);
          (**(code **)(*plVar20 + 0x10))(plVar20);
          uVar2 = *(undefined4 *)(puVar5 + 3);
          local_68 = lVar13;
          (**(code **)(*plVar20 + 0x10))(plVar20);
          FUN_00ca9590(param_2,0,&local_68,uVar2);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          (**(code **)(*plVar20 + 0x18))(plVar20);
          if (iVar9 < 0) {
            puVar5[2] = 0;
          }
          else {
            if (iVar9 < *(int *)(lVar17 + 8)) {
              if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9)
              goto LAB_00cafffc;
              puVar5[2] = *(undefined8 *)
                           (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28);
              iVar10 = *(int *)(lVar17 + 8);
            }
            else {
              puVar5[2] = 0;
              iVar10 = *(int *)(lVar17 + 8);
            }
            if (iVar9 < iVar10) {
              if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9)
              goto LAB_00cafffc;
              puVar5[8] = *(undefined8 *)
                           (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28 + 8);
              goto LAB_00cafd38;
            }
          }
          puVar5[8] = 0;
        }
LAB_00cafd38:
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
      }
LAB_00cafd4c:
      if (puVar5[2] != 0) {
        lVar18 = puVar5[8];
joined_r0x00cafc50:
        if (lVar18 != 0) {
          break;
        }
      }
LAB_00cafd64:
      puVar14 = param_3;
      iVar19 = iVar8;
    }
    break;
  case 6:
    lVar17 = *(long *)(param_2 + 0x1650);
    local_88[2] = 0;
    local_88[0x19] = 0;
    iVar9 = FUN_00c9b360(lVar17);
    if (iVar9 != iVar8) {
      lVar18 = *(long *)(lVar17 + 0x10);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      if ((-1 < iVar9) && (iVar9 < *(int *)(lVar17 + 8))) {
        uVar15 = (ulong)iVar9;
        if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= uVar15) goto LAB_00cafffc;
        lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x40);
        plVar20 = (long *)(lVar13 + uVar15 * 0x28 + 0x10);
        lVar16 = *plVar20;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
        }
        lVar18 = *(long *)(lVar17 + 0x10);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        lVar11 = *plVar20;
        *plVar20 = lVar18;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
        lVar13 = lVar13 + uVar15 * 0x28;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x1c) = 0;
        lVar18 = lVar16;
      }
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
        plVar20 = (long *)(lVar18 + 0x48);
        (**(code **)(*plVar20 + 0x10))(plVar20);
        uVar2 = *(undefined4 *)(puVar5 + 3);
        local_68 = lVar18;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        FUN_00ca9590(param_2,0,&local_68,uVar2);
        (**(code **)(*plVar20 + 0x18))(plVar20);
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      if (iVar9 < 0) {
        puVar5[2] = 0;
        puVar5[0x19] = 0;
      }
      else {
        if (iVar9 < *(int *)(lVar17 + 8)) {
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9) goto LAB_00cafffc;
          puVar5[2] = *(undefined8 *)
                       (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28);
          iVar19 = *(int *)(lVar17 + 8);
        }
        else {
          puVar5[2] = 0;
          iVar19 = *(int *)(lVar17 + 8);
        }
        if (iVar9 < iVar19) {
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9) goto LAB_00cafffc;
          puVar5[0x19] = *(undefined8 *)
                          (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28 + 8);
        }
        else {
          puVar5[0x19] = 0;
        }
      }
      iVar19 = iVar9;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
      }
    }
    if (puVar5[2] == 0) goto LAB_00cafd64;
    lVar18 = puVar5[0x19];
    goto joined_r0x00cafc50;
  case 7:
    lVar17 = *(long *)(param_2 + 0x1670);
    local_88[2] = 0;
    local_88[6] = 0;
    iVar9 = FUN_00c9b360(lVar17);
    if (iVar9 != iVar8) {
      lVar18 = *(long *)(lVar17 + 0x10);
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      if ((-1 < iVar9) && (iVar9 < *(int *)(lVar17 + 8))) {
        uVar15 = (ulong)iVar9;
        if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= uVar15) goto LAB_00cafffc;
        lVar13 = *(long *)(*(long *)(lVar17 + 0x38) + 0x40);
        plVar20 = (long *)(lVar13 + uVar15 * 0x28 + 0x10);
        lVar16 = *plVar20;
        if (lVar16 != 0) {
          (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
        }
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
        }
        lVar18 = *(long *)(lVar17 + 0x10);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        lVar11 = *plVar20;
        *plVar20 = lVar18;
        if (lVar11 != 0) {
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
        }
        lVar13 = lVar13 + uVar15 * 0x28;
        *(undefined1 *)(lVar13 + 0x18) = 0;
        *(undefined8 *)(lVar13 + 0x1c) = 0;
        lVar18 = lVar16;
      }
      if ((lVar18 != 0) && (*(int *)(lVar18 + 0x54) != 0)) {
        plVar20 = (long *)(lVar18 + 0x48);
        (**(code **)(*plVar20 + 0x10))(plVar20);
        uVar2 = *(undefined4 *)(puVar5 + 3);
        local_68 = lVar18;
        (**(code **)(*plVar20 + 0x10))(plVar20);
        FUN_00ca9590(param_2,0,&local_68,uVar2);
        (**(code **)(*plVar20 + 0x18))(plVar20);
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      if (iVar9 < 0) {
        puVar5[2] = 0;
        puVar5[6] = 0;
      }
      else {
        if (iVar9 < *(int *)(lVar17 + 8)) {
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9) goto LAB_00cafffc;
          puVar5[2] = *(undefined8 *)
                       (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28);
          iVar19 = *(int *)(lVar17 + 8);
        }
        else {
          puVar5[2] = 0;
          iVar19 = *(int *)(lVar17 + 8);
        }
        if (iVar9 < iVar19) {
          if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= (ulong)(long)iVar9) goto LAB_00cafffc;
          puVar5[6] = *(undefined8 *)
                       (*(long *)(*(long *)(lVar17 + 0x38) + 0x40) + (long)iVar9 * 0x28 + 8);
        }
        else {
          puVar5[6] = 0;
        }
      }
      iVar19 = iVar9;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))();
      }
    }
    if (puVar5[2] != 0) {
      lVar18 = puVar5[6];
      goto joined_r0x00cafc50;
    }
    goto LAB_00cafd64;
  case 0xc:
    lVar17 = 0;
    local_88[2] = *(undefined8 *)(*(long *)PTR_DAT_0271bf40 + 8);
  }
switchD_00caf530_caseD_4:
  FUN_00cb01d0(&local_68,param_2,puVar14);
  if (*param_1 != 0) {
    (**(code **)(*(long *)(*param_1 + 0x48) + 0x18))();
    *param_1 = 0;
  }
  *param_1 = local_68;
  puVar7 = PTR_DAT_0271c2b8;
  puVar6 = PTR_DAT_0271c2b0;
  puVar5 = local_88;
  if ((local_68 != 0) && (*(int *)(local_68 + 0x54) != 0)) {
    lVar18 = *param_1;
    if ((lVar18 == 0) || (*(int *)(lVar18 + 0x54) == 0)) {
      plVar20 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar18 + 0x54);
      iVar9 = *(int *)(lVar18 + 0x54);
LAB_00cafdd8:
      do {
        plVar20 = *(long **)(lVar18 + 0x58);
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
          uVar12 = FUN_00c72b60();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
          if (plVar20 != (long *)0x0) goto LAB_00cafdec;
LAB_00cafe7c:
          plVar20 = (long *)0x0;
          break;
        }
        while( true ) {
          if (plVar20 == (long *)0x0) goto LAB_00cafe7c;
LAB_00cafdec:
          if (plVar20 == (long *)puVar7) break;
          plVar20 = (long *)*plVar20;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            plVar20 = (long *)0x0;
            if (*(long *)(lVar18 + 0x60) != 0) {
              plVar20 = (long *)(*(long *)(lVar18 + 0x60) + -0x50);
            }
            break;
          }
          plVar20 = (long *)0x0;
          iVar9 = iVar10;
          if (iVar10 == 0) break;
          goto LAB_00cafdd8;
        }
        ClearExclusiveLocal();
        plVar20 = (long *)0x0;
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
    (**(code **)(*plVar20 + 0x40))(plVar20,puVar14);
    if (plVar20 != (long *)0x0) {
      (**(code **)(plVar20[9] + 0x18))(plVar20 + 9);
    }
    puVar5 = local_88;
    if (iVar19 != iVar8) {
      lVar18 = *param_1;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
      }
      if ((-1 < iVar19) && (iVar19 < *(int *)(lVar17 + 8))) {
        uVar15 = (ulong)iVar19;
        if (*(ulong *)(*(long *)(lVar17 + 0x38) + 0x48) <= uVar15) {
LAB_00cafffc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar17 = *(long *)(*(long *)(lVar17 + 0x38) + 0x40);
        plVar20 = (long *)(lVar17 + uVar15 * 0x28 + 0x10);
        if (lVar18 != 0) {
          (**(code **)(*(long *)(lVar18 + 0x48) + 0x10))();
        }
        lVar13 = *plVar20;
        *plVar20 = lVar18;
        if (lVar13 != 0) {
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))();
        }
        lVar17 = lVar17 + uVar15 * 0x28;
        *(undefined1 *)(lVar17 + 0x18) = 1;
        *(undefined8 *)(lVar17 + 0x1c) = 1;
      }
      puVar5 = local_88;
      if (lVar18 != 0) {
        (**(code **)(*(long *)(lVar18 + 0x48) + 0x18))((long *)(lVar18 + 0x48));
        puVar5 = local_88;
      }
    }
  }
joined_r0x00caf4cc:
  if (puVar5 != (undefined8 *)0x0) {
    local_88 = (undefined8 *)0x0;
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*local_80 + 0x18))(local_80,puVar5,local_78,local_70);
    puVar14 = local_88;
    local_88 = (undefined8 *)0x0;
    if (puVar14 != (undefined8 *)0x0) {
      (**(code **)*puVar14)(puVar14);
      (**(code **)(*local_80 + 0x18))(local_80,puVar14,local_78,local_70);
    }
  }
  return;
}


