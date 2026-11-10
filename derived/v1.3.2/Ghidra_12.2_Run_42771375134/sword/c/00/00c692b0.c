/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c692b0; name: FUN_00c692b0
 */


void FUN_00c692b0(undefined8 param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long local_48;
  long local_38;
  
  if ((*(long **)(param_2 + 0x90) != (long *)0x0) &&
     ((**(code **)(**(long **)(param_2 + 0x90) + 0xd8))(&local_38), lVar5 = local_38, local_38 != 0)
     ) {
    puVar12 = *(undefined8 **)(local_38 + 0x60);
    if (puVar12 != (undefined8 *)0x0) {
      plVar8 = (long *)(**(code **)*puVar12)(puVar12);
      if (((*PTR_DAT_0271c1e8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0271c1e8), iVar7 != 0)) {
        uVar9 = FUN_00706e40();
        *(undefined8 *)PTR_DAT_0271c1f0 = uVar9;
        __cxa_guard_release(PTR_DAT_0271c1e8);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_0271c1f0) {
          puVar12 = puVar12 + -10;
          goto LAB_00c69344;
        }
      }
      puVar12 = (undefined8 *)0x0;
    }
LAB_00c69344:
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    if (puVar12 != (undefined8 *)0x0) {
      FUN_01061490(param_1,puVar12,param_3);
      return;
    }
  }
  if (((*(long *)(param_2 + 0x78) != 0) && (*(long *)(param_2 + 0x80) != 0)) &&
     (*(int *)(*(long *)(param_2 + 0x80) + 0x54) != 0)) {
    uVar9 = *(undefined8 *)(param_2 + 0x78);
    local_48 = *(long *)(param_2 + 0x80);
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
    }
    FUN_00c7a400(&local_38,uVar9,&local_48);
    lVar5 = local_38;
    local_38 = 0;
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      local_48 = 0;
    }
    puVar4 = PTR_DAT_027150a8;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x54);
      if (*piVar1 != 0) {
        if (*piVar1 != 0) {
          puVar10 = PTR_DAT_027150b0;
          iVar7 = *piVar1;
          do {
            while( true ) {
              plVar8 = *(long **)(lVar5 + 0x58);
              if (((*puVar4 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(puVar4), puVar10 = PTR_DAT_027150b0, iVar6 != 0)) {
                uVar9 = FUN_00706e40();
                *(undefined8 *)PTR_DAT_027150b0 = uVar9;
                __cxa_guard_release(puVar4);
                puVar10 = PTR_DAT_027150b0;
              }
              while( true ) {
                if (plVar8 == (long *)0x0) goto LAB_00c694d0;
                if (plVar8 == (long *)puVar10) break;
                plVar8 = (long *)*plVar8;
              }
              iVar6 = *piVar1;
              if (iVar6 == iVar7) break;
              ClearExclusiveLocal();
              iVar7 = iVar6;
              if (iVar6 == 0) goto LAB_00c694d0;
            }
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar11 = *(long *)(lVar5 + 0x60);
              if (lVar11 != 0) {
                FUN_010503f0(param_1,lVar11 + -0x50,param_3);
                (**(code **)(*(long *)(lVar11 + -8) + 0x18))((long *)(lVar11 + -8));
                goto LAB_00c694e0;
              }
              break;
            }
            iVar7 = iVar6;
          } while (iVar6 != 0);
        }
LAB_00c694d0:
        FUN_010503f0(param_1,0,param_3);
      }
LAB_00c694e0:
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
  }
  return;
}


