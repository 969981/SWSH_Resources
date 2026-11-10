/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad4450; name: FUN_00ad4450
 */


void FUN_00ad4450(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long local_58;
  ulong local_50;
  char *local_48;
  long local_40;
  long local_38;
  long local_28;
  
  uVar8 = (**(code **)(*param_1 + 400))();
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (0xf < *(uint *)(param_1 + 0xb4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar13 = *(undefined8 *)(param_1[0x78] + (ulong)*(uint *)(param_1 + 0xb4) * 0x20 + 0xb8);
  lVar14 = *(long *)(param_1[0x78] + 0x528);
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))();
  }
  local_58 = param_1[0xa2];
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,lVar14,&local_58);
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    local_58 = 0;
  }
  if (lVar14 != 0) {
    (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))((long *)(lVar14 + 0x48));
  }
  lVar14 = local_28;
  puVar4 = PTR_DAT_02719750;
  if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
    piVar1 = (int *)(local_28 + 0x54);
    puVar10 = PTR_DAT_02719758;
    iVar11 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar14 + 0x58);
        if (((*puVar4 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar4), puVar10 = PTR_DAT_02719758, iVar6 != 0)) {
          uVar9 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar9;
          __cxa_guard_release(puVar4);
          puVar10 = PTR_DAT_02719758;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ad4618;
          if (plVar12 == (long *)puVar10) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar6;
        if (iVar6 == 0) goto LAB_00ad4618;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar14 = *(long *)(lVar14 + 0x60);
        if (lVar14 != 0) {
          FUN_00c69ae0(lVar14 + -0x50,uVar13);
          (**(code **)(*(long *)(lVar14 + -8) + 0x18))((long *)(lVar14 + -8));
          iVar11 = (int)param_1[0x9a];
          goto joined_r0x00ad4610;
        }
        break;
      }
      iVar11 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ad4618:
  FUN_00c69ae0(0,uVar13);
  iVar11 = (int)param_1[0x9a];
joined_r0x00ad4610:
  if (iVar11 != 1) goto LAB_00ad472c;
  plVar12 = (long *)param_1[0x78];
  uVar7 = (**(code **)(*plVar12 + 0x8e8))(plVar12,(int)param_1[0x79]);
  uVar5 = (**(code **)(*plVar12 + 0x908))(plVar12,uVar7);
  if (uVar5 < 0xbc) {
    if (uVar5 == 7) goto LAB_00ad46d8;
    if (uVar5 == 0xb8) {
      local_50 = 0x4e840eeece1164da;
      local_48 = "ba_variation";
      local_40 = 0xc;
      local_38 = 0;
      FUN_00ad3410(param_1,&local_50,2);
      if (local_38 == 0) goto LAB_00ad4728;
      goto LAB_00ad4718;
    }
  }
  else {
    if (((uVar5 != 0xbc) && (uVar5 != 0xf1)) && (uVar5 != 199)) goto LAB_00ad4728;
LAB_00ad46d8:
    local_50 = 0x4e840eeece1164da;
    local_48 = "ba_variation";
    local_40 = 0xc;
    local_38 = 0;
    FUN_00ad3410(param_1,&local_50,1);
    if (local_38 != 0) {
LAB_00ad4718:
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
LAB_00ad4728:
  iVar11 = (int)param_1[0x9a];
LAB_00ad472c:
  if (iVar11 == 2) {
    local_50 = local_50 & 0xffff000000000000;
    local_48 = (char *)((ulong)local_48 & 0xffff000000000000);
    local_40 = 0;
    local_38 = CONCAT44(local_38._4_4_,0xffffffff);
    uVar13 = (**(code **)(*(long *)param_1[0x78] + 0x810))((long *)param_1[0x78],(int)param_1[0x79])
    ;
    FUN_014ad910(&local_50,uVar13);
    *(undefined4 *)(param_1 + 0xa1) = (undefined4)local_38;
    param_1[0xa0] = local_40;
    param_1[0x9f] = (long)local_48;
    param_1[0x9e] = local_50;
    FUN_00ad1a60(param_1);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


