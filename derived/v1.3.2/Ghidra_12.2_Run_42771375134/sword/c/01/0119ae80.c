/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0119ae80; name: FUN_0119ae80
 */


undefined8 FUN_0119ae80(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__s;
  long lVar9;
  int iVar10;
  long *plVar11;
  undefined1 local_78 [24];
  
  uVar7 = FUN_007d4b30(*(long *)(param_1 + 0x88) + 0xd0);
  puVar5 = PTR_DAT_02725318;
  puVar4 = PTR_DAT_02725310;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar9 = *(long *)(param_1 + 0x268);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar10 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar9 + 0x58);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          uVar8 = FUN_009b7e90();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_0119af90;
          if (plVar11 == (long *)puVar5) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            local_78[0] = 1;
            FUN_0119a3d0(lVar9 + -0x50,local_78);
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))((long *)(lVar9 + -8));
          }
          goto LAB_0119af90;
        }
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_0119af90;
      }
      ClearExclusiveLocal();
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_0119af90:
  plVar11 = *(long **)(param_1 + 0x80);
  __s = (void *)(**(code **)(*plVar11 + 0x10))(plVar11,0x814,4);
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_02710860);
  if (*(ulong *)(lVar9 + 0x80) < 0x10) {
    *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar11;
    *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
                    /* WARNING: Subroutine does not return */
    memset(__s,0,0x814);
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


