/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01358af0; name: FUN_01358af0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01358af0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  byte *pbVar12;
  long *plVar13;
  
  nn::os::GetSystemTick();
  lVar7 = nn::os::ConvertToTimeSpan();
  lVar7 = lVar7 - *(long *)(param_1 + 0xb8);
  *(long *)(param_1 + 0xc0) = lVar7;
  if (30.0 <= (float)((double)lVar7 / DAT_01cd50a0)) {
    nn::os::GetSystemTick();
    uVar8 = nn::os::ConvertToTimeSpan();
    *(undefined8 *)(param_1 + 0xb8) = uVar8;
    puVar4 = PTR_DAT_0271df28;
    lVar7 = *(long *)PTR_DAT_02727748;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      puVar11 = PTR_DAT_02727758;
      pbVar12 = PTR_DAT_02727750;
      iVar6 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar7 + 0x58);
          if (((*pbVar12 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02727750), pbVar12 = PTR_DAT_02727750,
             puVar11 = PTR_DAT_02727758, iVar5 != 0)) {
            if (((*PTR_DAT_0271df20 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_0271df20), iVar5 != 0)) {
              uVar8 = FUN_00d3ff90();
              *(undefined8 *)puVar4 = uVar8;
              __cxa_guard_release(PTR_DAT_0271df20);
            }
            puVar11 = PTR_DAT_02727758;
            *(undefined **)PTR_DAT_02727758 = puVar4;
            pbVar12 = PTR_DAT_02727750;
            __cxa_guard_release(PTR_DAT_02727750);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01358cbc;
            if (plVar13 == (long *)puVar11) break;
            plVar13 = (long *)*plVar13;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar6) break;
          ClearExclusiveLocal();
          iVar6 = iVar5;
          if (iVar5 == 0) goto LAB_01358cbc;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            uVar9 = FUN_0130a240(lVar7 + -0x50);
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))((long *)(lVar7 + -8));
            goto joined_r0x01358cb0;
          }
          break;
        }
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_01358cbc:
    uVar9 = FUN_0130a240(0);
joined_r0x01358cb0:
    if ((uVar9 & 1) != 0) {
      puVar10 = (undefined8 *)FUN_013471e0(param_1);
      iVar6 = FUN_012b7630(*puVar10);
      return iVar6 == 4;
    }
  }
  return false;
}


