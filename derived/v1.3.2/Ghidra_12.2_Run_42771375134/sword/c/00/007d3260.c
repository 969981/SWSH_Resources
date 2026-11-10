/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d3260; name: FUN_007d3260
 */


undefined2 FUN_007d3260(long param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  long *plVar11;
  
  puVar6 = PTR_DAT_02716cf8;
  puVar5 = PTR_DAT_02716cf0;
  lVar9 = *(long *)(param_1 + 0x38);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar8 = FUN_009b7e90();
          *(undefined8 *)puVar6 = uVar8;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) {
            return 0xfc18;
          }
          if (plVar11 == (long *)puVar6) break;
          plVar11 = (long *)*plVar11;
        }
        iVar7 = *piVar1;
        if (iVar7 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 == 0) {
            return 0xfc18;
          }
          if (*(char *)(lVar9 + 0x11) == '\0') {
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            return 0xfc18;
          }
          uVar2 = *(undefined2 *)(lVar9 + 0x38);
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          return uVar2;
        }
        iVar10 = iVar7;
        if (iVar7 == 0) {
          return 0xfc18;
        }
      }
      ClearExclusiveLocal();
      iVar10 = iVar7;
    } while (iVar7 != 0);
  }
  return 0xfc18;
}


