/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0b070; name: FUN_00d0b070
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00d0b070(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  long local_60;
  long local_58;
  
  if ((param_2 & 0xff) != 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x198),param_2 >> 0x20);
  }
  puVar1 = (undefined8 *)(param_1 + 0x198);
  FUN_00ffa290(*puVar1,1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x198),0);
  puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar8 = (long *)(**(code **)*puVar13)(puVar13);
  lVar9 = FUN_00cf3e00();
  for (; plVar8 != (long *)lVar9; plVar8 = (long *)*plVar8) {
  }
  local_58 = puVar13[0xe];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  lVar9 = FUN_00cf2f70(&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar9 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) && (iVar6 = FUN_0077d480(), iVar6 != 0)) {
    FUN_00cf8570(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1a8));
    plVar8 = *(long **)(param_1 + 0x1a8);
    if (plVar8 != (long *)0x0) {
      plVar14 = (long *)((long)plVar8 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      plVar15 = *(long **)(lVar9 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d0b750;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0xb8))(plVar15);
      }
      FUN_0077d050(lVar11,0x25);
      *(long **)(lVar11 + 8) = plVar15;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x80;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(char *)(lVar9 + 0x70) == '\0') {
        *(long *)(lVar9 + 0x78) = lVar11;
        *(undefined1 *)(lVar9 + 0x70) = 1;
      }
      else {
        if (*(long *)(lVar9 + 0x78) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x78) + 0x48) + 0x18))();
          *(undefined8 *)(lVar9 + 0x78) = 0;
        }
        *(long *)(lVar9 + 0x78) = lVar11;
      }
      FUN_0077d2f0(lVar11,plVar8);
      (**(code **)(*(long *)((long)plVar8 + 0x48) + 0x18))(plVar14);
    }
  }
  if ((*(long *)(param_1 + 0x1b0) != 0) && (iVar6 = FUN_0077d480(), iVar6 != 0)) {
    FUN_00cf88e0(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1b0));
    plVar8 = *(long **)(param_1 + 0x1b0);
    if (plVar8 != (long *)0x0) {
      plVar14 = (long *)((long)plVar8 + 0x48);
      (**(code **)(*plVar14 + 0x10))(plVar14);
      plVar15 = *(long **)(lVar9 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_00d0b750;
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar15;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,0x80,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar15 + 0xb8))(plVar15);
      }
      FUN_0077d050(lVar11,0x25);
      *(long **)(lVar11 + 8) = plVar15;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x80;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
      }
      if (*(char *)(lVar9 + 0x80) == '\0') {
        *(long *)(lVar9 + 0x88) = lVar11;
        *(undefined1 *)(lVar9 + 0x80) = 1;
      }
      else {
        if (*(long *)(lVar9 + 0x88) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar9 + 0x88) + 0x48) + 0x18))();
          *(undefined8 *)(lVar9 + 0x88) = 0;
        }
        *(long *)(lVar9 + 0x88) = lVar11;
      }
      FUN_0077d2f0(lVar11,plVar8);
      (**(code **)(*(long *)((long)plVar8 + 0x48) + 0x18))(plVar14);
    }
  }
  if (*(char *)(lVar9 + 0x90) == '\0') {
    bVar3 = false;
switchD_00d0b3e0_caseD_0:
    cVar5 = *(char *)(lVar9 + 0xc4);
    goto joined_r0x00d0b56c;
  }
  plVar8 = *(long **)(lVar9 + 0x98);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*(long *)((long)plVar8 + 0x48) + 0x10))();
  }
  bVar4 = FUN_009fe1a0(plVar8,10);
  bVar3 = true;
  switch(bVar4) {
  case 0:
    goto switchD_00d0b3e0_caseD_0;
  case 1:
    FUN_00cf8c50(*puVar1,0,0);
    bVar3 = true;
    cVar5 = *(char *)(lVar9 + 0xc4);
    break;
  case 2:
    bVar3 = true;
    FUN_00cf8c50(*puVar1,0,1);
    cVar5 = *(char *)(lVar9 + 0xc4);
    break;
  case 3:
    FUN_00cf8c50(*puVar1,0,2);
    cVar5 = *(char *)(lVar9 + 0xc4);
    goto joined_r0x00d0b54c;
  case 4:
    FUN_00cf8c50(*puVar1,1,0);
    cVar5 = *(char *)(lVar9 + 0xc4);
joined_r0x00d0b54c:
    bVar3 = true;
    break;
  case 5:
    FUN_00cf8c50(*puVar1,1,1);
    cVar5 = *(char *)(lVar9 + 0xc4);
    goto joined_r0x00d0b748;
  case 6:
    FUN_00cf8c50(*puVar1,1,2);
    cVar5 = *(char *)(lVar9 + 0xc4);
    goto joined_r0x00d0b748;
  default:
    if (9 < bVar4) {
      cVar5 = FUN_009ff0e0(plVar8);
      plVar14 = *(long **)(param_1 + 8);
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar10 + 0x80)) {
LAB_00d0b750:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar14;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
      lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14,0x80,8);
      if (lVar11 == 0) {
        (**(code **)(*plVar14 + 0xb8))(plVar14);
      }
      FUN_0077d050(lVar11,0x25);
      *(long **)(lVar11 + 8) = plVar14;
      *(long *)(lVar11 + 0x10) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 0x80;
      *(undefined8 *)(lVar11 + 0x20) = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      local_60 = lVar11;
      if (lVar11 == 0) {
        uVar7 = FUN_008d3750();
      }
      else {
        plVar14 = (long *)(lVar11 + 0x48);
        (**(code **)(*plVar14 + 0x10))(plVar14);
        uVar7 = FUN_008d3750();
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
      FUN_009fee40(plVar8,0,uVar7,&local_60);
      if (local_60 != 0) {
        (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
        local_60 = 0;
      }
      if (cVar5 == '\x01') {
        uVar7 = 1;
        FUN_00cf9210(*puVar1,1,lVar11);
LAB_00d0b720:
        *(undefined4 *)(lVar9 + 0xd8) = uVar7;
        *(undefined1 *)(lVar9 + 0xd4) = 1;
      }
      else if (cVar5 == '\0') {
        FUN_00cf9210(*puVar1,0,lVar11);
        uVar7 = 0;
        goto LAB_00d0b720;
      }
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
    }
    cVar5 = *(char *)(lVar9 + 0xc4);
joined_r0x00d0b748:
    bVar3 = true;
  }
joined_r0x00d0b56c:
  if (cVar5 != '\0') {
    uVar12 = *(ulong *)(lVar9 + 200);
    if (*(int *)(lVar9 + 0xcc) != 0 || (int)uVar12 != 0) {
      iVar6 = 1;
      if (*(int *)(lVar9 + 0xcc) != 0) {
        iVar6 = 2;
      }
      iVar2 = 0;
      if ((int)uVar12 != 0) {
        iVar2 = iVar6;
      }
      if (iVar2 == 0) {
        FUN_00cf9bd0(*puVar1,uVar12 >> 0x20,1);
        uVar12 = *(ulong *)(lVar9 + 0xdc);
        goto joined_r0x00d0b52c;
      }
      if (iVar2 == 2) {
        FUN_00cfa060(*puVar1,uVar12,uVar12 >> 0x20);
        uVar12 = *(ulong *)(lVar9 + 0xdc);
        goto joined_r0x00d0b52c;
      }
      if (iVar2 == 1) {
        FUN_00cf9bd0(*puVar1,uVar12,0);
        uVar12 = *(ulong *)(lVar9 + 0xdc);
        goto joined_r0x00d0b52c;
      }
    }
  }
  uVar12 = *(ulong *)(lVar9 + 0xdc);
joined_r0x00d0b52c:
  if ((uVar12 & 0xff) != 0) {
    FUN_00cfa7e0(*puVar1,uVar12 >> 0x20);
  }
  if ((((*(char *)(lVar9 + 0x70) == '\0') || (*(char *)(lVar9 + 0x90) == '\0')) ||
      (*(char *)(lVar9 + 0xa0) == '\0')) || (*(char *)(lVar9 + 0xc4) == '\0')) {
    FUN_00cf73a0(*puVar1,0);
  }
  else {
    FUN_00cf73a0(*puVar1,*(char *)(lVar9 + 0xdc) != '\0');
  }
  if ((plVar8 != (long *)0x0) && (bVar3)) {
    (**(code **)(*(long *)((long)plVar8 + 0x48) + 0x18))((long *)((long)plVar8 + 0x48));
  }
  return;
}


