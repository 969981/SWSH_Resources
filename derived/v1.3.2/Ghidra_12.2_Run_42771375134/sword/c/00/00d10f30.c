/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d10f30; name: FUN_00d10f30
 */


void FUN_00d10f30(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  long lVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  undefined8 *puVar18;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  uVar7 = FUN_00d11400(param_1,param_3);
  puVar5 = PTR_DAT_02715078;
  if ((uVar7 & 1) != 0) {
    lVar10 = param_1[0x57];
    piVar16 = (int *)(param_3 + 2);
    iVar12 = *piVar16;
    uVar7 = (ulong)iVar12;
    uVar13 = *(ulong *)(lVar10 + 0xa8);
    if (uVar13 != 0) {
      uVar15 = uVar13 - 1;
      if ((uVar15 & uVar13) == 0) {
        uVar11 = uVar15 & uVar7;
        plVar14 = *(long **)(*(long *)(lVar10 + 0xa0) + uVar11 * 8);
      }
      else {
        uVar11 = uVar7;
        if (uVar13 <= uVar7) {
          uVar11 = 0;
          if (uVar13 != 0) {
            uVar11 = uVar7 / uVar13;
          }
          uVar11 = uVar7 - uVar11 * uVar13;
        }
        plVar14 = *(long **)(*(long *)(lVar10 + 0xa0) + uVar11 * 8);
      }
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if ((uVar15 & uVar13) == 0) {
          do {
            uVar13 = plVar14[1];
            if (uVar13 != uVar7 && (uVar13 & uVar15) != uVar11) break;
            if ((uVar13 == uVar7) && ((int)plVar14[2] == iVar12)) goto LAB_00d11294;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar14[1];
            if (uVar15 == uVar7) {
              if ((int)plVar14[2] == iVar12) goto LAB_00d11294;
            }
            else {
              if (uVar13 <= uVar15) {
                uVar4 = 0;
                if (uVar13 != 0) {
                  uVar4 = uVar15 / uVar13;
                }
                uVar15 = uVar15 - uVar4 * uVar13;
              }
              if (uVar15 != uVar11) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
    if ((iVar12 < 0x14) && ((char)param_1[0x66] != '\0')) {
      lVar10 = *(long *)(lVar10 + uVar7 * 8 + 0x598);
      if (lVar10 == 0) {
        return;
      }
      if (*(int *)(lVar10 + 0x54) == 0) {
        return;
      }
      lVar10 = *(long *)(param_1[0x57] + (long)*piVar16 * 8 + 0x598);
      if ((lVar10 == 0) || (*(int *)(lVar10 + 0x54) == 0)) {
        lVar17 = 0;
      }
      else {
        piVar1 = (int *)(lVar10 + 0x54);
        puVar8 = (undefined8 *)PTR_DAT_02715080;
        iVar12 = *(int *)(lVar10 + 0x54);
        do {
          puVar18 = *(undefined8 **)(lVar10 + 0x58);
          if ((*puVar5 & 1) == 0) {
            iVar6 = __cxa_guard_acquire(puVar5);
            puVar8 = (undefined8 *)PTR_DAT_02715080;
            if (iVar6 != 0) {
              uVar9 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar9;
              __cxa_guard_release(puVar5);
              puVar8 = (undefined8 *)PTR_DAT_02715080;
            }
          }
          lVar17 = 0;
          if (puVar18 == (undefined8 *)0x0) break;
          while (puVar18 != puVar8) {
            puVar18 = (undefined8 *)*puVar18;
            if (puVar18 == (undefined8 *)0x0) {
              lVar17 = 0;
              goto LAB_00d111e0;
            }
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar12) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar17 = 0;
              if (*(long *)(lVar10 + 0x60) != 0) {
                lVar17 = *(long *)(lVar10 + 0x60) + -0x50;
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          lVar17 = 0;
          iVar12 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00d111e0:
      plVar14 = (long *)FUN_00d11a00(param_1[0x57] + 0xa0,piVar16);
      if (*plVar14 != 0) {
        (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
        *plVar14 = 0;
      }
      *plVar14 = lVar17;
    }
    else {
      lVar10 = FUN_00ad95d0(&local_48,*(undefined8 *)(lVar10 + 0x90));
      if (lVar10 != 0) {
        (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
      }
      plVar14 = (long *)FUN_00d11a00(param_1[0x57] + 0xa0,piVar16);
      if (*plVar14 != 0) {
        (**(code **)(*(long *)(*plVar14 + 0x48) + 0x18))();
        *plVar14 = 0;
      }
      *plVar14 = lVar10;
      lVar10 = param_1[0x57];
      plVar14 = (long *)FUN_00d11a00(lVar10 + 0xa0,piVar16);
      local_50 = *plVar14;
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
      }
      FUN_00d67c90(lVar10,&local_50);
      if (local_50 != 0) {
        (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
        local_50 = 0;
      }
    }
    plVar14 = (long *)FUN_00d11a00(param_1[0x57] + 0xa0,piVar16);
    lVar17 = *plVar14;
    local_58 = CONCAT44(local_58._4_4_,0x19);
    lVar10 = FUN_00d16e80(&local_48,*(undefined8 *)(lVar17 + 8),&local_58);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    local_48 = lVar10;
    FUN_006d9640(lVar17,&local_48);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    plVar14 = (long *)FUN_00d11ca0(param_1[0x57] + 0xf8,piVar16);
    *plVar14 = lVar10;
    lVar10 = param_1[0x57];
LAB_00d11294:
    puVar8 = (undefined8 *)FUN_00d11a00(lVar10 + 0xa0,piVar16);
    uVar9 = FUN_00d17550(*puVar8,&local_48);
    (**(code **)(*param_1 + 0x10))(&local_58,param_1);
    lVar10 = local_58;
    local_58 = 0;
    FUN_00d11f40(&local_48,param_1,extraout_x1,param_3);
    if (lVar10 != 0) {
      plVar14 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      local_58 = 0;
    }
    local_60 = local_48;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00d142a0(param_1,uVar9,&local_60);
    if (local_60 != 0) {
      (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
      local_60 = 0;
    }
    local_88 = *param_3;
    local_80 = param_3[1];
    uStack_78 = param_3[2];
    local_70 = param_3[3];
    uStack_68 = param_3[4];
    local_90 = local_48;
    if (local_48 == 0) {
      FUN_00d14540(param_1,&local_88,&local_90);
    }
    else {
      plVar14 = (long *)(local_48 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_00d14540(param_1,&local_88,&local_90);
      (**(code **)(*plVar14 + 0x18))(plVar14);
      local_90 = 0;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    }
  }
  return;
}


