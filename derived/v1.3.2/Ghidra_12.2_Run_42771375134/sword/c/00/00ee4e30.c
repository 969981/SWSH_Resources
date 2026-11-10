/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee4e30; name: FUN_00ee4e30
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee4e30(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  
  FUN_00ee3ff0(*param_2);
  lVar8 = *param_1;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    puVar9 = PTR_DAT_02720060;
    pbVar11 = PTR_DAT_02720058;
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar11 = PTR_DAT_02720058,
           puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee4f6c;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee4f6c;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0xdc) = 5;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee4f64;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee4f6c:
  _DAT_0000012c = 5;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee4f64:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar11 = PTR_DAT_02720058,
           puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee50a4;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee50a4;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x38) = *param_3;
          uVar7 = param_3[1];
          uVar2 = param_3[2];
          uVar3 = param_3[4];
          *(undefined8 *)(lVar8 + 0x50) = param_3[3];
          *(undefined8 *)(lVar8 + 0x58) = uVar3;
          *(undefined8 *)(lVar8 + 0x40) = uVar7;
          *(undefined8 *)(lVar8 + 0x48) = uVar2;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee509c;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee50a4:
  _DAT_00000088 = *param_3;
  _DAT_000000a0 = param_3[3];
  _DAT_000000a8 = param_3[4];
  _DAT_00000090 = param_3[1];
  _DAT_00000098 = param_3[2];
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee509c:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar11 = PTR_DAT_02720058,
           puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee51f4;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee51f4;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0xe8) = *(undefined4 *)(param_3 + 4);
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee51ec;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee51f4:
  _DAT_00000138 = *(undefined4 *)(param_3 + 4);
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee51ec:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee5300;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee5300;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined2 *)(lVar8 + 0xec) = 0;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee52f8;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee5300:
  DAT_0000013c = 0;
  DAT_0000013d = 0;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee52f8:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee5414;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee5414;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0xee) = 1;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee540c;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee5414:
  DAT_0000013e = 1;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee540c:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee5520;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee5520;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0xf1) = 0;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee5518;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee5520:
  DAT_00000141 = 0;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee5518:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee5628;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee5628;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0xf2) = 0;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee5620;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee5628:
  DAT_00000142 = 0;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee5620:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee5734;
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ee5734;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 != 0) {
          *(undefined1 *)(lVar8 + 0xf4) = 1;
          (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
          lVar8 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar9 = PTR_DAT_02720060;
          goto joined_r0x00ee572c;
        }
        break;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ee5734:
  DAT_00000144 = 1;
  lVar8 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar9 = PTR_DAT_02720060;
joined_r0x00ee572c:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar9;
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0x54) != 0)) {
    piVar1 = (int *)(lVar8 + 0x54);
    iVar10 = *(int *)(lVar8 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar8 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(pbVar11), puVar9 = PTR_DAT_02720060, iVar6 != 0)) {
          uVar7 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar7;
          __cxa_guard_release(pbVar11);
          puVar9 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) {
            DAT_00000140 = 1;
            return;
          }
          if (plVar12 == (long *)puVar9) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) {
          DAT_00000140 = 1;
          return;
        }
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar8 = *(long *)(lVar8 + 0x60);
        if (lVar8 == 0) {
          DAT_00000140 = 1;
          return;
        }
        *(undefined1 *)(lVar8 + 0xf0) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ee5840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar8 + -8) + 0x18))();
        return;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
  DAT_00000140 = 1;
  return;
}


