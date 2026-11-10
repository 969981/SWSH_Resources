/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee43f0; name: FUN_00ee43f0
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee43f0(long *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  int iVar10;
  byte *pbVar11;
  long *plVar12;
  
  FUN_00ee3ff0(*param_2);
  lVar7 = *param_1;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    puVar8 = PTR_DAT_02720060;
    pbVar11 = PTR_DAT_02720058;
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar7 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar11 = PTR_DAT_02720058,
           puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar11 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee4534;
          if (plVar12 == (long *)puVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_00ee4534;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0xdc) = 3;
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          lVar7 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          goto joined_r0x00ee452c;
        }
        break;
      }
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee4534:
  _DAT_0000012c = 3;
  lVar7 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee452c:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar8;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar7 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_02720058), pbVar11 = PTR_DAT_02720058,
           puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(PTR_DAT_02720058);
          pbVar11 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee4684;
          if (plVar12 == (long *)puVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_00ee4684;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          uVar6 = *param_3;
          uVar9 = param_3[2];
          *(undefined8 *)(lVar7 + 0x70) = param_3[1];
          *(undefined8 *)(lVar7 + 0x78) = uVar9;
          *(undefined8 *)(lVar7 + 0x68) = uVar6;
          uVar6 = param_3[3];
          uVar9 = param_3[4];
          uVar2 = param_3[6];
          *(undefined8 *)(lVar7 + 0x90) = param_3[5];
          *(undefined8 *)(lVar7 + 0x98) = uVar2;
          *(undefined8 *)(lVar7 + 0x80) = uVar6;
          *(undefined8 *)(lVar7 + 0x88) = uVar9;
          uVar6 = param_3[7];
          uVar9 = param_3[8];
          uVar2 = param_3[10];
          *(undefined8 *)(lVar7 + 0xb0) = param_3[9];
          *(undefined8 *)(lVar7 + 0xb8) = uVar2;
          *(undefined8 *)(lVar7 + 0xa0) = uVar6;
          *(undefined8 *)(lVar7 + 0xa8) = uVar9;
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          lVar7 = *param_1;
          pbVar11 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          goto joined_r0x00ee467c;
        }
        break;
      }
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee4684:
  _DAT_000000c8 = param_3[2];
  _DAT_000000b8 = *param_3;
  _DAT_000000c0 = param_3[1];
  _DAT_000000e0 = param_3[5];
  _DAT_000000e8 = param_3[6];
  _DAT_000000d0 = param_3[3];
  _DAT_000000d8 = param_3[4];
  _DAT_00000100 = param_3[9];
  _DAT_00000108 = param_3[10];
  _DAT_000000f0 = param_3[7];
  _DAT_000000f8 = param_3[8];
  lVar7 = *param_1;
  pbVar11 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee467c:
  PTR_DAT_02720058 = pbVar11;
  PTR_DAT_02720060 = puVar8;
  if ((lVar7 != 0) && (*(int *)(lVar7 + 0x54) != 0)) {
    piVar1 = (int *)(lVar7 + 0x54);
    iVar10 = *(int *)(lVar7 + 0x54);
    do {
      while( true ) {
        plVar12 = *(long **)(lVar7 + 0x58);
        if (((*pbVar11 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(pbVar11), puVar8 = PTR_DAT_02720060, iVar5 != 0)) {
          uVar6 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720060 = uVar6;
          __cxa_guard_release(pbVar11);
          puVar8 = PTR_DAT_02720060;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00ee47fc;
          if (plVar12 == (long *)puVar8) break;
          plVar12 = (long *)*plVar12;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar5;
        if (iVar5 == 0) goto LAB_00ee47fc;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar7 = *(long *)(lVar7 + 0x60);
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0xd8) = *param_4;
                    /* WARNING: Could not recover jumptable at 0x00ee47f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*(long *)(lVar7 + -8) + 0x18))();
          return;
        }
        break;
      }
      iVar10 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee47fc:
  _DAT_00000128 = *param_4;
  return;
}


