/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ca29b0; name: FUN_00ca29b0
 */


undefined4 FUN_00ca29b0(undefined8 *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long local_30;
  long local_28;
  
  uVar10 = *param_1;
  local_30 = *param_2;
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x10))();
  }
  FUN_00c7a400(&local_28,uVar10,&local_30);
  if (local_30 != 0) {
    (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    local_30 = 0;
  }
  lVar11 = local_28;
  puVar4 = PTR_DAT_027150a8;
  if (local_28 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(int *)(local_28 + 0x54) == 0) {
      uVar6 = 0;
    }
    else {
      if ((local_28 != 0) && (*(int *)(local_28 + 0x54) != 0)) {
        piVar1 = (int *)(local_28 + 0x54);
        puVar7 = PTR_DAT_027150b0;
        iVar8 = *(int *)(local_28 + 0x54);
        do {
          while( true ) {
            plVar9 = *(long **)(lVar11 + 0x58);
            if (((*puVar4 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(puVar4), puVar7 = PTR_DAT_027150b0, iVar5 != 0)) {
              uVar10 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar10;
              __cxa_guard_release(puVar4);
              puVar7 = PTR_DAT_027150b0;
            }
            while( true ) {
              if (plVar9 == (long *)0x0) goto LAB_00ca2b48;
              if (plVar9 == (long *)puVar7) break;
              plVar9 = (long *)*plVar9;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar8) break;
            ClearExclusiveLocal();
            iVar8 = iVar5;
            if (iVar5 == 0) goto LAB_00ca2b48;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(lVar11 + 0x60);
            if (lVar11 != 0) {
              uVar6 = FUN_0069c6d0(lVar11 + -0x50);
              (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
              goto joined_r0x00ca2b40;
            }
            break;
          }
          iVar8 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00ca2b48:
      uVar6 = FUN_0069c6d0(0);
    }
joined_r0x00ca2b40:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return uVar6;
}


