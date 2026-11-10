/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014234c0; name: FUN_014234c0
 */


void FUN_014234c0(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  long local_78;
  long local_70;
  
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar13 == (undefined8 *)0x0)) {
    puVar15 = (undefined8 *)0x0;
  }
  else {
    plVar8 = (long *)(**(code **)*puVar13)(puVar13);
    plVar9 = (long *)FUN_01410b60();
    puVar15 = (undefined8 *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        if (plVar8 == plVar9) {
          puVar15 = puVar13 + -10;
          goto LAB_0142352c;
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      puVar15 = (undefined8 *)0x0;
    }
  }
LAB_0142352c:
  lVar16 = *(long *)(*(long *)PTR_DAT_02710848 + 0x90);
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x10))();
  }
  lVar14 = *(long *)(*(long *)PTR_DAT_02710798 + 0x1b8);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  if (lVar16 != 0) {
    (**(code **)(*(long *)(lVar16 + 0x48) + 0x18))((long *)(lVar16 + 0x48));
  }
  FUN_0140e5c0(puVar15,*(undefined4 *)(param_2 + 0x80),*(undefined4 *)(param_2 + 0xac));
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_2 + 0x144);
  uVar10 = FUN_012c8f90(0x13);
  FUN_016a5c40(&local_90,*(undefined8 *)(param_1 + 8));
  if (*(long *)(param_1 + 0x90) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x90) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  *(long *)(param_1 + 0x90) = local_90;
  FUN_016a5c70(&local_90,*(undefined8 *)(param_1 + 8));
  plVar8 = *(long **)(param_1 + 0x98);
  if (plVar8 != (long *)0x0) {
    lVar16 = plVar8[0xb];
    piVar1 = (int *)(lVar16 + 0x54);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x60) = 0;
      (**(code **)(*plVar8 + 0x18))();
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  plVar8 = *(long **)(param_1 + 8);
  *(long *)(param_1 + 0x98) = local_90;
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar16 + 0x80)) {
LAB_01423f30:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar8;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_016a5dd0(lVar11,plVar8);
  *(long **)(lVar11 + 8) = plVar8;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar11 + 0x20) = 0x10;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb0) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  *(long *)(param_1 + 0xb0) = lVar11;
  FUN_014bb440(&local_90,(long)*(int *)(param_2 + 0xac) * 0x18 + 0x269f3a0);
  FUN_016a60e0(lVar11,&local_90,uVar10);
  if ((local_78 != 0) && (local_90 != 0)) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  local_90 = 0;
  uStack_88 = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_016a61c0(*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x90));
  plVar8 = *(long **)(param_1 + 8);
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01423f30;
  *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar8;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
  lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
  if (lVar11 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN_016a5dd0(lVar11,plVar8);
  *(long **)(lVar11 + 8) = plVar8;
  *(long *)(lVar11 + 0x10) = lVar11;
  *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
  *(undefined8 *)(lVar11 + 0x20) = 0x10;
  *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0xb8) + 0x48) + 0x18))();
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  *(long *)(param_1 + 0xb8) = lVar11;
  FUN_014bb440(&local_90,(long)*(int *)(param_2 + 0xac) * 0x18 + 0x269f3a0);
  FUN_016a60e0(lVar11,&local_90,uVar10);
  if ((local_78 != 0) && (local_90 != 0)) {
    (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
  }
  local_90 = 0;
  uStack_88 = 0xcbf29ce484222645;
  local_80 = &DAT_01d38550;
  local_78 = 0;
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  FUN_016a61c0(*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x90));
  if (*(int *)(param_2 + 0x144) != 1) {
    plVar8 = *(long **)(param_1 + 8);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01423f30;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_016a5dd0(lVar11,plVar8);
    *(long **)(lVar11 + 8) = plVar8;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar11 + 0x20) = 0x10;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa0) = 0;
    }
    *(long *)(param_1 + 0xa0) = lVar11;
    FUN_014bb440(&local_90,(ulong)*(uint *)(param_2 + 0x144) * 0x18 + 0x269f430);
    FUN_016a60e0(lVar11,&local_90,uVar10);
    if ((local_78 != 0) && (local_90 != 0)) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    }
    local_90 = 0;
    uStack_88 = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_016a61c0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x90));
    plVar8 = *(long **)(param_1 + 8);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01423f30;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_016a5dd0(lVar11,plVar8);
    *(long **)(lVar11 + 8) = plVar8;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar11 + 0x20) = 0x10;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xa8) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xa8) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    *(long *)(param_1 + 0xa8) = lVar11;
    FUN_014bb440(&local_90,(ulong)*(uint *)(param_2 + 0x144) * 0x18 + 0x269f430);
    FUN_016a60e0(lVar11,&local_90,uVar10);
    if ((local_78 != 0) && (local_90 != 0)) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    }
    local_90 = 0;
    uStack_88 = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_016a61c0(*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x90));
  }
  uVar12 = FUN_01510f00(lVar14,0x67f239d261a2c946);
  if ((uVar12 & 1) != 0) {
    plVar8 = *(long **)(param_1 + 8);
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
    if (0xf < *(ulong *)(lVar16 + 0x80)) goto LAB_01423f30;
    *(long **)(lVar16 + *(ulong *)(lVar16 + 0x80) * 8) = plVar8;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + 1;
    lVar11 = (**(code **)(*plVar8 + 0x10))(plVar8,0x1b0,0x10);
    if (lVar11 == 0) {
      (**(code **)(*plVar8 + 0xb8))(plVar8);
    }
    FUN_016a5dd0(lVar11,plVar8);
    *(long **)(lVar11 + 8) = plVar8;
    *(long *)(lVar11 + 0x10) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 0x1b0;
    *(undefined8 *)(lVar11 + 0x20) = 0x10;
    *(long *)(lVar16 + 0x80) = *(long *)(lVar16 + 0x80) + -1;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
    }
    if (*(long *)(param_1 + 0xc0) != 0) {
      (**(code **)(*(long *)(*(long *)(param_1 + 0xc0) + 0x48) + 0x18))();
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    *(long *)(param_1 + 0xc0) = lVar11;
    FUN_014bb440(&local_90,&DAT_0269f4a8);
    FUN_016a60e0(lVar11,&local_90,uVar10);
    if ((local_78 != 0) && (local_90 != 0)) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
    }
    local_90 = 0;
    uStack_88 = 0xcbf29ce484222645;
    local_80 = &DAT_01d38550;
    local_78 = 0;
    if (local_70 != 0) {
      (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
      local_70 = 0;
    }
    FUN_016a61c0(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)(param_1 + 0x90));
  }
  FUN_0070cf00(*(undefined8 *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90));
  uVar17 = *(undefined8 *)(param_1 + 0x88);
  uVar10 = FUN_0140e750(puVar15);
  FUN_0141a2d0(uVar17,uVar10);
  FUN_0141a260(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_2 + 0x144));
  switch(*(undefined4 *)(param_2 + 0x144)) {
  case 0:
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = 0;
    goto LAB_01423ce4;
  case 1:
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = 1;
LAB_01423ce4:
    FUN_0141a390(uVar10,uVar17);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = 0;
    break;
  case 2:
    FUN_0141a390(*(undefined8 *)(param_1 + 0x88),2);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = 1;
    break;
  case 3:
  case 4:
    FUN_0141a390(*(undefined8 *)(param_1 + 0x88),3);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar17 = 2;
    break;
  default:
    goto switchD_01423c9c_default;
  }
  FUN_0141a4c0(uVar10,uVar17);
switchD_01423c9c_default:
  iVar4 = FUN_0132aa10(param_2);
  if (iVar4 < 10) {
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = FUN_0132aa40(param_2);
    FUN_0141a5f0(uVar10,0,uVar5 & 1);
    iVar4 = *(int *)(param_2 + 0x80);
    iVar6 = *(int *)(param_2 + 0xac);
  }
  else {
    iVar4 = FUN_0132aa10(param_2);
    uVar10 = *(undefined8 *)(param_1 + 0x88);
    uVar5 = FUN_0132aa40(param_2);
    if (iVar4 < 0x14) {
      uVar17 = 1;
    }
    else {
      uVar17 = 2;
    }
    FUN_0141a5f0(uVar10,uVar17,uVar5 & 1);
    iVar4 = *(int *)(param_2 + 0x80);
    iVar6 = *(int *)(param_2 + 0xac);
  }
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00888c50(iVar4,0x15);
    iVar4 = iVar4 * 6 + 6;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  lVar16 = *(long *)(*(long *)PTR_DAT_02710798 + 0x278);
  if (lVar16 == 0) {
    uVar5 = FUN_0152a8f0(0,iVar4 + iVar6);
    FUN_0141ae90(uVar10,~uVar5 & 1);
  }
  else {
    plVar8 = (long *)(lVar16 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    uVar5 = FUN_0152a8f0(lVar16,iVar4 + iVar6);
    FUN_0141ae90(uVar10,~uVar5 & 1);
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  iVar6 = FUN_0132a1f0(param_2);
  iVar4 = *(int *)(param_2 + 0x2a0);
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  uVar7 = FUN_0132aac0(param_2);
  FUN_0141ab60(uVar10,iVar4 + iVar6,uVar7);
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5cc) = *(undefined4 *)(param_2 + 0x148);
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5d0) = *(undefined4 *)(param_2 + 0x80);
  *(bool *)(*(long *)(param_1 + 0x80) + 0x5d4) = *(long *)(param_1 + 0xc0) != 0;
  FUN_0140e760(&local_90,puVar15);
  lVar16 = local_90;
  if (local_90 != 0) {
    lVar18 = *(long *)(param_1 + 0x80);
    plVar8 = (long *)(local_90 + 0x48);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    (**(code **)(*plVar8 + 0x10))(plVar8);
    lVar11 = *(long *)(lVar18 + 0x5d8);
    *(long *)(lVar18 + 0x5d8) = lVar16;
    if (lVar11 != 0) {
      (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))();
    }
    (**(code **)(*plVar8 + 0x18))(plVar8);
    if (local_90 != 0) {
      (**(code **)(*(long *)(local_90 + 0x48) + 0x18))();
      local_90 = 0;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x80) + 0x5e0) = *(undefined4 *)(param_1 + 0xd0);
  FUN_01425590(*(undefined8 *)(param_1 + 0x80));
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  return;
}


