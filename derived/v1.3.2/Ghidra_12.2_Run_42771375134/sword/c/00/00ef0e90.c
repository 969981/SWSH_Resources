/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ef0e90; name: FUN_00ef0e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ef0e90(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  int iVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long local_38;
  
  lVar12 = *(long *)(param_1 + 0x68);
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x10))();
  }
  FUN_00ef11a0(&local_38,lVar12);
  lVar13 = local_38;
  puVar5 = PTR_DAT_02720610;
  if (local_38 != 0) {
    if (*(int *)(local_38 + 0x54) == 0) {
LAB_00ef0fc0:
      lVar13 = *param_2;
      goto joined_r0x00ef0fd8;
    }
    piVar1 = (int *)(local_38 + 0x54);
    puVar9 = PTR_DAT_02720618;
    iVar10 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar13 + 0x58);
        if (((*puVar5 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_02720618, iVar6 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720618 = uVar8;
          __cxa_guard_release(puVar5);
          puVar9 = PTR_DAT_02720618;
        }
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_00ef0fc0;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar10) break;
        ClearExclusiveLocal();
        iVar10 = iVar6;
        if (iVar6 == 0) goto LAB_00ef0fd4;
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        lVar13 = *(long *)(lVar13 + 0x60);
        lVar2 = 0;
        if (lVar13 != 0) {
          lVar2 = lVar13 + -0x50;
        }
        lVar13 = *param_2;
        goto joined_r0x00ef1120;
      }
      iVar10 = iVar6;
    } while (iVar6 != 0);
  }
LAB_00ef0fd4:
  lVar13 = *param_2;
joined_r0x00ef0fd8:
  lVar2 = 0;
joined_r0x00ef1120:
  if (lVar13 != 0) {
    plVar11 = (long *)(lVar13 + 0x48);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  lVar7 = *(long *)(lVar2 + 0x88);
  *(long *)(lVar2 + 0x88) = lVar13;
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))();
  }
  if (lVar13 != 0) {
    (**(code **)(*(long *)(lVar13 + 0x48) + 0x18))((long *)(lVar13 + 0x48));
  }
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar13 = local_38;
  puVar5 = PTR_DAT_02720610;
  uVar8 = param_3;
  if ((local_38 != 0) && (uVar8 = param_3, *(int *)(local_38 + 0x54) != 0)) {
    piVar1 = (int *)(local_38 + 0x54);
    puVar9 = PTR_DAT_02720618;
    iVar10 = *(int *)(local_38 + 0x54);
    do {
      while( true ) {
        plVar11 = *(long **)(lVar13 + 0x58);
        if (((*puVar5 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar5), puVar9 = PTR_DAT_02720618, iVar6 != 0)) {
          uVar8 = FUN_0156a3b0();
          *(undefined8 *)PTR_DAT_02720618 = uVar8;
          __cxa_guard_release(puVar5);
          puVar9 = PTR_DAT_02720618;
        }
        while( true ) {
          uVar8 = param_3;
          if (plVar11 == (long *)0x0) goto joined_r0x00ef1144;
          if (plVar11 == (long *)puVar9) break;
          plVar11 = (long *)*plVar11;
        }
        iVar6 = *piVar1;
        if (iVar6 != iVar10) break;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x60);
          uVar8 = param_3;
          if (lVar13 != 0) {
            *(undefined8 *)(lVar13 + 0x40) = param_3;
            (**(code **)(*(long *)(lVar13 + -8) + 0x18))();
            uVar8 = _DAT_00000090;
          }
          goto joined_r0x00ef1144;
        }
        iVar10 = iVar6;
        uVar8 = param_3;
        if (iVar6 == 0) goto joined_r0x00ef1144;
      }
      ClearExclusiveLocal();
      iVar10 = iVar6;
      uVar8 = param_3;
    } while (iVar6 != 0);
  }
joined_r0x00ef1144:
  _DAT_00000090 = uVar8;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  if (lVar12 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x48) + 0x18))((long *)(lVar12 + 0x48));
  }
  return;
}


