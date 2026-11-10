/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e7c3a0; name: FUN_00e7c3a0
 */


uint FUN_00e7c3a0(long *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  undefined1 local_30 [4];
  undefined4 local_2c;
  long local_28;
  
  if ((*param_1 == 0) || (*(int *)(*param_1 + 0x54) == 0)) {
    uVar6 = 1;
  }
  else {
    FUN_00e7b880(&local_28);
    lVar8 = local_28;
    puVar4 = PTR_DAT_027150a8;
    if (local_28 == 0) {
      uVar6 = 0;
    }
    else {
      if (*(int *)(local_28 + 0x54) == 0) {
        uVar6 = 0;
      }
      else {
        if ((local_28 == 0) || (*(int *)(local_28 + 0x54) == 0)) {
LAB_00e7c4d0:
          lVar12 = 0;
        }
        else {
          piVar1 = (int *)(local_28 + 0x54);
          puVar9 = PTR_DAT_027150b0;
          iVar10 = *(int *)(local_28 + 0x54);
          do {
            while( true ) {
              plVar11 = *(long **)(lVar8 + 0x58);
              if ((*puVar4 & 1) == 0) {
                iVar5 = __cxa_guard_acquire(puVar4);
                puVar9 = PTR_DAT_027150b0;
                if (iVar5 != 0) {
                  uVar7 = FUN_00706e40();
                  *(undefined8 *)PTR_DAT_027150b0 = uVar7;
                  __cxa_guard_release(puVar4);
                  puVar9 = PTR_DAT_027150b0;
                }
              }
              while( true ) {
                if (plVar11 == (long *)0x0) goto LAB_00e7c4d0;
                if (plVar11 == (long *)puVar9) break;
                plVar11 = (long *)*plVar11;
              }
              iVar5 = *piVar1;
              if (iVar5 != iVar10) break;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar10 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar8 = *(long *)(lVar8 + 0x60);
                lVar12 = 0;
                if (lVar8 != 0) {
                  lVar12 = lVar8 + -0x50;
                }
                goto LAB_00e7c4d4;
              }
              lVar12 = 0;
              iVar10 = iVar5;
              if (iVar5 == 0) goto LAB_00e7c4d4;
            }
            ClearExclusiveLocal();
            lVar12 = 0;
            iVar10 = iVar5;
          } while (iVar5 != 0);
        }
LAB_00e7c4d4:
        local_30[0] = 1;
        local_2c = param_2;
        uVar6 = FUN_0069d390(lVar12,local_30);
        if (lVar12 != 0) {
          (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
        }
      }
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
    }
  }
  return uVar6 & 1;
}


