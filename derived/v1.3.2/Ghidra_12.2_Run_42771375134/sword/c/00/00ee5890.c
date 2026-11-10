/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee5890; name: FUN_00ee5890
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee5890(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  byte *pbVar9;
  long *plVar10;
  
  FUN_00ee3ff0(*param_2);
  lVar6 = *param_1;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    puVar7 = PTR_DAT_02720060;
    pbVar9 = PTR_DAT_02720058;
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar9 = PTR_DAT_02720058,
           puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ee59c8;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00ee59c8;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          *(undefined4 *)(lVar6 + 0xdc) = 6;
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          lVar6 = *param_1;
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
          goto joined_r0x00ee59c0;
        }
        break;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ee59c8:
  _DAT_0000012c = 6;
  lVar6 = *param_1;
  pbVar9 = PTR_DAT_02720058;
  puVar7 = PTR_DAT_02720060;
joined_r0x00ee59c0:
  PTR_DAT_02720058 = pbVar9;
  PTR_DAT_02720060 = puVar7;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar9 = PTR_DAT_02720058,
           puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ee5aec;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00ee5aec;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          *(undefined2 *)(lVar6 + 0xec) = 0;
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          lVar6 = *param_1;
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
          goto joined_r0x00ee5ae4;
        }
        break;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ee5aec:
  DAT_0000013c = 0;
  DAT_0000013d = 0;
  lVar6 = *param_1;
  pbVar9 = PTR_DAT_02720058;
  puVar7 = PTR_DAT_02720060;
joined_r0x00ee5ae4:
  PTR_DAT_02720058 = pbVar9;
  PTR_DAT_02720060 = puVar7;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar9 = PTR_DAT_02720058,
           puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ee5c18;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00ee5c18;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0xee) = 1;
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          lVar6 = *param_1;
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
          goto joined_r0x00ee5c10;
        }
        break;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ee5c18:
  DAT_0000013e = 1;
  lVar6 = *param_1;
  pbVar9 = PTR_DAT_02720058;
  puVar7 = PTR_DAT_02720060;
joined_r0x00ee5c10:
  PTR_DAT_02720058 = pbVar9;
  PTR_DAT_02720060 = puVar7;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar9 = PTR_DAT_02720058,
           puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ee5d3c;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00ee5d3c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0xf1) = 0;
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          lVar6 = *param_1;
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
          goto joined_r0x00ee5d34;
        }
        break;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ee5d3c:
  DAT_00000141 = 0;
  lVar6 = *param_1;
  pbVar9 = PTR_DAT_02720058;
  puVar7 = PTR_DAT_02720060;
joined_r0x00ee5d34:
  PTR_DAT_02720058 = pbVar9;
  PTR_DAT_02720060 = puVar7;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar9 = PTR_DAT_02720058,
           puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_00ee5e5c;
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) goto LAB_00ee5e5c;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 != 0) {
          *(undefined1 *)(lVar6 + 0xf2) = 0;
          (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
          lVar6 = *param_1;
          pbVar9 = PTR_DAT_02720058;
          puVar7 = PTR_DAT_02720060;
          goto joined_r0x00ee5e54;
        }
        break;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
LAB_00ee5e5c:
  DAT_00000142 = 0;
  lVar6 = *param_1;
  pbVar9 = PTR_DAT_02720058;
  puVar7 = PTR_DAT_02720060;
joined_r0x00ee5e54:
  PTR_DAT_02720058 = pbVar9;
  PTR_DAT_02720060 = puVar7;
  if ((lVar6 != 0) && (*(int *)(lVar6 + 0x54) != 0)) {
    piVar1 = (int *)(lVar6 + 0x54);
    iVar8 = *(int *)(lVar6 + 0x54);
    do {
      while( true ) {
        plVar10 = *(long **)(lVar6 + 0x58);
        if (((*pbVar9 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(pbVar9), puVar7 = PTR_DAT_02720060, iVar4 != 0)) {
          uVar5 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar5;
          __cxa_guard_release(pbVar9);
          puVar7 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar10 == (long *)0x0) {
            DAT_00000144 = 1;
            return;
          }
          if (plVar10 == (long *)puVar7) break;
          plVar10 = (long *)*plVar10;
        }
        iVar4 = *piVar1;
        if (iVar4 == iVar8) break;
        ClearExclusiveLocal();
        iVar8 = iVar4;
        if (iVar4 == 0) {
          DAT_00000144 = 1;
          return;
        }
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar6 = *(long *)(lVar6 + 0x60);
        if (lVar6 == 0) {
          DAT_00000144 = 1;
          return;
        }
        *(undefined1 *)(lVar6 + 0xf4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ee5f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar6 + -8) + 0x18))();
        return;
      }
      iVar8 = iVar4;
    } while (iVar4 != 0);
  }
  DAT_00000144 = 1;
  return;
}


