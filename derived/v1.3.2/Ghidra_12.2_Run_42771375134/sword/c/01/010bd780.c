/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bd780; name: FUN_010bd780
 */


uint FUN_010bd780(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long local_38;
  
  iVar5 = FUN_01196cf0(*(undefined8 *)(*(long *)PTR_DAT_02710880 + 0xc0));
  (**(code **)(**(long **)(*(long *)PTR_DAT_02710798 + 0x1d0) + 0x10))(&local_38);
  if (iVar5 == 0) {
    if ((local_38 != 0) && (*(int *)(local_38 + 0x54) != 0)) {
      piVar1 = (int *)(local_38 + 0x54);
      iVar5 = *(int *)(local_38 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(local_38 + 0x58);
          lVar7 = FUN_00d8bd10();
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_010bd894;
            if (plVar8 == (long *)lVar7) break;
            plVar8 = (long *)*plVar8;
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
            lVar7 = *(long *)(local_38 + 0x60);
            if (lVar7 != 0) {
              uVar6 = FUN_01531f70(lVar7 + -0x50);
              (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
              goto joined_r0x010bd88c;
            }
            goto LAB_010bd894;
          }
          iVar5 = iVar2;
          if (iVar2 == 0) goto LAB_010bd894;
        }
        ClearExclusiveLocal();
        iVar5 = iVar2;
      } while (iVar2 != 0);
    }
LAB_010bd894:
    uVar6 = FUN_01531f70(0);
  }
  else {
    uVar6 = 1;
  }
joined_r0x010bd88c:
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))((long *)(local_38 + 0x48));
  }
  return uVar6 & 1;
}


