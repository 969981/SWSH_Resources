/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7d0e0; name: FUN_00e7d0e0
 */


uint FUN_00e7d0e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  long lVar11;
  long local_30;
  undefined8 local_28;
  
  local_28 = param_3;
  FUN_00e7b880(&local_30);
  lVar11 = local_30;
  puVar4 = PTR_DAT_027150a8;
  if (local_30 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(int *)(local_30 + 0x54) == 0) {
      uVar6 = 0;
    }
    else {
      if ((local_30 != 0) && (*(int *)(local_30 + 0x54) != 0)) {
        piVar1 = (int *)(local_30 + 0x54);
        puVar8 = PTR_DAT_027150b0;
        iVar9 = *(int *)(local_30 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar11 + 0x58);
            if (((*puVar4 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(puVar4), puVar8 = PTR_DAT_027150b0, iVar5 != 0)) {
              uVar7 = FUN_00706e40();
              *(undefined8 *)PTR_DAT_027150b0 = uVar7;
              __cxa_guard_release(puVar4);
              puVar8 = PTR_DAT_027150b0;
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00e7d24c;
              if (plVar10 == (long *)puVar8) break;
              plVar10 = (long *)*plVar10;
            }
            iVar5 = *piVar1;
            if (iVar5 == iVar9) break;
            ClearExclusiveLocal();
            iVar9 = iVar5;
            if (iVar5 == 0) goto LAB_00e7d24c;
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
              uVar6 = FUN_0069d350(lVar11 + -0x50,&local_28,param_2);
              (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
              goto joined_r0x00e7d244;
            }
            break;
          }
          iVar9 = iVar5;
        } while (iVar5 != 0);
      }
LAB_00e7d24c:
      uVar6 = FUN_0069d350(0,&local_28,param_2);
    }
joined_r0x00e7d244:
    if (local_30 != 0) {
      (**(code **)(*(long *)(local_30 + 0x48) + 0x18))();
    }
  }
  return uVar6 & 1;
}


