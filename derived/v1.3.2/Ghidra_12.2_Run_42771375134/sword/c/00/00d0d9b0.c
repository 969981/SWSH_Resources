/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00d0d9b0; name: FUN_00d0d9b0
 */


void FUN_00d0d9b0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ushort uVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 local_40c0;
  undefined8 local_40b8;
  LocationName aLStack_40b0 [40];
  long local_4088 [2048];
  PosixTime aPStack_88 [20];
  int iStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  if ((param_2 & 0xff) != 0) {
    FUN_010364c0(*(undefined8 *)(param_1 + 0x198),param_2 >> 0x20);
  }
  puVar1 = (undefined8 *)(param_1 + 0x198);
  FUN_00ffa290(*puVar1,1,1);
  FUN_00ffa3d0(*(undefined8 *)(param_1 + 0x198),0);
  puVar16 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
  plVar9 = (long *)(**(code **)*puVar16)(puVar16);
  lVar10 = FUN_00cf3e00();
  for (; plVar9 != (long *)lVar10; plVar9 = (long *)*plVar9) {
  }
  local_4088[0] = puVar16[0xe];
  if (local_4088[0] != 0) {
    (**(code **)(*(long *)(local_4088[0] + 0x48) + 0x10))();
  }
  lVar10 = FUN_00cf2f70(local_4088);
  if (local_4088[0] != 0) {
    (**(code **)(*(long *)(local_4088[0] + 0x48) + 0x18))();
    local_4088[0] = 0;
  }
  if (lVar10 == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x1a8) != 0) && (iVar7 = FUN_0077d480(), iVar7 != 0)) {
    FUN_00cf8570(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1a8));
    plVar9 = *(long **)(param_1 + 0x1a8);
    if (plVar9 != (long *)0x0) {
      plVar17 = (long *)((long)plVar9 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      plVar18 = *(long **)(lVar10 + 8);
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d0e140;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar18;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar12 = (**(code **)(*plVar18 + 0x10))(plVar18,0x80,8);
      if (lVar12 == 0) {
        (**(code **)(*plVar18 + 0xb8))(plVar18);
      }
      FUN_0077d050(lVar12,0x25);
      *(long **)(lVar12 + 8) = plVar18;
      *(long *)(lVar12 + 0x10) = lVar12;
      *(undefined8 *)(lVar12 + 0x18) = 0x80;
      *(undefined8 *)(lVar12 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (*(char *)(lVar10 + 0x70) == '\0') {
        *(long *)(lVar10 + 0x78) = lVar12;
        *(undefined1 *)(lVar10 + 0x70) = 1;
      }
      else {
        if (*(long *)(lVar10 + 0x78) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar10 + 0x78) + 0x48) + 0x18))();
          *(undefined8 *)(lVar10 + 0x78) = 0;
        }
        *(long *)(lVar10 + 0x78) = lVar12;
      }
      FUN_0077d2f0(lVar12,plVar9);
      (**(code **)(*(long *)((long)plVar9 + 0x48) + 0x18))(plVar17);
    }
  }
  if ((*(long *)(param_1 + 0x1b0) != 0) && (iVar7 = FUN_0077d480(), iVar7 != 0)) {
    FUN_00cf88e0(*(undefined8 *)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x1b0));
    plVar9 = *(long **)(param_1 + 0x1b0);
    if (plVar9 != (long *)0x0) {
      plVar17 = (long *)((long)plVar9 + 0x48);
      (**(code **)(*plVar17 + 0x10))(plVar17);
      plVar18 = *(long **)(lVar10 + 8);
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar11 + 0x80)) goto LAB_00d0e140;
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar18;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar12 = (**(code **)(*plVar18 + 0x10))(plVar18,0x80,8);
      if (lVar12 == 0) {
        (**(code **)(*plVar18 + 0xb8))(plVar18);
      }
      FUN_0077d050(lVar12,0x25);
      *(long **)(lVar12 + 8) = plVar18;
      *(long *)(lVar12 + 0x10) = lVar12;
      *(undefined8 *)(lVar12 + 0x18) = 0x80;
      *(undefined8 *)(lVar12 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
      }
      if (*(char *)(lVar10 + 0x80) == '\0') {
        *(long *)(lVar10 + 0x88) = lVar12;
        *(undefined1 *)(lVar10 + 0x80) = 1;
      }
      else {
        if (*(long *)(lVar10 + 0x88) != 0) {
          (**(code **)(*(long *)(*(long *)(lVar10 + 0x88) + 0x48) + 0x18))();
          *(undefined8 *)(lVar10 + 0x88) = 0;
        }
        *(long *)(lVar10 + 0x88) = lVar12;
      }
      FUN_0077d2f0(lVar12,plVar9);
      (**(code **)(*(long *)((long)plVar9 + 0x48) + 0x18))(plVar17);
    }
  }
  if (*(char *)(lVar10 + 0x90) == '\0') {
    bVar4 = false;
switchD_00d0dd28_caseD_0:
    cVar6 = *(char *)(lVar10 + 0xa8);
    goto joined_r0x00d0df58;
  }
  plVar9 = *(long **)(lVar10 + 0x98);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*(long *)((long)plVar9 + 0x48) + 0x10))();
  }
  bVar5 = FUN_009fe1a0(plVar9,10);
  bVar4 = true;
  switch(bVar5) {
  case 0:
    goto switchD_00d0dd28_caseD_0;
  case 1:
    uVar13 = *puVar1;
    uVar15 = 0;
    goto LAB_00d0e044;
  case 2:
    FUN_00cf8c50(*puVar1,0,1);
    *(undefined4 *)(lVar10 + 0xd8) = 0;
    bVar4 = true;
    *(undefined1 *)(lVar10 + 0xd4) = 1;
    cVar6 = *(char *)(lVar10 + 0xa8);
    goto joined_r0x00d0df58;
  case 3:
    uVar13 = *puVar1;
    uVar15 = 2;
LAB_00d0e044:
    FUN_00cf8c50(uVar13,0,uVar15);
    *(undefined4 *)(lVar10 + 0xd8) = 0;
    *(undefined1 *)(lVar10 + 0xd4) = 1;
    cVar6 = *(char *)(lVar10 + 0xa8);
    goto joined_r0x00d0e094;
  case 4:
    uVar13 = *puVar1;
    uVar15 = 0;
    break;
  case 5:
    uVar13 = *puVar1;
    uVar15 = 1;
    break;
  case 6:
    uVar13 = *puVar1;
    uVar15 = 2;
    break;
  default:
    if (9 < bVar5) {
      cVar6 = FUN_009ff0e0(plVar9);
      plVar17 = *(long **)(param_1 + 8);
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
      if (0xf < *(ulong *)(lVar11 + 0x80)) {
LAB_00d0e140:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = plVar17;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
      lVar12 = (**(code **)(*plVar17 + 0x10))(plVar17,0x80,8);
      if (lVar12 == 0) {
        (**(code **)(*plVar17 + 0xb8))(plVar17);
      }
      FUN_0077d050(lVar12,0x25);
      *(long **)(lVar12 + 8) = plVar17;
      *(long *)(lVar12 + 0x10) = lVar12;
      *(undefined8 *)(lVar12 + 0x18) = 0x80;
      *(undefined8 *)(lVar12 + 0x20) = 8;
      *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
      local_58 = lVar12;
      if (lVar12 == 0) {
        uVar8 = FUN_008d3750();
      }
      else {
        plVar17 = (long *)(lVar12 + 0x48);
        (**(code **)(*plVar17 + 0x10))(plVar17);
        uVar8 = FUN_008d3750();
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
      FUN_009fee40(plVar9,0,uVar8,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
        local_58 = 0;
      }
      if (cVar6 == '\x01') {
        uVar8 = 1;
        FUN_00cf9210(*puVar1,1,lVar12);
LAB_00d0e110:
        *(undefined4 *)(lVar10 + 0xd8) = uVar8;
        *(undefined1 *)(lVar10 + 0xd4) = 1;
      }
      else if (cVar6 == '\0') {
        FUN_00cf9210(*puVar1,0,lVar12);
        uVar8 = 0;
        goto LAB_00d0e110;
      }
      if (lVar12 != 0) {
        (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
      }
    }
    bVar4 = true;
    cVar6 = *(char *)(lVar10 + 0xa8);
    goto joined_r0x00d0df58;
  }
  FUN_00cf8c50(uVar13,1,uVar15);
  *(undefined4 *)(lVar10 + 0xd8) = 1;
  *(undefined1 *)(lVar10 + 0xd4) = 1;
  cVar6 = *(char *)(lVar10 + 0xa8);
joined_r0x00d0e094:
  bVar4 = true;
joined_r0x00d0df58:
  if (cVar6 != '\0') {
    uStack_68 = *(undefined8 *)(lVar10 + 0xb2);
    local_70 = *(undefined8 *)(lVar10 + 0xba);
    nn::time::GetDeviceLocationName(aLStack_40b0);
    nn::time::LoadTimeZoneRule((TimeZoneRule *)local_4088,aLStack_40b0);
    nn::time::ToPosixTime
              (&iStack_74,aPStack_88,2,(CalendarTime *)&uStack_68,(TimeZoneRule *)local_4088);
    local_40b8 = nn::time::ToCalendarTimeInUtc(aPStack_88);
    nn::time::ToPosixTime
              (&iStack_74,aPStack_88,2,(CalendarTime *)&local_70,(TimeZoneRule *)local_4088);
    local_40c0 = nn::time::ToCalendarTimeInUtc(aPStack_88);
    FUN_00cf9680(*puVar1,&uStack_68,&local_70,&local_40b8,&local_40c0);
  }
  if (*(char *)(lVar10 + 0xc4) != '\0') {
    uVar14 = *(ulong *)(lVar10 + 200);
    if (*(int *)(lVar10 + 0xcc) != 0 || (int)uVar14 != 0) {
      iVar7 = 1;
      if (*(int *)(lVar10 + 0xcc) != 0) {
        iVar7 = 2;
      }
      iVar2 = 0;
      if ((int)uVar14 != 0) {
        iVar2 = iVar7;
      }
      if (iVar2 == 0) {
        FUN_00cf9bd0(*puVar1,uVar14 >> 0x20,1);
        uVar3 = *(ushort *)(lVar10 + 0xd0);
        bVar5 = (byte)(uVar3 >> 8);
        goto joined_r0x00d0de20;
      }
      if (iVar2 == 2) {
        FUN_00cfa060(*puVar1,uVar14,uVar14 >> 0x20);
        uVar3 = *(ushort *)(lVar10 + 0xd0);
        bVar5 = (byte)(uVar3 >> 8);
        goto joined_r0x00d0de20;
      }
      if (iVar2 == 1) {
        FUN_00cf9bd0(*puVar1,uVar14,0);
      }
    }
  }
  uVar3 = *(ushort *)(lVar10 + 0xd0);
  bVar5 = (byte)(uVar3 >> 8);
joined_r0x00d0de20:
  if ((uVar3 & 0xff) != 0) {
    FUN_00cfa500(*puVar1,bVar5 ^ 1);
  }
  if ((*(ulong *)(lVar10 + 0xdc) & 0xff) != 0) {
    FUN_00cfa7e0(*puVar1,*(ulong *)(lVar10 + 0xdc) >> 0x20);
  }
  if (((((*(char *)(lVar10 + 0x70) == '\0') || (*(char *)(lVar10 + 0x90) == '\0')) ||
       (*(char *)(lVar10 + 0xa0) == '\0')) ||
      ((*(char *)(lVar10 + 0xa8) == '\0' || (*(char *)(lVar10 + 0xc4) == '\0')))) ||
     ((*(char *)(lVar10 + 0xd0) == '\0' || (*(char *)(lVar10 + 0xd4) == '\0')))) {
    FUN_00cf73a0(*puVar1,0);
  }
  else {
    FUN_00cf73a0(*puVar1,*(char *)(lVar10 + 0xdc) != '\0');
  }
  if ((plVar9 != (long *)0x0) && (bVar4)) {
    (**(code **)(*(long *)((long)plVar9 + 0x48) + 0x18))((long *)((long)plVar9 + 0x48));
  }
  return;
}


