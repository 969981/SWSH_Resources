/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00cac9a0; name: FUN_00cac9a0
 */


void FUN_00cac9a0(undefined8 param_1,long param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long local_70;
  long local_68;
  
  puVar4 = PTR_DAT_0271c2b8;
  if (param_3 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        plVar13 = (long *)(param_2 + uVar12 * 0x10);
        plVar9 = plVar13 + 1;
        if ((int)*plVar9 == 1) break;
LAB_00cacb90:
        uVar12 = uVar12 + 1;
        if (uVar12 == param_3) {
          return;
        }
      }
      lVar14 = *plVar13;
      if (lVar14 != 0) {
        plVar10 = (long *)(lVar14 + 0x48);
        (**(code **)(*plVar10 + 0x10))(plVar10);
        piVar1 = (int *)(lVar14 + 0x54);
        if (*piVar1 == 0) {
LAB_00cacb7c:
          *(int *)plVar9 = 0;
        }
        else {
          local_68 = lVar14;
          uVar6 = (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))(plVar10);
          uVar7 = FUN_00cae840(uVar6,&local_68);
          (**(code **)(*(long *)(lVar14 + 0x48) + 0x18))(plVar10);
          local_68 = 0;
          if ((uVar7 & 1) != 0) {
            lVar8 = *plVar13;
            *plVar13 = 0;
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))();
            }
            local_70 = lVar14;
            (**(code **)(*(long *)(lVar14 + 0x48) + 0x10))(plVar10);
            iVar5 = *(int *)(lVar14 + 0x54);
            while (iVar11 = iVar5, iVar5 != 0) {
              while( true ) {
                plVar13 = *(long **)(lVar14 + 0x58);
                if (((*PTR_DAT_0271c2b0 & 1) == 0) &&
                   (iVar5 = __cxa_guard_acquire(PTR_DAT_0271c2b0), iVar5 != 0)) {
                  uVar6 = FUN_00c72b60();
                  *(undefined8 *)puVar4 = uVar6;
                  __cxa_guard_release(PTR_DAT_0271c2b0);
                }
                while( true ) {
                  if (plVar13 == (long *)0x0) goto LAB_00cacb38;
                  if (plVar13 == (long *)puVar4) break;
                  plVar13 = (long *)*plVar13;
                }
                iVar5 = *piVar1;
                if (iVar5 != iVar11) break;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar11 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
                if (cVar2 == '\0') {
                  lVar8 = 0;
                  if (*(long *)(lVar14 + 0x60) != 0) {
                    lVar8 = *(long *)(lVar14 + 0x60) + -0x50;
                  }
                  goto LAB_00cacb3c;
                }
                iVar11 = iVar5;
                if (iVar5 == 0) goto LAB_00cacb38;
              }
              ClearExclusiveLocal();
            }
LAB_00cacb38:
            lVar8 = 0;
LAB_00cacb3c:
            FUN_00ca9590(param_1,0,&local_70,*(undefined4 *)(lVar8 + 0x70));
            if (lVar8 != 0) {
              (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
            }
            if (local_70 != 0) {
              (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
              local_70 = 0;
            }
            goto LAB_00cacb7c;
          }
        }
        (**(code **)(*plVar10 + 0x18))(plVar10);
        goto LAB_00cacb90;
      }
      *(int *)plVar9 = 0;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_3);
  }
  return;
}


