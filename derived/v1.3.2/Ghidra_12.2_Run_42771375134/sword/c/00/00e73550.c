/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e73550; name: FUN_00e73550
 */


void FUN_00e73550(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  
  puVar5 = PTR_DAT_02719500;
  if (*(int *)(param_2 + 0x54) != 0) {
    piVar1 = (int *)(param_2 + 0x54);
    pbVar8 = PTR_DAT_0271fe08;
    puVar9 = PTR_DAT_0271fe10;
    iVar10 = *(int *)(param_2 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(param_2 + 0x58);
        if (((*pbVar8 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0271fe08), pbVar8 = PTR_DAT_0271fe08,
           puVar9 = PTR_DAT_0271fe10, iVar6 != 0)) {
          if (((*PTR_DAT_027194f8 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_027194f8), iVar6 != 0)) {
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
              uVar7 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar7;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            *(undefined **)puVar5 = PTR_DAT_02715080;
            __cxa_guard_release(PTR_DAT_027194f8);
          }
          puVar9 = PTR_DAT_0271fe10;
          *(undefined **)PTR_DAT_0271fe10 = puVar5;
          pbVar8 = PTR_DAT_0271fe08;
          __cxa_guard_release(PTR_DAT_0271fe08);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00e736e8;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00e736e8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(param_2 + 0x60) != 0) {
          lVar2 = *(long *)(param_2 + 0x60) + -0x50;
        }
        *param_1 = lVar2;
        return;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00e736e8:
  *param_1 = 0;
  return;
}


