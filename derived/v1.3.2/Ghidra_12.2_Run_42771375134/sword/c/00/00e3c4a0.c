/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00e3c4a0; name: FUN_00e3c4a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_00e3c4a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 extraout_d0;
  undefined8 uVar12;
  undefined1 auVar11 [16];
  
  uVar10 = 0;
  uVar12 = 0;
  if ((*(long *)(param_1 + 0x3a8) != 0) && (*(int *)(*(long *)(param_1 + 0x3a8) + 0x54) != 0)) {
    lVar9 = *(long *)(param_1 + 0x3a8);
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      puVar6 = PTR_DAT_02719500;
      pbVar7 = PTR_DAT_027194f8;
      iVar5 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar8 = *(long **)(lVar9 + 0x58);
          if (((*pbVar7 & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(uVar10,PTR_DAT_027194f8), uVar10 = extraout_d0,
             pbVar7 = PTR_DAT_027194f8, puVar6 = PTR_DAT_02719500, iVar4 != 0)) {
            if (((*PTR_DAT_02715078 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_02715078), iVar4 != 0)) {
              uVar10 = FUN_00a87090();
              *(undefined8 *)PTR_DAT_02715080 = uVar10;
              __cxa_guard_release(PTR_DAT_02715078);
            }
            puVar6 = PTR_DAT_02719500;
            *(undefined **)PTR_DAT_02719500 = PTR_DAT_02715080;
            pbVar7 = PTR_DAT_027194f8;
            uVar10 = __cxa_guard_release(PTR_DAT_027194f8);
          }
          while( true ) {
            if (plVar8 == (long *)0x0) goto LAB_00e3c630;
            if (plVar8 == (long *)puVar6) break;
            plVar8 = (long *)*plVar8;
          }
          iVar4 = *piVar1;
          if (iVar4 == iVar5) break;
          ClearExclusiveLocal();
          iVar5 = iVar4;
          if (iVar4 == 0) goto LAB_00e3c630;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            auVar11 = *(undefined1 (*) [16])(lVar9 + 0x60);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            return auVar11;
          }
          break;
        }
        iVar5 = iVar4;
      } while (iVar4 != 0);
    }
LAB_00e3c630:
    uVar10 = _DAT_000000b0;
    uVar12 = _DAT_000000b8;
  }
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = uVar10;
  return auVar11;
}


