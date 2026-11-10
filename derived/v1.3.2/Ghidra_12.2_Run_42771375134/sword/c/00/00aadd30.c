/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00aadd30; name: FUN_00aadd30
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00aadd30(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long local_38;
  long local_28;
  
  lVar12 = *(long *)(*(long *)(param_2 + 0x3c0) + 0x528);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  local_38 = *(long *)(param_2 + 0x4b8);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN_00c7a400(&local_28,lVar12,&local_38);
  lVar2 = local_28;
  puVar5 = PTR_DAT_027150a8;
  if (local_28 == 0) {
    *param_1 = 0;
  }
  else {
    if (*(int *)(local_28 + 0x54) != 0) {
      piVar1 = (int *)(local_28 + 0x54);
      puVar9 = PTR_DAT_027150b0;
      iVar10 = *(int *)(local_28 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar2 + 0x58);
          if (((*puVar5 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_027150b0, iVar6 != 0)) {
            uVar7 = FUN_00706e40();
            *(undefined8 *)PTR_DAT_027150b0 = uVar7;
            __cxa_guard_release(puVar5);
            puVar9 = PTR_DAT_027150b0;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00aade74;
            if (plVar11 == (long *)puVar9) break;
            plVar11 = (long *)*plVar11;
          }
          iVar6 = *piVar1;
          if (iVar6 == iVar10) break;
          ClearExclusiveLocal();
          iVar10 = iVar6;
          if (iVar6 == 0) goto LAB_00aade74;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar8 = *(long *)(lVar2 + 0x60);
          lVar2 = 0;
          if (lVar8 != 0) {
            lVar2 = lVar8 + -0x50;
          }
          *param_1 = lVar2;
          goto joined_r0x00aadef8;
        }
        iVar10 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00aade74:
    *param_1 = 0;
joined_r0x00aadef8:
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  local_28 = 0;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


