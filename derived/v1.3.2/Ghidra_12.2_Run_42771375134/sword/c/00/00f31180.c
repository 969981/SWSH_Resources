/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00f31180; name: FUN_00f31180
 */


bool FUN_00f31180(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  FUN_00c58c00(&local_28,*(undefined8 *)(*(long *)PTR_DAT_02710848 + 0x78));
  lVar7 = local_28;
  (**(code **)(*param_1 + 0x10))(&local_48,param_1);
  local_40 = local_48;
  local_48 = 0;
  FUN_00c7a400(&local_38,lVar7,&local_40);
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
    local_40 = 0;
  }
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  lVar7 = local_38;
  puVar3 = PTR_DAT_027150a8;
  if (local_38 == 0) {
    bVar4 = false;
  }
  else {
    if (*(int *)(local_38 + 0x54) == 0) {
      bVar4 = false;
    }
    else {
      if ((local_38 == 0) || (*(int *)(local_38 + 0x54) == 0)) {
LAB_00f31314:
        lVar11 = 0;
      }
      else {
        piVar1 = (int *)(local_38 + 0x54);
        puVar8 = PTR_DAT_027150b0;
        iVar9 = *(int *)(local_38 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar7 + 0x58);
            if ((*puVar3 & 1) == 0) {
              iVar5 = __cxa_guard_acquire(puVar3);
              puVar8 = PTR_DAT_027150b0;
              if (iVar5 != 0) {
                uVar6 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_027150b0 = uVar6;
                __cxa_guard_release(puVar3);
                puVar8 = PTR_DAT_027150b0;
              }
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00f31314;
              if (plVar10 == (long *)puVar8) break;
              plVar10 = (long *)*plVar10;
            }
            iVar5 = *piVar1;
            if (iVar5 != iVar9) break;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar7 = *(long *)(lVar7 + 0x60);
              lVar11 = 0;
              if (lVar7 != 0) {
                lVar11 = lVar7 + -0x50;
              }
              goto LAB_00f31318;
            }
            lVar11 = 0;
            iVar9 = iVar5;
            if (iVar5 == 0) goto LAB_00f31318;
          }
          ClearExclusiveLocal();
          lVar11 = 0;
          iVar9 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00f31318:
      local_48 = FUN_0069d2b0(lVar11);
      plVar10 = (long *)FUN_006b92e0(&local_48);
      bVar4 = *plVar10 == *param_2;
      if (lVar11 != 0) {
        (**(code **)(*(long *)(lVar11 + 0x48) + 0x18))((long *)(lVar11 + 0x48));
      }
    }
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    }
  }
  local_38 = 0;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return bVar4;
}


