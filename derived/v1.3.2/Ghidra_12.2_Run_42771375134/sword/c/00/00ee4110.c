/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ee4110; name: FUN_00ee4110
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ee4110(long *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  long lVar12;
  
  FUN_00ee3ff0(*param_2);
  lVar12 = *param_1;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x54) != 0)) {
    piVar1 = (int *)(lVar12 + 0x54);
    puVar8 = PTR_DAT_02720060;
    pbVar10 = PTR_DAT_02720058;
    iVar9 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar12 + 0x58);
        if ((*pbVar10 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(PTR_DAT_02720058);
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          if (iVar5 != 0) {
            uVar7 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar7;
            __cxa_guard_release(PTR_DAT_02720058);
            pbVar10 = PTR_DAT_02720058;
            puVar8 = PTR_DAT_02720060;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ee42c8;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ee42c8;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar12 = *(long *)(lVar12 + 0x60);
        if (lVar12 != 0) {
          *(undefined4 *)(lVar12 + 0xdc) = 2;
          (**(code **)(*(long *)(lVar12 + -8) + 0x18))();
          lVar12 = *param_1;
          pbVar10 = PTR_DAT_02720058;
          puVar8 = PTR_DAT_02720060;
          goto joined_r0x00ee4248;
        }
        break;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee42c8:
  _DAT_0000012c = 2;
  lVar12 = *param_1;
  pbVar10 = PTR_DAT_02720058;
  puVar8 = PTR_DAT_02720060;
joined_r0x00ee4248:
  PTR_DAT_02720058 = pbVar10;
  PTR_DAT_02720060 = puVar8;
  if (lVar12 != 0) {
    if (*(int *)(lVar12 + 0x54) == 0) {
LAB_00ee43c0:
      lVar12 = *param_3;
      goto joined_r0x00ee4254;
    }
    piVar1 = (int *)(lVar12 + 0x54);
    iVar9 = *(int *)(lVar12 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar12 + 0x58);
        if ((*pbVar10 & 1) == 0) {
          iVar5 = __cxa_guard_acquire(pbVar10);
          puVar8 = PTR_DAT_02720060;
          if (iVar5 != 0) {
            uVar7 = FUN_0156a3b0();
            *(undefined8 *)PTR_DAT_02720060 = uVar7;
            __cxa_guard_release(pbVar10);
            puVar8 = PTR_DAT_02720060;
          }
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ee43c0;
          if (plVar11 == (long *)puVar8) break;
          plVar11 = (long *)*plVar11;
        }
        iVar5 = *piVar1;
        if (iVar5 == iVar9) break;
        ClearExclusiveLocal();
        iVar9 = iVar5;
        if (iVar5 == 0) goto LAB_00ee4250;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar2 = 0;
        if (*(long *)(lVar12 + 0x60) != 0) {
          lVar2 = *(long *)(lVar12 + 0x60) + -0x50;
        }
        lVar12 = *param_3;
        goto joined_r0x00ee43e4;
      }
      iVar9 = iVar5;
    } while (iVar5 != 0);
  }
LAB_00ee4250:
  lVar12 = *param_3;
joined_r0x00ee4254:
  lVar2 = 0;
joined_r0x00ee43e4:
  if (lVar12 != 0) {
    plVar11 = (long *)(lVar12 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar6 = *(long *)(lVar2 + 0xb0);
  *(long *)(lVar2 + 0xb0) = lVar12;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
                    /* WARNING: Could not recover jumptable at 0x00ee42c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


