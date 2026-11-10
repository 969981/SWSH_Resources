/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee4820; name: FUN_00ee4820
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee4820(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  
  FUN_00ee3ff0(*param_2);
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02720060;
    pbVar10 = PTR_DAT_02720058;
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar10 = PTR_DAT_02720058,
           puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ee495c;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ee495c;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0xdc) = 4;
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          lVar7 = *param_1;
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          goto joined_r0x00ee4954;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee495c:
  _DAT_0000012c = 4;
  lVar7 = *param_1;
  pbVar10 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee4954:
  PTR_DAT_02720058 = pbVar10;
  PTR_DAT_02720060 = puVar8;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar10 = PTR_DAT_02720058,
           puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ee4a84;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ee4a84;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          uVar6 = param_3[1];
          *(undefined8 *)(lVar7 + 200) = *param_3;
          *(undefined8 *)(lVar7 + 0xd0) = uVar6;
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          bVar2 = *(byte *)((long)param_3 + 0xc);
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          goto joined_r0x00ee4a7c;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee4a84:
  _DAT_00000118 = *param_3;
  _DAT_00000120 = param_3[1];
  bVar2 = *(byte *)((long)param_3 + 0xc);
  pbVar10 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee4a7c:
  PTR_DAT_02720058 = pbVar10;
  PTR_DAT_02720060 = puVar8;
  if ((bVar2 >> 1 & 1) != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar7 + 0x58);
          if (((*pbVar10 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar10 = PTR_DAT_02720058,
             puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar6;
            __cxa_guard_release(PTR_DAT_02720058);
            pbVar10 = PTR_DAT_02720058;
            puVar8 = PTR_DAT_02720060;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00ee4bb8;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00ee4bb8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 0xf1) = 0;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            bVar2 = *(byte *)((long)param_3 + 0xc);
            pbVar10 = PTR_DAT_02720058;
            puVar8 = PTR_DAT_02720060;
            goto joined_r0x00ee4bb0;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ee4bb8:
    DAT_00000141 = 0;
  }
  bVar2 = *(byte *)((long)param_3 + 0xc);
  pbVar10 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee4bb0:
  if ((bVar2 >> 2 & 1) == 0) {
    bVar2 = *(byte *)((long)param_3 + 0xc);
  }
  else {
    lVar7 = *param_1;
    PTR_DAT_02720058 = pbVar10;
    PTR_DAT_02720060 = puVar8;
    if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
      piVar1 = (int *)(lVar7 + 0x54);
      iVar9 = *(int *)(lVar7 + 0x54);
      do {
        while( true ) {
          plVar11 = *(long **)(lVar7 + 0x58);
          if (((*pbVar10 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar10 = PTR_DAT_02720058,
             puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
            uVar6 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar6;
            __cxa_guard_release(PTR_DAT_02720058);
            pbVar10 = PTR_DAT_02720058;
            puVar8 = PTR_DAT_02720060;
          }
          while( true ) {
            if (plVar11 == (long *)0x0) goto LAB_00ee4cf8;
            if (plVar11 == (long *)puVar8) break;
            plVar11 = (long *)*plVar11;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar9) break;
          ClearExclusiveLocal();
          iVar9 = iVar5;
          if (iVar5 == 0) goto LAB_00ee4cf8;
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar7 = *(long *)(lVar7 + 0x60);
          if (lVar7 != 0) {
            *(undefined1 *)(lVar7 + 0xf2) = 0;
            (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
            bVar2 = *(byte *)((long)param_3 + 0xc);
            pbVar10 = PTR_DAT_02720058;
            puVar8 = PTR_DAT_02720060;
            goto joined_r0x00ee4cf0;
          }
          break;
        }
        iVar9 = iVar5;
      } while (iVar5 != 0);
    }
LAB_00ee4cf8:
    DAT_00000142 = 0;
    bVar2 = *(byte *)((long)param_3 + 0xc);
    pbVar10 = PTR_DAT_02720058;
    puVar8 = PTR_DAT_02720060;
  }
joined_r0x00ee4cf0:
  if ((bVar2 >> 3 & 1) == 0) {
    PTR_DAT_02720058 = pbVar10;
    PTR_DAT_02720060 = puVar8;
    return;
  }
  lVar7 = *param_1;
  PTR_DAT_02720058 = pbVar10;
  PTR_DAT_02720060 = puVar8;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar9 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar7 + 0x58);
        if (((*pbVar10 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(pbVar10), puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(pbVar10);
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) {
            DAT_0000013f = 1;
            return;
          }
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) {
          DAT_0000013f = 1;
          return;
        }
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 == 0) {
          DAT_0000013f = 1;
          return;
        }
        *(undefined1 *)(lVar7 + 0xef) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ee4e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
        return;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
  DAT_0000013f = 1;
  return;
}


