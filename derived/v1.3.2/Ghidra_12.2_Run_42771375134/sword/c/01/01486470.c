/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01486470; name: FUN_01486470
 */


undefined8 FUN_01486470(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  long local_68;
  long local_58;
  
  puVar4 = PTR_DAT_02710848;
  piVar9 = *(int **)(param_1 + 0x5e8);
  if (*piVar9 == 6) {
    if (*(long *)(*(long *)PTR_DAT_02710848 + 0x90) != 0) {
      plVar14 = (long *)(*(long *)(*(long *)PTR_DAT_02710848 + 0x90) + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    puVar4 = PTR_DAT_02710798;
    lVar12 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar12 == 0) {
      FUN_0150a590(0,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),
                   *(undefined4 *)(*(long *)(param_1 + 0x5e8) + 4));
      lVar12 = *(long *)puVar4;
      plVar14 = *(long **)(lVar12 + 0x220);
    }
    else {
      plVar14 = (long *)(lVar12 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      FUN_0150a590(lVar12,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),
                   *(undefined4 *)(*(long *)(param_1 + 0x5e8) + 4));
      (**(code **)(*plVar14 + 0x18))(plVar14);
      lVar12 = *(long *)puVar4;
      plVar14 = *(long **)(lVar12 + 0x220);
    }
    if (plVar14 != (long *)0x0) {
      (**(code **)(plVar14[9] + 0x10))();
      lVar12 = *(long *)puVar4;
    }
    lVar12 = *(long *)(lVar12 + 0x228);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    uVar6 = FUN_0150a980(lVar12,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8));
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    if (1 < uVar6) {
      iVar7 = *(int *)(*(long *)(param_1 + 0x5e8) + 4);
      plVar16 = *(long **)(param_1 + 8);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_01486b18:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar13 = (**(code **)(*plVar16 + 0x10))(plVar16,0xb8,8);
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0xb8))(plVar16);
      }
      FUN_00866110(lVar13,plVar16);
      *(long **)(lVar13 + 8) = plVar16;
      *(long *)(lVar13 + 0x10) = lVar13;
      *(undefined8 *)(lVar13 + 0x18) = 0xb8;
      *(undefined8 *)(lVar13 + 0x20) = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      if (lVar13 != 0) {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))();
      }
      lVar12 = *(long *)(param_1 + 0x5e8);
      uVar6 = iVar7 + 1;
      if (uVar6 != *(uint *)(lVar12 + 4)) {
        do {
          uVar2 = 0;
          if (uVar6 < 6) {
            uVar2 = uVar6;
          }
          lVar15 = *(long *)(*(long *)puVar4 + 0x228);
          if (lVar15 == 0) {
            uVar5 = FUN_0150a590(0,*(undefined4 *)(lVar12 + 8),uVar2);
            lVar12 = *(long *)(*(long *)puVar4 + 0x228);
          }
          else {
            plVar16 = (long *)(lVar15 + 0x48);
            (**(code **)(*plVar16 + 0x10))(plVar16);
            uVar5 = FUN_0150a590(lVar15,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),uVar2);
            (**(code **)(*plVar16 + 0x18))(plVar16);
            lVar12 = *(long *)(*(long *)puVar4 + 0x228);
          }
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
          }
          uVar6 = FUN_0150a5c0(lVar12,*(undefined4 *)(*(long *)(param_1 + 0x5e8) + 8),uVar2);
          if (lVar12 != 0) {
            (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
          }
          if (uVar6 < 0x1e) {
            local_68 = lVar13;
            if (lVar13 != 0) {
              (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))((long *)(lVar13 + 0x48));
            }
            FUN_01505e60(plVar14,&local_68,uVar5,uVar6);
            if (local_68 != 0) {
              (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
              local_68 = 0;
            }
            iVar7 = FUN_008783b0(lVar13);
            if (iVar7 != 0) {
              *(uint *)(*(long *)(param_1 + 0x5e8) + 4) = uVar2;
              uVar11 = 1;
              if (lVar13 != 0) goto LAB_014869ec;
              goto joined_r0x01486a6c;
            }
          }
          lVar12 = *(long *)(param_1 + 0x5e8);
          uVar6 = uVar2 + 1;
        } while (uVar6 != *(uint *)(lVar12 + 4));
      }
      uVar11 = 0;
      if (lVar13 == 0) goto joined_r0x01486a6c;
LAB_014869ec:
      plVar16 = (long *)(lVar13 + 0x48);
      pcVar10 = *(code **)(*plVar16 + 0x18);
      goto LAB_01486af8;
    }
  }
  else if (*piVar9 == 2) {
    lVar12 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    puVar3 = PTR_DAT_02710798;
    lVar13 = *(long *)(*(long *)PTR_DAT_02710798 + 0x228);
    if (lVar13 == 0) {
      uVar5 = FUN_0150b350(0);
    }
    else {
      plVar14 = (long *)(lVar13 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      uVar5 = FUN_0150b350(lVar13);
      (**(code **)(*plVar14 + 0x18))(plVar14);
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    lVar12 = *(long *)(*(long *)puVar4 + 0x90);
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
    }
    plVar14 = *(long **)(*(long *)puVar3 + 0x220);
    if (plVar14 != (long *)0x0) {
      (**(code **)(plVar14[9] + 0x10))();
    }
    if (lVar12 != 0) {
      (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
    }
    uVar6 = FUN_01507760(plVar14,uVar5,*(undefined8 *)(param_1 + 8),1);
    if (1 < uVar6) {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x5e8) + 4);
      plVar16 = *(long **)(param_1 + 8);
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar12 + 0x80)) goto LAB_01486b18;
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar16;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      lVar13 = (**(code **)(*plVar16 + 0x10))(plVar16,0xb8,8);
      if (lVar13 == 0) {
        (**(code **)(*plVar16 + 0xb8))(plVar16);
      }
      FUN_00866110(lVar13,plVar16);
      *(long **)(lVar13 + 8) = plVar16;
      *(long *)(lVar13 + 0x10) = lVar13;
      *(undefined8 *)(lVar13 + 0x18) = 0xb8;
      *(undefined8 *)(lVar13 + 0x20) = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      plVar16 = (long *)(lVar13 + 0x48);
      if (lVar13 == 0) {
        do {
          uVar2 = uVar6 + 1;
          if (uVar2 == *(uint *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486ae4;
          uVar6 = 0;
          if (uVar2 < 0x1e) {
            uVar6 = uVar2;
          }
          local_58 = 0;
          FUN_01505e60(plVar14,&local_58,uVar5,uVar6);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          iVar7 = FUN_008783b0(0);
        } while (iVar7 == 0);
      }
      else {
        (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(plVar16);
        do {
          uVar2 = uVar6 + 1;
          if (uVar2 == *(uint *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486ae4;
          uVar6 = 0;
          if (uVar2 < 0x1e) {
            uVar6 = uVar2;
          }
          local_58 = lVar13;
          (**(code **)(*(long *)(lVar13 + 0x48) + 0x10))(plVar16);
          FUN_01505e60(plVar14,&local_58,uVar5,uVar6);
          if (local_58 != 0) {
            (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
            local_58 = 0;
          }
          iVar7 = FUN_008783b0(lVar13);
        } while (iVar7 == 0);
      }
      uVar11 = 1;
      *(uint *)(*(long *)(param_1 + 0x5e8) + 4) = uVar6;
      goto joined_r0x01486ae8;
    }
  }
  else {
    iVar7 = piVar9[1];
    plVar14 = *(long **)(piVar9 + 8);
    if (plVar14 != (long *)0x0) {
      (**(code **)(plVar14[9] + 0x10))();
    }
    uVar6 = FUN_00884820(plVar14);
    if (1 < uVar6) {
      do {
        iVar8 = iVar7 + 1;
        if (iVar8 == *(int *)(*(long *)(param_1 + 0x5e8) + 4)) goto LAB_01486a74;
        bVar1 = iVar7 < 5;
        iVar7 = 0;
        if (bVar1) {
          iVar7 = iVar8;
        }
        (**(code **)(*plVar14 + 0x50))(plVar14,iVar7);
        iVar8 = FUN_008783b0();
      } while (iVar8 == 0);
      uVar11 = 1;
      *(int *)(*(long *)(param_1 + 0x5e8) + 4) = iVar7;
      goto joined_r0x01486a6c;
    }
  }
LAB_01486a74:
  uVar11 = 0;
  goto joined_r0x01486a6c;
LAB_01486ae4:
  uVar11 = 0;
joined_r0x01486ae8:
  if (lVar13 == 0) goto joined_r0x01486a6c;
  pcVar10 = *(code **)(*plVar16 + 0x18);
LAB_01486af8:
  (*pcVar10)(plVar16);
joined_r0x01486a6c:
  if (plVar14 != (long *)0x0) {
    (**(code **)(plVar14[9] + 0x18))(plVar14 + 9);
  }
  return uVar11;
}


