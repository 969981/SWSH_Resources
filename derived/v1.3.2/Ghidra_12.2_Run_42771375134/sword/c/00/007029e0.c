/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007029e0; name: FUN_007029e0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_007029e0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  
  puVar5 = PTR_DAT_02715890;
  puVar4 = PTR_DAT_02715888;
  plVar8 = *(long **)(param_1 + 0xb0);
  plVar13 = *(long **)(param_1 + 0xb8);
  if (plVar13 != plVar8) {
    do {
      lVar12 = *plVar8;
      if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
        piVar1 = (int *)(lVar12 + 0x54);
        iVar7 = *(int *)(lVar12 + 0x54);
        do {
          while( true ) {
            plVar10 = *(long **)(lVar12 + 0x58);
            if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
              uVar9 = FUN_00702ff0();
              *(undefined8 *)puVar5 = uVar9;
              __cxa_guard_release(puVar4);
            }
            while( true ) {
              if (plVar10 == (long *)0x0) goto LAB_00702b20;
              if (plVar10 == (long *)puVar5) break;
              plVar10 = (long *)*plVar10;
            }
            iVar6 = *piVar1;
            if (iVar6 != iVar7) break;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar12 = *(long *)(lVar12 + 0x60);
              if (lVar12 != 0) {
                lVar14 = *(long *)(lVar12 + 0xe8);
                if (*(long *)(lVar12 + 0x100) == 0) {
                  lVar15 = *param_2;
                }
                else {
                  plVar10 = (long *)(*(long *)(lVar12 + 0x100) + 0x48);
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                  lVar15 = *param_2;
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                }
                (**(code **)(*(long *)(lVar12 + -8) + 0x18))((long *)(lVar12 + -8));
                if (lVar14 == lVar15) goto LAB_00702b30;
              }
              goto LAB_00702b20;
            }
            iVar7 = iVar6;
            if (iVar6 == 0) goto LAB_00702b20;
          }
          ClearExclusiveLocal();
          iVar7 = iVar6;
        } while (iVar6 != 0);
      }
LAB_00702b20:
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar13);
    plVar8 = plVar13;
LAB_00702b30:
    plVar13 = *(long **)(param_1 + 0xb8);
  }
  if (((plVar13 != plVar8) && (*plVar8 != 0)) &&
     (puVar11 = *(undefined8 **)(*plVar8 + 0x60), puVar11 != (undefined8 *)0x0)) {
    plVar8 = (long *)(**(code **)*puVar11)(puVar11);
    if (((*PTR_DAT_02715888 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_02715888), iVar7 != 0)) {
      uVar9 = FUN_00702ff0();
      *(undefined8 *)PTR_DAT_02715890 = uVar9;
      __cxa_guard_release(PTR_DAT_02715888);
    }
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (plVar8 == (long *)PTR_DAT_02715890) {
        return puVar11 + -10;
      }
    }
  }
  return (undefined8 *)0x0;
}


