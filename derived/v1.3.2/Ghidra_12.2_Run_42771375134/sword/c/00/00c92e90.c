/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c92e90; name: FUN_00c92e90
 */


void FUN_00c92e90(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  bool bVar14;
  long local_70;
  long *local_68;
  
  puVar6 = PTR_DAT_0271c488;
  puVar5 = PTR_DAT_027150b0;
  lVar13 = 0;
  do {
    if (*(long *)(param_1 + 0x270) == 0) {
LAB_00c930bc:
      local_68 = (long *)0x0;
    }
    else {
      FUN_00c834c0(*(long *)(param_1 + 0x270),*(undefined1 *)(param_1 + lVar13 * 0xc + 0x2e3));
      FUN_00c825a0(&local_68);
      plVar12 = local_68;
      if (local_68 != (long *)0x0) {
        plVar9 = (long *)(**(code **)local_68[10])(local_68 + 10);
        if (((*PTR_DAT_0271c490 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_0271c490), iVar7 != 0)) {
          uVar10 = FUN_00c95940();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(PTR_DAT_0271c490);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)puVar6) {
            (**(code **)(plVar12[9] + 0x10))(plVar12 + 9);
            bVar14 = false;
            goto LAB_00c92fa8;
          }
        }
        plVar12 = (long *)0x0;
        bVar14 = true;
LAB_00c92fa8:
        (**(code **)(*plVar12 + 0xd0))(&local_70,plVar12);
        lVar4 = local_70;
        if (local_70 != 0) {
          if (*(int *)(local_70 + 0x54) != 0) {
            piVar1 = (int *)(local_70 + 0x54);
            iVar7 = *(int *)(local_70 + 0x54);
            do {
              while( true ) {
                plVar9 = *(long **)(lVar4 + 0x58);
                if (((*PTR_DAT_027150a8 & 1) == 0) &&
                   (iVar8 = __cxa_guard_acquire(PTR_DAT_027150a8), iVar8 != 0)) {
                  uVar10 = FUN_00706e40();
                  *(undefined8 *)puVar5 = uVar10;
                  __cxa_guard_release(PTR_DAT_027150a8);
                }
                while( true ) {
                  if (plVar9 == (long *)0x0) goto joined_r0x00c92ed8;
                  if (plVar9 == (long *)puVar5) break;
                  plVar9 = (long *)*plVar9;
                }
                iVar8 = *piVar1;
                if (iVar8 != iVar7) break;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar7 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar11 = *(long *)(lVar4 + 0x60);
                  lVar4 = 0;
                  if (lVar11 != 0) {
                    lVar4 = lVar11 + -0x50;
                  }
                  goto joined_r0x00c92ef8;
                }
                iVar7 = iVar8;
                if (iVar8 == 0) goto joined_r0x00c92ed8;
              }
              ClearExclusiveLocal();
              iVar7 = iVar8;
            } while (iVar8 != 0);
          }
joined_r0x00c92ed8:
          lVar4 = 0;
joined_r0x00c92ef8:
          if (local_70 != 0) {
            (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
            local_70 = 0;
          }
          if (lVar4 != 0) {
            FUN_0069c810(lVar4);
            (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
          }
        }
        if (!bVar14) {
          (**(code **)(plVar12[9] + 0x18))(plVar12 + 9);
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(local_68[9] + 0x18))();
          goto LAB_00c930bc;
        }
      }
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 0x10) {
      return;
    }
  } while( true );
}


