/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 014193b0; name: FUN_014193b0
 */


undefined8 FUN_014193b0(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long local_38;
  
  lVar8 = *(long *)(*(long *)PTR_DAT_02710848 + 0x68);
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
  }
  (**(code **)(**(long **)(lVar8 + 0x78) + 0x10))(&local_38);
  uVar9 = 0;
  if (local_38 != 0) {
    if (*(int *)(local_38 + 0x54) != 0) {
      piVar1 = (int *)(local_38 + 0x54);
      iVar5 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar10 = *(long **)(local_38 + 0x58);
          lVar6 = FUN_0156a3b0();
          while( true ) {
            if (plVar10 == (long *)0x0) goto LAB_01419460;
            if (plVar10 == (long *)lVar6) break;
            plVar10 = (long *)*plVar10;
          }
          iVar2 = *piVar1;
          if (iVar2 != iVar5) break;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar5 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar6 = 0;
            if (*(long *)(local_38 + 0x60) != 0) {
              lVar6 = *(long *)(local_38 + 0x60) + -0x50;
            }
            goto LAB_01419464;
          }
          iVar5 = iVar2;
          if (iVar2 == 0) goto LAB_01419460;
        }
        ClearExclusiveLocal();
        iVar5 = iVar2;
      } while (iVar2 != 0);
    }
LAB_01419460:
    lVar6 = 0;
LAB_01419464:
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
    if (lVar6 == 0) {
      uVar9 = 0;
    }
    else {
      puVar7 = (undefined8 *)(*(code *)**(undefined8 **)(lVar6 + 0x50))();
      if (((*PTR_DAT_027205a8 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_027205a8), iVar5 != 0)) {
        uVar9 = FUN_0156a3b0();
        *(undefined8 *)PTR_DAT_027205b0 = uVar9;
        __cxa_guard_release(PTR_DAT_027205a8);
      }
      uVar9 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        do {
          if (puVar7 == (undefined8 *)PTR_DAT_027205b0) {
            uVar9 = 1;
            goto LAB_014194cc;
          }
          puVar7 = (undefined8 *)*puVar7;
        } while (puVar7 != (undefined8 *)0x0);
        uVar9 = 0;
      }
LAB_014194cc:
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))((long *)(lVar6 + 0x48));
    }
  }
  if (lVar8 != 0) {
    (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
  }
  return uVar9;
}


