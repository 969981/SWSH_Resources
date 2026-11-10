/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bcd4d0; name: FUN_00bcd4d0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00bcd4d0(undefined8 param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long local_48;
  
  if (param_2 == 0) {
    (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_48);
    iVar3 = _DAT_00000314;
    iVar2 = _DAT_00000310;
    if ((local_48 != 0) && (*(int *)(local_48 + 0x54) != 0)) {
      piVar1 = (int *)(local_48 + 0x54);
      iVar8 = *(int *)(local_48 + 0x54);
      do {
        while( true ) {
          plVar9 = *(long **)(local_48 + 0x58);
          lVar7 = FUN_00d8bd10();
          while( true ) {
            iVar3 = _DAT_00000314;
            iVar2 = _DAT_00000310;
            if (plVar9 == (long *)0x0) goto joined_r0x00bcd5b8;
            if (plVar9 == (long *)lVar7) break;
            plVar9 = (long *)*plVar9;
          }
          iVar4 = *piVar1;
          if (iVar4 != iVar8) break;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar8 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          iVar3 = _DAT_00000314;
          iVar2 = _DAT_00000310;
          if (cVar5 == '\0') {
            lVar7 = *(long *)(local_48 + 0x60);
            if (lVar7 != 0) {
              iVar2 = *(int *)(lVar7 + 0x2c0);
              iVar3 = *(int *)(lVar7 + 0x2c4);
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            }
            goto joined_r0x00bcd5b8;
          }
          iVar8 = iVar4;
          if (iVar4 == 0) goto joined_r0x00bcd5b8;
        }
        ClearExclusiveLocal();
        iVar8 = iVar4;
      } while (iVar4 != 0);
    }
joined_r0x00bcd5b8:
    if ((iVar2 == param_3) && (iVar3 == param_4)) {
      if (local_48 == 0) {
        return 1;
      }
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
      return 1;
    }
    if (local_48 != 0) {
      (**(code **)(*(long *)(local_48 + 0x48) + 0x18))((long *)(local_48 + 0x48));
    }
  }
  return 0;
}


