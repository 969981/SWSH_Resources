/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee3af0; name: FUN_00ee3af0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee3af0(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  int iVar11;
  byte *pbVar12;
  long *plVar13;
  
  FUN_00ee3ff0(*param_2);
  lVar9 = *param_1;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    puVar10 = PTR_DAT_02720060;
    pbVar12 = PTR_DAT_02720058;
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar9 + 0x58);
        if (((*pbVar12 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar12 = PTR_DAT_02720058,
           puVar10 = PTR_DAT_02720060, iVar7 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar8;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00ee3c2c;
          if (plVar13 == (long *)puVar10) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar7;
        if (iVar7 == 0) goto LAB_00ee3c2c;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0xdc) = 1;
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          lVar9 = *param_1;
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
          goto joined_r0x00ee3c24;
        }
        break;
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ee3c2c:
  _DAT_0000012c = 1;
  lVar9 = *param_1;
  pbVar12 = PTR_DAT_02720058;
  puVar10 = PTR_DAT_02720060;
joined_r0x00ee3c24:
  PTR_DAT_02720058 = pbVar12;
  PTR_DAT_02720060 = puVar10;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar9 + 0x58);
        if (((*pbVar12 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar12 = PTR_DAT_02720058,
           puVar10 = PTR_DAT_02720060, iVar7 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar8;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00ee3d64;
          if (plVar13 == (long *)puVar10) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar7;
        if (iVar7 == 0) goto LAB_00ee3d64;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x38) = *param_3;
          uVar8 = param_3[1];
          uVar2 = param_3[2];
          uVar3 = param_3[4];
          *(undefined8 *)(lVar9 + 0x50) = param_3[3];
          *(undefined8 *)(lVar9 + 0x58) = uVar3;
          *(undefined8 *)(lVar9 + 0x40) = uVar8;
          *(undefined8 *)(lVar9 + 0x48) = uVar2;
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          lVar9 = *param_1;
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
          goto joined_r0x00ee3d5c;
        }
        break;
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ee3d64:
  _DAT_00000088 = *param_3;
  _DAT_000000a0 = param_3[3];
  _DAT_000000a8 = param_3[4];
  _DAT_00000090 = param_3[1];
  _DAT_00000098 = param_3[2];
  lVar9 = *param_1;
  pbVar12 = PTR_DAT_02720058;
  puVar10 = PTR_DAT_02720060;
joined_r0x00ee3d5c:
  PTR_DAT_02720058 = pbVar12;
  PTR_DAT_02720060 = puVar10;
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
    piVar1 = (int *)(lVar9 + 0x54);
    iVar11 = *(int *)(lVar9 + 0x54);
    do {
      while( true ) {
        plVar13 = *(long **)(lVar9 + 0x58);
        if (((*pbVar12 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar12 = PTR_DAT_02720058,
           puVar10 = PTR_DAT_02720060, iVar7 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar8;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00ee3eb4;
          if (plVar13 == (long *)puVar10) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar11) break;
        ClearExclusiveLocal();
        iVar11 = iVar7;
        if (iVar7 == 0) goto LAB_00ee3eb4;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar11 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        lVar9 = *(long *)(lVar9 + 0x60);
        if (lVar9 != 0) {
          *(undefined4 *)(lVar9 + 0xe8) = *(undefined4 *)(param_3 + 4);
          (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
          bVar4 = *(byte *)(param_3 + 2);
          pbVar12 = PTR_DAT_02720058;
          puVar10 = PTR_DAT_02720060;
          goto joined_r0x00ee3eac;
        }
        break;
      }
      iVar11 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ee3eb4:
  _DAT_00000138 = *(undefined4 *)(param_3 + 4);
  bVar4 = *(byte *)(param_3 + 2);
  pbVar12 = PTR_DAT_02720058;
  puVar10 = PTR_DAT_02720060;
joined_r0x00ee3eac:
  PTR_DAT_02720058 = pbVar12;
  PTR_DAT_02720060 = puVar10;
  if ((bVar4 >> 2 & 1) != 0) {
    lVar9 = *param_1;
    if ((lVar9 != 0) && (*(int *)(lVar9 + 0x54) != 0)) {
      piVar1 = (int *)(lVar9 + 0x54);
      iVar11 = *(int *)(lVar9 + 0x54);
      do {
        while( true ) {
          plVar13 = *(long **)(lVar9 + 0x58);
          if (((*pbVar12 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(pbVar12), puVar10 = PTR_DAT_02720060, iVar7 != 0)) {
            uVar8 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar8;
            __cxa_guard_release(pbVar12);
            puVar10 = PTR_DAT_02720060;
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_00ee3fcc;
            if (plVar13 == (long *)puVar10) break;
            plVar13 = (long *)*plVar13;
          }
          iVar7 = *piVar1;
          if (iVar7 == iVar11) break;
          ClearExclusiveLocal();
          iVar11 = iVar7;
          if (iVar7 == 0) goto LAB_00ee3fcc;
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar9 = *(long *)(lVar9 + 0x60);
          if (lVar9 != 0) {
            *(undefined1 *)(lVar9 + 0xef) = 1;
                    /* WARNING: Could not recover jumptable at 0x00ee3fc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(long *)(lVar9 + -8) + 0x18))();
            return;
          }
          break;
        }
        iVar11 = iVar7;
      } while (iVar7 != 0);
    }
LAB_00ee3fcc:
    DAT_0000013f = 1;
  }
  return;
}


