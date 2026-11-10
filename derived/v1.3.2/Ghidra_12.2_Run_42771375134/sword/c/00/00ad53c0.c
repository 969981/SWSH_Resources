/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ad53c0; name: FUN_00ad53c0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00ad53c0(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long local_38;
  long local_28;
  
  lVar11 = *(long *)(*(long *)(param_1 + 0x3c0) + 0x528);
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_1 + 0x510);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a630(&local_28,lVar11,&local_38);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar11 != 0) {
    (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
  }
  lVar11 = local_28;
  puVar8 = PTR_DAT_02719750;
  if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
    piVar1 = (int *)(local_28 + 0x54);
    puVar7 = PTR_DAT_02719758;
    iVar9 = *(int *)(local_28 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if (((*puVar8 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(puVar8), puVar7 = PTR_DAT_02719758, iVar5 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar6;
          __cxa_guard_release(puVar8);
          puVar7 = PTR_DAT_02719758;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ad5560;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ad5560;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = *(long *)(lVar11 + 0x60);
        if (lVar11 != 0) {
          FUN_00c69b00(lVar11 + -0x50);
          (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
          pbVar4 = PTR_DAT_02719750;
          puVar8 = PTR_DAT_02719758;
          lVar11 = local_28;
          goto joined_r0x00ad5558;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ad5560:
  FUN_00c69b00(0);
  pbVar4 = PTR_DAT_02719750;
  puVar8 = PTR_DAT_02719758;
  lVar11 = local_28;
joined_r0x00ad5558:
  PTR_DAT_02719750 = pbVar4;
  PTR_DAT_02719758 = puVar8;
  local_28 = lVar11;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x54) != 0)) {
    piVar1 = (int *)(lVar11 + 0x54);
    iVar9 = *(int *)(lVar11 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar11 + 0x58);
        if (((*pbVar4 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(pbVar4), puVar8 = PTR_DAT_02719758, iVar5 != 0)) {
          uVar6 = FUN_00706e40();
          *(undefined8 *)PTR_DAT_02719758 = uVar6;
          __cxa_guard_release(pbVar4);
          puVar8 = PTR_DAT_02719758;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ad5680;
          if (plVar10 == (long *)puVar8) break;
          plVar10 = (long *)*plVar10;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ad5680;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar11 = *(long *)(lVar11 + 0x60);
        if (lVar11 != 0) {
          FUN_00c6a010(lVar11 + -0x50,param_2);
          (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
          goto joined_r0x00ad5678;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ad5680:
  FUN_00c6a010(0,param_2);
joined_r0x00ad5678:
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


