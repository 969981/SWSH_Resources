/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007d33b0; name: FUN_007d33b0
 */


undefined8 FUN_007d33b0(long param_1,short param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  short local_14 [2];
  
  puVar4 = PTR_DAT_02716cf0;
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    return 0;
  }
  if (*(int *)(lVar7 + 0x54) == 0) {
    return 0;
  }
  piVar1 = (int *)(lVar7 + 0x54);
  puVar8 = (undefined8 *)PTR_DAT_02716cf8;
  iVar9 = *(int *)(lVar7 + 0x54);
  local_14[0] = param_2;
  while( true ) {
    while( true ) {
      puVar10 = *(undefined8 **)(lVar7 + 0x58);
      if (((*puVar4 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(puVar4), puVar8 = (undefined8 *)PTR_DAT_02716cf8, iVar5 != 0))
      {
        uVar6 = FUN_009b7e90();
        *(undefined8 *)PTR_DAT_02716cf8 = uVar6;
        __cxa_guard_release(puVar4);
        puVar8 = (undefined8 *)PTR_DAT_02716cf8;
      }
      if (puVar10 == (undefined8 *)0x0) {
        return 0;
      }
      while (puVar10 != puVar8) {
        puVar10 = (undefined8 *)*puVar10;
        if (puVar10 == (undefined8 *)0x0) {
          return 0;
        }
      }
      iVar5 = *piVar1;
      if (iVar5 == iVar9) break;
      ClearExclusiveLocal();
      iVar9 = iVar5;
      if (iVar5 == 0) {
        return 0;
      }
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') break;
    iVar9 = iVar5;
    if (iVar5 == 0) {
      return 0;
    }
  }
  lVar7 = *(long *)(lVar7 + 0x60);
  if (lVar7 == 0) {
    return 0;
  }
  if ((*(char *)(lVar7 + 0x11) == '\0') || (*(short *)(lVar7 + 0x38) != local_14[0])) {
    FUN_007d3570(lVar7 + -0x50,local_14);
  }
  (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
  return 1;
}


