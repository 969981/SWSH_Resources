/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01485d80; name: FUN_01485d80
 */


undefined8 FUN_01485d80(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long local_70;
  long local_68;
  
  puVar3 = PTR_DAT_02710848;
  piVar9 = *(int **)(param_1 + 0x5e8);
  if (*piVar9 == 6) {
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar13 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    puVar3 = PTR_DAT_02710798;
    lVar10 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar10 == 0) {
      FUN_0150a590(0,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),
                   *(undefined4 *)(*(long *)(param_1 + 0x5e8) + 4));
      lVar10 = *(long *)puVar3;
      lVar11 = *(long *)(lVar10 + 0x220);
    }
    else {
      plVar13 = (long *)(lVar10 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      FUN_0150a590(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),
                   *(undefined4 *)(*(long *)(param_1 + 0x5e8) + 4));
      (**(code **)(*plVar13 + 0x18))(plVar13);
      lVar10 = *(long *)puVar3;
      lVar11 = *(long *)(lVar10 + 0x220);
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      lVar10 = *(long *)puVar3;
    }
    lVar10 = *(long *)(lVar10 + 0x228);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    uVar5 = FUN_0150a980(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8));
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    if (uVar5 < 2) {
      uVar12 = 0;
      bVar1 = true;
    }
    else {
      iVar7 = *(int *)(*(long *)(param_1 + 0x5e8) + 4);
      plVar13 = *(long **)(param_1 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_01486468:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar13;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,0xb8,8);
      if (lVar8 == 0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      FUN_00866110(lVar8,plVar13);
      *(long **)(lVar8 + 8) = plVar13;
      *(long *)(lVar8 + 0x10) = lVar8;
      *(undefined8 *)(lVar8 + 0x18) = 0xb8;
      *(undefined8 *)(lVar8 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
      }
      lVar10 = *(long *)(param_1 + 0x5e8);
      iVar7 = iVar7 + -1;
      if (iVar7 != *(int *)(lVar10 + 4)) {
        do {
          iVar6 = 5;
          if (-1 < iVar7) {
            iVar6 = iVar7;
          }
          lVar14 = *(long *)(*(long *)puVar3 + 0x228);
          if (lVar14 == 0) {
            uVar4 = FUN_0150a590(0,*(undefined4 *)(lVar10 + 8),iVar6);
            lVar10 = *(long *)(*(long *)puVar3 + 0x228);
          }
          else {
            plVar13 = (long *)(lVar14 + 0x48);
            (**(code **)(*plVar13 + 0x10))(plVar13);
            uVar4 = FUN_0150a590(lVar14,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),iVar6);
            (**(code **)(*plVar13 + 0x18))(plVar13);
            lVar10 = *(long *)(*(long *)puVar3 + 0x228);
          }
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
          }
          uVar5 = FUN_0150a5c0(lVar10,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),iVar6);
          if (lVar10 != 0) {
            (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
          }
          if (uVar5 < 0x1e) {
            local_70 = lVar8;
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))((long *)(lVar8 + 0x48));
            }
            FUN_01505e60(lVar11,&local_70,uVar4,uVar5);
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            iVar7 = FUN_008783b0(lVar8);
            if (iVar7 != 0) {
              *(int *)(*(long *)(param_1 + 0x5e8) + 4) = iVar6;
              bVar1 = true;
              goto joined_r0x01486460;
            }
          }
          lVar10 = *(long *)(param_1 + 0x5e8);
          iVar7 = iVar6 + -1;
        } while (iVar7 != *(int *)(lVar10 + 4));
      }
      bVar1 = false;
joined_r0x01486460:
      if (lVar8 != 0) {
        (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
      }
      uVar12 = 1;
    }
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
    }
    if (bVar1) {
      return uVar12;
    }
    piVar9 = *(int **)(param_1 + 0x5e8);
LAB_014860c4:
    iVar7 = piVar9[1];
    plVar13 = *(long **)(piVar9 + 8);
    if (plVar13 != (long *)0x0) {
      (**(code **)(plVar13[9] + 0x10))();
    }
    uVar5 = FUN_00884820(plVar13);
    if (1 < uVar5) {
      do {
        iVar6 = iVar7 + -1;
        if (iVar6 == *(int *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486140;
        bVar1 = 0 < iVar7;
        iVar7 = 5;
        if (bVar1) {
          iVar7 = iVar6;
        }
        (**(code **)(*plVar13 + 0x50))(plVar13,iVar7);
        iVar6 = FUN_008783b0();
      } while (iVar6 == 0);
      *(int *)(*(long *)(param_1 + 0x5e8) + 4) = iVar7;
      uVar12 = 1;
      goto joined_r0x01486138;
    }
  }
  else {
    if (*piVar9 != 2) goto LAB_014860c4;
    lVar10 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    puVar2 = PTR_DAT_02710798;
    lVar11 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar11 == 0) {
      uVar4 = FUN_0150b350(0);
    }
    else {
      plVar13 = (long *)(lVar11 + 0x48);
      (**(code **)(*plVar13 + 0x10))(plVar13);
      uVar4 = FUN_0150b350(lVar11);
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    lVar10 = *(long *)(*(long *)puVar3 + 0x90);
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x10))();
    }
    plVar13 = *(long **)(*(long *)puVar2 + 0x220);
    if (plVar13 != (long *)0x0) {
      (**(code **)(plVar13[9] + 0x10))();
    }
    if (lVar10 != 0) {
      (**(code **)(*(long *)(lVar10 + 0x48) + 0x18))((long *)(lVar10 + 0x48));
    }
    uVar5 = FUN_01507760(plVar13,uVar4,*(undefined8 *)(param_1 + 8),1);
    if (1 < uVar5) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x5e8) + 4);
      plVar15 = *(long **)(param_1 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_01486468;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,0xb8,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0xb8))(plVar15);
      }
      FUN_00866110(lVar11,plVar15);
      *(long **)(lVar11 + 8) = plVar15;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0xb8;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      plVar15 = (long *)(lVar11 + 0x48);
      if (lVar11 == 0) {
        do {
          iVar6 = iVar7 + -1;
          if (iVar6 == *(int *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486434;
          iVar7 = 0x1d;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          local_68 = 0;
          FUN_01505e60(plVar13,&local_68,uVar4,iVar7);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          iVar6 = FUN_008783b0(0);
        } while (iVar6 == 0);
      }
      else {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar15);
        do {
          iVar6 = iVar7 + -1;
          if (iVar6 == *(int *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486434;
          iVar7 = 0x1d;
          if (-1 < iVar6) {
            iVar7 = iVar6;
          }
          local_68 = lVar11;
          (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))(plVar15);
          FUN_01505e60(plVar13,&local_68,uVar4,iVar7);
          if (local_68 != 0) {
            (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
            local_68 = 0;
          }
          iVar6 = FUN_008783b0(lVar11);
        } while (iVar6 == 0);
      }
      uVar12 = 1;
      *(int *)(*(long *)(param_1 + 0x5e8) + 4) = iVar7;
      goto joined_r0x01486438;
    }
  }
LAB_01486140:
  uVar12 = 0;
joined_r0x01486138:
  if (plVar13 != (long *)0x0) {
    (**(code **)(plVar13[9] + 0x18))(plVar13 + 9);
  }
  return uVar12;
LAB_01486434:
  uVar12 = 0;
joined_r0x01486438:
  if (lVar11 != 0) {
    (**(code **)(*plVar15 + 0x18))(plVar15);
  }
  goto joined_r0x01486138;
}


